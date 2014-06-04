
        <meta charset="UTF-8 " />
        <meta name="build-version" content="112"/> 

        <title>ERoulette</title>

        <meta name="viewport" content="initial-scale=1, maximum-scale=1, minimum-scale=1, user-scalable=0" />
        <meta name="format-detection" content="telephone=no">
        <meta name="apple-mobile-web-app-capable" content="yes">

        <script type="text/javascript">
            var appBasePath = 'minieuropeanroulette/';
            /* Media Styles loading */
            (function(){
                var mediaStorageUrl = ((typeof ContentBaseUrl === 'undefined')? appBasePath : ContentBaseUrl).toString().replace(/\/+$/,'') + '/';
                var linkEl = document.createElement('link');

                linkEl.type = "text/css";
                linkEl.rel = "stylesheet";
                linkEl.href = mediaStorageUrl + 'styles/main.css';

                document.getElementsByTagName("head")[0].appendChild(linkEl);

            })();

        </script>

	    <style type="text/css">
	    	/* This styles used for JS manipulation to fit application to the proper place */
			/* Portrait */
			@media (max-aspect-ratio: 4/3)
			{
				#tapTrackHolder{}
			}
			/* Landscape */
			@media (min-aspect-ratio: 4/3)
			{
				#tapTrackHolder{}
			}
		</style>

        <script type="text/javascript" data-main="minieuropeanroulette/scripts/main" src="minieuropeanroulette/scripts/require.js"></script>
		

    <script>

        var mediaStorageUrl;
        //If the value of CashierUrl comes from portal - left it as is. otherwise - use AccountUrl instead.
        if(typeof CashierUrl === 'undefined'){
            var CashierUrl = AccountUrl;
        }

        (function(){

        if(typeof RTPValue == "undefined") {
            window.RTPValue = '';
        }
        if(!RTPValue) {
            RTPValue = '97.30';
            switch (CASINO_SKIN_BRAND_ID){
                case "DS":
                    RTPValue = RTPValue.toString().split('.').join(',');
                    break;
            }
        }
        RTPValue+='%';


        var appBasePath = 'minieuropeanroulette/';
        mediaStorageUrl = ((typeof ContentBaseUrl === 'undefined')? appBasePath : ContentBaseUrl).toString().replace(/\/+$/,'') + '/';
        var docFragment = document.createDocumentFragment(),
                linkFavicon = document.createElement('link'),
                linkFaviconIOS = document.createElement('link'),
                linkFaviconIOSiPad = document.createElement('link'),
                linkShortcutIcon = document.createElement('link');

        linkFavicon.rel = 'icon';
        linkFavicon.type = 'image/x-icon';
        linkFavicon.href = mediaStorageUrl + 'img/brands/' + CASINO_SKIN_BRAND_ID + '/ico/favicon.ico';
        docFragment.appendChild(linkFavicon);

        linkShortcutIcon.rel = 'icon';
        linkShortcutIcon.type = 'shortcut icon';
        linkShortcutIcon.href = mediaStorageUrl + 'img/brands/' + CASINO_SKIN_BRAND_ID + '/ico/icon-144.png';
        docFragment.appendChild(linkShortcutIcon);

        linkFaviconIOS.rel = 'apple-touch-icon';
        linkFaviconIOS.sizes = '144x144';
        linkFaviconIOS.href = mediaStorageUrl + 'img/brands/' + CASINO_SKIN_BRAND_ID + '/ico/icon-144.png';
        docFragment.appendChild(linkFaviconIOS);

        linkFaviconIOSiPad.rel = 'apple-touch-icon-precomposed';
        linkFaviconIOSiPad.sizes = '144x144';
        linkFaviconIOSiPad.href = mediaStorageUrl + 'img/brands/' + CASINO_SKIN_BRAND_ID + '/ico/icon-144.png';
        docFragment.appendChild(linkFaviconIOSiPad);

        document.getElementsByTagName("head")[0].appendChild(docFragment);
        })();
    </script>
        <style type="text/css">
            body {
                margin: 0;
                padding: 0;
            }

            noscript {
                width: 100%;
                height: 100%;
                position: absolute;
                background: #fff;
            }

            noscript > div {
                border: 1px solid #666;
                border-radius: 10px;
                max-width: 60%;
                min-width:  100px;

                /*margin: 0 auto;*/
                top: 30%;
                padding: 50px 50px;
                background-size: auto 100%;
                display: block;
                text-align: center;
                margin:  50px auto;
            }
        </style>
    