<?php
/**
 * @file
 * inc_event.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function inc_event_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'upcoming';
  $view->description = 'Upcoming events';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = 12;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'h2',
      'class' => 'title',
    ),
    'nothing' => array(
      'element_type' => 'div',
      'class' => 'teaser-meta',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => 'teaser-description',
    ),
    'service_links' => array(
      'element_type' => 'div',
      'class' => 'teaser-links',
    ),
  );
  $handler->display->display_options['exposed_block'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'There are no related events at this time';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Relationship: Content: Event organizer (field_organiser_reference) */
  $handler->display->display_options['relationships']['field_organiser_reference_nid']['id'] = 'field_organiser_reference_nid';
  $handler->display->display_options['relationships']['field_organiser_reference_nid']['table'] = 'field_data_field_organiser_reference';
  $handler->display->display_options['relationships']['field_organiser_reference_nid']['field'] = 'field_organiser_reference_nid';
  $handler->display->display_options['relationships']['field_organiser_reference_nid']['delta'] = '-1';
  /* Relationship: Content: Event location (field_location_reference) */
  $handler->display->display_options['relationships']['field_location_reference_nid']['id'] = 'field_location_reference_nid';
  $handler->display->display_options['relationships']['field_location_reference_nid']['table'] = 'field_data_field_location_reference';
  $handler->display->display_options['relationships']['field_location_reference_nid']['field'] = 'field_location_reference_nid';
  $handler->display->display_options['relationships']['field_location_reference_nid']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'month_day_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_date']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_date']['delta_offset'] = '0';
  /* Field: Content: Extension */
  $handler->display->display_options['fields']['field_extension']['id'] = 'field_extension';
  $handler->display->display_options['fields']['field_extension']['table'] = 'field_data_field_extension';
  $handler->display->display_options['fields']['field_extension']['field'] = 'field_extension';
  $handler->display->display_options['fields']['field_extension']['label'] = '';
  $handler->display->display_options['fields']['field_extension']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_extension']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_extension']['alter']['text'] = 'Call 715.952.9020 ext. [field_extension] or Text [field_extension] to 715.952.9020';
  $handler->display->display_options['fields']['field_extension']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_extension']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_extension']['settings'] = array(
    'prefix_suffix' => 1,
    'status_display' => '0',
  );
  /* Field: Content: Location text */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_location_reference_nid';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['empty'] = '[field_location]';
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="inner">
[field_date]<br />
[field_extension]<br />
[title_1]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Content: Service links */
  $handler->display->display_options['fields']['service_links']['id'] = 'service_links';
  $handler->display->display_options['fields']['service_links']['table'] = 'node';
  $handler->display->display_options['fields']['service_links']['field'] = 'service_links';
  $handler->display->display_options['fields']['service_links']['label'] = '';
  $handler->display->display_options['fields']['service_links']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Event date -  start date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title contains the words';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'From date';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-1:+3';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
  );
  /* Filter criterion: Content: Event location (field_location_reference) */
  $handler->display->display_options['filters']['field_location_reference_nid']['id'] = 'field_location_reference_nid';
  $handler->display->display_options['filters']['field_location_reference_nid']['table'] = 'field_data_field_location_reference';
  $handler->display->display_options['filters']['field_location_reference_nid']['field'] = 'field_location_reference_nid';
  $handler->display->display_options['filters']['field_location_reference_nid']['group'] = 1;
  $handler->display->display_options['filters']['field_location_reference_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_reference_nid']['expose']['operator_id'] = 'field_location_reference_nid_op';
  $handler->display->display_options['filters']['field_location_reference_nid']['expose']['label'] = 'Venue';
  $handler->display->display_options['filters']['field_location_reference_nid']['expose']['operator'] = 'field_location_reference_nid_op';
  $handler->display->display_options['filters']['field_location_reference_nid']['expose']['identifier'] = 'field_location_reference_nid';
  $handler->display->display_options['filters']['field_location_reference_nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Topic';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'vocabulary_1';

  /* Display: Page: With map attachment */
  $handler = $view->new_display('page', 'Page: With map attachment', 'page_4');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'upcoming';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Upcoming';
  $handler->display->display_options['menu']['weight'] = '-5';

  /* Display: OpenLayers Data */
  $handler = $view->new_display('openlayers', 'OpenLayers Data', 'openlayers_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_point',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'field_location_reference',
    'description_field' => 'body',
    'view_mode' => 'full',
    'style_field' => '',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_point' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_location_reference' => array(
      'element_type' => 'h2',
      'class' => 'title',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => 'body',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Map */
  $handler->display->display_options['fields']['field_point']['id'] = 'field_point';
  $handler->display->display_options['fields']['field_point']['table'] = 'field_data_field_point';
  $handler->display->display_options['fields']['field_point']['field'] = 'field_point';
  $handler->display->display_options['fields']['field_point']['relationship'] = 'field_location_reference_nid';
  $handler->display->display_options['fields']['field_point']['label'] = '';
  $handler->display->display_options['fields']['field_point']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_point']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_point']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: Event location */
  $handler->display->display_options['fields']['field_location_reference']['id'] = 'field_location_reference';
  $handler->display->display_options['fields']['field_location_reference']['table'] = 'field_data_field_location_reference';
  $handler->display->display_options['fields']['field_location_reference']['field'] = 'field_location_reference';
  $handler->display->display_options['fields']['field_location_reference']['label'] = 'Location';
  $handler->display->display_options['fields']['field_location_reference']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_location_reference']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<ul><li>[title]<br />
[body]</li></ul>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;

  /* Display: Map attachment */
  $handler = $view->new_display('attachment', 'Map attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'upcoming_wrapids';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['text']['id'] = 'text';
  $handler->display->display_options['header']['text']['table'] = 'views';
  $handler->display->display_options['header']['text']['field'] = 'area';
  $handler->display->display_options['header']['text']['content'] = '<p style="font-size: 1.5em; font-weight: bold">Public events and resources for everyone in South Wood County</p>
<p style="margin-top: 0.4em; margin-bottom: 0.9em;">What’s Up is made possible by: MIT’s Center for Civic Media and the John S. and James L. Knight
Foundation to test new ways of delivering information to increase access for all.</p>';
  $handler->display->display_options['header']['text']['format'] = '2';
  $handler->display->display_options['displays'] = array(
    'page_4' => 'page_4',
    'default' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_3' => 0,
  );
  $handler->display->display_options['render_pager'] = TRUE;

  /* Display: VoIP */
  $handler = $view->new_display('voipviews', 'VoIP', 'voipviews_1');

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Event location (field_location_reference) */
  $handler->display->display_options['arguments']['field_location_reference_nid']['id'] = 'field_location_reference_nid';
  $handler->display->display_options['arguments']['field_location_reference_nid']['table'] = 'field_data_field_location_reference';
  $handler->display->display_options['arguments']['field_location_reference_nid']['field'] = 'field_location_reference_nid';
  $handler->display->display_options['arguments']['field_location_reference_nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_location_reference_nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_location_reference_nid']['title'] = '%1 events';
  $handler->display->display_options['arguments']['field_location_reference_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_location_reference_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_location_reference_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_location_reference_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title contains the words';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'From date';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-1:+3';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_date.field_date_value' => 'field_data_field_date.field_date_value',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Topic';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'vocabulary_1';
  $handler->display->display_options['pane_title'] = 'Location upcoming pane';
  $handler->display->display_options['pane_category']['name'] = 'Location panes';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_location_reference_nid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.node',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Venue (field_location_reference)',
    ),
  );
  $export['upcoming'] = $view;

  return $export;
}
