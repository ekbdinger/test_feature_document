<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function test_feature_documents_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function test_feature_documents_node_info() {
  $items = array(
    'document_upload' => array(
      'name' => t('Document Upload'),
      'module' => 'features',
      'description' => t('A content type to use to upload Training Docs and other documentation on the Current/Guides and Manuals page.  (created by Paul on Feb. 11, 2012)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function test_feature_documents_views_api() {
  return array(
    'api' => '2',
  );
}
