<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function commons_event_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_event_details
  $groups['event-group_event_details'] = array(
    'group_type' => 'standard',
    'type_name' => 'event',
    'group_name' => 'group_event_details',
    'label' => 'Event details',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-2',
        '4' => array(
          'format' => 'simple',
          'exclude' => 0,
        ),
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
      ),
    ),
    'weight' => '-4',
    'fields' => array(
      '0' => 'field_date',
      '1' => 'field_location',
    ),
  );

  // Exported group: group_images
  $groups['event-group_images'] = array(
    'group_type' => 'standard',
    'type_name' => 'event',
    'group_name' => 'group_images',
    'label' => 'Images',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-1',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'label' => 'above',
        'teaser' => array(
          'format' => 'no_style',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'no_style',
          'exclude' => 1,
        ),
        'description' => '',
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-2',
    'fields' => array(
      '0' => 'field_content_images',
    ),
  );

  // Exported group: group_promote_content
  $groups['event-group_promote_content'] = array(
    'group_type' => 'standard',
    'type_name' => 'event',
    'group_name' => 'group_promote_content',
    'label' => 'Promote content',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '0',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '0',
    'fields' => array(
      '0' => 'field_group_sticky',
      '1' => 'field_featured_content',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Event details');
  t('Images');
  t('Promote content');

  return $groups;
}
