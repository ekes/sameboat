<?php
/**
 * @file
 * inc_sms_subscription.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function inc_sms_subscription_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-sms_subscriber-field_mobile_number'
  $field_instances['node-sms_subscriber-field_mobile_number'] = array(
    'bundle' => 'sms_subscriber',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'voipnumberfield',
        'settings' => array(),
        'type' => 'default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mobile_number',
    'label' => 'Mobile Number',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'voipnumberfield',
      'settings' => array(),
      'type' => 'voipphonenumber_widget',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-sms_subscriber-field_topic_subscriptions'
  $field_instances['node-sms_subscriber-field_topic_subscriptions'] = array(
    'bundle' => 'sms_subscriber',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_topic_subscriptions',
    'label' => 'Topic Subscriptions',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Mobile Number');
  t('Topic Subscriptions');

  return $field_instances;
}
