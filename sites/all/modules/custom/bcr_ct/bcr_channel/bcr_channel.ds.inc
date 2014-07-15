<?php
/**
 * @file
 * bcr_channel.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function bcr_channel_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|channel|block_display';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'channel';
  $ds_fieldsetting->view_mode = 'block_display';
  $ds_fieldsetting->settings = array(
    'channel_image_compound' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|channel|block_display'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|channel|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'channel';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
        'exclude node title settings' => '0',
        'ft' => array(),
      ),
    ),
  );
  $export['node|channel|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function bcr_channel_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|channel|block_display';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'channel';
  $ds_layout->view_mode = 'block_display';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'channel_image_compound',
      ),
    ),
    'fields' => array(
      'channel_image_compound' => 'ds_content',
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
  $export['node|channel|block_display'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|channel|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'channel';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'field_image',
      ),
      'left' => array(
        1 => 'title',
        2 => 'body',
        3 => 'field_links',
      ),
      'footer' => array(
        4 => 'field_embed',
      ),
    ),
    'fields' => array(
      'field_image' => 'right',
      'title' => 'left',
      'body' => 'left',
      'field_links' => 'left',
      'field_embed' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_sidebars' => 0,
  );
  $export['node|channel|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|channel|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'channel';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'field_channel_time',
        2 => 'field_embed',
      ),
      'right' => array(
        3 => 'body',
        4 => 'field_links',
        5 => 'field_image',
        6 => 'field_image_overlay',
      ),
      'footer' => array(
        7 => 'path',
      ),
      'hidden' => array(
        8 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_channel_time' => 'left',
      'field_embed' => 'left',
      'body' => 'right',
      'field_links' => 'right',
      'field_image' => 'right',
      'field_image_overlay' => 'right',
      'path' => 'footer',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|channel|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|show|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'show';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'field_channel_reference',
        2 => 'field_show_time',
        3 => 'field_embed',
      ),
      'right' => array(
        4 => 'body',
        5 => 'field_image',
      ),
      'footer' => array(
        6 => 'path',
      ),
      'hidden' => array(
        7 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_channel_reference' => 'left',
      'field_show_time' => 'left',
      'field_embed' => 'left',
      'body' => 'right',
      'field_image' => 'right',
      'path' => 'footer',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|show|form'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function bcr_channel_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'block_display';
  $ds_view_mode->label = 'Block Display';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['block_display'] = $ds_view_mode;

  return $export;
}
