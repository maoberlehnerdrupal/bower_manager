<?php
/**
 * @file
 * Administrative settings for the Bower Manager module.
 */

/**
 * Bower Manager settings form.
 */
function bower_manager_admin_page() {
  $form = array();

  $form['bower_manager_json_target'] = array(
    '#type' => 'textfield',
    '#title' => t('Target file (@filename)', array('@filename' => 'bower.json')),
    '#default_value' => variable_get('bower_manager_json_target', '!default-theme/bower.json'),
    '#description' => t('Choose the path to the target bower.json file in which module dependencies should get injected.<br />Available placeholders:<br />@default-theme-placeholder - path to default theme (@default-theme-path).', array('@default-theme-placeholder' => '!default-theme', '@default-theme-path' => drupal_get_path('theme', variable_get('theme_default')))),
  );

  return system_settings_form($form);
}
