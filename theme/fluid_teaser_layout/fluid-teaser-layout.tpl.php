<?php
/**
 * @file
 * Display Suite Fluid Teaser Layout template.
 *
 * Available variables:
 *
 * Layout:
 * - $classes: String of classes that can be used to style this layout.
 * - $contextual_links: Renderable array of contextual links.
 * - $layout_wrapper: wrapper surrounding the layout.
 *
 * Regions:
 *
 * - $image: Rendered content for the "Image" region.
 * - $image_classes: String of classes that can be used to style the "Image" region.
 *
 * - $contents: Rendered content for the "Contents" region.
 * - $contents_classes: String of classes that can be used to style the "Contents" region.
 */
?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes;?> clearfix">

  <!-- Needed to activate contextual links -->
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <div class="row-fluid fluid-teaser-row">
    <<?php print $image_wrapper; ?> class="span2 image <?php print $image_classes; ?>">
      <?php print $image; ?>
    </<?php print $image_wrapper; ?>>

    <<?php print $contents_wrapper; ?> class="span10 contents <?php print $contents_classes; ?>">
      <?php print $contents; ?>
    </<?php print $contents_wrapper; ?>>
  </div>

</<?php print $layout_wrapper ?>>

<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
