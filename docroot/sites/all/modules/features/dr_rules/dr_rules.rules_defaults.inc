<?php
/**
 * @file
 * dr_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function dr_rules_default_rules_configuration() {
  $items = array();
  $items['rules_add_content_redirect_to_login_node_add'] = entity_import('rules_config', '{ "rules_add_content_redirect_to_login_node_add" : {
      "LABEL" : "Add content redirect to login - Node add",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "init" ],
      "IF" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "1" : "1" } }
          }
        },
        { "text_matches" : {
            "text" : [ "site:current-page:path" ],
            "match" : "node\\/add",
            "operation" : "starts"
          }
        }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "In order to post on the site, please create an account or login." } },
        { "redirect" : { "url" : "user\\/login", "destination" : 1 } }
      ]
    }
  }');
  $items['rules_add_content_redirect_to_login_housing_available'] = entity_import('rules_config', '{ "rules_add_content_redirect_to_login_housing_available" : {
      "LABEL" : "Add content redirect to login - housing available",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "init" ],
      "IF" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "1" : "1" } }
          }
        },
        { "text_matches" : {
            "text" : [ "site:current-page:path" ],
            "match" : "housing-available\\/",
            "operation" : "starts"
          }
        }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "In order to post on the site, please create an account or login." } },
        { "redirect" : { "url" : "user\\/login", "destination" : 1 } }
      ]
    }
  }');
  $items['rules_add_content_redirect_to_login_housing_required'] = entity_import('rules_config', '{ "rules_add_content_redirect_to_login_housing_required" : {
      "LABEL" : "Add content redirect to login - housing required",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "init" ],
      "IF" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "1" : "1" } }
          }
        },
        { "text_matches" : {
            "text" : [ "site:current-page:path" ],
            "match" : "housing-request\\/",
            "operation" : "starts"
          }
        }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "In order to post on the site, please create an account or login." } },
        { "redirect" : { "url" : "user\\/login", "destination" : 1 } }
      ]
    }
  }');
  $items['rules_add_content_redirect_to_login_ride_request'] = entity_import('rules_config', '{ "rules_add_content_redirect_to_login_ride_request" : {
      "LABEL" : "Add content redirect to login - ride-request",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "init" ],
      "IF" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "1" : "1" } }
          }
        },
        { "text_matches" : {
            "text" : [ "site:current-page:path" ],
            "match" : "ride-request\\/",
            "operation" : "starts"
          }
        }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "In order to post on the site, please create an account or login." } },
        { "redirect" : { "url" : "user\\/login", "destination" : 1 } }
      ]
    }
  }');
  return $items;
}
