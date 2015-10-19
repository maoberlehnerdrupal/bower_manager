<?php
/**
 * @file
 * Drush commands for Bower Manager.
 */

/**
 * Implements hook_drush_command().
 */
function bower_manager_drush_command() {
  $items['bower-manager'] = array(
    'description' => 'Installs dependencies.',
    'aliases' => array('bm'),
  );

  $items['bower-manager-update'] = array(
    'description' => 'Update bower dependencies of the default theme with the dependencies of modules.',
    'aliases' => array('bmupd'),
  );

  return $items;
}

/**
 * Installs dependencies.
 */
function drush_bower_manager() {
  drush_user_abort('To be implemented...');
}

/**
 * Update bower dependencies of the default theme with the dependencies of modules.
 */
function drush_bower_manager_update() {
  try {
    bower_manager_update();
    drush_log(t('The master bower.json file has been updated. Please run `drush bower-manager`'), 'success');
  }
  catch (\RuntimeException $e) {
    drush_set_error($e->getMessage());
  }
}
