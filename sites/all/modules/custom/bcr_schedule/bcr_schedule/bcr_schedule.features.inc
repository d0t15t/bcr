<?php
/**
 * @file
 * bcr_schedule.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bcr_schedule_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bcr_schedule_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function bcr_schedule_node_info() {
  $items = array(
    'schedule' => array(
      'name' => t('Schedule'),
      'base' => 'node_content',
      'description' => t('Simple schedule constructor'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
