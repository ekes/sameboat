<?php
/**
 * @file
 * inc_location.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function inc_location_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function inc_location_node_info() {
  $items = array(
    'location' => array(
      'name' => t('Event location'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Popular name'),
      'help' => '',
    ),
  );
  return $items;
}
