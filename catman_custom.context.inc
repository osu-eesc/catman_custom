<?php
/**
 * @file
 * catman_custom.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function catman_custom_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'default_page_blocks';
  $context->description = 'Blocks containing the menu and search form';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'top',
          'weight' => '-10',
        ),
        'nice_menus-1' => array(
          'module' => 'nice_menus',
          'delta' => '1',
          'region' => 'nav',
          'weight' => '-9',
        ),
        'menu-menu-user-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-user-menu',
          'region' => 'sidebar_first',
          'weight' => '-38',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks containing the menu and search form');
  $export['default_page_blocks'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sidebar_menus';
  $context->description = 'Blocks containing the primary sidebar blocks';
  $context->tag = '';
  $context->conditions = array(
    'context_all' => array(
      'values' => array(
        '*' => '*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-shopping_cart-block' => array(
          'module' => 'views',
          'delta' => 'shopping_cart-block',
          'region' => 'sidebar_first',
          'weight' => '-37',
        ),
        'views-2b1aa38a02a6653b7084d8c4e3d325d2' => array(
          'module' => 'views',
          'delta' => '2b1aa38a02a6653b7084d8c4e3d325d2',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks containing the primary sidebar blocks');
  $export['sidebar_menus'] = $context;

  return $export;
}
