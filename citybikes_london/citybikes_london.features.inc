<?php
/**
 * @file
 *citybikes_london.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function citybikes_london_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function citybikes_london_node_info() {
  $items = array(
    'citybikes_london' => array(
      'name' => t('CityBikes London'),
      'base' => 'node_content',
      'description' => t('CityBikes content type. Holds the information for a single cycle hire facility.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
