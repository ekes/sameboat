<?php
/**
 * @file
 * inc_sms_blast.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function inc_sms_blast_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'node_sms_subscribers';
  $view->description = 'A list of all subscriber_entitys';
  $view->tag = 'subscriber';
  $view->base_table = 'subscriber_entity';
  $view->human_name = 'Node SMS Subscribers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Location subscribers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'eck list inc_blast_sms location_blast entities';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'subscriber_entity_id' => 'subscriber_entity_id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'subscriber_entity_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Empty ';
  $handler->display->display_options['empty']['area']['content'] = 'No subscribers have been created yet';
  /* Field: Subscriber: Bundle */
  $handler->display->display_options['fields']['bundle']['id'] = 'bundle';
  $handler->display->display_options['fields']['bundle']['table'] = 'subscriber_entity';
  $handler->display->display_options['fields']['bundle']['field'] = 'bundle';
  $handler->display->display_options['fields']['bundle']['label'] = 'Type';
  /* Field: Subscriber: Machine-readable name */
  $handler->display->display_options['fields']['subscriber_id']['id'] = 'subscriber_id';
  $handler->display->display_options['fields']['subscriber_id']['table'] = 'subscriber_entity';
  $handler->display->display_options['fields']['subscriber_id']['field'] = 'subscriber_id';
  $handler->display->display_options['fields']['subscriber_id']['label'] = 'Name';
  /* Field: Subscriber: Operations links */
  $handler->display->display_options['fields']['operations']['id'] = 'operations';
  $handler->display->display_options['fields']['operations']['table'] = 'subscriber_entity';
  $handler->display->display_options['fields']['operations']['field'] = 'operations';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_subscribe_event_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate_options']['access_op'] = 'update';
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'access denied';

  /* Display: Event Page */
  $handler = $view->new_display('page', 'Event Page', 'subscriber_entity_admin_page');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Event subscriptions (field_subscribe_event) */
  $handler->display->display_options['relationships']['field_subscribe_event_nid']['id'] = 'field_subscribe_event_nid';
  $handler->display->display_options['relationships']['field_subscribe_event_nid']['table'] = 'field_data_field_subscribe_event';
  $handler->display->display_options['relationships']['field_subscribe_event_nid']['field'] = 'field_subscribe_event_nid';
  $handler->display->display_options['relationships']['field_subscribe_event_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_subscribe_event_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_subscribe_event_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate_options']['access_op'] = 'update';
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'access denied';
  $handler->display->display_options['path'] = 'node/%/event-sms-subscribers';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'SMS Subscribers';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Subscribers';
  $handler->display->display_options['tab_options']['description'] = 'Manage subscriber_entity';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';

  /* Display: Location Page */
  $handler = $view->new_display('page', 'Location Page', 'page_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Locations (field_subscribe_locations) */
  $handler->display->display_options['relationships']['field_subscribe_locations_nid']['id'] = 'field_subscribe_locations_nid';
  $handler->display->display_options['relationships']['field_subscribe_locations_nid']['table'] = 'field_data_field_subscribe_locations';
  $handler->display->display_options['relationships']['field_subscribe_locations_nid']['field'] = 'field_subscribe_locations_nid';
  $handler->display->display_options['relationships']['field_subscribe_locations_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_subscribe_locations_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'location' => 'location',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate_options']['access_op'] = 'update';
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'access denied';
  $handler->display->display_options['path'] = 'node/%/location-sms-subscribers';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'SMS Subscribers';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['node_sms_subscribers'] = $view;

  $view = new view();
  $view->name = 'sms_blast_log';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_inc_blast_sms';
  $view->human_name = 'SMS Blast log';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'SMS Topic blast log';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'eck list entities';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'uid' => 'uid',
    'changed' => 'changed',
    'created' => 'created',
    'view_link' => 'view_link',
    'field_sms_message' => 'field_sms_message',
    'field_topics' => 'field_topics',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sms_message' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_topics' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Blast SMS Message: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'eck_inc_blast_sms';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Field: Topic subscriptions */
  $handler->display->display_options['fields']['field_topics']['id'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['label'] = 'Topics';
  $handler->display->display_options['fields']['field_topics']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_topics']['delta_offset'] = '0';
  /* Field: Blast SMS Message: SMS message */
  $handler->display->display_options['fields']['field_sms_message']['id'] = 'field_sms_message';
  $handler->display->display_options['fields']['field_sms_message']['table'] = 'field_data_field_sms_message';
  $handler->display->display_options['fields']['field_sms_message']['field'] = 'field_sms_message';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  /* Field: Blast SMS Message: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_inc_blast_sms';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Blast SMS Message: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_inc_blast_sms';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  /* Field: Blast SMS Message: Link */
  $handler->display->display_options['fields']['view_link']['id'] = 'view_link';
  $handler->display->display_options['fields']['view_link']['table'] = 'eck_inc_blast_sms';
  $handler->display->display_options['fields']['view_link']['field'] = 'view_link';
  $handler->display->display_options['fields']['view_link']['label'] = '';
  $handler->display->display_options['fields']['view_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_link']['text'] = 'view';
  /* Sort criterion: Blast SMS Message: Created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'eck_inc_blast_sms';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/people/subscribers/inc-sms-blast';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'SMS Blast';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['sms_blast_log'] = $view;

  $view = new view();
  $view->name = 'sms_blast_queue';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'advancedqueue';
  $view->human_name = 'SMS Blast queue';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Outgoing SMS queue';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'item_id' => 'item_id',
    'status' => 'status',
    'title' => 'title',
    'processed' => 'processed',
  );
  $handler->display->display_options['style_options']['default'] = 'status';
  $handler->display->display_options['style_options']['info'] = array(
    'item_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'processed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Queue: Item status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'advancedqueue';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Status';
  /* Field: Queue: Item title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'advancedqueue';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Number';
  /* Field: Queue: Processed date */
  $handler->display->display_options['fields']['processed']['id'] = 'processed';
  $handler->display->display_options['fields']['processed']['table'] = 'advancedqueue';
  $handler->display->display_options['fields']['processed']['field'] = 'processed';
  $handler->display->display_options['fields']['processed']['date_format'] = 'short';
  /* Sort criterion: Queue: Item status */
  $handler->display->display_options['sorts']['status']['id'] = 'status';
  $handler->display->display_options['sorts']['status']['table'] = 'advancedqueue';
  $handler->display->display_options['sorts']['status']['field'] = 'status';
  /* Sort criterion: Queue: Processed date */
  $handler->display->display_options['sorts']['processed']['id'] = 'processed';
  $handler->display->display_options['sorts']['processed']['table'] = 'advancedqueue';
  $handler->display->display_options['sorts']['processed']['field'] = 'processed';
  $handler->display->display_options['sorts']['processed']['order'] = 'DESC';
  /* Sort criterion: Queue: Item title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'advancedqueue';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Queue: Tag */
  $handler->display->display_options['arguments']['tag_1']['id'] = 'tag_1';
  $handler->display->display_options['arguments']['tag_1']['table'] = 'advancedqueue_tags';
  $handler->display->display_options['arguments']['tag_1']['field'] = 'tag';
  $handler->display->display_options['arguments']['tag_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tag_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tag_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tag_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tag_1']['limit'] = '0';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'tag' => array(
      'type' => 'user',
      'context' => 'entity:inc_blast_sms.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Queue: Tag (blast type)',
    ),
    'tag_1' => array(
      'type' => 'user',
      'context' => 'entity:inc_blast_sms.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Queue: Tag (blast id)',
    ),
  );
  $export['sms_blast_queue'] = $view;

  $view = new view();
  $view->name = 'sms_node_blast_log';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_inc_blast_sms';
  $view->human_name = 'SMS Node Blast log';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'SMS Location blast log';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'uid' => 'uid',
    'changed' => 'changed',
    'created' => 'created',
    'view_link' => 'view_link',
    'field_sms_message' => 'field_sms_message',
    'field_topics' => 'field_topics',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sms_message' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_topics' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Blast SMS Message: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'eck_inc_blast_sms';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Field: Event subscriptions (field_subscribe_event) */
  $handler->display->display_options['relationships']['field_subscribe_event_nid']['id'] = 'field_subscribe_event_nid';
  $handler->display->display_options['relationships']['field_subscribe_event_nid']['table'] = 'field_data_field_subscribe_event';
  $handler->display->display_options['relationships']['field_subscribe_event_nid']['field'] = 'field_subscribe_event_nid';
  $handler->display->display_options['relationships']['field_subscribe_event_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_subscribe_event_nid']['delta'] = '0';
  /* Field: Blast SMS Message: SMS message */
  $handler->display->display_options['fields']['field_sms_message']['id'] = 'field_sms_message';
  $handler->display->display_options['fields']['field_sms_message']['table'] = 'field_data_field_sms_message';
  $handler->display->display_options['fields']['field_sms_message']['field'] = 'field_sms_message';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  /* Field: Blast SMS Message: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'eck_inc_blast_sms';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Blast SMS Message: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'eck_inc_blast_sms';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  /* Field: Blast SMS Message: Link */
  $handler->display->display_options['fields']['view_link']['id'] = 'view_link';
  $handler->display->display_options['fields']['view_link']['table'] = 'eck_inc_blast_sms';
  $handler->display->display_options['fields']['view_link']['field'] = 'view_link';
  $handler->display->display_options['fields']['view_link']['label'] = '';
  $handler->display->display_options['fields']['view_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_link']['text'] = 'view';
  /* Sort criterion: Blast SMS Message: Created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'eck_inc_blast_sms';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: Event Page */
  $handler = $view->new_display('page', 'Event Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'SMS Event blast log';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_subscribe_event_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate_options']['access_op'] = 'update';
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'access denied';
  $handler->display->display_options['path'] = 'node/%/event-sms-subscribers/blast-log';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'SMS Blast Log';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Location Page */
  $handler = $view->new_display('page', 'Location Page', 'page_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Blast SMS Message: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'eck_inc_blast_sms';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Field: Locations (field_subscribe_locations) */
  $handler->display->display_options['relationships']['field_subscribe_locations_nid']['id'] = 'field_subscribe_locations_nid';
  $handler->display->display_options['relationships']['field_subscribe_locations_nid']['table'] = 'field_data_field_subscribe_locations';
  $handler->display->display_options['relationships']['field_subscribe_locations_nid']['field'] = 'field_subscribe_locations_nid';
  $handler->display->display_options['relationships']['field_subscribe_locations_nid']['delta'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_subscribe_locations_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'location' => 'location',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate_options']['access_op'] = 'update';
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'access denied';
  $handler->display->display_options['path'] = 'node/%/location-sms-subscribers/blast-log';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'SMS Blast Log';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['sms_node_blast_log'] = $view;

  return $export;
}
