<?php
/**
 * @file
 * bcr_channel.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bcr_channel_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create channel content'.
  $permissions['create channel content'] = array(
    'name' => 'create channel content',
    'roles' => array(
      'Operator' => 'Operator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any channel content'.
  $permissions['delete any channel content'] = array(
    'name' => 'delete any channel content',
    'roles' => array(
      'Operator' => 'Operator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own channel content'.
  $permissions['delete own channel content'] = array(
    'name' => 'delete own channel content',
    'roles' => array(
      'Operator' => 'Operator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any channel content'.
  $permissions['edit any channel content'] = array(
    'name' => 'edit any channel content',
    'roles' => array(
      'Operator' => 'Operator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own channel content'.
  $permissions['edit own channel content'] = array(
    'name' => 'edit own channel content',
    'roles' => array(
      'Operator' => 'Operator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
