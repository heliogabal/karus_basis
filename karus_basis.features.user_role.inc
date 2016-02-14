<?php
/**
 * @file
 * karus_basis.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function karus_basis_user_default_roles() {
  $roles = array();

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 11,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 10,
  );

  return $roles;
}
