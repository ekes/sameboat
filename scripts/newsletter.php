<?php

$template_node = node_load(560);

$newsletter = new stdClass();
$newsletter->title = token_replace($template->simplenews_scheduler->title);
$title = field_view_value('node', $template_node, 'field_issue_title', $template_node->field_issue_title['und'][0]);
$newsletter->title = token_replace($title['#markup']);
$newsletter->status = 1;
$newsletter->type = 'simplenews';
$newsletter->taxonomy_vocabulary_2 = $template_node->taxonomy_vocabulary_2;
$header = field_view_value('node', $template_node, 'field_header', $template_node->field_header['und'][0]);
$footer = field_view_value('node', $template_node, 'field_footer', $template_node->field_footer['und'][0]);
list($view_name, $view_display) = explode('|', $template_node->field_bulletin_view[und][0]['vname']);
$view = views_embed_view($view_name, $view_display);
$newsletter->body['und'][0]['value'] = drupal_html_to_text($header['#markup'] . $view . $footer['#markup']);
node_save($newsletter);

// Send
  module_load_include('inc', 'simplenews', 'includes/simplenews.mail');
  simplenews_add_node_to_spool($newsletter);
  simplenews_mail_attempt_immediate_send(array('nid' => $newsletter->nid));
