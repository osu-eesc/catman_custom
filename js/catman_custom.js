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

$('a.magic-link-pdf').on('click', function() {
  var str = window.location.pathname;
  var magicLink = str.replace('/viewfile', '');
  ga('send', 'event', 'Downloads', 'action', {'pdf': '/files/project/pdf/' + magicLink + '.pdf'});
});

$('a.magic-link-epub').on('click', function() {
  var str = window.location.pathname;
  var magicLink = str.replace('/epub', '');
  ga('send', 'event', 'Downloads', 'action', {'epub': '/files/project/epub/' + magicLink + '.epub'});
});

$('a.magic-link-preview').on('click', function() {
  var str = window.location.pathname;
  var magicLink = str.replace('/preview', '');
  ga('send', 'event', 'Downloads', 'action', {'pdf': '/files/project/preview' + magicLink + '.pdf'});
});

$('a.magic-link-excel').on('click', function() {
  var str = window.location.pathname;
  var magicLink = str.replace('/excel', '');
  ga('send', 'event', 'Downloads', 'action', {'excel': '/files/project/' + magicLink + '.xlsx'});
});
