<?php
/**
 * @file
 * karus_basis.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function karus_basis_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'field';
  $linkit_profile->admin_title = 'Field';
  $linkit_profile->admin_description = '';
  $linkit_profile->profile_type = '2';
  $linkit_profile->data = array(
    'search_plugins' => array(
      'entity:menu_link' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:search_api_server' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:taxonomy_term' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:search_api_index' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:search_api_page' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:user' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:file' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'linkit_views' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'download' => 'download',
        'blogpost' => 'blogpost',
        'link' => 'link',
        'page' => 'page',
        'bannerbild' => 0,
        'standort' => 0,
        'webform' => 0,
      ),
      'group_by_bundle' => 1,
      'include_unpublished' => 1,
    ),
    'entity:search_api_server' => array(
      'result_description' => '',
    ),
    'entity:search_api_index' => array(
      'result_description' => '',
    ),
    'entity:search_api_page' => array(
      'result_description' => '',
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'document' => 'document',
        'image' => 0,
        'video' => 0,
        'audio' => 0,
      ),
      'group_by_bundle' => 1,
      'show_scheme' => 1,
      'group_by_scheme' => 1,
      'url_type' => 'direct',
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'tags' => 0,
        'dateityp' => 0,
        'link_kategorie' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'entity:menu_link' => array(
      'result_description' => '',
      'bundles' => array(
        'menu-footer-menu' => 'menu-footer-menu',
        'main-menu' => 'main-menu',
        'devel' => 0,
        'features' => 0,
        'management' => 0,
        'navigation' => 0,
        'user-menu' => 0,
      ),
      'group_by_bundle' => 1,
    ),
    'insert_plugin' => array(
      'plugin' => 'raw_url',
      'url_method' => '3',
    ),
    'attribute_plugins' => array(
      'class' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'rel' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'accesskey' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'target' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'title' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'id' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'autocomplete' => array(
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $export['field'] = $linkit_profile;

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'standard';
  $linkit_profile->admin_title = 'Standard';
  $linkit_profile->admin_description = '';
  $linkit_profile->profile_type = '1';
  $linkit_profile->data = array(
    'text_formats' => array(
      'html' => 'html',
      'plain_text' => 0,
    ),
    'search_plugins' => array(
      'linkit_views' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:user' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:search_api_server' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:search_api_index' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:taxonomy_term' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:search_api_page' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:menu_link' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:file' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
    ),
    'entity:node' => array(
      'result_description' => '[node:url:path]',
      'bundles' => array(
        'bannerbild' => 0,
        'download' => 0,
        'blogpost' => 0,
        'link' => 0,
        'standort' => 0,
        'webform' => 0,
        'page' => 0,
      ),
      'group_by_bundle' => 1,
      'include_unpublished' => 1,
    ),
    'entity:search_api_server' => array(
      'result_description' => '',
    ),
    'entity:search_api_index' => array(
      'result_description' => '',
    ),
    'entity:search_api_page' => array(
      'result_description' => '',
    ),
    'entity:file' => array(
      'result_description' => '[node:url:path]',
      'bundles' => array(
        'image' => 'image',
        'document' => 'document',
        'video' => 0,
        'audio' => 0,
      ),
      'group_by_bundle' => 1,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'url_type' => 'direct',
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '[node:url:path]',
      'bundles' => array(
        'tags' => 0,
        'dateityp' => 0,
        'link_kategorie' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'entity:menu_link' => array(
      'result_description' => '[node:url:path]',
      'bundles' => array(
        'menu-footer-menu' => 'menu-footer-menu',
        'main-menu' => 'main-menu',
        'devel' => 0,
        'features' => 0,
        'management' => 0,
        'navigation' => 0,
        'user-menu' => 0,
      ),
      'group_by_bundle' => 1,
    ),
    'insert_plugin' => array(
      'url_method' => '2',
    ),
    'attribute_plugins' => array(
      'class' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'rel' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'accesskey' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'target' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'title' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'id' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'autocomplete' => array(
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $export['standard'] = $linkit_profile;

  return $export;
}
