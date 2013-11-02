<?php
/**
 * @file
 * inc_sms_subscription.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function inc_sms_subscription_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_mobile_number'
  $field_bases['field_mobile_number'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_mobile_number',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'voipnumberfield',
    'settings' => array(
      'voipnumberfield_allow_sip' => 1,
      'voipnumberfield_allowed_countries' => array(
        'United States' => 'United States',
      ),
      'voipnumberfield_choice' => 3,
      'voipnumberfield_default' => 1,
      'voipnumberfield_max_length' => 15,
      'voipnumberfield_unique' => 1,
    ),
    'translatable' => 0,
    'type' => 'voipnumberfield',
  );

  // Exported field_base: 'field_topic_subscriptions'
  $field_bases['field_topic_subscriptions'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_topic_subscriptions',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'vocabulary_1',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
