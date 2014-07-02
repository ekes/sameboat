<?php
/**
 * @file
 * inc_sms_blast.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function inc_sms_blast_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function inc_sms_blast_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function inc_sms_blast_eck_bundle_info() {
  $items = array(
    'inc_blast_sms_topic_blast' => array(
      'machine_name' => 'inc_blast_sms_topic_blast',
      'entity_type' => 'inc_blast_sms',
      'name' => 'topic_blast',
      'label' => 'Topic blast',
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function inc_sms_blast_eck_entity_type_info() {
  $items = array(
    'inc_blast_sms' => array(
      'name' => 'inc_blast_sms',
      'label' => 'Blast SMS Message',
      'properties' => array(
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
        ),
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
        ),
      ),
    ),
  );
  return $items;
}
