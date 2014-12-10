<?php
/**
 * @file
 * catman_custom.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function catman_custom_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-responsive-menu.
  $menus['menu-responsive-menu'] = array(
    'menu_name' => 'menu-responsive-menu',
    'title' => 'Responsive menu',
    'description' => 'Copy of the menu items that are are in the main menu -> catalog section',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Copy of the menu items that are are in the main menu -> catalog section');
  t('Main menu');
  t('Responsive menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
