<?php
/**
 * @file
 * inc_sms_blast.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function inc_sms_blast_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'eck add bundles'.
  $permissions['eck add bundles'] = array(
    'name' => 'eck add bundles',
    'roles' => array(
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add entities'.
  $permissions['eck add entities'] = array(
    'name' => 'eck add entities',
    'roles' => array(
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add entity types'.
  $permissions['eck add entity types'] = array(
    'name' => 'eck add entity types',
    'roles' => array(
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add inc_blast_sms bundles'.
  $permissions['eck add inc_blast_sms bundles'] = array(
    'name' => 'eck add inc_blast_sms bundles',
    'roles' => array(
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add inc_blast_sms event_blast entities'.
  $permissions['eck add inc_blast_sms event_blast entities'] = array(
    'name' => 'eck add inc_blast_sms event_blast entities',
    'roles' => array(
      'bulletin administrator' => 'bulletin administrator',
      'content moderator' => 'content moderator',
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add inc_blast_sms location_blast entities'.
  $permissions['eck add inc_blast_sms location_blast entities'] = array(
    'name' => 'eck add inc_blast_sms location_blast entities',
    'roles' => array(
      'bulletin administrator' => 'bulletin administrator',
      'content moderator' => 'content moderator',
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add inc_blast_sms topic_blast entities'.
  $permissions['eck add inc_blast_sms topic_blast entities'] = array(
    'name' => 'eck add inc_blast_sms topic_blast entities',
    'roles' => array(
      'bulletin administrator' => 'bulletin administrator',
      'content moderator' => 'content moderator',
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer bundles'.
  $permissions['eck administer bundles'] = array(
    'name' => 'eck administer bundles',
    'roles' => array(
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer entities'.
  $permissions['eck administer entities'] = array(
    'name' => 'eck administer entities',
    'roles' => array(
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer entity types'.
  $permissions['eck administer entity types'] = array(
    'name' => 'eck administer entity types',
    'roles' => array(
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer inc_blast_sms bundles'.
  $permissions['eck administer inc_blast_sms bundles'] = array(
    'name' => 'eck administer inc_blast_sms bundles',
    'roles' => array(
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer inc_blast_sms event_blast entities'.
  $permissions['eck administer inc_blast_sms event_blast entities'] = array(
    'name' => 'eck administer inc_blast_sms event_blast entities',
    'roles' => array(
      'content moderator' => 'content moderator',
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer inc_blast_sms location_blast entities'.
  $permissions['eck administer inc_blast_sms location_blast entities'] = array(
    'name' => 'eck administer inc_blast_sms location_blast entities',
    'roles' => array(
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer inc_blast_sms topic_blast entities'.
  $permissions['eck administer inc_blast_sms topic_blast entities'] = array(
    'name' => 'eck administer inc_blast_sms topic_blast entities',
    'roles' => array(
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete bundles'.
  $permissions['eck delete bundles'] = array(
    'name' => 'eck delete bundles',
    'roles' => array(
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete entities'.
  $permissions['eck delete entities'] = array(
    'name' => 'eck delete entities',
    'roles' => array(
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete entity types'.
  $permissions['eck delete entity types'] = array(
    'name' => 'eck delete entity types',
    'roles' => array(
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete inc_blast_sms bundles'.
  $permissions['eck delete inc_blast_sms bundles'] = array(
    'name' => 'eck delete inc_blast_sms bundles',
    'roles' => array(
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete inc_blast_sms event_blast entities'.
  $permissions['eck delete inc_blast_sms event_blast entities'] = array(
    'name' => 'eck delete inc_blast_sms event_blast entities',
    'roles' => array(
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete inc_blast_sms location_blast entities'.
  $permissions['eck delete inc_blast_sms location_blast entities'] = array(
    'name' => 'eck delete inc_blast_sms location_blast entities',
    'roles' => array(
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete inc_blast_sms topic_blast entities'.
  $permissions['eck delete inc_blast_sms topic_blast entities'] = array(
    'name' => 'eck delete inc_blast_sms topic_blast entities',
    'roles' => array(
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit bundles'.
  $permissions['eck edit bundles'] = array(
    'name' => 'eck edit bundles',
    'roles' => array(
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit entities'.
  $permissions['eck edit entities'] = array(
    'name' => 'eck edit entities',
    'roles' => array(
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit entity types'.
  $permissions['eck edit entity types'] = array(
    'name' => 'eck edit entity types',
    'roles' => array(
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit inc_blast_sms bundles'.
  $permissions['eck edit inc_blast_sms bundles'] = array(
    'name' => 'eck edit inc_blast_sms bundles',
    'roles' => array(
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit inc_blast_sms event_blast entities'.
  $permissions['eck edit inc_blast_sms event_blast entities'] = array(
    'name' => 'eck edit inc_blast_sms event_blast entities',
    'roles' => array(
      'content moderator' => 'content moderator',
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit inc_blast_sms location_blast entities'.
  $permissions['eck edit inc_blast_sms location_blast entities'] = array(
    'name' => 'eck edit inc_blast_sms location_blast entities',
    'roles' => array(
      'content moderator' => 'content moderator',
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit inc_blast_sms topic_blast entities'.
  $permissions['eck edit inc_blast_sms topic_blast entities'] = array(
    'name' => 'eck edit inc_blast_sms topic_blast entities',
    'roles' => array(
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list bundles'.
  $permissions['eck list bundles'] = array(
    'name' => 'eck list bundles',
    'roles' => array(
      'bulletin administrator' => 'bulletin administrator',
      'content moderator' => 'content moderator',
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list entities'.
  $permissions['eck list entities'] = array(
    'name' => 'eck list entities',
    'roles' => array(
      'bulletin administrator' => 'bulletin administrator',
      'content moderator' => 'content moderator',
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list entity types'.
  $permissions['eck list entity types'] = array(
    'name' => 'eck list entity types',
    'roles' => array(
      'bulletin administrator' => 'bulletin administrator',
      'content moderator' => 'content moderator',
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list inc_blast_sms bundles'.
  $permissions['eck list inc_blast_sms bundles'] = array(
    'name' => 'eck list inc_blast_sms bundles',
    'roles' => array(
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list inc_blast_sms event_blast entities'.
  $permissions['eck list inc_blast_sms event_blast entities'] = array(
    'name' => 'eck list inc_blast_sms event_blast entities',
    'roles' => array(
      'bulletin administrator' => 'bulletin administrator',
      'content moderator' => 'content moderator',
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list inc_blast_sms location_blast entities'.
  $permissions['eck list inc_blast_sms location_blast entities'] = array(
    'name' => 'eck list inc_blast_sms location_blast entities',
    'roles' => array(
      'bulletin administrator' => 'bulletin administrator',
      'content moderator' => 'content moderator',
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list inc_blast_sms topic_blast entities'.
  $permissions['eck list inc_blast_sms topic_blast entities'] = array(
    'name' => 'eck list inc_blast_sms topic_blast entities',
    'roles' => array(
      'bulletin administrator' => 'bulletin administrator',
      'content moderator' => 'content moderator',
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view entities'.
  $permissions['eck view entities'] = array(
    'name' => 'eck view entities',
    'roles' => array(
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view inc_blast_sms bundles'.
  $permissions['eck view inc_blast_sms bundles'] = array(
    'name' => 'eck view inc_blast_sms bundles',
    'roles' => array(
      'bulletin administrator' => 'bulletin administrator',
      'content moderator' => 'content moderator',
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view inc_blast_sms event_blast entities'.
  $permissions['eck view inc_blast_sms event_blast entities'] = array(
    'name' => 'eck view inc_blast_sms event_blast entities',
    'roles' => array(
      'bulletin administrator' => 'bulletin administrator',
      'content moderator' => 'content moderator',
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view inc_blast_sms location_blast entities'.
  $permissions['eck view inc_blast_sms location_blast entities'] = array(
    'name' => 'eck view inc_blast_sms location_blast entities',
    'roles' => array(
      'bulletin administrator' => 'bulletin administrator',
      'content moderator' => 'content moderator',
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view inc_blast_sms topic_blast entities'.
  $permissions['eck view inc_blast_sms topic_blast entities'] = array(
    'name' => 'eck view inc_blast_sms topic_blast entities',
    'roles' => array(
      'bulletin administrator' => 'bulletin administrator',
      'content moderator' => 'content moderator',
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'manage inc_blast_sms properties'.
  $permissions['manage inc_blast_sms properties'] = array(
    'name' => 'manage inc_blast_sms properties',
    'roles' => array(
      'technical administrator' => 'technical administrator',
    ),
    'module' => 'eck',
  );

  return $permissions;
}
