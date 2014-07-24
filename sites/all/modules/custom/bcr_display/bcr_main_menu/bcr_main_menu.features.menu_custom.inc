<?php
/**
 * @file
 * bcr_main_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function bcr_main_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-main-2.
  $menus['menu-main-2'] = array(
    'menu_name' => 'menu-main-2',
    'title' => 'Main 2',
    'description' => '',
  );
  // Exported menu: menu-streams.
  $menus['menu-streams'] = array(
    'menu_name' => 'menu-streams',
    'title' => 'Streams',
    'description' => 'Various channel streams',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main 2');
  t('Main menu');
  t('Streams');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('Various channel streams');


  return $menus;
}
