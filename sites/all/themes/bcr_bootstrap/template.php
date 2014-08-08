<?php

/**
 * @file
 * template.php
 */

/**
 * add custom region for persistent display / will not be reloaded with the rest of page
 *
 * @param $variables
 */
function bcr_bootstrap_preprocess_html(&$variables){
  $variables['persistent'] = render($variables['page']['persistent']);
  drupal_add_css('http://bcr-dev.dyss.net/css/blog-styles.css', array('type' => 'external'));
  drupal_add_js('http://fast.fonts.net/jsapi/120f729d-c82d-4bed-9ae8-3563ea0a5c45.js', array('type' => 'external')); 

//  $background = ["blue", "red", "yellow", "green", "purple"];
  $background = array("blue", "red", "yellow", "green", "purple");
  shuffle($background);
  $variables['classes_array'][] = 'bg-'.$background[0];
}


/**
 * Implements theme_menu_link().
 *
 *
 * @param array $variables
 * @return string
 */
function bcr_bootstrap_menu_link(array $variables) {
  $menu_theme_id = bcr_bootstrap_menu_name_getter($variables);
  $element = $variables['element'];
  switch($menu_theme_id) {
    case 'menu_link__main_menu':
      $output = l($element['#title'], $element['#href'], $element['#localized_options']);
      $leaf_class = isset($element['#localized_options']['attributes']['id']) ? 'leaf-' . $element['#localized_options']['attributes']['id'] : '';
      $element['#attributes']['class'][] = $leaf_class;
      return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . "</li>\n";
    break;
    default:
      $output = l($element['#title'], $element['#href'], $element['#localized_options']);
      $leaf_class = isset($element['#localized_options']['attributes']['id']) ? 'leaf-' . $element['#localized_options']['attributes']['id'] : '';
      $element['#attributes']['class'][] = $leaf_class;
      return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . "</li>\n";
  }
}

function bcr_bootstrap_menu_name_getter(array $vars) {
  if (
    isset($vars) && isset($vars['element']) && isset($vars['element']['#theme'])
  ) {
    return $vars['element']['#theme'];
  } else {
    return NULL;
  }
}
