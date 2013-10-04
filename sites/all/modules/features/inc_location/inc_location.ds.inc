<?php
/**
 * @file
 * inc_location.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function inc_location_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|location|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'location';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|location|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function inc_location_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|location|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'location';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-two_33_66';
  $ds_layout->settings = array(
    'regions' => array(
      'two_33_66_top' => array(
        0 => 'field_official_name',
      ),
      'two_33_66_first' => array(
        1 => 'field_address_street',
        2 => 'field_address_city',
        3 => 'field_address_postcode',
        4 => 'field_phone_text',
        5 => 'body',
      ),
      'two_33_66_second' => array(
        6 => 'field_point',
      ),
    ),
    'fields' => array(
      'field_official_name' => 'two_33_66_top',
      'field_address_street' => 'two_33_66_first',
      'field_address_city' => 'two_33_66_first',
      'field_address_postcode' => 'two_33_66_first',
      'field_phone_text' => 'two_33_66_first',
      'body' => 'two_33_66_first',
      'field_point' => 'two_33_66_second',
    ),
    'classes' => array(),
    'wrappers' => array(
      'two_33_66_top' => 'div',
      'two_33_66_first' => 'div',
      'two_33_66_second' => 'div',
      'two_33_66_bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|location|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|location|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'location';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'panels-two_33_66';
  $ds_layout->settings = array(
    'regions' => array(
      'two_33_66_top' => array(
        0 => 'title',
        1 => 'field_official_name',
      ),
      'two_33_66_first' => array(
        2 => 'field_address_street',
        3 => 'field_address_city',
        4 => 'field_address_postcode',
        5 => 'field_phone_text',
      ),
      'two_33_66_second' => array(
        6 => 'field_point',
      ),
    ),
    'fields' => array(
      'title' => 'two_33_66_top',
      'field_official_name' => 'two_33_66_top',
      'field_address_street' => 'two_33_66_first',
      'field_address_city' => 'two_33_66_first',
      'field_address_postcode' => 'two_33_66_first',
      'field_phone_text' => 'two_33_66_first',
      'field_point' => 'two_33_66_second',
    ),
    'classes' => array(),
    'wrappers' => array(
      'two_33_66_top' => 'div',
      'two_33_66_first' => 'div',
      'two_33_66_second' => 'div',
      'two_33_66_bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|location|teaser'] = $ds_layout;

  return $export;
}
