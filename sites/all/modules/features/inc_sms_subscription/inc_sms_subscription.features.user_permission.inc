<?php
/**
 * @file
 * inc_sms_subscription.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function inc_sms_subscription_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create sms_subscriber content'.
  $permissions['create sms_subscriber content'] = array(
    'name' => 'create sms_subscriber content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'non-authenticated user' => 'non-authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any sms_subscriber content'.
  $permissions['delete any sms_subscriber content'] = array(
    'name' => 'delete any sms_subscriber content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own sms_subscriber content'.
  $permissions['delete own sms_subscriber content'] = array(
    'name' => 'delete own sms_subscriber content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any sms_subscriber content'.
  $permissions['edit any sms_subscriber content'] = array(
    'name' => 'edit any sms_subscriber content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own sms_subscriber content'.
  $permissions['edit own sms_subscriber content'] = array(
    'name' => 'edit own sms_subscriber content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
