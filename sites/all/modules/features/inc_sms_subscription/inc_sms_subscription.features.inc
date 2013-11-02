<?php
/**
 * @file
 * inc_sms_subscription.features.inc
 */

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
