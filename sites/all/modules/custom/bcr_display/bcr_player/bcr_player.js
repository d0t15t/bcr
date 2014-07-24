Drupal.behaviors.bcr_player = {
  attach: function (context, settings) {

    $("#jquery_jplayer_1").jPlayer({

      ready: function () {
        $(this).jPlayer("setMedia", {
          oga: "http://berlincommunityradio.out.airtime.pro:8000/berlincommunityradio_a"
        }).jPlayer("play");
      },

      ended: function (event) {
        $(this).jPlayer("play");
      },

      swfPath: "js",
      supplied: "oga"

    });


  }
};