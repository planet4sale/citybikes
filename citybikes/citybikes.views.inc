<?php

/**
 * @file
 * Views integration for CityBikes module.
 */

/**
 * Implementation of hook_views_plugins().
 */
function citybikes_views_plugins() {
  return array(
    'style' => array(
      'citybikes_table' => array(
        'title' => t('CityBikes Table'),
        'help' => t('Displays CityBikes nodes as a table'),
        'theme' => 'citybikes_view_table',	
        'handler' => 'citybikes_style_table',
        'uses row plugin' => FALSE,
        'uses row class' => TRUE,
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
      ),
    ),
  );
}