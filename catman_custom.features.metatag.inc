<?php
/**
 * @file
 * catman_custom.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function catman_custom_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: global.
  $config['global'] = array(
    'instance' => 'global',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[current-page:title] | [site:name]',
      ),
      'generator' => array(
        'value' => 'Drupal 7 (http://drupal.org)',
      ),
      'canonical' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
      ),
    ),
  );

  // Exported Metatag config instance: global:403.
  $config['global:403'] = array(
    'instance' => 'global:403',
    'disabled' => FALSE,
    'config' => array(
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: global:404.
  $config['global:404'] = array(
    'instance' => 'global:404',
    'disabled' => FALSE,
    'config' => array(
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: global:frontpage.
  $config['global:frontpage'] = array(
    'instance' => 'global:frontpage',
    'config' => array(
      'title' => array(
        'value' => '[site:name]',
      ),
      'description' => array(
        'value' => 'The OSU Extension Catalog is the source for current, peer-reviewed, research-based learning materials published by OSU Extension. It is an active and growing resource, with learning materials in a variety of media for use in a variety of outreach and engagement activities and programs.',
      ),
      'rights' => array(
        'value' => '&copy; 2015 Oregon State University',
      ),
      'image_src' => array(
        'value' => 'http://oregonstate.edu/img/core/osu-tag.png',
      ),
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'publisher' => array(
        'value' => 'http://extension.oregonstate.edu/eesc/',
      ),
    ),
  );

  return $config;
}
