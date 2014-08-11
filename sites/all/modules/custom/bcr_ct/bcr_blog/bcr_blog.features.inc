<?php
/**
 * @file
 * bcr_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bcr_blog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bcr_blog_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function bcr_blog_flag_default_flags() {
  $flags = array();
  // Exported flag: "Recommended content".
  $flags['recommend'] = array(
    'content_type' => 'node',
    'title' => 'Recommended content',
    'global' => 1,
    'types' => array(
      0 => 'article',
      1 => 'blog',
    ),
    'flag_short' => 'Recommend article',
    'flag_long' => 'Add this content to the list of recommended content',
    'flag_message' => 'You have recommened this content',
    'unflag_short' => 'Remove recommend',
    'unflag_long' => 'Remove this content from the list of recommended content',
    'unflag_message' => 'You have removeed this content from recommended',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 4,
      ),
      'unflag' => array(
        0 => 4,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'bcr_blog',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function bcr_blog_node_info() {
  $items = array(
    'blog' => array(
      'name' => t('Blog'),
      'base' => 'node_content',
      'description' => t('Blog entries'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
