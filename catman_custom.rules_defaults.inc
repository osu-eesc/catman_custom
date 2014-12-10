<?php
/**
 * @file
 * catman_custom.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function catman_custom_default_rules_configuration() {
  $items = array();
  $items['rules_redirect_catman_users_to_workbench'] = entity_import('rules_config', '{ "rules_redirect_catman_users_to_workbench" : {
      "LABEL" : "Redirect Catman users to workbench page after login",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "catman" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "7" : "7", "4" : "4", "3" : "3" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "admin\\/workbench" } } ]
    }
  }');
  return $items;
}
