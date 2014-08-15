<?php
/**
 * @file
 * inc_event.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function inc_event_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-event-body'
  $field_instances['node-event-body'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 4,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Event description',
    'required' => 1,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-event-date_repeat_entity_clone_state'
  $field_instances['node-event-date_repeat_entity_clone_state'] = array(
    'bundle' => 'event',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'date_repeat_entity_clone_state',
    'label' => 'Clone state (do not change)',
    'required' => FALSE,
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 101,
    ),
  );

  // Exported field_instance: 'node-event-date_repeat_entity_master_uuid'
  $field_instances['node-event-date_repeat_entity_master_uuid'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'date_repeat_entity_master_uuid',
    'label' => 'Master UUID (do not change)',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 100,
    ),
  );

  // Exported field_instance: 'node-event-field_cost'
  $field_instances['node-event-field_cost'] = array(
    'bundle' => 'event',
    'default_value' => array(
      0 => array(
        'value' => 'Free',
        '_error_element' => 'default_value_widget][field_cost][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => 'Currency and amount; or \'Free\'.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cost',
    'label' => 'Cost',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 7,
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 30,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-event-field_date'
  $field_instances['node-event-field_date'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'month_day_time',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'hide',
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'month_day_time',
          'fromto' => 'both',
          'multiple_from' => 'now',
          'multiple_number' => 1,
          'multiple_to' => '',
          'show_repeat_rule' => 'hide',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'medium',
          'fromto' => 'value',
          'multiple_from' => '',
          'multiple_number' => 1,
          'multiple_to' => '',
          'show_repeat_rule' => 'hide',
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'hide',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'sms',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'hide',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date',
    'label' => 'Event date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => 0,
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 1,
        'input_format' => 'm/d/Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 1,
        'text_parts' => array(),
        'year_range' => '-1:+3',
      ),
      'type' => 'date_select',
      'weight' => 5,
    ),
    'widget_type' => 'date_popup_repeat',
  );

  // Exported field_instance: 'node-event-field_extension'
  $field_instances['node-event-field_extension'] = array(
    'bundle' => 'event',
    'default_value' => array(
      0 => array(
        'value' => '',
        'enabled' => 1,
        'script' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'voipextension',
        'settings' => array(
          'prefix_suffix' => TRUE,
          'status_display' => 0,
        ),
        'type' => 'voipextension_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_extension',
    'label' => 'Extension',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'script' => '',
      'script_selectable' => 0,
      'suffix' => '',
      'toggle_enabled' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'voipextension',
      'settings' => array(),
      'type' => 'voipextension',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-event-field_location'
  $field_instances['node-event-field_location'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This field overrides both <em>Event location</em> and <em>Organizer</em> fields. It might be used whenever the desired venue or organizer is not listed above. Examples: Playground by the church, Tom\'s house, 123 Orchard St, etc.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location',
    'label' => 'Location text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 1,
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-event-field_location_reference'
  $field_instances['node-event-field_location_reference'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The location where the event is going to be held. If not listed, <a href="/node/add/location">please add the new location first by clicking here</a>, and then return to this page.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 2,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'token' => array(
        'label' => 'inline',
        'module' => 'node_reference',
        'settings' => array(
          'node_reference_view_mode' => 'full',
        ),
        'type' => 'node_reference_node',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location_reference',
    'label' => 'Event location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'weight' => -1,
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
    'widget_type' => 'nodereference_select',
  );

  // Exported field_instance: 'node-event-field_organiser_reference'
  $field_instances['node-event-field_organiser_reference'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This field is only required when the organization responsible for the event is different from the one listed in the <em>Event location</em> field.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organiser_reference',
    'label' => 'Event organizer',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'weight' => 0,
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
    'widget_type' => 'nodereference_select',
  );

  // Exported field_instance: 'node-event-field_sms_text'
  $field_instances['node-event-field_sms_text'] = array(
    'bundle' => 'event',
    'default_value' => array(
      0 => array(
        'value' => '',
        '_error_element' => 'default_value_widget][field_sms_text][0][value',
      ),
    ),
    'deleted' => 0,
    'description' => 'Optional alternative text to send in SMS notifications for the event. If not present, the system will generate the notification automatically.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sms_text',
    'label' => 'SMS notification text',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => 8,
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'default_value_php' => NULL,
        'rows' => 5,
        'size' => 140,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
    'widget_type' => 'text_textfield',
  );

  // Exported field_instance: 'node-event-taxonomy_vocabulary_1'
  $field_instances['node-event-taxonomy_vocabulary_1'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'taxonomy_vocabulary_1',
    'label' => 'Event category',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-event_feed-taxonomy_vocabulary_1'
  $field_instances['node-event_feed-taxonomy_vocabulary_1'] = array(
    'bundle' => 'event_feed',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'taxonomy_vocabulary_1',
    'label' => 'Topic',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Clone state (do not change)');
  t('Cost');
  t('Currency and amount; or \'Free\'.');
  t('Event category');
  t('Event date');
  t('Event description');
  t('Event location');
  t('Event organizer');
  t('Extension');
  t('Location text');
  t('Master UUID (do not change)');
  t('Optional alternative text to send in SMS notifications for the event. If not present, the system will generate the notification automatically.');
  t('SMS notification text');
  t('The location where the event is going to be held. If not listed, <a href="/node/add/location">please add the new location first by clicking here</a>, and then return to this page.');
  t('This field is only required when the organization responsible for the event is different from the one listed in the <em>Event location</em> field.');
  t('This field overrides both <em>Event location</em> and <em>Organizer</em> fields. It might be used whenever the desired venue or organizer is not listed above. Examples: Playground by the church, Tom\'s house, 123 Orchard St, etc.');
  t('Topic');

  return $field_instances;
}
