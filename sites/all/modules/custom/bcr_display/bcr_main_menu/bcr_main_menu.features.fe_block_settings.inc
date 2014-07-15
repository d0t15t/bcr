<?php
/**
 * @file
 * bcr_main_menu.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function bcr_main_menu_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['bcr_blocks-bcr_player'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'bcr_player',
    'module' => 'bcr_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bcr_bootstrap' => array(
        'region' => 'persistent',
        'status' => 1,
        'theme' => 'bcr_bootstrap',
        'weight' => -13,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-main-2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-main-2',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bcr_bootstrap' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'bcr_bootstrap',
        'weight' => -12,
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

  $export['menu-menu-streams'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-streams',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bcr_bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bcr_bootstrap',
        'weight' => -12,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
