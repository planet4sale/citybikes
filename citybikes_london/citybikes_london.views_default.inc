<?php

/**
 * Implementation of hook_views_default_views().
 */
function citybikes_london_views_default_views() {
  $views = array();
  
 // Exported view: citybikes_london
 $view = new view;
$view->name = 'citybikes';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'CityBikes';
$view->core = 7;
$view->api_version = '3.0-alpha1';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'CityBikes';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'citybikes_table';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Name';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['title']['alter']['external'] = 0;
$handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['title']['alter']['trim'] = 0;
$handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
$handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['title']['alter']['html'] = 0;
$handler->display->display_options['fields']['title']['element_label_colon'] = 1;
$handler->display->display_options['fields']['title']['element_default_classes'] = 1;
$handler->display->display_options['fields']['title']['hide_empty'] = 0;
$handler->display->display_options['fields']['title']['empty_zero'] = 0;
$handler->display->display_options['fields']['title']['link_to_node'] = 1;
/* Field: Content: Bikes */
$handler->display->display_options['fields']['field_cycle_bikes']['id'] = 'field_cycle_bikes';
$handler->display->display_options['fields']['field_cycle_bikes']['table'] = 'field_data_field_cycle_bikes';
$handler->display->display_options['fields']['field_cycle_bikes']['field'] = 'field_cycle_bikes';
$handler->display->display_options['fields']['field_cycle_bikes']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_cycle_bikes']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_cycle_bikes']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_cycle_bikes']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_cycle_bikes']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_cycle_bikes']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_cycle_bikes']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_cycle_bikes']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_cycle_bikes']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_cycle_bikes']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_cycle_bikes']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_cycle_bikes']['element_label_colon'] = 1;
$handler->display->display_options['fields']['field_cycle_bikes']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_cycle_bikes']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_cycle_bikes']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_cycle_bikes']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
$handler->display->display_options['fields']['field_cycle_bikes']['field_api_classes'] = 0;
/* Field: Content: Free */
$handler->display->display_options['fields']['field_cycle_free']['id'] = 'field_cycle_free';
$handler->display->display_options['fields']['field_cycle_free']['table'] = 'field_data_field_cycle_free';
$handler->display->display_options['fields']['field_cycle_free']['field'] = 'field_cycle_free';
$handler->display->display_options['fields']['field_cycle_free']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_cycle_free']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_cycle_free']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_cycle_free']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_cycle_free']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_cycle_free']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_cycle_free']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_cycle_free']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_cycle_free']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_cycle_free']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_cycle_free']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_cycle_free']['element_label_colon'] = 1;
$handler->display->display_options['fields']['field_cycle_free']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_cycle_free']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_cycle_free']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_cycle_free']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
$handler->display->display_options['fields']['field_cycle_free']['field_api_classes'] = 0;
/* Field: Content: Id */
$handler->display->display_options['fields']['field_cycle_id']['id'] = 'field_cycle_id';
$handler->display->display_options['fields']['field_cycle_id']['table'] = 'field_data_field_cycle_id';
$handler->display->display_options['fields']['field_cycle_id']['field'] = 'field_cycle_id';
$handler->display->display_options['fields']['field_cycle_id']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['field_cycle_id']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['field_cycle_id']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['field_cycle_id']['alter']['external'] = 0;
$handler->display->display_options['fields']['field_cycle_id']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['field_cycle_id']['alter']['trim'] = 0;
$handler->display->display_options['fields']['field_cycle_id']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['field_cycle_id']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['field_cycle_id']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['field_cycle_id']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['field_cycle_id']['alter']['html'] = 0;
$handler->display->display_options['fields']['field_cycle_id']['element_label_colon'] = 1;
$handler->display->display_options['fields']['field_cycle_id']['element_default_classes'] = 1;
$handler->display->display_options['fields']['field_cycle_id']['hide_empty'] = 0;
$handler->display->display_options['fields']['field_cycle_id']['empty_zero'] = 0;
$handler->display->display_options['fields']['field_cycle_id']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
$handler->display->display_options['fields']['field_cycle_id']['field_api_classes'] = 0;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 0;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'citybikes_london' => 'citybikes_london',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'citybikes';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'CityBikes';
$handler->display->display_options['menu']['name'] = 'main-menu';
$translatables['citybikes'] = array(
  t('Master'),
  t('CityBikes'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('Name'),
  t('Bikes'),
  t('Free'),
  t('Id'),
  t('Page'),
);

  $views[$view->name] = $view;

  return $views;
}
