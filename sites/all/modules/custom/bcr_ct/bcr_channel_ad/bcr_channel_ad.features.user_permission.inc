<?php
/**
 * @file
 * bcr_channel_ad.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bcr_channel_ad_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create channel_ads content'.
  $permissions['create channel_ads content'] = array(
    'name' => 'create channel_ads content',
    'roles' => array(
      'Operator' => 'Operator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any channel_ads content'.
  $permissions['delete any channel_ads content'] = array(
    'name' => 'delete any channel_ads content',
    'roles' => array(
      'Operator' => 'Operator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own channel_ads content'.
  $permissions['delete own channel_ads content'] = array(
    'name' => 'delete own channel_ads content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any channel_ads content'.
  $permissions['edit any channel_ads content'] = array(
    'name' => 'edit any channel_ads content',
    'roles' => array(
      'Operator' => 'Operator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own channel_ads content'.
  $permissions['edit own channel_ads content'] = array(
    'name' => 'edit own channel_ads content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
