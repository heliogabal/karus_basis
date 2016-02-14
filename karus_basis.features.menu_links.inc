<?php
/**
 * @file
 * karus_basis.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function karus_basis_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_honorar:node/103.
  $menu_links['main-menu_honorar:node/103'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/103',
    'router_path' => 'node/%',
    'link_title' => 'Honorar',
    'options' => array(
      'identifier' => 'main-menu_honorar:node/103',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_kanzlei:node/98',
  );
  // Exported menu link: main-menu_insolvenzverwalter:node/111.
  $menu_links['main-menu_insolvenzverwalter:node/111'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/111',
    'router_path' => 'node/%',
    'link_title' => 'Insolvenzverwalter',
    'options' => array(
      'identifier' => 'main-menu_insolvenzverwalter:node/111',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_service:node/108',
  );
  // Exported menu link: main-menu_kanzlei:node/98.
  $menu_links['main-menu_kanzlei:node/98'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/98',
    'router_path' => 'node/%',
    'link_title' => 'Kanzlei',
    'options' => array(
      'identifier' => 'main-menu_kanzlei:node/98',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_karriere:node/112.
  $menu_links['main-menu_karriere:node/112'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/112',
    'router_path' => 'node/%',
    'link_title' => 'Karriere',
    'options' => array(
      'identifier' => 'main-menu_karriere:node/112',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_kontakt:node/1495.
  $menu_links['main-menu_kontakt:node/1495'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1495',
    'router_path' => 'node/%',
    'link_title' => 'Kontakt',
    'options' => array(
      'identifier' => 'main-menu_kontakt:node/1495',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_partner:node/101.
  $menu_links['main-menu_partner:node/101'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/101',
    'router_path' => 'node/%',
    'link_title' => 'Partner',
    'options' => array(
      'identifier' => 'main-menu_partner:node/101',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_kanzlei:node/98',
  );
  // Exported menu link: main-menu_privatpersonen:node/110.
  $menu_links['main-menu_privatpersonen:node/110'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/110',
    'router_path' => 'node/%',
    'link_title' => 'Privatpersonen',
    'options' => array(
      'identifier' => 'main-menu_privatpersonen:node/110',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_service:node/108',
  );
  // Exported menu link: main-menu_service:node/108.
  $menu_links['main-menu_service:node/108'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/108',
    'router_path' => 'node/%',
    'link_title' => 'Service',
    'options' => array(
      'identifier' => 'main-menu_service:node/108',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_team:node/102.
  $menu_links['main-menu_team:node/102'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/102',
    'router_path' => 'node/%',
    'link_title' => 'Team',
    'options' => array(
      'identifier' => 'main-menu_team:node/102',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_kanzlei:node/98',
  );
  // Exported menu link: main-menu_unternehmen:node/109.
  $menu_links['main-menu_unternehmen:node/109'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/109',
    'router_path' => 'node/%',
    'link_title' => 'Unternehmen',
    'options' => array(
      'identifier' => 'main-menu_unternehmen:node/109',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_service:node/108',
  );
  // Exported menu link: menu-footer-menu_datenschutz:node/105.
  $menu_links['menu-footer-menu_datenschutz:node/105'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/105',
    'router_path' => 'node/%',
    'link_title' => 'Datenschutz',
    'options' => array(
      'identifier' => 'menu-footer-menu_datenschutz:node/105',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_impressum:node/106.
  $menu_links['menu-footer-menu_impressum:node/106'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/106',
    'router_path' => 'node/%',
    'link_title' => 'Impressum',
    'options' => array(
      'identifier' => 'menu-footer-menu_impressum:node/106',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Datenschutz');
  t('Honorar');
  t('Impressum');
  t('Insolvenzverwalter');
  t('Kanzlei');
  t('Karriere');
  t('Kontakt');
  t('Partner');
  t('Privatpersonen');
  t('Service');
  t('Team');
  t('Unternehmen');

  return $menu_links;
}
