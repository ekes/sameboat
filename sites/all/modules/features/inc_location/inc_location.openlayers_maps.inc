<?php
/**
 * @file
 * inc_location.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function inc_location_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'location_wrapids';
  $openlayers_maps->title = 'Location map';
  $openlayers_maps->description = 'Location';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-89.82095718027, 44.380680104419',
        'zoom' => '13',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_attribution' => array(
        'separator' => '',
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'event_location_openlayers_1' => 'event_location_openlayers_1',
        ),
        'panMapIfOutOfView' => 0,
        'keepInMap' => 1,
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'event_location_openlayers_1' => 0,
        ),
        'point_zoom_level' => '13',
        'zoomtolayer_scale' => '1',
      ),
    ),
    'default_layer' => NULL,
    'layers' => array(
      'event_location_openlayers_1' => 'event_location_openlayers_1',
    ),
    'layer_weight' => array(
      'event_location_openlayers_1' => '0',
      'upcoming_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'upcoming_openlayers_1' => '0',
      'event_location_openlayers_1' => 'default_marker_blue',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'upcoming_openlayers_1' => '0',
      'event_location_openlayers_1' => 'default_marker_blue',
    ),
    'layer_styles_temporary' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'upcoming_openlayers_1' => '0',
      'event_location_openlayers_1' => 'default_marker_blue',
    ),
    'layer_activated' => array(
      'event_location_openlayers_1' => 'event_location_openlayers_1',
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'upcoming_openlayers_1' => 0,
    ),
    'layer_switcher' => array(
      'event_location_openlayers_1' => 0,
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'upcoming_openlayers_1' => 0,
    ),
    'projection' => 'EPSG:900913',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'default_marker_blue',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['location_wrapids'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'upcoming_wrapids';
  $openlayers_maps->title = 'Upcoming events locations map centred on w rapids';
  $openlayers_maps->description = 'Locations';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '350px',
    'image_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-89.82095718027, 44.380680104419',
        'zoom' => '13',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_attribution' => array(
        'separator' => '',
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'upcoming_openlayers_1' => 'upcoming_openlayers_1',
        ),
        'panMapIfOutOfView' => 0,
        'keepInMap' => 1,
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'upcoming_openlayers_1' => 'upcoming_openlayers_1',
          'mapquest_osm' => 0,
        ),
        'point_zoom_level' => '13',
        'zoomtolayer_scale' => '1',
      ),
    ),
    'default_layer' => 'mapquest_osm',
    'layers' => array(
      'mapquest_osm' => 'mapquest_osm',
      'upcoming_openlayers_1' => 'upcoming_openlayers_1',
    ),
    'layer_weight' => array(
      'upcoming_openlayers_1' => '0',
      'event_location_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'event_location_openlayers_1' => '0',
      'upcoming_openlayers_1' => 'default_marker_blue',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'event_location_openlayers_1' => '0',
      'upcoming_openlayers_1' => 'default_marker_blue',
    ),
    'layer_styles_temporary' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'event_location_openlayers_1' => '0',
      'upcoming_openlayers_1' => 'default_marker_blue',
    ),
    'layer_activated' => array(
      'upcoming_openlayers_1' => 'upcoming_openlayers_1',
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'event_location_openlayers_1' => 0,
    ),
    'layer_switcher' => array(
      'upcoming_openlayers_1' => 0,
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'event_location_openlayers_1' => 0,
    ),
    'projection' => 'EPSG:900913',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'default_marker_blue',
      'select' => 'default_select',
      'temporary' => 'default_select',
    ),
  );
  $export['upcoming_wrapids'] = $openlayers_maps;

  return $export;
}
