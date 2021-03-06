<?php

/**
 * Override theme_breadrumb().
 *
 * Print breadcrumbs as a list, with separators.
 */
function paraneue_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];

  if (!empty($breadcrumb)) {
    $breadcrumbs = '<nav class="breadcrumbs"><ul>';
    
    $count = count($breadcrumb) - 1;
    foreach ($breadcrumb as $key => $value) {
      if ($count != $key) {
        $breadcrumbs .= '<li>' . $value . '</li>';
      }
      else{
        $breadcrumbs .= '<li>' . $value . '</li>';
      }
    }
    $breadcrumbs .= '</ul></nav>';
    
    return $breadcrumbs;
  }
}