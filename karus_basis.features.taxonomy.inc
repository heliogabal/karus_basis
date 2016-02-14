<?php
/**
 * @file
 * karus_basis.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function karus_basis_taxonomy_default_vocabularies() {
  return array(
    'link_kategorie' => array(
      'name' => 'Link-Kategorie',
      'machine_name' => 'link_kategorie',
      'description' => 'Hiermit lassen sich die Links auf der Link-Seite gruppieren',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
