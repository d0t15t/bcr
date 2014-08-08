<?php
/**
 * @file
 * bcr_channel_ad.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bcr_channel_ad_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function bcr_channel_ad_node_info() {
  $items = array(
    'channel_ads' => array(
      'name' => t('Channel Ads'),
      'base' => 'node_content',
      'description' => t('Cool bits inserted in b/w the channels - gif animation etc.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
