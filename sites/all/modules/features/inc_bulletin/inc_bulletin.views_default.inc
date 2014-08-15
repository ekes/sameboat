<?php
/**
 * @file
 * inc_bulletin.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function inc_bulletin_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'upcoming_bulletin';
  $view->description = 'Upcoming events for creating, and posting bulletins';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Events hotline: 715.952.9020';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = 100;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'body' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['exposed_block'] = TRUE;
  /* Relationship: Content: Event location (field_location_reference) */
  $handler->display->display_options['relationships']['field_location_reference_nid']['id'] = 'field_location_reference_nid';
  $handler->display->display_options['relationships']['field_location_reference_nid']['table'] = 'field_data_field_location_reference';
  $handler->display->display_options['relationships']['field_location_reference_nid']['field'] = 'field_location_reference_nid';
  $handler->display->display_options['relationships']['field_location_reference_nid']['delta'] = '-1';
  /* Relationship: Content: Event organizer (field_organiser_reference) */
  $handler->display->display_options['relationships']['field_organiser_reference_nid']['id'] = 'field_organiser_reference_nid';
  $handler->display->display_options['relationships']['field_organiser_reference_nid']['table'] = 'field_data_field_organiser_reference';
  $handler->display->display_options['relationships']['field_organiser_reference_nid']['field'] = 'field_organiser_reference_nid';
  $handler->display->display_options['relationships']['field_organiser_reference_nid']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_location_reference_nid';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '[title_1],';
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'field_organiser_reference_nid';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['text'] = '[title_2],';
  $handler->display->display_options['fields']['title_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_2']['link_to_node'] = FALSE;
  /* Field: Content: Extension */
  $handler->display->display_options['fields']['field_extension']['id'] = 'field_extension';
  $handler->display->display_options['fields']['field_extension']['table'] = 'field_data_field_extension';
  $handler->display->display_options['fields']['field_extension']['field'] = 'field_extension';
  $handler->display->display_options['fields']['field_extension']['label'] = '';
  $handler->display->display_options['fields']['field_extension']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_extension']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_extension']['settings'] = array(
    'prefix_suffix' => 1,
    'status_display' => '0',
  );
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[title]
<br />
[field_date]
Call 715.952.9020 ext. [field_extension] or Text [field_extension] to 715.952.9020
<br />
[body]
<br />
<hr />
<br />';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Event date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_date_value']['default_to_date'] = '+1 week';

  /* Display: Page: Events list */
  $handler = $view->new_display('page', 'Page: Events list', 'page_1');
  $handler->display->display_options['path'] = 'bulletin/upcoming';
  $handler->display->display_options['menu']['title'] = 'Events list';
  $handler->display->display_options['menu']['description'] = 'Simple upcoming events list';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Upcoming';
  $handler->display->display_options['tab_options']['description'] = 'Simple list of upcoming events';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_txt';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'bulletin/upcoming/txt';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page_1' => 0,
  );
  $handler->display->display_options['use_batch'] = '0';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $export['upcoming_bulletin'] = $view;

  return $export;
}
