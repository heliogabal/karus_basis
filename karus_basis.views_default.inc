<?php
/**
 * @file
 * karus_basis.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function karus_basis_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'karte';
  $view->description = 'DIe Anfahrtskarte mit Bürostandorten';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Karte';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Anfahrt';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'gmap';
  $handler->display->display_options['style_options']['datasource'] = 'geofield';
  $handler->display->display_options['style_options']['markertype'] = '';
  $handler->display->display_options['style_options']['latfield'] = 'title';
  $handler->display->display_options['style_options']['lonfield'] = 'title';
  $handler->display->display_options['style_options']['markerfield'] = 'title';
  $handler->display->display_options['style_options']['geofield'] = 'field_karte';
  $handler->display->display_options['style_options']['enablermt'] = 0;
  $handler->display->display_options['style_options']['rmtfield'] = 'title';
  $handler->display->display_options['style_options']['rmtfieldraw'] = 1;
  $handler->display->display_options['style_options']['animation'] = '2';
  $handler->display->display_options['style_options']['tooltipfield'] = 'title';
  $handler->display->display_options['style_options']['bubbletextenabled'] = 1;
  $handler->display->display_options['style_options']['bubbletextfield'] = 'field_adresse_buero';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Wegbeschreibung zum [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href="getdirections/location/to/[nid]?width=800&height=600&iframe=true" class="colorbox-load">Wegbeschreibung zum [title]</a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Adresse Büro */
  $handler->display->display_options['fields']['field_adresse_buero']['id'] = 'field_adresse_buero';
  $handler->display->display_options['fields']['field_adresse_buero']['table'] = 'field_data_field_adresse_buero';
  $handler->display->display_options['fields']['field_adresse_buero']['field'] = 'field_adresse_buero';
  $handler->display->display_options['fields']['field_adresse_buero']['label'] = '';
  $handler->display->display_options['fields']['field_adresse_buero']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_adresse_buero']['alter']['text'] = '<h2>[title]</h2>
<p>[field_adresse_buero]</p>
<!--<p>[nid]</p>-->';
  $handler->display->display_options['fields']['field_adresse_buero']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_adresse_buero']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_adresse_buero']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_adresse_buero']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_adresse_buero']['delta_limit'] = '2';
  $handler->display->display_options['fields']['field_adresse_buero']['delta_offset'] = '0';
  /* Field: Content: Karte */
  $handler->display->display_options['fields']['field_karte']['id'] = 'field_karte';
  $handler->display->display_options['fields']['field_karte']['table'] = 'field_data_field_karte';
  $handler->display->display_options['fields']['field_karte']['field'] = 'field_karte';
  $handler->display->display_options['fields']['field_karte']['label'] = '';
  $handler->display->display_options['fields']['field_karte']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_karte']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_karte']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_karte']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['fields']['field_karte']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_karte']['delta_limit'] = '2';
  $handler->display->display_options['fields']['field_karte']['delta_offset'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'standort' => 'standort',
  );

  /* Display: Gmap Block */
  $handler = $view->new_display('block', 'Gmap Block', 'block');
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Leaflet Block */
  $handler = $view->new_display('block', 'Leaflet Block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'ip_geoloc_leaflet';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => '',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['map'] = 'leaflet-mapbox';
  $handler->display->display_options['style_options']['map_height'] = '500';
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_latitude'] = array(
    'field_karte' => 'field_karte',
  );
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_longitude'] = '';
  $handler->display->display_options['style_options']['default_marker']['default_marker_color'] = 'red-brick';
  $handler->display->display_options['style_options']['visitor_marker']['visitor_marker_accuracy_circle'] = 1;
  $handler->display->display_options['style_options']['differentiator']['differentiator_field'] = 'node_title';
  $handler->display->display_options['style_options']['center_option'] = '3';
  $handler->display->display_options['style_options']['tags']['marker_tag'] = 'title';
  $handler->display->display_options['style_options']['tags']['tag_css_class'] = 'tag-below-marker';
  $handler->display->display_options['style_options']['sync']['2'] = 0;
  $handler->display->display_options['style_options']['sync']['4'] = 0;
  $handler->display->display_options['style_options']['sync']['8'] = 1;
  $handler->display->display_options['style_options']['sync']['16'] = 1;
  $handler->display->display_options['style_options']['full_screen'] = 0;
  $handler->display->display_options['style_options']['scale_metric'] = 1;
  $handler->display->display_options['style_options']['scale_imperial'] = 0;
  $handler->display->display_options['style_options']['zoom_indicator'] = 0;
  $handler->display->display_options['style_options']['map_reset'] = 0;
  $handler->display->display_options['style_options']['map_cluster_toggle'] = 0;
  $handler->display->display_options['style_options']['mini_map']['on'] = 1;
  $handler->display->display_options['style_options']['mini_map']['height'] = '100';
  $handler->display->display_options['style_options']['mini_map']['width'] = '150';
  $handler->display->display_options['style_options']['mini_map']['toggle'] = 1;
  $handler->display->display_options['style_options']['mini_map']['scope_color'] = '#9d102d';
  $handler->display->display_options['style_options']['mini_map']['zoom_delta'] = '-5';
  $handler->display->display_options['style_options']['cluster_differentiator']['cluster_differentiator_fields'] = array(
    '' => '',
  );
  $handler->display->display_options['style_options']['cluster_differentiator']['zoom_ranges'] = array(
    1 => '',
  );
  $handler->display->display_options['style_options']['cluster_differentiator']['cluster_tooltips'] = 1;
  $handler->display->display_options['style_options']['cluster_differentiator']['cluster_outline'] = '0';
  $handler->display->display_options['style_options']['cluster_aggregation']['aggregation_function'] = 'average';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['small'] = '10';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['medium'] = '100';
  $handler->display->display_options['style_options']['cluster_aggregation']['ranges']['large'] = '1000';
  $handler->display->display_options['style_options']['map_options']['maxzoom'] = '17';
  $handler->display->display_options['style_options']['map_options']['zoom'] = '12';
  $handler->display->display_options['style_options']['map_options']['scrollwheelzoom'] = '1';
  $handler->display->display_options['style_options']['map_options']['dragging'] = '1';
  $handler->display->display_options['style_options']['map_options']['separator'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_caching'] = '8';
  $translatables['karte'] = array(
    t('Master'),
    t('Anfahrt'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Wegbeschreibung zum [title]'),
    t('<a href="getdirections/location/to/[nid]?width=800&height=600&iframe=true" class="colorbox-load">Wegbeschreibung zum [title]</a>'),
    t('<h2>[title]</h2>
<p>[field_adresse_buero]</p>
<!--<p>[nid]</p>-->'),
    t('Gmap Block'),
    t('Leaflet Block'),
  );
  $export['karte'] = $view;

  return $export;
}
