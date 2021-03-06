<?php
// $Id: citybikes_style_table.inc,v 1.1.2.13.2.18 2010/08/30 15:58:47 loubabe Exp $

class citybikes_style_table extends views_plugin_style_table {

  /**
   * Views options definitions
   *
   */
  function option_definition() {
    $options = parent::option_definition();

    $options['css'] = array('default' => 'true');

    return $options;
  }

  /**
   * Return a form containing the options for the view.
   *
   * @param string $form
   * @param string $form_state
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
   
       $form['css'] = array(
      '#type' => 'select',
      '#title' => t('Use default css'),
      '#description' => t('You can use the default css or not. The default can\'t anticipate the image sizes you use so will likely need to be updated for individual needs.'),
      '#default_value' => $this->options['css'],
      '#options' => array('true' => t('Yes'), '' => t('No')),
    );
  
  }


}
