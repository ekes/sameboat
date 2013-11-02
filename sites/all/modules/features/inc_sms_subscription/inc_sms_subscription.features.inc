<?php
/**
 * @file
 * inc_sms_subscription.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function inc_sms_subscription_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function inc_sms_subscription_node_info() {
  $items = array(
    'sms_subscriber' => array(
      'name' => t('SMS Subscriber'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Number'),
      'help' => '',
    ),
  );
  return $items;
}
