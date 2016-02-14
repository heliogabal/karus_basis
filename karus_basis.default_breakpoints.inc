<?php
/**
 * @file
 * karus_basis.default_breakpoints.inc
 */

/**
 * Implements hook_default_breakpoints().
 */
function karus_basis_default_breakpoints() {
  $export = array();

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.karus_theme.mobile';
  $breakpoint->name = 'mobile';
  $breakpoint->breakpoint = '(min-width: 0px)';
  $breakpoint->source = 'karus_theme';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 3;
  $breakpoint->multipliers = array(
    '1.5x' => '1.5x',
    '2x' => '2x',
    '1x' => '1x',
  );
  $export['breakpoints.theme.karus_theme.mobile'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.karus_theme.narrow';
  $breakpoint->name = 'narrow';
  $breakpoint->breakpoint = '(min-width: 560px)';
  $breakpoint->source = 'karus_theme';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 2;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.karus_theme.narrow'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.karus_theme.standard';
  $breakpoint->name = 'standard';
  $breakpoint->breakpoint = '(min-width: 851px)';
  $breakpoint->source = 'karus_theme';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 1;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.karus_theme.standard'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.karus_theme.wide';
  $breakpoint->name = 'wide';
  $breakpoint->breakpoint = '(min-width: 1025px)';
  $breakpoint->source = 'karus_theme';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 0;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.karus_theme.wide'] = $breakpoint;

  return $export;
}
