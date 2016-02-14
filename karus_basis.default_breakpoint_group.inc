<?php
/**
 * @file
 * karus_basis.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function karus_basis_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'karus_theme';
  $breakpoint_group->name = 'Business Responsive Theme';
  $breakpoint_group->breakpoints = array(
    0 => 'breakpoints.theme.karus_theme.wide',
    1 => 'breakpoints.theme.karus_theme.standard',
    2 => 'breakpoints.theme.karus_theme.narrow',
    3 => 'breakpoints.theme.karus_theme.mobile',
  );
  $breakpoint_group->type = 'theme';
  $breakpoint_group->overridden = 0;
  $export['karus_theme'] = $breakpoint_group;

  return $export;
}
