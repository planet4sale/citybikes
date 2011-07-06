<?php
// $Id: citybikes.admin.inc,v 1.1 2011/01/19 16:15:56 karlheinz Exp $
/**
 * @file
 * Administration page callbacks for the citybikes module.
 */

/**
 * Form builder for CityBikes admin settings.
 *
 * @ingroup forms
 * @see system_settings_form()
 * @see citybikes.module.citybikes_menu()
 */
function citybikes_admin_settings() {
  $form = array();

  $form['citybikes_check_citybikes_master'] = array(
    '#type' => 'checkbox',
    '#title' => t('Check presence of CityBikes Master module'),
    '#description' => t(
      'Defines if !citybikes will check for the presence of the !citybikes_master and 
        !citybikes_artist module. This only affects the presentation of a warning in the
        !status_page complaining about both the CityBikes Master module and the
        CityBikes Artists module being installed at the same time.',
      array(
        '!citybikes' => l(
          t('CityBikes'),
          'http://drupal.org/project/citybikes'
        ),
        '!citybikes_master' => l(
          t('CityBikes Master'),
          'http://drupal.org/project/citybikes'
        ),
        '!citybikes_artist' => l(
          t('CityBikes Artist'),
          'http://drupal.org/project/citybikes'
        ),	
        '!status_page' => l(t('Status report'), 'admin/reports/status'),
      )
    ),
    '#default_value' => variable_get('citybikes_check_citybikes_master', 1),
    '#required' => TRUE,
  );
  return system_settings_form($form);
}
