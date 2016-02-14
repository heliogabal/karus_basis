<?php
/**
 * @file
 * karus_basis.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function karus_basis_filter_default_formats() {
  $formats = array();

  // Exported format: HTML.
  $formats['html'] = array(
    'format' => 'html',
    'name' => 'HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_autop' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'float_filter' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'img_tag' => 'span',
          'table_tag' => 'div',
          'figure_tag' => 'div',
        ),
      ),
      'image_resize_filter' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'link' => 1,
          'link_class' => 'colorbox',
          'link_rel' => '',
          'image_locations' => array(
            'local' => 'local',
            'remote' => 0,
          ),
        ),
      ),
      'invisimail_encode_js_entities' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'encoder' => 'js_entities',
          'chunk' => 1,
          'link' => 1,
        ),
      ),
      'media_filter' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
      'pathologic' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(
          'local_paths' => 'http://dev.karus.drupalforgood.eu
http://steuer-karus.de',
          'protocol_style' => 'path',
        ),
      ),
    ),
  );

  return $formats;
}
