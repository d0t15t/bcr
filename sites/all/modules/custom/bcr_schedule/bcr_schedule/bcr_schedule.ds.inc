<?php
/**
 * @file
 * bcr_schedule.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function bcr_schedule_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|schedule|schedule';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'schedule';
  $ds_layout->view_mode = 'schedule';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_sidebars' => 0,
  );
  $export['node|schedule|schedule'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function bcr_schedule_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'schedule';
  $ds_view_mode->label = 'Schedule';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['schedule'] = $ds_view_mode;

  return $export;
}
