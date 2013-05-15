<?php

/**
 * @file
 * Takes care of admin parts of ting_openuserstatus
 */

/**
 * Implements hook_form_FORM_ID_alter (ting_client_admin_webservices_settings)
 * adds 1 field to webservice client settings at admin/config/serviceclient/settings
 * @url to OpenUserstatus
 * */
function ting_openuserstatus_form_ting_client_admin_webservices_settings_alter(&$form, &$form_state) {
  $form['ting']['openuserstatus_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Openuserstatus URL', array(), array('context' => 'ting_openuserstatus')),
    '#description' => t('URL to Openuserstatus e.g. http://openuserstatus.addi.dk/1.1/'),
    '#required' => TRUE,
    '#default_value' => variable_get('openuserstatus_url', FALSE),
  );
}