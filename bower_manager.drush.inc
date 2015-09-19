<?php

/**
 * Implements hook_drush_command().
 */
function bower_manager_drush_command() {
  $items['bower-manager-update'] = array(
    'description' => 'Update bower dependencies of the default theme with the dependencies of modules.',
    'aliases' => array('bmupd'),
    'callback' => 'bower_manager_update',
  );

  return $items;
}