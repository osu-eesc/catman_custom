(function ($) {
  Drupal.behaviors.catman_custom = {
    attach: function (context, settings) {

      var str = window.location.pathname;

      $("a.magic-link").click(function() {
        var magicLink = str + "/view";
        ga("send", "event", "Downloads", "Magic-links", magicLink);
        //alert("And the Magic link is: " + magicLink);
      });
      $("a.magic-link-pdf").click(function() {
        var magicLink = str.replace("/viewfile", "");
        ga("send", "event", "Downloads", "Magic-files", "/files/project/pdf" + magicLink + ".pdf");
        //alert("And the PDF magic file is: " + magicLink);
      });
      $("a.magic-link-epub").click(function() {
        var magicLink = str.replace("/epub", "");
        ga("send", "event", "Downloads", "Magic-files", "/files/project/epub" + magicLink + ".epub");
        //alert("And the ePub magic file is: " + magicLink);
      });
      $("a.magic-link-preview").click(function() {
        var magicLink = str.replace("/preview", "");
        ga("send", "event", "Downloads", "Magic-files", "/files/project/preview" + magicLink + ".pdf");
        //alert("And the Preview magic file is" + magicLink);
      });
      $("a.magic-link-excel").click(function() {
        var magicLink = str.replace("/excel", "");
        ga("send", "event", "Downloads", "Magic-files", "/files/project/excel" + magicLink + ".xlsx");
        //alert("And the Excel magic file is: " + magicLink);
      });

    }
  };
})(jQuery);
