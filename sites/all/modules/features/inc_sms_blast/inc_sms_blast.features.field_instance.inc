<?php
/**
 * @file
 * inc_sms_blast.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function inc_sms_blast_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'inc_blast_sms-topic_blast-field_sms_message'
  $field_instances['inc_blast_sms-topic_blast-field_sms_message'] = array(
    'bundle' => 'topic_blast',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'inc_blast_sms',
    'field_name' => 'field_sms_message',
    'label' => 'SMS message',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'inc_blast_sms-topic_blast-field_topics'
  $field_instances['inc_blast_sms-topic_blast-field_topics'] = array(
    'bundle' => 'topic_blast',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The topics that recipients are subscribed to',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'inc_blast_sms',
    'field_name' => 'field_topics',
    'label' => 'Topic recipients',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('SMS message');
  t('The topics that recipients are subscribed to');
  t('Topic recipients');

  return $field_instances;
}
