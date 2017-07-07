<?php
/**
 * @file
 * karus_basis.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function karus_basis_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function karus_basis_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function karus_basis_node_info() {
  $items = array(
    'page' => array(
      'name' => t('statische Seite'),
      'base' => 'node_content',
      'description' => t('statische Seiten sind das Standardelement für neue Inhalte. Sie beinhalten Text und Bilder, die Wahl des Bannerbildes und einen optionalen Menupunkt.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'standort' => array(
      'name' => t('Standort'),
      'base' => 'node_content',
      'description' => t('Ein Standort wird in der Karte und im Footer verwendet.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function karus_basis_default_search_api_index() {
  $items = array();
  $items['volltextsuche'] = entity_import('search_api_index', '{
    "name" : "Volltextsuche",
    "machine_name" : "volltextsuche",
    "description" : null,
    "server" : "db_volltextsuche",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "blogpost", "download", "link", "page" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:summary" : { "type" : "text", "boost" : "3.0" },
        "body:value" : { "type" : "text", "boost" : "2.0" },
        "field_datei:file" : { "type" : "integer", "entity_type" : "file" },
        "field_link:url" : { "type" : "uri" },
        "field_tags:description" : { "type" : "list\\u003Ctext\\u003E" },
        "field_tags:name" : { "type" : "list\\u003Ctext\\u003E" },
        "is_new" : { "type" : "boolean" },
        "nid" : { "type" : "integer" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
        "search_api_language" : { "type" : "string" },
        "search_api_url" : { "type" : "uri" },
        "status" : { "type" : "boolean" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "type" : { "type" : "string" },
        "url" : { "type" : "uri" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "blogpost" : "blogpost" } }
        },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_metatag_alter_callback" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "body:value" : true,
              "body:summary" : true,
              "field_tags:name" : true,
              "field_tags:description" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "body:value" : true,
              "body:summary" : true,
              "field_tags:name" : true,
              "field_tags:description" : true
            },
            "title" : 1,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 1,
          "weight" : "15",
          "settings" : { "fields" : {
              "title" : true,
              "body:value" : true,
              "body:summary" : true,
              "field_tags:name" : true,
              "field_tags:description" : true
            }
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "body:value" : true,
              "body:summary" : true,
              "field_tags:name" : true,
              "field_tags:description" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 1,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "body:value" : true,
              "body:summary" : true,
              "field_tags:name" : true,
              "field_tags:description" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always",
            "highlight_partial" : 1
          }
        },
        "search_api_porter_stemmer" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "fields" : {
              "title" : true,
              "body:value" : true,
              "body:summary" : true,
              "field_tags:name" : true,
              "field_tags:description" : true
            },
            "exceptions" : "texan=texa"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_page().
 */
function karus_basis_default_search_api_page() {
  $items = array();
  $items['suche'] = entity_import('search_api_page', '{
    "index_id" : "volltextsuche",
    "path" : "suche",
    "name" : "Suche",
    "machine_name" : "suche",
    "description" : null,
    "options" : {
      "mode" : "terms",
      "fields" : [],
      "per_page" : "10",
      "get_per_page" : 0,
      "result_page_search_form" : 1,
      "view_mode" : "search_api_page_result",
      "language_filter" : []
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function karus_basis_default_search_api_server() {
  $items = array();
  $items['db_volltextsuche'] = entity_import('search_api_server', '{
    "name" : "DB Volltextsuche",
    "machine_name" : "db_volltextsuche",
    "description" : "Standard-Suche aller Inhalte der Seite",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "3",
      "partial_matches" : 1,
      "indexes" : { "volltextsuche" : {
          "nid" : {
            "table" : "search_api_db_volltextsuche",
            "column" : "nid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "is_new" : {
            "table" : "search_api_db_volltextsuche",
            "column" : "is_new",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "type" : {
            "table" : "search_api_db_volltextsuche",
            "column" : "type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_volltextsuche_text",
            "type" : "text",
            "boost" : "5.0"
          },
          "url" : {
            "table" : "search_api_db_volltextsuche",
            "column" : "url",
            "type" : "uri",
            "boost" : "1.0"
          },
          "status" : {
            "table" : "search_api_db_volltextsuche",
            "column" : "status",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "author" : {
            "table" : "search_api_db_volltextsuche",
            "column" : "author",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_volltextsuche",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_volltextsuche_text",
            "type" : "text",
            "boost" : "2.0"
          },
          "body:summary" : {
            "table" : "search_api_db_volltextsuche_text",
            "type" : "text",
            "boost" : "3.0"
          },
          "field_tags:name" : {
            "table" : "search_api_db_volltextsuche_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_tags:description" : {
            "table" : "search_api_db_volltextsuche_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_datei:file" : {
            "table" : "search_api_db_volltextsuche",
            "column" : "field_datei_file",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_link:url" : {
            "table" : "search_api_db_volltextsuche",
            "column" : "field_link_url",
            "type" : "uri",
            "boost" : "1.0"
          },
          "search_api_url" : {
            "table" : "search_api_db_volltextsuche",
            "column" : "search_api_url",
            "type" : "uri",
            "boost" : "1.0"
          },
          "search_api_access_node" : {
            "table" : "search_api_db_volltextsuche_search_api_access_node",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
