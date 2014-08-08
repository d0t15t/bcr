<script type="text/javascript">
  //<![CDATA[

  $(document).ready(function(){

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

  });

  //]]>
</script>
<img class="bcr-logo" src="/sites/all/modules/custom/jplayer/bcr-logo.png">
<div id="jquery_jplayer_1" class="jp-jplayer"></div>
<div class="jp-audio">

  <div class="jp-type-single">

    <div id="jp_interface_1" class="jp-interface">

      <span class="bcr-logo"></span>

      <ul class="jp-controls">
        <li><a href="#" class="jp-play" tabindex="1">play</a></li>
        <li><a href="#" class="jp-pause" tabindex="1">pause</a></li>
        <li><a href="#" class="jp-mute" tabindex="1">mute</a></li>
        <li><a href="#" class="jp-unmute" tabindex="1">unmute</a></li>
      </ul>
    </div>
    <div id="jp_playlist_1" class="jp-playlist">
    </div>
  </div>
</div>
