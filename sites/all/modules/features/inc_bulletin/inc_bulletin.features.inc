<?php
/**
 * @file
 * inc_bulletin.features.inc
 */

/**
 * Implements hook_views_api().
 */
function inc_bulletin_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function inc_bulletin_node_info() {
  $items = array(
    'bulletin' => array(
      'name' => t('Bulletin'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
