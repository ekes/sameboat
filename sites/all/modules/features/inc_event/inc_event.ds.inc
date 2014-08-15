<?php
/**
 * @file
 * inc_event.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function inc_event_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'incourage_events_hotline' => array(
      'weight' => '2',
      'label' => 'inline',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:5:{s:11:"admin_title";s:24:"Incourage events hotline";s:5:"title";s:0:"";s:4:"body";s:90:"Call 715.952.9020 ext. %node:field_extension or Text %node:field_extension to 715.952.9020";s:6:"format";s:1:"5";s:10:"substitute";i:1;}s:4:"type";s:6:"custom";s:7:"subtype";s:6:"custom";}',
        'load_terms' => 0,
      ),
    ),
  );
  $export['node|event|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'extentiontext' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:5:{s:11:"admin_title";s:14:"Extention Text";s:5:"title";s:0:"";s:4:"body";s:90:"Call 715.952.9020 ext. %node:field_extension or Text %node:field_extension to 715.952.9020";s:6:"format";s:1:"1";s:10:"substitute";i:1;}s:4:"type";s:6:"custom";s:7:"subtype";s:6:"custom";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'service_links_displays_group' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'sld_group_image',
    ),
  );
  $export['node|event|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function inc_event_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'extentiontext';
  $ds_field->label = 'Extentiontext';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['extentiontext'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function inc_event_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-one';
  $ds_layout->settings = array(
    'regions' => array(
      'one_main' => array(
        0 => 'field_date',
        1 => 'field_cost',
        2 => 'incourage_events_hotline',
        3 => 'body',
      ),
    ),
    'fields' => array(
      'field_date' => 'one_main',
      'field_cost' => 'one_main',
      'incourage_events_hotline' => 'one_main',
      'body' => 'one_main',
    ),
    'classes' => array(),
    'wrappers' => array(
      'one_main' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|event|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'panels-two_33_66';
  $ds_layout->settings = array(
    'regions' => array(
      'two_33_66_first' => array(
        0 => 'title',
        1 => 'field_date',
        2 => 'extentiontext',
        3 => 'field_location',
      ),
      'two_33_66_second' => array(
        4 => 'body',
        5 => 'service_links_displays_group',
      ),
    ),
    'fields' => array(
      'title' => 'two_33_66_first',
      'field_date' => 'two_33_66_first',
      'extentiontext' => 'two_33_66_first',
      'field_location' => 'two_33_66_first',
      'body' => 'two_33_66_second',
      'service_links_displays_group' => 'two_33_66_second',
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
  $export['node|event|teaser'] = $ds_layout;

  return $export;
}
