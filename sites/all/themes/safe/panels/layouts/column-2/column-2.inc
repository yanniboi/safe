<?php

/**
 * @file
 * Defines an asymetric, golden ratio based panels layout.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Column 2'),
  'icon' => 'preview.png',
  'category' => t('Omega content layouts'),
  'theme' => 'column_2',
  'css' => '../../../css/layouts/column-2/column-2.layout.css',
  'regions' => array(
    'first' => t('First'),
    'second' => t('Second'),
  ),
);

/**
 * Implements hook_preprocess_golden().
 */
function template_preprocess_column_2(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-column-2';
  $variables['attributes_array']['class'][] = 'panel-display--column-2';

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'column-2-region';
    $variables['region_attributes_array'][$name]['class'][] = 'column-2-region--' . drupal_clean_css_identifier($name);
  }
}
