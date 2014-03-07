<?php

/**
 * Implements hook_theme().
 */
function fbphoto_theme() {
  return array(
      'fbphoto_photo' => array(
          'variables' => array('photo' => NULL)
      ),
      'fbphoto_album' => array(
          'variables' => array('album' => NULL)
      ),
  );
}

/**
 * Implements hook_filter_info().
 */
function fbphoto_filter_info() {
  $filters['fbphoto'] = array(
      'title' => t('Facebook photo'),
      'description' => t('Converts [fb:https://www.facebook.com/media/set/?set=a.299178216769602.79888.201606459860112&type=3] to inline images.'),
      'process callback' => 'fbphoto_filter_callback',
      'tips callback' => '_filter_autop_tips',
      'cache' => FALSE, # @TODO: Remove me
  );
  return $filters;
}

/**
 * Implements hook_attach_plugin().
 * This hook registers the functionality of this module with the attach
 * plugin so that the attach compliant syntax is enabled.
 */
function fbphoto_attach_plugin() {
  return array(
      'fbphoto' => array(
          'title' => 'Attach Fb Album / Photo inline',
          'description' => 'Will render a facebook photo/album specified by the url at the tag',
          'callback' => 'fbphoto_attach_module_callback',
          'options' => array(),
          'suffixes' => array('fbphoto'),
      ),
  );
}