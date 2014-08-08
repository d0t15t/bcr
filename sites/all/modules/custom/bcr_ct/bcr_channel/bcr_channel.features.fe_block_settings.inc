<?php
/**
 * @file
 * bcr_channel.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function bcr_channel_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['bcr_blocks-bcr_channels_grid'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'bcr_channels_grid',
    'module' => 'bcr_blocks',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bcr_bootstrap' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'bcr_bootstrap',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
