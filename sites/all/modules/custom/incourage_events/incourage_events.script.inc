<?php

/**
 * @file
 * Voipscripts for events.
 */

/**
 * Offer to read upcoming events, or go to extensions menu.
 */
function _incourage_events_upcoming_script() {
  $script = new VoipScript('incourage_upcoming');

  $script->addSay(v('Welcome to the What\'s Up South Wood County system.'));

  $script->addLabel('begin');
  $script->addSay(v('Main menu.'));

  // Is there a way this could be integrated with the terms
  // themselves?
  $terms = array(
  // key => description
    1 => 'employment events',
    2 => 'food events',
    3 => 'fun and family events',
    4 => 'health events',
    5 => 'events not included in any of the categories above',
  );
  $topics = $options = array(
  // key => tid
    1 => 1,
    2 => 2,
    3 => 5,
    4 => 3,
    5 => 4,
  );
  $prompt = array();
  $options['*'] = 'extension_menu';
  $prompt[] = v('To go to a specific extension number, dial the star key.');
  foreach ($terms as $key => $description) {
    $prompt[] = v("For $description , Press $key. ");
  }

  $script->addRunIvrMenu($prompt, $options, v('Invalid input. Please try again.'), NULL, 3);
  // I would like to do an array_key_exists here, how to pass $options to
  // addGotoIf?
  foreach ($topics as $key => $tid) {
    $script->addSet('tid', $tid);
    $script->addGotoIf('upcoming_topic', "^%ivr_option_selected == $key");
  }
  $script->addSet('tid', '');
  $script->addGoto('%ivr_option_selected');
  $script->addGoto('return');

  $script->addLabel('upcoming_topic');
  $script->addSay('Upcoming events');
  $script->addGosub(
    'incourage_event_read_view',
    array(
      'view_name' => 'upcoming',
      'display_id' => 'default',
      'filters' => json_encode(array('tid' => array('%tid')))
    )
  );
  $script->addGoto('begin');

  $script->addLabel('extension_menu');
  $script->addGosub('voipextension_basic_menu_script');
  $script->addGoto('begin');

  $script->addLabel('invalid_input');
  $script->addLabel('no_input_received');
  $script->addLabel('return');
  $script->addReturn();
  return $script;
}

/**
 * Read out upcoming events view.
 */
function _incourage_events_read_view_script($view_result) {
  $script = new VoipScript('incourage_events_read_view');
  foreach($view_result as $count => $row) {
    $script->addLabel('row_' . $count . 'begin' );
    $script->addSay( $row->node_title );
    $script->addSay( 'on.' );
    $script->addSay( strip_tags($row->field_field_date[0]['rendered']['#markup']) );
    $script->addLabel( 'row_' . $count . '_menu' );
    $script->addRunIvrMenu(
      v("To hear more details press 1. To go to the next event press 2. To return to the previous menu press #. "),
      array(
        't' =>  'no_input_received_' . $count,
        'i' => 'invalid_option_' . $count,
        '1' => 'row_' . $count . '_key_1',
        '2' => 'row_' . $count . '_key_2',
        '#' => 'row_' . $count . '_key_#',
      ),
      "Invalid option selected.",
      "Invalid option selected.",
      "3",
      "5"
    );
    $script->addGoto( "%ivr_option_selected" );
    $script->addLabel( "no_input_received_" . $count );
    $script->addSay( "Invalid option selected." );
    $script->addGoto( 'row_' . $count . '_end' );
    $script->addLabel( 'invalid_option_' . $count );
    $script->addSay( 'Invalid option selected.' );
    $script->addGoto( 'row_' . $count . '_end' );
    $script->addLabel( 'row_' . $count . '_key_1' );
    $script->addGosub(
      'voipextension_play_extension_script',
      array(
        'field_name' => 'field_extension',
        'extension_number' => $row->field_field_extension[0]['raw']['value'],
      )
    );
    $script->addLabel('row_' . $count . '_key_2');
    $script->addGoto( 'row_' . $count . '_end' );
    $script->addLabel( 'row_' . $count . '_key_#' );
    $script->addReturn();
    $script->addLabel( 'row_' . $count . '_end' );
  }

  return $script;
}

/**
 * VoIP script callback: Read event node.
 */
