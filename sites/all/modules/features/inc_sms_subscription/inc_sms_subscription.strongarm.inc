<?php
/**
 * @file
 * inc_sms_subscription.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function inc_sms_subscription_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_sms_subscriber';
  $strongarm->value = 0;
  $export['comment_anonymous_sms_subscriber'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_sms_subscriber';
  $strongarm->value = 1;
  $export['comment_default_mode_sms_subscriber'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_sms_subscriber';
  $strongarm->value = '50';
  $export['comment_default_per_page_sms_subscriber'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_sms_subscriber';
  $strongarm->value = 1;
  $export['comment_form_location_sms_subscriber'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_sms_subscriber';
  $strongarm->value = '1';
  $export['comment_preview_sms_subscriber'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_sms_subscriber';
  $strongarm->value = '1';
  $export['comment_sms_subscriber'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_sms_subscriber';
  $strongarm->value = 1;
  $export['comment_subject_field_sms_subscriber'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_sms_subscriber';
  $strongarm->value = array(
    'view_own' => array(
      0 => 2,
      1 => 4,
    ),
    'view' => array(
      0 => 3,
      1 => 5,
      2 => 4,
    ),
  );
  $export['content_access_sms_subscriber'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__sms_subscriber';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__sms_subscriber'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_sms_subscriber';
  $strongarm->value = array();
  $export['menu_options_sms_subscriber'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_sms_subscriber';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_sms_subscriber'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_sms_subscriber';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_sms_subscriber'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_sms_subscriber';
  $strongarm->value = '0';
  $export['node_preview_sms_subscriber'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_sms_subscriber';
  $strongarm->value = 0;
  $export['node_submitted_sms_subscriber'] = $strongarm;

  return $export;
}
