<?php
/**
 * @file
 * bcr_blog.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function bcr_blog_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['flippy-flippy_pager-node_type-blog'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'flippy_pager-node_type-blog',
    'module' => 'flippy',
    'node_types' => array(
      0 => 'blog',
    ),
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'bcr_bootstrap',
        'weight' => -16,
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

  $export['service_links-service_links'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'service_links',
    'module' => 'service_links',
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
        'weight' => 0,
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

  $export['views-bcr_article_banner_insert-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'bcr_article_banner_insert-block',
    'module' => 'views',
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
        'weight' => 0,
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

  $export['views-recommended_blog_posts-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'recommended_blog_posts-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'blog',
    ),
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'bcr_bootstrap',
        'weight' => -17,
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