function _incourage_events_event_script($node, $caller = '') {
  $script = new VoipScript('incourage_event');

  $script->addLabel('introduction');

  if (!empty($node->field_location_reference['und'][0]['nid'])) {
    $location_node = node_load($node->field_organiser_reference['und'][0]['nid']);
    $location = $location_node->title . ', ' . $location_node->field_address_street['und'][0]['value'] . ', ' . $location_node->field_address_city['und'][0]['value'];
    $phone = $location_node->field_phone_text['und'][0]['value'];
  }
  else {
    $location = $node->field_location['und'][0]['value'];
  }

  if ($title = $node->title) {
    $script->addSay($title) . '. ';
  }

  $body .= strip_tags($node->body['und'][0]['value']) . '. ';
  // To get the next date re-use the logic in date_token_repeat.
  $date_text = 'This event happens on [field_date-next-type:monthdaytime]';
  $body .= token_replace($date_text, array('global' => NULL, 'node' => $node));
  $body .= 'at ' . strip_tags($location) . '. ';
  $script->addSay($body);

  $script->setVar('subscriber', "^subscriber_enity_sms_subscriber_number_node_subscribed(%caller_number, {$node->type}, {$node->nid})");
  $script->addGotoIf('subscriber', "^%subscriber !== FALSE");
  $script->addLabel('not_subscriber');
  $script->setVar('subscribe_option', 'To subscribe to SMS announcements about this ' . $node->type . ' ');
  $script->addGoto('next_options');

  $script->addLabel('subscriber');
  $script->setVar('subscribe_option', 'You are subscribed to announcements about this ' . $node->type . '. To unsubscribe ');

  $script->addLabel('next_options');
  if ($caller == 'view_upcoming') {
    $return_string = 'To go to the next event';
  }
  else {
    $return_string = 'To return to the previous menu';
  }

  $script->addLabel('options');
  $script->addBeep();
  $script->addSay(v('Event menu: '));
  $invalid_input_msg = t('Invalid input. Please try again.');
  if (empty($phone)) {
    $script->addRunIvrMenu(
      v('To hear details again, dial 1. To receive an SMS of details, dial 2. %subscribe_option, dial 3. ' . $return_string . ' press the # key.'),
      array(1 => 'introduction', 2 => 'sms', 3 => 'subscribe', '#' => 'return'),
      $invalid_input_msg, NULL, 3
    );
  }
  else {
    $script->addRunIvrMenu(
      v('To hear details again, dial 1. To receive an SMS of details, dial 2. To contact the organizers dial 3. %subscribe_option, dial 4. ' . $return_string . ' press the # key.'),
      array(1 => 'introduction', 2 => 'sms', 3 => 'contact', 4 => 'subscribe', '#' => 'return'),
      $invalid_input_msg, NULL, 3
    );
  }
  $script->addGoto('%ivr_option_selected');
  $script->addGoto('return');

  $script->addLabel('sms');
  $msg = incourage_events_format_sms($node);
  $script->addSendText($msg);
  $script->addSay(v('Message sent.'));
  $script->addGoto('options');

  $script->addLabel('contact');
  $script->addSay(t('Transfering your call.'));
  $script->addDial($phone);
  $script->addGoto('options');

  $script->addLabel('subscribe');
  $script->setVar('subscribe_return', "^_incourage_events_toggle_sms_subscription(%caller_number, {$node->type}, {$node->nid})");
  $script->addSay('%subscribe_return');
  $script->addGoto('options');

  $script->addLabel('no_input_received');
  $script->addSay('No input recognised. Returning to previous menu');
  $script->addLabel('return');
  return $script;
}

/**
 * Helper script to un/subscribe sms to node.
 */
function _incourage_events_toggle_sms_subscription($subscriber_number, $bundle, $nid) {
  if (subscriber_entity_sms_subscriber_number_node_toggle($subscriber_number, $bundle, $nid)) {
    return 'You are now subscribed.';
  }
  else {
    return 'You are now not subscribed.';
  }
}

/**
 * Basic default script to read voipnode contents
 */
function _incourage_events_location_script($node, $caller) {
  $script = new VoipScript('incourage_location');

  $script->addLabel('introduction');

  $script->addSay($node->title);

  $script->addLabel('menu');
  $prompt = array();
  $prompt[] = v('For events at this location, dial 1. ');
  $options = array(1 => 'events');
  if (! empty($node->field_phone_text[0]['value'])) {
    $phone = $node->field_phone_text[0]['value'];
    $prompt[] = v('To be redirected to the organization phone, dial the star key. ');
    $options['*'] = 'redirect';
  }
  $prompt[] = v('To go back to the main menu, press the pound key. ');
  $options['#'] = 'return';

  $script->addRunIvrMenu($prompt, $options, t('Invalid input. Please try again.'), NULL, 3);
  $script->addGoto('%ivr_option_selected');
  $script->addGoto('return');

  $script->addLabel('events');
  $script->addGosub(
    'incourage_event_read_view',
    array(
      'view_name' => 'upcoming',
      'display_id' => 'default',
      'filters' => json_encode(array('field_location_reference_nid' => $node->nid)),
    )
  );
  $script->addGoto('menu');

  $script->addLabel('redirect');
  $script->addSay(t('Transfering your call.'));
  $script->addDial($phone);
  $script->addGoto('menu');

  $script->addLabel('return');
  return $script;
}

/**
 * SMS handling.
 */

/**
 * Voipscript callback: for sms msgs.
 */
function _incourage_events_sms_script() {
  $script = new VoipScript('voipscript_events_sms');
  $script->addLog('sms: %inbound_text_contents');
  $script->addGotoIf('update_subscription', '^stripos(%inbound_text_contents, "YES")');
  $script->addSet('request_result', '^incourage_events_sms_parse(%inbound_text_contents, %caller_number)');
  $script->addLog('sms: attempted number parsing');
  $script->addSendText("%request_result");
  $script->addGoto('end');

  $script->addLabel('update_subscription');
  $script->addGosub('subscriber_entity_sms_receive_confirmation', array());
  $script->addLog('sms: attempted subscription update');
  $script->addGoto('end');

  $script->addLabel('end');
  $script->addHangup('reset');
  return $script;
}

/**
 * Helper function, parse extension from sms, return msg.
 */
function incourage_events_sms_parse($text, $number) {
  $msg = '';
  // super loose regex will just match the first number (multiple digits too)
  // in the string.
  if (preg_match('/[0-9]+/', $text, $matches)) {
    $eid = $matches[0];
    // if we have an extension
    list($entity_type, $entity) = voipextension_get_entity('field_extension', $eid);
    if ($entity_type = 'node' && $entity->type == 'event') {
      $msg = incourage_events_format_sms($entity);
    }
    elseif ($entity_type == 'node' && $entity->type == 'location') {
      $msg = incourage_events_location_format_sms($entity);
    }
    // if no message we got an unknown number for extension
    if ($msg == '') {
      $msg = 'Incourage Events hotline. Invalid extension provided.';
    }
  }
  else {
    $msg = 'To receive details about an event or location send an SMS with the extension number in it.';
  }

  return $msg;
}

