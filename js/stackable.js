(function($) {

  Drupal.behaviors.stacktable = {
    attach: function(context, settings) {
      var table = settings.hivqld.table;

      $(table).once("stacktable", function() {
        $(table, context).stacktable();
      });
    }
  };

}(jQuery));

