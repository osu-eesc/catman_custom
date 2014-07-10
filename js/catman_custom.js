(function ($) {

  // Add a spinner on quantity widget.
  //Drupal.behaviors.quantityWidgetSpinner = {
    Drupal.behaviors.doug_fir_catalog = {
    attach: function ( context, settings ) {
      $('.form-item-quantity input').spinner({
        min: 1,
        max: 9999,
        increment: 'fast'
      });
    }
  }
})(jQuery);