<?php
/**
 * @file
 * inc_location.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function inc_location_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_address_city'
  $field_bases['field_address_city'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_address_city',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'allowed_values' => '',
      'allowed_values_php' => '',
      'max_length' => 255,
      'text_processing' => 0,
    ),
    'translatable' => 0,
    'type' => 'text',
    'type_name' => 'location',
  );

  // Exported field_base: 'field_address_postcode'
  $field_bases['field_address_postcode'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_address_postcode',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'allowed_values' => '',
      'allowed_values_php' => '',
      'max_length' => 255,
      'text_processing' => 0,
    ),
    'translatable' => 0,
    'type' => 'text',
    'type_name' => 'location',
  );

  // Exported field_base: 'field_address_street'
  $field_bases['field_address_street'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_address_street',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'allowed_values' => '',
      'allowed_values_php' => '',
      'max_length' => 255,
      'text_processing' => 0,
    ),
    'translatable' => 0,
    'type' => 'text',
    'type_name' => 'location',
  );

  // Exported field_base: 'field_point'
  $field_bases['field_point'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_point',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'geofield',
    'settings' => array(
      'openlayers_cck_feature_types' => array(
        'path' => 0,
        'point' => 'point',
        'polygon' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'geofield',
    'type_name' => 'location',
  );

  return $field_bases;
}
