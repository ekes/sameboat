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

  $script->addSay('Welcome to the Incourage events hotline.');

  $script->addLabel('begin');
  $script->addSay('Main menu.');

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
  $prompt = '';
  foreach ($terms as $key => $description) {
    $prompt .= "For $description , Press $key. ";
  }
  $options['*'] = 'extension_menu';
  $prompt .= 'To go to a specific extension number, dial the star key.';

  $script->addRunIvrMenu($prompt, $options, t('Invalid input. Please try again.'), NULL, 3);
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
  $script->addGosub('incourage_extensions');
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
      "To hear more details press 1. To go to the next event press 2. To return to the previous menu press #. ",
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
      'incourage_play_extension',
      array(
          'eid' => $row->field_field_extension[0]['raw']['value'],
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

  if ($caller == 'view_upcoming') {
    $return_string = 'To go to the next event';
  }
  else {
    $return_string = 'To return to the previous menu';
  }

  $script->addLabel('options');
  $script->addBeep();
  $script->addSay('Event menu: ');
  $invalid_input_msg = t('Invalid input. Please try again.');
  if (empty($phone)) {
    $script->addRunIvrMenu(
      t('To hear details again, dial 1. To receive an SMS of details, dial 2. ' . $return_string . ' press the # key.'),
      array(1 => 'introduction', 2 => 'sms', '#' => 'return'),
      $invalid_input_msg, NULL, 3
    );
  }
  else {
    $script->addRunIvrMenu(
      t('To hear details again, dial 1. To receive an SMS of details, dial 2. To contact the organizers dial 3. ' . $return_string . ' press the # key.'),
      array(1 => 'introduction', 2 => 'sms', 3 => 'contact', '#' => 'return'),
      $invalid_input_msg, NULL, 3
    );
  }
  $script->addGoto('%ivr_option_selected');
  $script->addGoto('return');

  $script->addLabel('sms');
  $msg = incourage_events_format_sms($node);
  $script->addSendText($msg);
  $script->addSay(t('Message sent.'));
  $script->addGoto('options');

  $script->addLabel('contact');
  $script->addSay(t('Transfering your call.'));
  $script->addDial($phone);
  $script->addGoto('options');

  $script->addLabel('no_input_received');
  $script->addSay('No input recognised. Returning to previous menu');
  $script->addLabel('return');
  return $script;
}
