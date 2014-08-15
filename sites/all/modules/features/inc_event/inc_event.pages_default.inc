<?php
/**
 * @file
 * inc_event.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function inc_event_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Event',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Node: Venue [field_location_reference]',
        'keyword' => 'venue_node',
        'name' => 'entity_from_field:field_location_reference-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'event' => 'event',
            ),
          ),
          'context' => 'argument_nid_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => '[current-page:title]',
        ),
        'description' => array(
          'value' => 'Event on [node:field_date] at [node:field-location-reference:title]',
        ),
        'dcterms.description' => array(
          'value' => 'Event on [node:field_date] at [node:field-location-reference:title]',
        ),
        'dcterms.date' => array(
          'value' => '[node:field-date:c]',
        ),
        'dcterms.type' => array(
          'value' => 'Event',
        ),
        'og:description' => array(
          'value' => 'Event on [node:field_date] at [node:field-location-reference:title]',
        ),
        'og:latitude' => array(
          'value' => '[node:field-location-reference:field-point:lat]',
        ),
        'og:longitude' => array(
          'value' => '[node:field-location-reference:field-point:lon]',
        ),
        'og:street-address' => array(
          'value' => '[node:field-location-reference:field_address_street]',
        ),
        'og:locality' => array(
          'value' => '[node:field-location-reference:field_address_city]',
        ),
        'og:postal-code' => array(
          'value' => '[node:field-location-reference:field_address_postcode]',
        ),
        'og:phone_number' => array(
          'value' => '715-952-9020 ext. [node:field_extension]',
        ),
        'twitter:title' => array(
          'value' => '[current-page:title]',
        ),
        'twitter:description' => array(
          'value' => 'On [node:field_date] at [node:field-location-reference:title] Phone 715-952-9020 ext. [node:field_extension]',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'one_main';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['one_main'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_location_reference';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'node_reference_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['one_main'][1] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_point';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'geofield_openlayers',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'data' => 'full',
        'map_preset' => 'geofield_location_formatter_map',
      ),
      'context' => 'relationship_entity_from_field:field_location_reference-node-node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['one_main'][2] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_organiser_reference';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'node_reference_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'node_reference_view_mode' => 'teaser',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => 'Event organiser: %title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['one_main'][3] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'one_main';
    $pane->type = 'block';
    $pane->subtype = 'service_links-service_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['one_main'][4] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'one_main';
    $pane->type = 'subscribe_node';
    $pane->subtype = 'subscribe_node';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['one_main'][5] = 'new-6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  return $export;
}
