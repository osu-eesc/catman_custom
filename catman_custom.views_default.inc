<?php
/**
 * @file
 * catman_custom.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function catman_custom_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'admin_content';
  $view->description = 'Emulates the Drupal content administration page.';
  $view->tag = 'catman';
  $view->base_table = 'node';
  $view->human_name = 'Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access workbench';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_full_series_number' => 'field_full_series_number',
    'title' => 'title',
    'timestamp' => 'title',
    'type' => 'type',
    'name' => 'name',
    'timestamp_1' => 'timestamp_1',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_full_series_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There is no content available for you to edit.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::workbench_moderation_set_state_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::auto_entitylabel_entity_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Content: Full series number */
  $handler->display->display_options['fields']['field_full_series_number']['id'] = 'field_full_series_number';
  $handler->display->display_options['fields']['field_full_series_number']['table'] = 'field_data_field_full_series_number';
  $handler->display->display_options['fields']['field_full_series_number']['field'] = 'field_full_series_number';
  $handler->display->display_options['fields']['field_full_series_number']['label'] = 'Series #';
  $handler->display->display_options['fields']['field_full_series_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_full_series_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_full_series_number']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'New?';
  /* Field: Content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['ui_name'] = 'Content type';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Created by';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'today time ago';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['format_date_sql'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['combine']['expose']['description'] = 'Filter by title or series number';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['group_info']['label'] = 'Combine fields filter';
  $handler->display->display_options['filters']['combine']['group_info']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['combine']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_full_series_number' => 'field_full_series_number',
    'title' => 'title',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['combine']['expose']['description'] = 'Filter by title or series number';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['group_info']['label'] = 'Combine fields filter';
  $handler->display->display_options['filters']['combine']['group_info']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['combine']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_full_series_number' => 'field_full_series_number',
    'title' => 'title',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'admin/content';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All Recent Content';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'view all';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Full series number */
  $handler->display->display_options['fields']['field_full_series_number']['id'] = 'field_full_series_number';
  $handler->display->display_options['fields']['field_full_series_number']['table'] = 'field_data_field_full_series_number';
  $handler->display->display_options['fields']['field_full_series_number']['field'] = 'field_full_series_number';
  $handler->display->display_options['fields']['field_full_series_number']['label'] = 'Series #';
  $handler->display->display_options['fields']['field_full_series_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_full_series_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_full_series_number']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'New?';
  /* Field: Content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['ui_name'] = 'Content type';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Created by';
  /* Field: Content revision: Updated date */
  $handler->display->display_options['fields']['timestamp_1']['id'] = 'timestamp_1';
  $handler->display->display_options['fields']['timestamp_1']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp_1']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp_1']['label'] = 'Last updated';
  $handler->display->display_options['fields']['timestamp_1']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['timestamp_1']['second_date_format'] = 'short';
  $handler->display->display_options['fields']['timestamp_1']['format_date_sql'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';

  /* Display: Workbench content */
  $handler = $view->new_display('page', 'Workbench content', 'page_1');
  $handler->display->display_options['display_description'] = 'replaces default workbench content page';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Full series number */
  $handler->display->display_options['fields']['field_full_series_number']['id'] = 'field_full_series_number';
  $handler->display->display_options['fields']['field_full_series_number']['table'] = 'field_data_field_full_series_number';
  $handler->display->display_options['fields']['field_full_series_number']['field'] = 'field_full_series_number';
  $handler->display->display_options['fields']['field_full_series_number']['label'] = 'Series #';
  $handler->display->display_options['fields']['field_full_series_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_full_series_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_full_series_number']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'New?';
  /* Field: Content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['ui_name'] = 'Content type';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Created by';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['format_date_sql'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  $handler->display->display_options['path'] = 'admin/workbench/content/all';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'All Recent Content';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['admin_content'] = $view;

  $view = new view();
  $view->name = 'author_reference';
  $view->description = 'Provides reference for the project content type';
  $view->tag = 'catman';
  $view->base_table = 'node';
  $view->human_name = 'Author reference';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Author reference';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_first_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_first_name']['element_default_classes'] = FALSE;
  /* Field: Last, first name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['ui_name'] = 'Last, first name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_last_name], [field_first_name] ';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_last_name']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Last name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  /* Sort criterion: Content: First name (field_first_name) */
  $handler->display->display_options['sorts']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['sorts']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['sorts']['field_first_name_value']['field'] = 'field_first_name_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication_author' => 'publication_author',
  );

  /* Display: References */
  $handler = $view->new_display('references', 'References', 'references_author');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'references_style';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'references_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_author');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_last_name' => 'field_last_name',
    'field_first_name' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['author_reference'] = $view;

  $view = new view();
  $view->name = 'catman_inventory';
  $view->description = '';
  $view->tag = 'catman';
  $view->base_table = 'commerce_product';
  $view->human_name = 'Catman Inventory Value Report';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Catman Inventory Value Report';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access commerce reports';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Refresh report';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'tablesummarized';
  $handler->display->display_options['style_options']['columns'] = array(
    'sku' => 'sku',
    'title' => 'title',
    'title_1' => 'title_1',
    'field_mode_of_delivery' => 'field_mode_of_delivery',
    'commerce_price' => 'commerce_price',
    'field_cost_per_copy' => 'field_cost_per_copy',
    'commerce_stock' => 'commerce_stock',
    'field_cost_per_copy_1' => 'field_cost_per_copy_1',
    'expression' => 'expression',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'sku' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'field_mode_of_delivery' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'commerce_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'field_cost_per_copy' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'commerce_stock' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'field_cost_per_copy_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'expression' => array(
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'currency',
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'default no results message';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h3>Sorry. I couldn\'t find any items matching your search.</h3>

<p class="kitten">Try changing your search criteria.<br />Good luck! - Catman Jr.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Commerce Product: Referencing Node */
  $handler->display->display_options['relationships']['field_publication_product']['id'] = 'field_publication_product';
  $handler->display->display_options['relationships']['field_publication_product']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['field_publication_product']['field'] = 'field_publication_product';
  $handler->display->display_options['relationships']['field_publication_product']['label'] = 'project-reference';
  /* Field: Commerce Product: SKU */
  $handler->display->display_options['fields']['sku']['id'] = 'sku';
  $handler->display->display_options['fields']['sku']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['sku']['field'] = 'sku';
  $handler->display->display_options['fields']['sku']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['sku']['link_to_product'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_publication_product';
  $handler->display->display_options['fields']['title']['label'] = 'Product Title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Project Title';
  $handler->display->display_options['fields']['title_1']['link_to_product'] = 0;
  /* Field: Content: Mode of delivery */
  $handler->display->display_options['fields']['field_mode_of_delivery']['id'] = 'field_mode_of_delivery';
  $handler->display->display_options['fields']['field_mode_of_delivery']['table'] = 'field_data_field_mode_of_delivery';
  $handler->display->display_options['fields']['field_mode_of_delivery']['field'] = 'field_mode_of_delivery';
  $handler->display->display_options['fields']['field_mode_of_delivery']['relationship'] = 'field_publication_product';
  $handler->display->display_options['fields']['field_mode_of_delivery']['element_type'] = '0';
  $handler->display->display_options['fields']['field_mode_of_delivery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mode_of_delivery']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_mode_of_delivery']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_mode_of_delivery']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_mode_of_delivery']['field_api_classes'] = TRUE;
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['label'] = 'Retail cost';
  $handler->display->display_options['fields']['commerce_price']['element_type'] = '0';
  $handler->display->display_options['fields']['commerce_price']['element_class'] = 'retail-price';
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Field: Commerce Product: Cost per copy */
  $handler->display->display_options['fields']['field_cost_per_copy']['id'] = 'field_cost_per_copy';
  $handler->display->display_options['fields']['field_cost_per_copy']['table'] = 'field_data_field_cost_per_copy';
  $handler->display->display_options['fields']['field_cost_per_copy']['field'] = 'field_cost_per_copy';
  $handler->display->display_options['fields']['field_cost_per_copy']['element_type'] = '0';
  $handler->display->display_options['fields']['field_cost_per_copy']['element_class'] = 'cost-per-copy';
  $handler->display->display_options['fields']['field_cost_per_copy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cost_per_copy']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cost_per_copy']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['field_cost_per_copy']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Commerce Product: Quantity available */
  $handler->display->display_options['fields']['commerce_stock']['id'] = 'commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['table'] = 'field_data_commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['field'] = 'commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['label'] = 'Qty available';
  $handler->display->display_options['fields']['commerce_stock']['element_class'] = 'quantity-available';
  $handler->display->display_options['fields']['commerce_stock']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_stock']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['commerce_stock']['type'] = 'number_integer';
  $handler->display->display_options['fields']['commerce_stock']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Commerce Product: Cost per copy */
  $handler->display->display_options['fields']['field_cost_per_copy_1']['id'] = 'field_cost_per_copy_1';
  $handler->display->display_options['fields']['field_cost_per_copy_1']['table'] = 'field_data_field_cost_per_copy';
  $handler->display->display_options['fields']['field_cost_per_copy_1']['field'] = 'field_cost_per_copy';
  $handler->display->display_options['fields']['field_cost_per_copy_1']['label'] = '';
  $handler->display->display_options['fields']['field_cost_per_copy_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cost_per_copy_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cost_per_copy_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cost_per_copy_1']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['field_cost_per_copy_1']['type'] = 'commerce_price_raw_amount';
  $handler->display->display_options['fields']['field_cost_per_copy_1']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Product value';
  $handler->display->display_options['fields']['expression']['element_class'] = 'product-value';
  $handler->display->display_options['fields']['expression']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '2';
  $handler->display->display_options['fields']['expression']['prefix'] = '$';
  $handler->display->display_options['fields']['expression']['expression'] = 'f(x) = ([field_cost_per_copy_1] * [commerce_stock]) / 100;  f(2)';
  /* Sort criterion: Commerce Product: Quantity available (commerce_stock) */
  $handler->display->display_options['sorts']['commerce_stock_value']['id'] = 'commerce_stock_value';
  $handler->display->display_options['sorts']['commerce_stock_value']['table'] = 'field_data_commerce_stock';
  $handler->display->display_options['sorts']['commerce_stock_value']['field'] = 'commerce_stock_value';
  /* Filter criterion: Commerce Product: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Commerce Product: SKU */
  $handler->display->display_options['filters']['sku']['id'] = 'sku';
  $handler->display->display_options['filters']['sku']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['sku']['field'] = 'sku';
  $handler->display->display_options['filters']['sku']['operator'] = 'contains';
  $handler->display->display_options['filters']['sku']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sku']['expose']['operator_id'] = 'sku_op';
  $handler->display->display_options['filters']['sku']['expose']['label'] = 'Series number contains';
  $handler->display->display_options['filters']['sku']['expose']['operator'] = 'sku_op';
  $handler->display->display_options['filters']['sku']['expose']['identifier'] = 'sku';
  $handler->display->display_options['filters']['sku']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    9 => 0,
    8 => 0,
  );
  /* Filter criterion: Commerce Product: Quantity available (commerce_stock) */
  $handler->display->display_options['filters']['commerce_stock_value']['id'] = 'commerce_stock_value';
  $handler->display->display_options['filters']['commerce_stock_value']['table'] = 'field_data_commerce_stock';
  $handler->display->display_options['filters']['commerce_stock_value']['field'] = 'commerce_stock_value';
  $handler->display->display_options['filters']['commerce_stock_value']['operator'] = '<=';
  $handler->display->display_options['filters']['commerce_stock_value']['expose']['operator_id'] = 'commerce_stock_value_op';
  $handler->display->display_options['filters']['commerce_stock_value']['expose']['label'] = 'Quanity available';
  $handler->display->display_options['filters']['commerce_stock_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['commerce_stock_value']['expose']['operator'] = 'commerce_stock_value_op';
  $handler->display->display_options['filters']['commerce_stock_value']['expose']['identifier'] = 'commerce_stock_value';
  $handler->display->display_options['filters']['commerce_stock_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['commerce_stock_value']['group_info']['label'] = 'Quanity available (commerce_stock)';
  $handler->display->display_options['filters']['commerce_stock_value']['group_info']['identifier'] = 'commerce_stock_value';
  $handler->display->display_options['filters']['commerce_stock_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['commerce_stock_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );

  /* Display: Inventory Value Report */
  $handler = $view->new_display('page', 'Inventory Value Report', 'page');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Commerce Product: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Commerce Product: SKU */
  $handler->display->display_options['filters']['sku']['id'] = 'sku';
  $handler->display->display_options['filters']['sku']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['sku']['field'] = 'sku';
  $handler->display->display_options['filters']['sku']['operator'] = 'contains';
  $handler->display->display_options['filters']['sku']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sku']['expose']['operator_id'] = 'sku_op';
  $handler->display->display_options['filters']['sku']['expose']['label'] = 'Series number contains';
  $handler->display->display_options['filters']['sku']['expose']['operator'] = 'sku_op';
  $handler->display->display_options['filters']['sku']['expose']['identifier'] = 'sku';
  $handler->display->display_options['filters']['sku']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    9 => 0,
    8 => 0,
  );
  /* Filter criterion: Commerce Product: Quantity available (commerce_stock) */
  $handler->display->display_options['filters']['commerce_stock_value']['id'] = 'commerce_stock_value';
  $handler->display->display_options['filters']['commerce_stock_value']['table'] = 'field_data_commerce_stock';
  $handler->display->display_options['filters']['commerce_stock_value']['field'] = 'commerce_stock_value';
  $handler->display->display_options['filters']['commerce_stock_value']['operator'] = '<=';
  $handler->display->display_options['filters']['commerce_stock_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['commerce_stock_value']['expose']['operator_id'] = 'commerce_stock_value_op';
  $handler->display->display_options['filters']['commerce_stock_value']['expose']['label'] = 'Quanity available';
  $handler->display->display_options['filters']['commerce_stock_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['commerce_stock_value']['expose']['operator'] = 'commerce_stock_value_op';
  $handler->display->display_options['filters']['commerce_stock_value']['expose']['identifier'] = 'commerce_stock_value';
  $handler->display->display_options['filters']['commerce_stock_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['commerce_stock_value']['group_info']['label'] = 'Quanity available (commerce_stock)';
  $handler->display->display_options['filters']['commerce_stock_value']['group_info']['identifier'] = 'commerce_stock_value';
  $handler->display->display_options['filters']['commerce_stock_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['commerce_stock_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: Mode of delivery (field_mode_of_delivery) */
  $handler->display->display_options['filters']['field_mode_of_delivery_value']['id'] = 'field_mode_of_delivery_value';
  $handler->display->display_options['filters']['field_mode_of_delivery_value']['table'] = 'field_data_field_mode_of_delivery';
  $handler->display->display_options['filters']['field_mode_of_delivery_value']['field'] = 'field_mode_of_delivery_value';
  $handler->display->display_options['filters']['field_mode_of_delivery_value']['relationship'] = 'field_publication_product';
  $handler->display->display_options['filters']['field_mode_of_delivery_value']['value'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['filters']['field_mode_of_delivery_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mode_of_delivery_value']['expose']['operator_id'] = 'field_mode_of_delivery_value_op';
  $handler->display->display_options['filters']['field_mode_of_delivery_value']['expose']['label'] = 'Mode of delivery';
  $handler->display->display_options['filters']['field_mode_of_delivery_value']['expose']['operator'] = 'field_mode_of_delivery_value_op';
  $handler->display->display_options['filters']['field_mode_of_delivery_value']['expose']['identifier'] = 'field_mode_of_delivery_value';
  $handler->display->display_options['filters']['field_mode_of_delivery_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_mode_of_delivery_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_mode_of_delivery_value']['group_info']['label'] = 'Mode of delivery (field_mode_of_delivery)';
  $handler->display->display_options['filters']['field_mode_of_delivery_value']['group_info']['identifier'] = 'field_mode_of_delivery_value';
  $handler->display->display_options['filters']['field_mode_of_delivery_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_mode_of_delivery_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['path'] = 'admin/commerce/reports/catman/inventory';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Inventory';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'inventory_export_csv');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%display-%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'admin/commerce/reports/catman/inventory/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: Low stock report */
  $handler = $view->new_display('block', 'Low stock report', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Low Stock';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'sku' => 'sku',
    'title' => 'title',
    'title_1' => 'title_1',
    'field_mode_of_delivery' => 'field_mode_of_delivery',
    'commerce_price' => 'commerce_price',
    'field_cost_per_copy' => 'field_cost_per_copy',
    'commerce_stock' => 'commerce_stock',
    'field_cost_per_copy_1' => 'field_cost_per_copy_1',
    'expression' => 'expression',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'sku' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mode_of_delivery' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cost_per_copy' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_stock' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cost_per_copy_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Product: SKU */
  $handler->display->display_options['fields']['sku']['id'] = 'sku';
  $handler->display->display_options['fields']['sku']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['sku']['field'] = 'sku';
  $handler->display->display_options['fields']['sku']['label'] = 'Series #';
  $handler->display->display_options['fields']['sku']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['sku']['link_to_product'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_publication_product';
  $handler->display->display_options['fields']['title']['label'] = 'Product Title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Project Title';
  $handler->display->display_options['fields']['title_1']['link_to_product'] = 0;
  /* Field: Content: Mode of delivery */
  $handler->display->display_options['fields']['field_mode_of_delivery']['id'] = 'field_mode_of_delivery';
  $handler->display->display_options['fields']['field_mode_of_delivery']['table'] = 'field_data_field_mode_of_delivery';
  $handler->display->display_options['fields']['field_mode_of_delivery']['field'] = 'field_mode_of_delivery';
  $handler->display->display_options['fields']['field_mode_of_delivery']['relationship'] = 'field_publication_product';
  $handler->display->display_options['fields']['field_mode_of_delivery']['element_type'] = '0';
  $handler->display->display_options['fields']['field_mode_of_delivery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mode_of_delivery']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_mode_of_delivery']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_mode_of_delivery']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_mode_of_delivery']['field_api_classes'] = TRUE;
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['label'] = 'Retail cost';
  $handler->display->display_options['fields']['commerce_price']['element_type'] = '0';
  $handler->display->display_options['fields']['commerce_price']['element_class'] = 'retail-price';
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Field: Commerce Product: Cost per copy */
  $handler->display->display_options['fields']['field_cost_per_copy']['id'] = 'field_cost_per_copy';
  $handler->display->display_options['fields']['field_cost_per_copy']['table'] = 'field_data_field_cost_per_copy';
  $handler->display->display_options['fields']['field_cost_per_copy']['field'] = 'field_cost_per_copy';
  $handler->display->display_options['fields']['field_cost_per_copy']['element_type'] = '0';
  $handler->display->display_options['fields']['field_cost_per_copy']['element_class'] = 'cost-per-copy';
  $handler->display->display_options['fields']['field_cost_per_copy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cost_per_copy']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cost_per_copy']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['field_cost_per_copy']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Commerce Product: Quantity available */
  $handler->display->display_options['fields']['commerce_stock']['id'] = 'commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['table'] = 'field_data_commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['field'] = 'commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['label'] = 'Qty available';
  $handler->display->display_options['fields']['commerce_stock']['element_class'] = 'quantity-available';
  $handler->display->display_options['fields']['commerce_stock']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_stock']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['commerce_stock']['type'] = 'number_integer';
  $handler->display->display_options['fields']['commerce_stock']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Commerce Product: Cost per copy */
  $handler->display->display_options['fields']['field_cost_per_copy_1']['id'] = 'field_cost_per_copy_1';
  $handler->display->display_options['fields']['field_cost_per_copy_1']['table'] = 'field_data_field_cost_per_copy';
  $handler->display->display_options['fields']['field_cost_per_copy_1']['field'] = 'field_cost_per_copy';
  $handler->display->display_options['fields']['field_cost_per_copy_1']['label'] = '';
  $handler->display->display_options['fields']['field_cost_per_copy_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cost_per_copy_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cost_per_copy_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cost_per_copy_1']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['field_cost_per_copy_1']['type'] = 'commerce_price_raw_amount';
  $handler->display->display_options['fields']['field_cost_per_copy_1']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'field_publication_product';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Commerce Product: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Commerce Product: Quantity available (commerce_stock) */
  $handler->display->display_options['filters']['commerce_stock_value']['id'] = 'commerce_stock_value';
  $handler->display->display_options['filters']['commerce_stock_value']['table'] = 'field_data_commerce_stock';
  $handler->display->display_options['filters']['commerce_stock_value']['field'] = 'commerce_stock_value';
  $handler->display->display_options['filters']['commerce_stock_value']['operator'] = '<=';
  $handler->display->display_options['filters']['commerce_stock_value']['value']['value'] = '50';
  $handler->display->display_options['filters']['commerce_stock_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['commerce_stock_value']['expose']['operator_id'] = 'commerce_stock_value_op';
  $handler->display->display_options['filters']['commerce_stock_value']['expose']['label'] = 'Quanity available';
  $handler->display->display_options['filters']['commerce_stock_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['commerce_stock_value']['expose']['operator'] = 'commerce_stock_value_op';
  $handler->display->display_options['filters']['commerce_stock_value']['expose']['identifier'] = 'commerce_stock_value';
  $handler->display->display_options['filters']['commerce_stock_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Mode of delivery (field_mode_of_delivery) */
  $handler->display->display_options['filters']['field_mode_of_delivery_value']['id'] = 'field_mode_of_delivery_value';
  $handler->display->display_options['filters']['field_mode_of_delivery_value']['table'] = 'field_data_field_mode_of_delivery';
  $handler->display->display_options['filters']['field_mode_of_delivery_value']['field'] = 'field_mode_of_delivery_value';
  $handler->display->display_options['filters']['field_mode_of_delivery_value']['relationship'] = 'field_publication_product';
  $handler->display->display_options['filters']['field_mode_of_delivery_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mode_of_delivery_value']['expose']['operator_id'] = 'field_mode_of_delivery_value_op';
  $handler->display->display_options['filters']['field_mode_of_delivery_value']['expose']['label'] = 'Mode of delivery';
  $handler->display->display_options['filters']['field_mode_of_delivery_value']['expose']['operator'] = 'field_mode_of_delivery_value_op';
  $handler->display->display_options['filters']['field_mode_of_delivery_value']['expose']['identifier'] = 'field_mode_of_delivery_value';
  $handler->display->display_options['filters']['field_mode_of_delivery_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
  );
  $export['catman_inventory'] = $view;

  $view = new view();
  $view->name = 'catman_order_payments';
  $view->description = 'Display and total an order\'s payment transaction history.';
  $view->tag = 'catman';
  $view->base_table = 'commerce_payment_transaction';
  $view->human_name = 'Catman order payment';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['css_class'] = 'payment-table';
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'payment_method' => 'payment_method',
    'message' => 'payment_method',
    'balance' => 'balance',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'payment_method' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
    'message' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'balance' => array(
      'align' => 'views-align-right',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  /* Relationship: Commerce Order: Invoice */
  $handler->display->display_options['relationships']['invoice_id']['id'] = 'invoice_id';
  $handler->display->display_options['relationships']['invoice_id']['table'] = 'commerce_order';
  $handler->display->display_options['relationships']['invoice_id']['field'] = 'invoice_id';
  $handler->display->display_options['relationships']['invoice_id']['required'] = TRUE;
  /* Field: Commerce Payment Transaction: Payment method */
  $handler->display->display_options['fields']['payment_method']['id'] = 'payment_method';
  $handler->display->display_options['fields']['payment_method']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['payment_method']['field'] = 'payment_method';
  $handler->display->display_options['fields']['payment_method']['label'] = 'Paid by';
  /* Field: Commerce Payment Transaction: Message */
  $handler->display->display_options['fields']['message']['id'] = 'message';
  $handler->display->display_options['fields']['message']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['message']['field'] = 'message';
  $handler->display->display_options['fields']['message']['label'] = '';
  $handler->display->display_options['fields']['message']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['message']['empty'] = '-';
  /* Field: Commerce Order: Order Balance */
  $handler->display->display_options['fields']['balance']['id'] = 'balance';
  $handler->display->display_options['fields']['balance']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['balance']['field'] = 'balance';
  $handler->display->display_options['fields']['balance']['label'] = 'Order balance';
  $handler->display->display_options['fields']['balance']['element_class'] = 'balance-due';
  $handler->display->display_options['fields']['balance']['element_wrapper_class'] = 'balance-due';
  $handler->display->display_options['fields']['balance']['empty'] = 'Paid in full';
  $handler->display->display_options['fields']['balance']['empty_zero'] = TRUE;
  /* Contextual filter: Commerce Payment Transaction: Order ID */
  $handler->display->display_options['arguments']['order_id']['id'] = 'order_id';
  $handler->display->display_options['arguments']['order_id']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['arguments']['order_id']['field'] = 'order_id';
  $handler->display->display_options['arguments']['order_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['order_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['order_id']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['order_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['order_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['order_id']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'balance_due');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="catman-invoice-footer">
          <p>Thanks for your order!</p>

          <div><strong>If your invoice shows a balance:</strong><br />
          If you are paying with an OSU index, we will process a journal voucher to complete your payment.<br />
          If you are paying with a purchase order, payment is due upon receipt of your order. Please forward this invoice to your accounts payable department. Include the invoice or invoice number
          with your payment. Make checks payable to OSU and send to:</div>
          <div class="indent-payment">Extension and Experiment Station Communications, Oregon State University, 422 Kerr Administration Bldg., Corvallis, OR 97330-2119</div>
        </div>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Commerce Order: Order ID */
  $handler->display->display_options['arguments']['order_id']['id'] = 'order_id';
  $handler->display->display_options['arguments']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['arguments']['order_id']['field'] = 'order_id';
  $handler->display->display_options['arguments']['order_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['order_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['order_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['order_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['order_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['order_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['order_id']['validate']['type'] = 'numeric';
  $handler->display->display_options['arguments']['order_id']['validate']['fail'] = 'empty';

  /* Display: Invoice Header */
  $handler = $view->new_display('block', 'Invoice Header', 'header_block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3 class="field-label">Extension and Experiment Station Communications</h3>
  <div>Oregon State University<br />
    422 Kerr Administration Bldg.<br />
    Corvallis, OR 97331-2119<br />
    Phone: 541-737-2513 or 800-561-6719
  </div>
  <div>Email: puborders@oregonstate.edu</div>
  <div>https://catalog.extension.oregonstate.edu/</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $export['catman_order_payments'] = $view;

  $view = new view();
  $view->name = 'catman_reports';
  $view->description = 'Custom Catman reports (commerce orders)';
  $view->tag = 'catman';
  $view->base_table = 'commerce_order';
  $view->human_name = 'Catman reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Catman Reports';
  $handler->display->display_options['css_class'] = 'catman-reports';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access commerce reports';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Refresh report';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'transaction_id' => 'transaction_id',
    'order_id' => 'order_id',
    'created' => 'created',
    'changed_1' => 'changed_1',
    'commerce_order_total_1' => 'commerce_order_total_1',
    'amount' => 'amount',
    'balance' => 'balance',
    'status' => 'status',
    'payment_method' => 'payment_method',
    'message' => 'message',
    'operations_dropbutton' => 'operations_dropbutton',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'transaction_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'order_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_order_total_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'amount' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'balance' => array(
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'payment_method' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'message' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'operations_dropbutton' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'default no results message';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h3>Sorry. I couldn\'t find any records matching your search.</h3>

<p class="kitten">Try changing the date range and/or change the filtering options.<br />Good luck! - Catman Jr.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Commerce Order: Invoice */
  $handler->display->display_options['relationships']['invoice_id']['id'] = 'invoice_id';
  $handler->display->display_options['relationships']['invoice_id']['table'] = 'commerce_order';
  $handler->display->display_options['relationships']['invoice_id']['field'] = 'invoice_id';
  /* Relationship: Commerce Order: Payment Transaction */
  $handler->display->display_options['relationships']['payment_transaction']['id'] = 'payment_transaction';
  $handler->display->display_options['relationships']['payment_transaction']['table'] = 'commerce_order';
  $handler->display->display_options['relationships']['payment_transaction']['field'] = 'payment_transaction';
  $handler->display->display_options['relationships']['payment_transaction']['required'] = TRUE;
  /* Field: Commerce Payment Transaction: Transaction ID */
  $handler->display->display_options['fields']['transaction_id']['id'] = 'transaction_id';
  $handler->display->display_options['fields']['transaction_id']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['transaction_id']['field'] = 'transaction_id';
  $handler->display->display_options['fields']['transaction_id']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['transaction_id']['separator'] = '';
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['link_to_order'] = 'admin';
  /* Field: Commerce Payment Transaction: Changed date */
  $handler->display->display_options['fields']['changed_1']['id'] = 'changed_1';
  $handler->display->display_options['fields']['changed_1']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['changed_1']['field'] = 'changed';
  $handler->display->display_options['fields']['changed_1']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['changed_1']['label'] = 'Payment date';
  $handler->display->display_options['fields']['changed_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed_1']['date_format'] = 'm_d_y';
  $handler->display->display_options['fields']['changed_1']['format_date_sql'] = 0;
  /* Field: Commerce Order: Order total */
  $handler->display->display_options['fields']['commerce_order_total_1']['id'] = 'commerce_order_total_1';
  $handler->display->display_options['fields']['commerce_order_total_1']['table'] = 'field_data_commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total_1']['field'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total_1']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_order_total_1']['settings'] = array(
    'calculation' => FALSE,
  );
  $handler->display->display_options['fields']['commerce_order_total_1']['group_column'] = 'amount';
  /* Field: Commerce Payment Transaction: Amount */
  $handler->display->display_options['fields']['amount']['id'] = 'amount';
  $handler->display->display_options['fields']['amount']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['amount']['field'] = 'amount';
  $handler->display->display_options['fields']['amount']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['amount']['label'] = 'Transaction Amount';
  /* Field: Commerce Order: Order Balance */
  $handler->display->display_options['fields']['balance']['id'] = 'balance';
  $handler->display->display_options['fields']['balance']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['balance']['field'] = 'balance';
  /* Field: Commerce Order: Order status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['relationship'] = 'payment_transaction';
  /* Field: Commerce Payment Transaction: Payment method */
  $handler->display->display_options['fields']['payment_method']['id'] = 'payment_method';
  $handler->display->display_options['fields']['payment_method']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['payment_method']['field'] = 'payment_method';
  $handler->display->display_options['fields']['payment_method']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['payment_method']['alter']['text'] = '[payment_method] - [message] ';
  /* Field: Commerce Payment Transaction: Message */
  $handler->display->display_options['fields']['message']['id'] = 'message';
  $handler->display->display_options['fields']['message']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['message']['field'] = 'message';
  $handler->display->display_options['fields']['message']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['message']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: Operations links (Dropbutton) */
  $handler->display->display_options['fields']['operations_dropbutton']['id'] = 'operations_dropbutton';
  $handler->display->display_options['fields']['operations_dropbutton']['table'] = 'views_entity_commerce_order';
  $handler->display->display_options['fields']['operations_dropbutton']['field'] = 'operations_dropbutton';
  $handler->display->display_options['fields']['operations_dropbutton']['label'] = '';
  $handler->display->display_options['fields']['operations_dropbutton']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['operations_dropbutton']['add_destination'] = 1;
  /* Sort criterion: Commerce Payment Transaction: Transaction ID */
  $handler->display->display_options['sorts']['transaction_id']['id'] = 'transaction_id';
  $handler->display->display_options['sorts']['transaction_id']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['sorts']['transaction_id']['field'] = 'transaction_id';
  $handler->display->display_options['sorts']['transaction_id']['relationship'] = 'payment_transaction';
  $handler->display->display_options['sorts']['transaction_id']['order'] = 'DESC';
  /* Filter criterion: Commerce Order: Order status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    'pending' => 'pending',
    'processing' => 'processing',
    'ready_for_pickup' => 'ready_for_pickup',
    'shipped_paid' => 'shipped_paid',
    'shipped_unpaid' => 'shipped_unpaid',
    'completed' => 'completed',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Order status';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    9 => 0,
    8 => 0,
  );
  /* Filter criterion: Commerce Payment Transaction: Payment method */
  $handler->display->display_options['filters']['payment_method']['id'] = 'payment_method';
  $handler->display->display_options['filters']['payment_method']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['filters']['payment_method']['field'] = 'payment_method';
  $handler->display->display_options['filters']['payment_method']['relationship'] = 'payment_transaction';
  $handler->display->display_options['filters']['payment_method']['value'] = array(
    'commerce_payment_example' => 'commerce_payment_example',
    'commerce_purchase_order' => 'commerce_purchase_order',
    'touchnet_upay' => 'touchnet_upay',
  );
  $handler->display->display_options['filters']['payment_method']['group'] = 1;
  $handler->display->display_options['filters']['payment_method']['exposed'] = TRUE;
  $handler->display->display_options['filters']['payment_method']['expose']['operator_id'] = 'payment_method_op';
  $handler->display->display_options['filters']['payment_method']['expose']['label'] = 'Payment method';
  $handler->display->display_options['filters']['payment_method']['expose']['operator'] = 'payment_method_op';
  $handler->display->display_options['filters']['payment_method']['expose']['identifier'] = 'payment_method';
  $handler->display->display_options['filters']['payment_method']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['payment_method']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    9 => 0,
    8 => 0,
  );
  /* Filter criterion: Date: Date (commerce_payment_transaction) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['relationship'] = 'payment_transaction';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Payment date';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['group_info']['label'] = 'Date (commerce_payment_transaction)';
  $handler->display->display_options['filters']['date_filter']['group_info']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['date_filter']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['default_date'] = '-1 day';
  $handler->display->display_options['filters']['date_filter']['default_to_date'] = 'now -1 day';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '2014:+3';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'commerce_payment_transaction.changed' => 'commerce_payment_transaction.changed',
  );

  /* Display: Catman Reports */
  $handler = $view->new_display('page', 'Catman Reports', 'catman_dashboard');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Catman Dashboard';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Catman Reports Dashboard';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: report links */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'report links';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<ul>
  <li><a href="/admin/commerce/reports/catman/inventory">Current Inventory Value Report</a></li>
  <li><a href="/admin/commerce/reports/catman/unpaid-invoices">Unpaid Invoices Report</a></li>
  <li><a href="/admin/commerce/reports/catman/reconciliation-all-payments">Account Receivables Reconciliation Report - totals by date</a></li>
  <li><a href="/admin/commerce/reports/catman/reconciliation">Account Receivables Reconciliation Report - totals by payment method</a></li>
 <li><a href="/admin/commerce/reports/catman/review">Periodic Review Report - by date published or revised</a></li>
 <li><a href="/admin/commerce/reports/catman/review-date">Periodic Review Report - by date reviewed</a></li>
</ul>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['path'] = 'admin/commerce/reports/catman';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Catman Reports';
  $handler->display->display_options['menu']['weight'] = '100';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Reconciliation Report */
  $handler = $view->new_display('page', 'Reconciliation Report', 'catman_recon_by_method');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reconciliation Report - totals by payment method';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'tablesummarized';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'payment_method',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'changed_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'transaction_id' => 'transaction_id',
    'order_id' => 'order_id',
    'changed_1' => 'changed_1',
    'commerce_order_total_1' => 'commerce_order_total_1',
    'amount' => 'amount',
    'balance' => 'balance',
    'status' => 'status',
    'payment_method' => 'payment_method',
    'changed' => 'changed',
    'message' => 'message',
    'operations_dropbutton' => 'operations_dropbutton',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'transaction_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'order_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'count',
    ),
    'changed_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'commerce_order_total_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'currency',
    ),
    'amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'currency',
    ),
    'balance' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'currency',
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'payment_method' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'message' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'operations_dropbutton' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Payment Transaction: Transaction ID */
  $handler->display->display_options['fields']['transaction_id']['id'] = 'transaction_id';
  $handler->display->display_options['fields']['transaction_id']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['transaction_id']['field'] = 'transaction_id';
  $handler->display->display_options['fields']['transaction_id']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['transaction_id']['separator'] = '';
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['link_to_order'] = 'admin';
  /* Field: Commerce Payment Transaction: Changed date */
  $handler->display->display_options['fields']['changed_1']['id'] = 'changed_1';
  $handler->display->display_options['fields']['changed_1']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['changed_1']['field'] = 'changed';
  $handler->display->display_options['fields']['changed_1']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['changed_1']['label'] = '';
  $handler->display->display_options['fields']['changed_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed_1']['custom_date_format'] = 'l m/d/Y';
  $handler->display->display_options['fields']['changed_1']['format_date_sql'] = 0;
  /* Field: Commerce Order: Order total */
  $handler->display->display_options['fields']['commerce_order_total_1']['id'] = 'commerce_order_total_1';
  $handler->display->display_options['fields']['commerce_order_total_1']['table'] = 'field_data_commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total_1']['field'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total_1']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_order_total_1']['settings'] = array(
    'calculation' => FALSE,
  );
  $handler->display->display_options['fields']['commerce_order_total_1']['group_column'] = 'amount';
  /* Field: Commerce Payment Transaction: Amount */
  $handler->display->display_options['fields']['amount']['id'] = 'amount';
  $handler->display->display_options['fields']['amount']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['amount']['field'] = 'amount';
  $handler->display->display_options['fields']['amount']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['amount']['label'] = 'Transaction Amount';
  /* Field: Commerce Order: Order Balance */
  $handler->display->display_options['fields']['balance']['id'] = 'balance';
  $handler->display->display_options['fields']['balance']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['balance']['field'] = 'balance';
  /* Field: Commerce Order: Order status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['relationship'] = 'payment_transaction';
  /* Field: Commerce Payment Transaction: Payment method */
  $handler->display->display_options['fields']['payment_method']['id'] = 'payment_method';
  $handler->display->display_options['fields']['payment_method']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['payment_method']['field'] = 'payment_method';
  $handler->display->display_options['fields']['payment_method']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['payment_method']['alter']['text'] = '[payment_method] - [message] ';
  /* Field: Commerce Payment Transaction: Changed date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['changed']['label'] = 'Payment date';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['format_date_sql'] = 0;
  /* Field: Commerce Payment Transaction: Message */
  $handler->display->display_options['fields']['message']['id'] = 'message';
  $handler->display->display_options['fields']['message']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['message']['field'] = 'message';
  $handler->display->display_options['fields']['message']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['message']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: Operations links (Dropbutton) */
  $handler->display->display_options['fields']['operations_dropbutton']['id'] = 'operations_dropbutton';
  $handler->display->display_options['fields']['operations_dropbutton']['table'] = 'views_entity_commerce_order';
  $handler->display->display_options['fields']['operations_dropbutton']['field'] = 'operations_dropbutton';
  $handler->display->display_options['fields']['operations_dropbutton']['label'] = '';
  $handler->display->display_options['fields']['operations_dropbutton']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['operations_dropbutton']['add_destination'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Commerce Order: Order status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    'shipped_paid' => 'shipped_paid',
    'completed' => 'completed',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Order status';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    6 => 0,
    5 => 0,
    9 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Commerce Payment Transaction: Payment method */
  $handler->display->display_options['filters']['payment_method']['id'] = 'payment_method';
  $handler->display->display_options['filters']['payment_method']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['filters']['payment_method']['field'] = 'payment_method';
  $handler->display->display_options['filters']['payment_method']['relationship'] = 'payment_transaction';
  $handler->display->display_options['filters']['payment_method']['value'] = array(
    'commerce_payment_example' => 'commerce_payment_example',
    'commerce_purchase_order' => 'commerce_purchase_order',
    'touchnet_upay' => 'touchnet_upay',
  );
  $handler->display->display_options['filters']['payment_method']['group'] = 1;
  $handler->display->display_options['filters']['payment_method']['exposed'] = TRUE;
  $handler->display->display_options['filters']['payment_method']['expose']['operator_id'] = 'payment_method_op';
  $handler->display->display_options['filters']['payment_method']['expose']['label'] = 'Payment method';
  $handler->display->display_options['filters']['payment_method']['expose']['operator'] = 'payment_method_op';
  $handler->display->display_options['filters']['payment_method']['expose']['identifier'] = 'payment_method';
  $handler->display->display_options['filters']['payment_method']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['payment_method']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    9 => 0,
    8 => 0,
  );
  /* Filter criterion: Date: Date (commerce_payment_transaction) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['relationship'] = 'payment_transaction';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Payment date';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['group_info']['label'] = 'Date (commerce_payment_transaction)';
  $handler->display->display_options['filters']['date_filter']['group_info']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['date_filter']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['default_date'] = '-1 day';
  $handler->display->display_options['filters']['date_filter']['default_to_date'] = 'now -1 day';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '2014:+3';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'commerce_payment_transaction.changed' => 'commerce_payment_transaction.changed',
  );
  $handler->display->display_options['path'] = 'admin/commerce/reports/catman/reconciliation';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Reconciliation - by payment';
  $handler->display->display_options['menu']['description'] = 'Custom Catman reports';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Totals */
  $handler = $view->new_display('attachment', 'Totals', 'attachment_totals');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'payment_method',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'changed',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'payment_method' => 'payment_method',
    'changed' => 'changed',
    'commerce_order_total_1' => 'commerce_order_total_1',
    'amount' => 'amount',
    'order_id' => 'order_id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'payment_method' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_order_total_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'order_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Account Receivables Reconciliation Report - Totals by payment method';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Payment Transaction: Payment method */
  $handler->display->display_options['fields']['payment_method']['id'] = 'payment_method';
  $handler->display->display_options['fields']['payment_method']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['payment_method']['field'] = 'payment_method';
  $handler->display->display_options['fields']['payment_method']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['payment_method']['exclude'] = TRUE;
  /* Field: Commerce Payment Transaction: Changed date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'l m/d/Y';
  $handler->display->display_options['fields']['changed']['format_date_sql'] = 1;
  /* Field: Commerce Order: Order total */
  $handler->display->display_options['fields']['commerce_order_total_1']['id'] = 'commerce_order_total_1';
  $handler->display->display_options['fields']['commerce_order_total_1']['table'] = 'field_data_commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total_1']['field'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['commerce_order_total_1']['label'] = 'Order grand total';
  $handler->display->display_options['fields']['commerce_order_total_1']['element_type'] = 'strong';
  $handler->display->display_options['fields']['commerce_order_total_1']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_order_total_1']['settings'] = array(
    'calculation' => FALSE,
  );
  $handler->display->display_options['fields']['commerce_order_total_1']['group_column'] = 'amount';
  /* Field: Commerce Payment Transaction: Amount */
  $handler->display->display_options['fields']['amount']['id'] = 'amount';
  $handler->display->display_options['fields']['amount']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['amount']['field'] = 'amount';
  $handler->display->display_options['fields']['amount']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['amount']['group_type'] = 'sum';
  $handler->display->display_options['fields']['amount']['label'] = 'Transaction total';
  $handler->display->display_options['fields']['amount']['element_type'] = 'strong';
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['group_type'] = 'count';
  $handler->display->display_options['fields']['order_id']['label'] = 'Number of orders';
  $handler->display->display_options['fields']['order_id']['element_type'] = 'strong';
  $handler->display->display_options['fields']['order_id']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Commerce Order: Order status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    'pending' => 'pending',
    'processing' => 'processing',
    'ready_for_pickup' => 'ready_for_pickup',
    'shipped_paid' => 'shipped_paid',
    'shipped_unpaid' => 'shipped_unpaid',
    'completed' => 'completed',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Order status';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    9 => 0,
    8 => 0,
  );
  /* Filter criterion: Commerce Payment Transaction: Payment method */
  $handler->display->display_options['filters']['payment_method']['id'] = 'payment_method';
  $handler->display->display_options['filters']['payment_method']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['filters']['payment_method']['field'] = 'payment_method';
  $handler->display->display_options['filters']['payment_method']['relationship'] = 'payment_transaction';
  $handler->display->display_options['filters']['payment_method']['value'] = array(
    'commerce_payment_example' => 'commerce_payment_example',
    'commerce_purchase_order' => 'commerce_purchase_order',
    'touchnet_upay' => 'touchnet_upay',
  );
  $handler->display->display_options['filters']['payment_method']['group'] = 1;
  $handler->display->display_options['filters']['payment_method']['exposed'] = TRUE;
  $handler->display->display_options['filters']['payment_method']['expose']['operator_id'] = 'payment_method_op';
  $handler->display->display_options['filters']['payment_method']['expose']['label'] = 'Payment method';
  $handler->display->display_options['filters']['payment_method']['expose']['operator'] = 'payment_method_op';
  $handler->display->display_options['filters']['payment_method']['expose']['identifier'] = 'payment_method';
  $handler->display->display_options['filters']['payment_method']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['payment_method']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    9 => 0,
    8 => 0,
  );
  /* Filter criterion: Date: Date (commerce_payment_transaction) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['relationship'] = 'payment_transaction';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Payment date';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['group_info']['label'] = 'Date (commerce_payment_transaction)';
  $handler->display->display_options['filters']['date_filter']['group_info']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['date_filter']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['default_date'] = '-1 day';
  $handler->display->display_options['filters']['date_filter']['default_to_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '2014:+3';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'commerce_payment_transaction.changed' => 'commerce_payment_transaction.changed',
  );
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'catman_dashboard' => 0,
    'catman_recon_by_method' => 0,
    'catman_recon_all_methods' => 0,
    'unpaid_invoices' => 0,
  );
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Export - reconciliation */
  $handler = $view->new_display('views_data_export', 'Export - reconciliation', 'reconciliation_by_method_export');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reconciliation Report Export';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'reconciliation-by-payment.csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%display-%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Payment Transaction: Transaction ID */
  $handler->display->display_options['fields']['transaction_id']['id'] = 'transaction_id';
  $handler->display->display_options['fields']['transaction_id']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['transaction_id']['field'] = 'transaction_id';
  $handler->display->display_options['fields']['transaction_id']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['transaction_id']['separator'] = '';
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['link_to_order'] = 'admin';
  /* Field: Commerce Payment Transaction: Changed date */
  $handler->display->display_options['fields']['changed_1']['id'] = 'changed_1';
  $handler->display->display_options['fields']['changed_1']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['changed_1']['field'] = 'changed';
  $handler->display->display_options['fields']['changed_1']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['changed_1']['label'] = 'Payment date';
  $handler->display->display_options['fields']['changed_1']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed_1']['format_date_sql'] = 0;
  /* Field: Commerce Order: Order total */
  $handler->display->display_options['fields']['commerce_order_total_1']['id'] = 'commerce_order_total_1';
  $handler->display->display_options['fields']['commerce_order_total_1']['table'] = 'field_data_commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total_1']['field'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total_1']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_order_total_1']['settings'] = array(
    'calculation' => FALSE,
  );
  $handler->display->display_options['fields']['commerce_order_total_1']['group_column'] = 'amount';
  /* Field: Commerce Payment Transaction: Amount */
  $handler->display->display_options['fields']['amount']['id'] = 'amount';
  $handler->display->display_options['fields']['amount']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['amount']['field'] = 'amount';
  $handler->display->display_options['fields']['amount']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['amount']['label'] = 'Transaction Amount';
  /* Field: Commerce Order: Order Balance */
  $handler->display->display_options['fields']['balance']['id'] = 'balance';
  $handler->display->display_options['fields']['balance']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['balance']['field'] = 'balance';
  /* Field: Commerce Order: Order status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['relationship'] = 'payment_transaction';
  /* Field: Commerce Payment Transaction: Payment method */
  $handler->display->display_options['fields']['payment_method']['id'] = 'payment_method';
  $handler->display->display_options['fields']['payment_method']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['payment_method']['field'] = 'payment_method';
  $handler->display->display_options['fields']['payment_method']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['payment_method']['alter']['text'] = '[payment_method] - [message] ';
  /* Field: Commerce Payment Transaction: Message */
  $handler->display->display_options['fields']['message']['id'] = 'message';
  $handler->display->display_options['fields']['message']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['message']['field'] = 'message';
  $handler->display->display_options['fields']['message']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['message']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'admin/commerce/reports/catman/reconciliation/csv';
  $handler->display->display_options['displays'] = array(
    'catman_recon_by_method' => 'catman_recon_by_method',
    'default' => 0,
    'catman_dashboard' => 0,
    'catman_recon_all_methods' => 0,
    'unpaid_invoices' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Reconciliation Report - all payment methods */
  $handler = $view->new_display('page', 'Reconciliation Report - all payment methods', 'catman_recon_all_methods');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reconciliation Report - totals by date for all payment methods';
  $handler->display->display_options['display_description'] = 'Shows report for all payment methods';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'tablesummarized';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'changed_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'transaction_id' => 'transaction_id',
    'order_id' => 'order_id',
    'changed_1' => 'changed_1',
    'commerce_order_total_1' => 'commerce_order_total_1',
    'amount' => 'amount',
    'balance' => 'balance',
    'status' => 'status',
    'payment_method' => 'payment_method',
    'message' => 'message',
    'operations_dropbutton' => 'operations_dropbutton',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'transaction_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'order_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'changed_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'commerce_order_total_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'currency',
    ),
    'amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'balance' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'currency',
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'payment_method' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'message' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'operations_dropbutton' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Payment Transaction: Changed date */
  $handler->display->display_options['fields']['changed_1']['id'] = 'changed_1';
  $handler->display->display_options['fields']['changed_1']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['changed_1']['field'] = 'changed';
  $handler->display->display_options['fields']['changed_1']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['changed_1']['label'] = '';
  $handler->display->display_options['fields']['changed_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed_1']['custom_date_format'] = 'l m/d/Y';
  $handler->display->display_options['fields']['changed_1']['format_date_sql'] = 0;
  /* Field: Commerce Payment Transaction: Transaction ID */
  $handler->display->display_options['fields']['transaction_id']['id'] = 'transaction_id';
  $handler->display->display_options['fields']['transaction_id']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['transaction_id']['field'] = 'transaction_id';
  $handler->display->display_options['fields']['transaction_id']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['transaction_id']['separator'] = '';
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['link_to_order'] = 'admin';
  /* Field: Commerce Order: Order total */
  $handler->display->display_options['fields']['commerce_order_total_1']['id'] = 'commerce_order_total_1';
  $handler->display->display_options['fields']['commerce_order_total_1']['table'] = 'field_data_commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total_1']['field'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total_1']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_order_total_1']['settings'] = array(
    'calculation' => FALSE,
  );
  $handler->display->display_options['fields']['commerce_order_total_1']['group_column'] = 'amount';
  /* Field: Commerce Payment Transaction: Amount */
  $handler->display->display_options['fields']['amount']['id'] = 'amount';
  $handler->display->display_options['fields']['amount']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['amount']['field'] = 'amount';
  $handler->display->display_options['fields']['amount']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['amount']['label'] = 'Transaction Amount';
  /* Field: Commerce Order: Order Balance */
  $handler->display->display_options['fields']['balance']['id'] = 'balance';
  $handler->display->display_options['fields']['balance']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['balance']['field'] = 'balance';
  /* Field: Commerce Order: Order status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['relationship'] = 'payment_transaction';
  /* Field: Commerce Payment Transaction: Payment method */
  $handler->display->display_options['fields']['payment_method']['id'] = 'payment_method';
  $handler->display->display_options['fields']['payment_method']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['payment_method']['field'] = 'payment_method';
  $handler->display->display_options['fields']['payment_method']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['payment_method']['alter']['text'] = '[payment_method] - [message] ';
  /* Field: Commerce Payment Transaction: Changed date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['changed']['label'] = 'Payment date';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['format_date_sql'] = 0;
  /* Field: Commerce Payment Transaction: Message */
  $handler->display->display_options['fields']['message']['id'] = 'message';
  $handler->display->display_options['fields']['message']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['message']['field'] = 'message';
  $handler->display->display_options['fields']['message']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['message']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: Operations links (Dropbutton) */
  $handler->display->display_options['fields']['operations_dropbutton']['id'] = 'operations_dropbutton';
  $handler->display->display_options['fields']['operations_dropbutton']['table'] = 'views_entity_commerce_order';
  $handler->display->display_options['fields']['operations_dropbutton']['field'] = 'operations_dropbutton';
  $handler->display->display_options['fields']['operations_dropbutton']['label'] = '';
  $handler->display->display_options['fields']['operations_dropbutton']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['operations_dropbutton']['add_destination'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Commerce Order: Order status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    'shipped_paid' => 'shipped_paid',
    'completed' => 'completed',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Order status';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    6 => 0,
    5 => 0,
    9 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Date: Date (commerce_payment_transaction) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['relationship'] = 'payment_transaction';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Payment date';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['group_info']['label'] = 'Date (commerce_payment_transaction)';
  $handler->display->display_options['filters']['date_filter']['group_info']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['date_filter']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['default_date'] = '-1 day';
  $handler->display->display_options['filters']['date_filter']['default_to_date'] = 'now -1 day';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '2014:+3';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'commerce_payment_transaction.changed' => 'commerce_payment_transaction.changed',
  );
  $handler->display->display_options['path'] = 'admin/commerce/reports/catman/reconciliation-all-payments';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Reconciliation - by date';
  $handler->display->display_options['menu']['description'] = 'Catman commerce reports';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Grand Totals */
  $handler = $view->new_display('attachment', 'Grand Totals', 'attachment_grand_totals');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'changed',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'changed' => 'changed',
    'commerce_order_total_1' => 'commerce_order_total_1',
    'amount' => 'amount',
    'order_id' => 'order_id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_order_total_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'order_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Account Receivables Reconciliation Report - Totals by date for all payment methods';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Payment Transaction: Changed date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'l m/d/Y';
  $handler->display->display_options['fields']['changed']['format_date_sql'] = 1;
  /* Field: Commerce Order: Order total */
  $handler->display->display_options['fields']['commerce_order_total_1']['id'] = 'commerce_order_total_1';
  $handler->display->display_options['fields']['commerce_order_total_1']['table'] = 'field_data_commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total_1']['field'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['commerce_order_total_1']['label'] = 'Order grand total';
  $handler->display->display_options['fields']['commerce_order_total_1']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_order_total_1']['settings'] = array(
    'calculation' => FALSE,
  );
  $handler->display->display_options['fields']['commerce_order_total_1']['group_column'] = 'amount';
  /* Field: Commerce Payment Transaction: Amount */
  $handler->display->display_options['fields']['amount']['id'] = 'amount';
  $handler->display->display_options['fields']['amount']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['amount']['field'] = 'amount';
  $handler->display->display_options['fields']['amount']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['amount']['group_type'] = 'sum';
  $handler->display->display_options['fields']['amount']['label'] = 'Transaction total';
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['group_type'] = 'count';
  $handler->display->display_options['fields']['order_id']['label'] = 'Number of orders';
  $handler->display->display_options['fields']['order_id']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Date: Date (commerce_payment_transaction) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['relationship'] = 'payment_transaction';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Payment date';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['group_info']['label'] = 'Date (commerce_payment_transaction)';
  $handler->display->display_options['filters']['date_filter']['group_info']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['date_filter']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['default_date'] = '-1 day';
  $handler->display->display_options['filters']['date_filter']['default_to_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '2014:+3';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'commerce_payment_transaction.changed' => 'commerce_payment_transaction.changed',
  );
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'catman_dashboard' => 0,
    'catman_recon_by_method' => 0,
    'catman_recon_all_methods' => 0,
    'unpaid_invoices' => 0,
  );
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Export - reconciliation - all */
  $handler = $view->new_display('views_data_export', 'Export - reconciliation - all', 'reconciliation_all_export');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reconciliation Report Export';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'reconciliation-by-payment.csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%display-%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Payment Transaction: Transaction ID */
  $handler->display->display_options['fields']['transaction_id']['id'] = 'transaction_id';
  $handler->display->display_options['fields']['transaction_id']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['transaction_id']['field'] = 'transaction_id';
  $handler->display->display_options['fields']['transaction_id']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['transaction_id']['separator'] = '';
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['link_to_order'] = 'admin';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'commerce_invoice';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'invoice_id';
  $handler->display->display_options['fields']['created']['label'] = 'Invoice date';
  /* Field: Commerce Payment Transaction: Changed date */
  $handler->display->display_options['fields']['changed_1']['id'] = 'changed_1';
  $handler->display->display_options['fields']['changed_1']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['changed_1']['field'] = 'changed';
  $handler->display->display_options['fields']['changed_1']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['changed_1']['label'] = 'Payment date';
  $handler->display->display_options['fields']['changed_1']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed_1']['format_date_sql'] = 0;
  /* Field: Commerce Order: Order total */
  $handler->display->display_options['fields']['commerce_order_total_1']['id'] = 'commerce_order_total_1';
  $handler->display->display_options['fields']['commerce_order_total_1']['table'] = 'field_data_commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total_1']['field'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total_1']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_order_total_1']['settings'] = array(
    'calculation' => FALSE,
  );
  $handler->display->display_options['fields']['commerce_order_total_1']['group_column'] = 'amount';
  /* Field: Commerce Payment Transaction: Amount */
  $handler->display->display_options['fields']['amount']['id'] = 'amount';
  $handler->display->display_options['fields']['amount']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['amount']['field'] = 'amount';
  $handler->display->display_options['fields']['amount']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['amount']['label'] = 'Transaction Amount';
  /* Field: Commerce Order: Order Balance */
  $handler->display->display_options['fields']['balance']['id'] = 'balance';
  $handler->display->display_options['fields']['balance']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['balance']['field'] = 'balance';
  /* Field: Commerce Order: Order status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['relationship'] = 'payment_transaction';
  /* Field: Commerce Payment Transaction: Payment method */
  $handler->display->display_options['fields']['payment_method']['id'] = 'payment_method';
  $handler->display->display_options['fields']['payment_method']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['payment_method']['field'] = 'payment_method';
  $handler->display->display_options['fields']['payment_method']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['payment_method']['alter']['text'] = '[payment_method] - [message] ';
  /* Field: Commerce Payment Transaction: Message */
  $handler->display->display_options['fields']['message']['id'] = 'message';
  $handler->display->display_options['fields']['message']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['message']['field'] = 'message';
  $handler->display->display_options['fields']['message']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['message']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Commerce Order: Order status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    'pending' => 'pending',
    'processing' => 'processing',
    'ready_for_pickup' => 'ready_for_pickup',
    'shipped_paid' => 'shipped_paid',
    'shipped_unpaid' => 'shipped_unpaid',
    'completed' => 'completed',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Order status';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    9 => 0,
    8 => 0,
  );
  /* Filter criterion: Date: Date (commerce_payment_transaction) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['relationship'] = 'payment_transaction';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Payment date';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['group_info']['label'] = 'Date (commerce_payment_transaction)';
  $handler->display->display_options['filters']['date_filter']['group_info']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['date_filter']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['default_date'] = '-1 day';
  $handler->display->display_options['filters']['date_filter']['default_to_date'] = 'now -1 day';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '2014:+3';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'commerce_payment_transaction.changed' => 'commerce_payment_transaction.changed',
  );
  $handler->display->display_options['path'] = 'admin/commerce/reports/catman/reconciliation-all-payments/csv';
  $handler->display->display_options['displays'] = array(
    'catman_recon_all_methods' => 'catman_recon_all_methods',
    'default' => 0,
    'catman_dashboard' => 0,
    'catman_recon_by_method' => 0,
    'unpaid_invoices' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Unpaid Invoices Report */
  $handler = $view->new_display('page', 'Unpaid Invoices Report', 'unpaid_invoices');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Unpaid Invoices Report';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'tablesummarized';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'changed',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'order_number' => 'order_number',
    'changed' => 'changed',
    'commerce_customer_billing' => 'commerce_customer_billing',
    'commerce_order_total_1' => 'commerce_order_total_1',
    'balance' => 'balance',
    'status' => 'status',
    'payment_method' => 'payment_method',
    'changed_1' => 'changed_1',
    'message' => 'message',
    'operations_dropbutton' => 'operations_dropbutton',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'order_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'count',
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'commerce_customer_billing' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'commerce_order_total_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'balance' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'currency',
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'payment_method' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'changed_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'message' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'operations_dropbutton' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Commerce Order: Invoice */
  $handler->display->display_options['relationships']['invoice_id']['id'] = 'invoice_id';
  $handler->display->display_options['relationships']['invoice_id']['table'] = 'commerce_order';
  $handler->display->display_options['relationships']['invoice_id']['field'] = 'invoice_id';
  /* Relationship: Commerce Order: Payment Transaction */
  $handler->display->display_options['relationships']['payment_transaction']['id'] = 'payment_transaction';
  $handler->display->display_options['relationships']['payment_transaction']['table'] = 'commerce_order';
  $handler->display->display_options['relationships']['payment_transaction']['field'] = 'payment_transaction';
  $handler->display->display_options['relationships']['payment_transaction']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Order: Order number */
  $handler->display->display_options['fields']['order_number']['id'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_number']['field'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['link_to_order'] = 'admin';
  /* Field: Commerce Payment Transaction: Changed date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'l m/d/Y';
  $handler->display->display_options['fields']['changed']['format_date_sql'] = 0;
  /* Field: Commerce Order: Bill to */
  $handler->display->display_options['fields']['commerce_customer_billing']['id'] = 'commerce_customer_billing';
  $handler->display->display_options['fields']['commerce_customer_billing']['table'] = 'field_data_commerce_customer_billing';
  $handler->display->display_options['fields']['commerce_customer_billing']['field'] = 'commerce_customer_billing';
  $handler->display->display_options['fields']['commerce_customer_billing']['element_type'] = '0';
  $handler->display->display_options['fields']['commerce_customer_billing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_customer_billing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['commerce_customer_billing']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['commerce_customer_billing']['field_api_classes'] = TRUE;
  /* Field: Commerce Order: Order total */
  $handler->display->display_options['fields']['commerce_order_total_1']['id'] = 'commerce_order_total_1';
  $handler->display->display_options['fields']['commerce_order_total_1']['table'] = 'field_data_commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total_1']['field'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total_1']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_order_total_1']['settings'] = array(
    'calculation' => FALSE,
  );
  $handler->display->display_options['fields']['commerce_order_total_1']['group_column'] = 'amount';
  /* Field: Commerce Order: Order Balance */
  $handler->display->display_options['fields']['balance']['id'] = 'balance';
  $handler->display->display_options['fields']['balance']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['balance']['field'] = 'balance';
  /* Field: Commerce Order: Order status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['relationship'] = 'payment_transaction';
  /* Field: Commerce Payment Transaction: Payment method */
  $handler->display->display_options['fields']['payment_method']['id'] = 'payment_method';
  $handler->display->display_options['fields']['payment_method']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['payment_method']['field'] = 'payment_method';
  $handler->display->display_options['fields']['payment_method']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['payment_method']['alter']['text'] = '[payment_method] - [message] ';
  /* Field: Commerce Payment Transaction: Changed date */
  $handler->display->display_options['fields']['changed_1']['id'] = 'changed_1';
  $handler->display->display_options['fields']['changed_1']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['changed_1']['field'] = 'changed';
  $handler->display->display_options['fields']['changed_1']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['changed_1']['label'] = 'Payment date';
  $handler->display->display_options['fields']['changed_1']['date_format'] = 'm_d_y';
  $handler->display->display_options['fields']['changed_1']['format_date_sql'] = 0;
  /* Field: Commerce Payment Transaction: Message */
  $handler->display->display_options['fields']['message']['id'] = 'message';
  $handler->display->display_options['fields']['message']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['message']['field'] = 'message';
  $handler->display->display_options['fields']['message']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['message']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: Operations links (Dropbutton) */
  $handler->display->display_options['fields']['operations_dropbutton']['id'] = 'operations_dropbutton';
  $handler->display->display_options['fields']['operations_dropbutton']['table'] = 'views_entity_commerce_order';
  $handler->display->display_options['fields']['operations_dropbutton']['field'] = 'operations_dropbutton';
  $handler->display->display_options['fields']['operations_dropbutton']['label'] = '';
  $handler->display->display_options['fields']['operations_dropbutton']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['operations_dropbutton']['add_destination'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Commerce Order: Order status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    'ready_for_pickup' => 'ready_for_pickup',
    'shipped_unpaid' => 'shipped_unpaid',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Order status';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    9 => 0,
    8 => 0,
  );
  /* Filter criterion: Date: Date (commerce_payment_transaction) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['relationship'] = 'payment_transaction';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Order date';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    6 => 0,
    5 => 0,
    9 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['group_info']['label'] = 'Date (commerce_payment_transaction)';
  $handler->display->display_options['filters']['date_filter']['group_info']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['date_filter']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '2014:+3';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'commerce_payment_transaction.changed' => 'commerce_payment_transaction.changed',
  );
  $handler->display->display_options['path'] = 'admin/commerce/reports/catman/unpaid-invoices';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Unpaid invoices';
  $handler->display->display_options['menu']['description'] = 'Displays unpaid invoices';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Unpaid Totals */
  $handler = $view->new_display('attachment', 'Unpaid Totals', 'attachment_unpaid');
  $handler->display->display_options['display_description'] = 'Shows balance for unpaid invoices';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'changed',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'changed' => 'changed',
    'commerce_order_total_1' => 'commerce_order_total_1',
    'balance' => 'balance',
    'order_id' => 'order_id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_order_total_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'balance' => array(
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'order_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Unpaid Invoices';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Payment Transaction: Changed date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'l m/d/Y';
  $handler->display->display_options['fields']['changed']['format_date_sql'] = 1;
  /* Field: Commerce Order: Order total */
  $handler->display->display_options['fields']['commerce_order_total_1']['id'] = 'commerce_order_total_1';
  $handler->display->display_options['fields']['commerce_order_total_1']['table'] = 'field_data_commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total_1']['field'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total_1']['group_type'] = 'sum';
  $handler->display->display_options['fields']['commerce_order_total_1']['label'] = 'Invoice grand total';
  $handler->display->display_options['fields']['commerce_order_total_1']['element_type'] = 'strong';
  $handler->display->display_options['fields']['commerce_order_total_1']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_order_total_1']['settings'] = array(
    'calculation' => FALSE,
  );
  $handler->display->display_options['fields']['commerce_order_total_1']['group_column'] = 'amount';
  /* Field: Commerce Order: Order Balance */
  $handler->display->display_options['fields']['balance']['id'] = 'balance';
  $handler->display->display_options['fields']['balance']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['balance']['field'] = 'balance';
  $handler->display->display_options['fields']['balance']['group_type'] = 'sum';
  $handler->display->display_options['fields']['balance']['label'] = 'Unpaid balance';
  $handler->display->display_options['fields']['balance']['element_type'] = 'strong';
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['group_type'] = 'count';
  $handler->display->display_options['fields']['order_id']['label'] = 'Number of orders';
  $handler->display->display_options['fields']['order_id']['element_type'] = 'strong';
  $handler->display->display_options['fields']['order_id']['separator'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Commerce Payment Transaction: Changed date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['relationship'] = 'payment_transaction';
  $handler->display->display_options['sorts']['changed']['granularity'] = 'day';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Commerce Order: Order status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    'ready_for_pickup' => 'ready_for_pickup',
    'shipped_unpaid' => 'shipped_unpaid',
  );
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Order status';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    9 => 0,
    8 => 0,
  );
  /* Filter criterion: Date: Date (commerce_payment_transaction) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['relationship'] = 'payment_transaction';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Date (commerce_payment_transaction)';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now -1 day';
  $handler->display->display_options['filters']['date_filter']['default_to_date'] = 'now -1 day';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'commerce_payment_transaction.changed' => 'commerce_payment_transaction.changed',
  );
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'catman_dashboard' => 0,
    'catman_recon_by_method' => 0,
    'catman_recon_all_methods' => 0,
    'unpaid_invoices' => 0,
  );
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;

  /* Display: Export - unpaid invoices */
  $handler = $view->new_display('views_data_export', 'Export - unpaid invoices', 'unpaid_invoices_export');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Unpaid Invoices Report Export';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'unpaid-invoices.csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%display-%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Order: Order number */
  $handler->display->display_options['fields']['order_number']['id'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_number']['field'] = 'order_number';
  /* Field: Commerce Payment Transaction: Changed date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['changed']['label'] = 'Payment date';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'l m/d/Y';
  $handler->display->display_options['fields']['changed']['format_date_sql'] = 0;
  /* Field: Commerce Order: Bill to */
  $handler->display->display_options['fields']['commerce_customer_billing']['id'] = 'commerce_customer_billing';
  $handler->display->display_options['fields']['commerce_customer_billing']['table'] = 'field_data_commerce_customer_billing';
  $handler->display->display_options['fields']['commerce_customer_billing']['field'] = 'commerce_customer_billing';
  $handler->display->display_options['fields']['commerce_customer_billing']['element_type'] = '0';
  $handler->display->display_options['fields']['commerce_customer_billing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['commerce_customer_billing']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['commerce_customer_billing']['field_api_classes'] = TRUE;
  /* Field: Commerce Order: Order total */
  $handler->display->display_options['fields']['commerce_order_total_1']['id'] = 'commerce_order_total_1';
  $handler->display->display_options['fields']['commerce_order_total_1']['table'] = 'field_data_commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total_1']['field'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total_1']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_order_total_1']['settings'] = array(
    'calculation' => FALSE,
  );
  $handler->display->display_options['fields']['commerce_order_total_1']['group_column'] = 'amount';
  /* Field: Commerce Order: Order Balance */
  $handler->display->display_options['fields']['balance']['id'] = 'balance';
  $handler->display->display_options['fields']['balance']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['balance']['field'] = 'balance';
  /* Field: Commerce Order: Order status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['relationship'] = 'payment_transaction';
  /* Field: Commerce Payment Transaction: Payment method */
  $handler->display->display_options['fields']['payment_method']['id'] = 'payment_method';
  $handler->display->display_options['fields']['payment_method']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['payment_method']['field'] = 'payment_method';
  $handler->display->display_options['fields']['payment_method']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['payment_method']['alter']['text'] = '[payment_method] - [message] ';
  /* Field: Commerce Payment Transaction: Message */
  $handler->display->display_options['fields']['message']['id'] = 'message';
  $handler->display->display_options['fields']['message']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['message']['field'] = 'message';
  $handler->display->display_options['fields']['message']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['message']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Commerce Order: Order status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    'pending' => 'pending',
    'processing' => 'processing',
    'ready_for_pickup' => 'ready_for_pickup',
    'shipped_paid' => 'shipped_paid',
    'shipped_unpaid' => 'shipped_unpaid',
    'completed' => 'completed',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Order status';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    9 => 0,
    8 => 0,
  );
  /* Filter criterion: Date: Date (commerce_payment_transaction) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['relationship'] = 'payment_transaction';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Payment date';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['group_info']['label'] = 'Date (commerce_payment_transaction)';
  $handler->display->display_options['filters']['date_filter']['group_info']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['date_filter']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['default_date'] = '-1 day';
  $handler->display->display_options['filters']['date_filter']['default_to_date'] = 'now -1 day';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '2014:+3';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'commerce_payment_transaction.changed' => 'commerce_payment_transaction.changed',
  );
  $handler->display->display_options['path'] = 'admin/commerce/reports/catman/unpaid-invoices/csv';
  $handler->display->display_options['displays'] = array(
    'unpaid_invoices' => 'unpaid_invoices',
    'default' => 0,
    'catman_dashboard' => 0,
    'catman_recon_by_method' => 0,
    'catman_recon_all_methods' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Unpaid invoices Block */
  $handler = $view->new_display('block', 'Unpaid invoices Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Unpaid Invoices';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Refresh report';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'tablesummarized';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'changed_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'order_number' => 'order_number',
    'changed_1' => 'changed_1',
    'commerce_customer_billing' => 'commerce_customer_billing',
    'commerce_order_total_1' => 'commerce_order_total_1',
    'balance' => 'balance',
    'status' => 'status',
    'payment_method' => 'payment_method',
    'message' => 'message',
    'edit_order' => 'edit_order',
  );
  $handler->display->display_options['style_options']['default'] = 'changed_1';
  $handler->display->display_options['style_options']['info'] = array(
    'order_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'changed_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'commerce_customer_billing' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'commerce_order_total_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'balance' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'payment_method' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'message' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
    'edit_order' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'summarize' => 'none',
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Order: Order number */
  $handler->display->display_options['fields']['order_number']['id'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_number']['field'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['link_to_order'] = 'admin';
  /* Field: Commerce Payment Transaction: Changed date */
  $handler->display->display_options['fields']['changed_1']['id'] = 'changed_1';
  $handler->display->display_options['fields']['changed_1']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['changed_1']['field'] = 'changed';
  $handler->display->display_options['fields']['changed_1']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['changed_1']['label'] = '';
  $handler->display->display_options['fields']['changed_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed_1']['custom_date_format'] = 'l m/d/Y';
  $handler->display->display_options['fields']['changed_1']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['changed_1']['format_date_sql'] = 0;
  /* Field: Commerce Order: Bill to */
  $handler->display->display_options['fields']['commerce_customer_billing']['id'] = 'commerce_customer_billing';
  $handler->display->display_options['fields']['commerce_customer_billing']['table'] = 'field_data_commerce_customer_billing';
  $handler->display->display_options['fields']['commerce_customer_billing']['field'] = 'commerce_customer_billing';
  $handler->display->display_options['fields']['commerce_customer_billing']['element_type'] = '0';
  $handler->display->display_options['fields']['commerce_customer_billing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_customer_billing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['commerce_customer_billing']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['commerce_customer_billing']['field_api_classes'] = TRUE;
  /* Field: Commerce Order: Order total */
  $handler->display->display_options['fields']['commerce_order_total_1']['id'] = 'commerce_order_total_1';
  $handler->display->display_options['fields']['commerce_order_total_1']['table'] = 'field_data_commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total_1']['field'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total_1']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_order_total_1']['settings'] = array(
    'calculation' => FALSE,
  );
  $handler->display->display_options['fields']['commerce_order_total_1']['group_column'] = 'amount';
  /* Field: Commerce Order: Order Balance */
  $handler->display->display_options['fields']['balance']['id'] = 'balance';
  $handler->display->display_options['fields']['balance']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['balance']['field'] = 'balance';
  /* Field: Commerce Order: Order status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['relationship'] = 'payment_transaction';
  /* Field: Commerce Payment Transaction: Payment method */
  $handler->display->display_options['fields']['payment_method']['id'] = 'payment_method';
  $handler->display->display_options['fields']['payment_method']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['payment_method']['field'] = 'payment_method';
  $handler->display->display_options['fields']['payment_method']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['payment_method']['alter']['text'] = '[payment_method] - [message] ';
  /* Field: Commerce Payment Transaction: Message */
  $handler->display->display_options['fields']['message']['id'] = 'message';
  $handler->display->display_options['fields']['message']['table'] = 'commerce_payment_transaction';
  $handler->display->display_options['fields']['message']['field'] = 'message';
  $handler->display->display_options['fields']['message']['relationship'] = 'payment_transaction';
  $handler->display->display_options['fields']['message']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: Edit link */
  $handler->display->display_options['fields']['edit_order']['id'] = 'edit_order';
  $handler->display->display_options['fields']['edit_order']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['edit_order']['field'] = 'edit_order';
  $handler->display->display_options['fields']['edit_order']['label'] = '';
  $handler->display->display_options['fields']['edit_order']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_order']['text'] = 'edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Commerce Order: Order status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    'ready_for_pickup' => 'ready_for_pickup',
    'shipped_unpaid' => 'shipped_unpaid',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Order status';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
  );
  $export['catman_reports'] = $view;

  $view = new view();
  $view->name = 'content_edited';
  $view->description = 'Lists content edited by the user.';
  $view->tag = 'catman';
  $view->base_table = 'node_revision';
  $view->human_name = 'Catman Workbench: Edits by user';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'My Edits';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'view all';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access workbench';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 25, 50, 100, 200';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'type' => 'type',
    'status' => 'status',
    'timestamp' => 'timestamp',
    'edit_node' => 'edit_node',
    'is_published' => 'is_published',
  );
  $handler->display->display_options['style_options']['default'] = 'timestamp';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'is_published' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = 'Edited something recently and it\'s not in this list? If a content type isn\'t revisioned and you didn\'t create it, it will not show up in this list when you edit it. You can find it in the \'Content I Can Edit\' tab.';
  $handler->display->display_options['footer']['area']['format'] = 'plain_text';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'You haven\'t created or edited any content.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Relationship: Content revision: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content revision: Content */
  $handler->display->display_options['relationships']['vid']['id'] = 'vid';
  $handler->display->display_options['relationships']['vid']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['vid']['field'] = 'vid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'vid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Full series number */
  $handler->display->display_options['fields']['field_full_series_number']['id'] = 'field_full_series_number';
  $handler->display->display_options['fields']['field_full_series_number']['table'] = 'field_data_field_full_series_number';
  $handler->display->display_options['fields']['field_full_series_number']['field'] = 'field_full_series_number';
  $handler->display->display_options['fields']['field_full_series_number']['relationship'] = 'vid';
  $handler->display->display_options['fields']['field_full_series_number']['label'] = 'Series #';
  $handler->display->display_options['fields']['field_full_series_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_full_series_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_full_series_number']['field_api_classes'] = TRUE;
  /* Field: Content revision: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node_revision';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'vid';
  $handler->display->display_options['fields']['title']['link_to_node'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'vid';
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['relationship'] = 'vid';
  $handler->display->display_options['fields']['status']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['status']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content revision: Updated date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'Last updated';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'time ago';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'vid';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['relationship'] = 'vid';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['filters']['uid_current']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['combine']['expose']['description'] = 'Filter by title or series number';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_full_series_number' => 'field_full_series_number',
    'title' => 'title',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'vid';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'vid';
  $handler->display->display_options['filters']['type_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['type_1']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/workbench/content/myedits';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'My Edits';
  $handler->display->display_options['menu']['weight'] = '1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Five of the most recently updated pieces of content.';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'vid';
  $handler->display->display_options['filters']['type']['operator'] = 'not empty';
  $export['content_edited'] = $view;

  $view = new view();
  $view->name = 'file_management';
  $view->description = '';
  $view->tag = 'catman';
  $view->base_table = 'file_managed';
  $view->human_name = 'File Management';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'File management';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'filename' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'uri' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'id' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'filename' => 'filename',
    'uri' => 'uri',
    'fid' => 'fid',
    'id' => 'id',
    'count' => 'count',
    'type' => 'type',
    'module' => 'module',
    'filemime' => 'filemime',
    'timestamp' => 'timestamp',
  );
  $handler->display->display_options['style_options']['default'] = 'timestamp';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'filename' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uri' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'fid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'count' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'module' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'filemime' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Bulk operations: File */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'file_managed';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_archive_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'scheme' => 'public',
        'temporary' => 1,
      ),
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::auto_entitylabel_entity_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_file_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: File: Name */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';
  $handler->display->display_options['fields']['filename']['label'] = 'File name';
  $handler->display->display_options['fields']['filename']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['filename']['alter']['ellipsis'] = FALSE;
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  /* Field: File: File ID */
  $handler->display->display_options['fields']['fid']['id'] = 'fid';
  $handler->display->display_options['fields']['fid']['table'] = 'file_managed';
  $handler->display->display_options['fields']['fid']['field'] = 'fid';
  /* Field: File Usage: Entity ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'file_usage';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = 'nid';
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: File Usage: Use count */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'file_usage';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  /* Field: File Usage: Entity type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'file_usage';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: File Usage: Module */
  $handler->display->display_options['fields']['module']['id'] = 'module';
  $handler->display->display_options['fields']['module']['table'] = 'file_usage';
  $handler->display->display_options['fields']['module']['field'] = 'module';
  /* Field: File: Mime type */
  $handler->display->display_options['fields']['filemime']['id'] = 'filemime';
  $handler->display->display_options['fields']['filemime']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filemime']['field'] = 'filemime';
  /* Field: File: Upload date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'file_managed';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['timestamp']['custom_date_format'] = 'm/d/Y';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['timestamp']['format_date_sql'] = 0;
  /* Filter criterion: File: Name */
  $handler->display->display_options['filters']['filename']['id'] = 'filename';
  $handler->display->display_options['filters']['filename']['table'] = 'file_managed';
  $handler->display->display_options['filters']['filename']['field'] = 'filename';
  $handler->display->display_options['filters']['filename']['operator'] = 'contains';
  $handler->display->display_options['filters']['filename']['exposed'] = TRUE;
  $handler->display->display_options['filters']['filename']['expose']['operator_id'] = 'filename_op';
  $handler->display->display_options['filters']['filename']['expose']['label'] = 'File name';
  $handler->display->display_options['filters']['filename']['expose']['operator'] = 'filename_op';
  $handler->display->display_options['filters']['filename']['expose']['identifier'] = 'filename';
  $handler->display->display_options['filters']['filename']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: File: Path */
  $handler->display->display_options['filters']['uri']['id'] = 'uri';
  $handler->display->display_options['filters']['uri']['table'] = 'file_managed';
  $handler->display->display_options['filters']['uri']['field'] = 'uri';
  $handler->display->display_options['filters']['uri']['operator'] = 'contains';
  $handler->display->display_options['filters']['uri']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uri']['expose']['operator_id'] = 'uri_op';
  $handler->display->display_options['filters']['uri']['expose']['label'] = 'Path';
  $handler->display->display_options['filters']['uri']['expose']['operator'] = 'uri_op';
  $handler->display->display_options['filters']['uri']['expose']['identifier'] = 'uri';
  $handler->display->display_options['filters']['uri']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: File Usage: Entity ID */
  $handler->display->display_options['filters']['id']['id'] = 'id';
  $handler->display->display_options['filters']['id']['table'] = 'file_usage';
  $handler->display->display_options['filters']['id']['field'] = 'id';
  $handler->display->display_options['filters']['id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['id']['expose']['operator_id'] = 'id_op';
  $handler->display->display_options['filters']['id']['expose']['label'] = 'nid';
  $handler->display->display_options['filters']['id']['expose']['operator'] = 'id_op';
  $handler->display->display_options['filters']['id']['expose']['identifier'] = 'id';
  $handler->display->display_options['filters']['id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    8 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/file-management';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'File Management';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['file_management'] = $view;

  $view = new view();
  $view->name = 'help_links';
  $view->description = 'Simple set of links to documentation, orders, and reports.';
  $view->tag = 'catman';
  $view->base_table = 'node';
  $view->human_name = 'Help links';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Quick links - store manager';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: placeholder to make view validate */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'placeholder to make view validate';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: List of hardcoded links */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'List of hardcoded links';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<ul class="menu">
  <li><a href="https://docs.google.com/a/oregonstate.edu/document/d/1s-hdDL5Kgu5D20LDFIpw-IviHNQvPZv2FW3iPKy3go0/edit?usp=sharing">Catman user guide</a></li>
<li><a href="../admin/commerce/reports/catman">Catman reports</a></li>
<li><a href="../admin/commerce/reports/catman/review">Periodic review - date published or revised</a></li>
<li><a href="../admin/commerce/reports/catman/review-date">Periodic review - date reviewed</a></li>
<li><a href="../node/add/osu-catalog-publication">Add new project</a></li>
<li><a href="../node/add/author">Add author</a></li>
</ul>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Filter criterion: Content: Author uid */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'node';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => '1',
  );

  /* Display: Block - store manager */
  $handler = $view->new_display('block', 'Block - store manager', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: placeholder to make view validate */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'placeholder to make view validate';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: List of hardcoded links */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'List of hardcoded links';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<ul class="menu">
  <li><a href="https://docs.google.com/a/oregonstate.edu/document/d/1s-hdDL5Kgu5D20LDFIpw-IviHNQvPZv2FW3iPKy3go0/edit?usp=sharing">Catman user guide</a></li>
<li><a href="../admin/commerce/reports/catman">Catman reports</a></li>
<li><a href="../node/add/osu-catalog-publication">Add new project</a></li>
<li><a href="../node/add/author">Add author</a></li>
<li><a href="../admin/commerce/reports/catman/review">Periodic review - date published or revised</a></li>
<li><a href="../admin/commerce/reports/catman/review-date">Periodic review - date reviewed</a></li>
</ul>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $export['help_links'] = $view;

  $view = new view();
  $view->name = 'help_links_pm';
  $view->description = 'Simple set of links to documentation, orders, and reports.';
  $view->tag = 'catman';
  $view->base_table = 'node';
  $view->human_name = 'Help links - project manager';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Quick links - project manager';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: placeholder to make view validate */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'placeholder to make view validate';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: List of hardcoded links */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'List of hardcoded links';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<ul class="menu">
  <li><a href="https://docs.google.com/a/oregonstate.edu/document/d/1s-hdDL5Kgu5D20LDFIpw-IviHNQvPZv2FW3iPKy3go0/edit?usp=sharing">Catman user guide</a></li>
<li><a href="../admin/commerce/reports/catman/review">Periodic review - date published or revised</a></li>
<li><a href="../admin/commerce/reports/catman/review-date">Periodic review - date reviewed</a></li>
<li><a href="../node/add/osu-catalog-publication">Add project</a></li>
<li><a href="../node/add/author">Add author</a></li>
</ul>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Filter criterion: Content: Author uid */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'node';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => '1',
  );

  /* Display: Block - project manager */
  $handler = $view->new_display('block', 'Block - project manager', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: placeholder to make view validate */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'placeholder to make view validate';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: List of hardcoded links */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'List of hardcoded links';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<ul class="menu">
  <li><a href="https://docs.google.com/a/oregonstate.edu/document/d/1s-hdDL5Kgu5D20LDFIpw-IviHNQvPZv2FW3iPKy3go0/edit?usp=sharing">Catman user guide</a></li>
<li><a href="../node/add/osu-catalog-publication">Add project</a></li>
<li><a href="../node/add/author">Add author</a></li>
<li><a href="../admin/commerce/reports/catman/review">Periodic review - date published or revised</a></li>
<li><a href="../admin/commerce/reports/catman/review-date">Periodic review - date reviewed</a></li>
</ul>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $export['help_links_pm'] = $view;

  return $export;
}
