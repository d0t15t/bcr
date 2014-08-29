<?php
/**
 * @file
 * bcr_files.features.inc
 */

/**
 * Implements hook_node_info().
 */
function bcr_files_node_info() {
  $items = array(
    'file' => array(
      'name' => t('File'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
