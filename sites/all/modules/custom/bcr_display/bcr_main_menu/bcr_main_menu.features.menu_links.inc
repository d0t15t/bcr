<?php
/**
 * @file
 * bcr_main_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function bcr_main_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about:node/61
  $menu_links['main-menu_about:node/61'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/61',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'id' => 'about-link',
      ),
      'identifier' => 'main-menu_about:node/61',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_blog:blog
  $menu_links['main-menu_blog:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(
      'identifier' => 'main-menu_blog:blog',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_community:node/63
  $menu_links['main-menu_community:node/63'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/63',
    'router_path' => 'node/%',
    'link_title' => 'Community',
    'options' => array(
      'identifier' => 'main-menu_community:node/63',
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'attributes' => array(
        'id' => 'community-link',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contact:node/62
  $menu_links['main-menu_contact:node/62'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/62',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
    'options' => array(
      'identifier' => 'main-menu_contact:node/62',
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'attributes' => array(
        'id' => 'contact-link',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_e-mail:mailto:sarah@berlincommunityradio.com
  $menu_links['main-menu_e-mail:mailto:sarah@berlincommunityradio.com'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'mailto:sarah@berlincommunityradio.com',
    'router_path' => '',
    'link_title' => 'E-Mail',
    'options' => array(
      'menu_icon' => array(
        'enable' => 1,
        'path' => 'public://menu_icons/menu_icon_1940.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'main-menu_e-mail:mailto:sarah@berlincommunityradio.com',
      'attributes' => array(
        'title' => 'E-Mail link',
        'id' => 'mail-link',
        'class' => array(
          0 => 'menu_icon',
          1 => 'menu-1940',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -38,
    'customized' => 1,
  );
  // Exported menu link: main-menu_facebook:https://www.facebook.com/berlincommunityradio
  $menu_links['main-menu_facebook:https://www.facebook.com/berlincommunityradio'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.facebook.com/berlincommunityradio',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'menu_icon' => array(
        'enable' => 1,
        'path' => 'public://menu_icons/menu_icon_1433.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'main-menu_facebook:https://www.facebook.com/berlincommunityradio',
      'attributes' => array(
        'id' => 'facebook-link',
        'class' => array(
          0 => 'menu_icon',
          1 => 'menu-1433',
        ),
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_instagram:http://web.stagram.com/n/bcr_radio
  $menu_links['main-menu_instagram:http://web.stagram.com/n/bcr_radio'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://web.stagram.com/n/bcr_radio',
    'router_path' => '',
    'link_title' => 'Instagram',
    'options' => array(
      'menu_icon' => array(
        'enable' => 1,
        'path' => 'public://menu_icons/menu_icon_1939.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'main-menu_instagram:http://web.stagram.com/n/bcr_radio',
      'attributes' => array(
        'title' => 'Instagram',
        'id' => 'instagram-link',
        'class' => array(
          0 => 'menu_icon',
          1 => 'menu-1939',
        ),
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
  );
  // Exported menu link: main-menu_live:node/65
  $menu_links['main-menu_live:node/65'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/65',
    'router_path' => 'node/%',
    'link_title' => 'Live',
    'options' => array(
      'attributes' => array(
        'id' => 'live-link',
      ),
      'identifier' => 'main-menu_live:node/65',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_schedule:node/64
  $menu_links['main-menu_schedule:node/64'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/64',
    'router_path' => 'node/%',
    'link_title' => 'Schedule',
    'options' => array(
      'attributes' => array(
        'id' => 'schedule-link',
      ),
      'identifier' => 'main-menu_schedule:node/64',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_soundcloud:https://soundcloud.com/berlincommunityradio
  $menu_links['main-menu_soundcloud:https://soundcloud.com/berlincommunityradio'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://soundcloud.com/berlincommunityradio',
    'router_path' => '',
    'link_title' => 'Soundcloud',
    'options' => array(
      'menu_icon' => array(
        'enable' => 1,
        'path' => 'public://menu_icons/menu_icon_1431.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'main-menu_soundcloud:https://soundcloud.com/berlincommunityradio',
      'attributes' => array(
        'id' => 'soundcloud-link',
        'class' => array(
          0 => 'menu_icon',
          1 => 'menu-1431',
        ),
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_twitter:https://twitter.com/BCR_Radio
  $menu_links['main-menu_twitter:https://twitter.com/BCR_Radio'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://twitter.com/BCR_Radio',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'menu_icon' => array(
        'enable' => 1,
        'path' => 'public://menu_icons/menu_icon_1432.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'main-menu_twitter:https://twitter.com/BCR_Radio',
      'attributes' => array(
        'id' => 'twitter-link',
        'class' => array(
          0 => 'menu_icon',
          1 => 'menu-1432',
        ),
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: main-menu_youtube:https://www.youtube.com/channel/UCumMTmOu_9khmcAN64uA-2w
  $menu_links['main-menu_youtube:https://www.youtube.com/channel/UCumMTmOu_9khmcAN64uA-2w'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.youtube.com/channel/UCumMTmOu_9khmcAN64uA-2w',
    'router_path' => '',
    'link_title' => 'Youtube',
    'options' => array(
      'menu_icon' => array(
        'enable' => 1,
        'path' => 'public://menu_icons/menu_icon_1938.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'main-menu_youtube:https://www.youtube.com/channel/UCumMTmOu_9khmcAN64uA-2w',
      'attributes' => array(
        'id' => 'youtube-link',
        'class' => array(
          0 => 'menu_icon',
          1 => 'menu-1938',
        ),
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
  );
  // Exported menu link: menu-streams_stream-live-in-m3u:http://google.com
  $menu_links['menu-streams_stream-live-in-m3u:http://google.com'] = array(
    'menu_name' => 'menu-streams',
    'link_path' => 'http://google.com',
    'router_path' => '',
    'link_title' => 'Stream live in M3U',
    'options' => array(
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'identifier' => 'menu-streams_stream-live-in-m3u:http://google.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Blog');
  t('Community');
  t('Contact');
  t('E-Mail');
  t('Facebook');
  t('Home');
  t('Instagram');
  t('Live');
  t('Schedule');
  t('Soundcloud');
  t('Stream live in M3U');
  t('Twitter');
  t('Youtube');


  return $menu_links;
}
