
    <noscript><div>You will need to  <b>enable Javascript</b> in your browser to view this content.</div></noscript>
    	
    	<div id="appWrapper">

            <div id="lobbyView">

                <div id="loader">
                    <div id="info">
                        <div id="spiner"></div>
                        <span class="loading" data-resxkey='common.loading'></span>
                        <span class="initializing none" data-resxkey='common.initializing'></span>
                    </div>
                </div>

                <div id="lobby">
                    <a href="javascript:void(0)" class="float-r secondary_button" id="account" data-resxkey='common.account'>Account</a>
                    <a href="javascript:void(0)" class="float-l secondary_button" id="home" data-resxkey='common.home'>Home</a>
                    <div id="lobbyLogo"></div>
                    <div id="enter_buttons_holder">
                        <a href="javascript:void(0)" class="main_button" id="forreal"></a>
                        <a href="javascript:void(0)" class="main_button" id="forfun"></a>
                    </div>
                    <span id="licens">Udbydes af Danske Licens Spil A/S</span>
                </div>

            </div>

        </div>

        <div id="incorrectSizeMsg"></div>

    	<section id="templates">
<script type="text/template" id="chipBoardTpl">
    <div class="chips_wrapper">
        <div class="cover back"></div>
        <div class="cover next"></div>
        <div class="chips_slider_container" id="chipsScroll">
            <ul id="scroller">
                <% _.each(chipsList, function(chip, id) { %>
                    <li><a href="javascript:void(0)" id="<%= chip.cid %>" class="chips <%= 'chip' + (id%6) %> <%= (chip.selected)?'selected':'' %>"><%= chip.showedValue %></a></li>
                <% }); %>
            </ul>
        </div>
    </div>
</script>
<script type="text/template" id="gameTpl">
	
	<div id="gameBody">

        <header id="menu">
            
        </header>

        <div id="helpPage" class="none">

        </div>
        
        <div id="settingsPage" class="none">

        </div>

        <section class="tab">
            <aside>
                <a id="history" class="history_btn_link" href="javascript:void(0)"><span class="history"></span><span class="btn_txt"><%= $.l10n('aside.history') %></span></a>
                <a id="zoom" class="zoom_btn_link" href="javascript:void(0)"><span class="zoom_plus"></span><span class="btn_txt"><%= $.l10n('aside.zoom') %></span></a>
                <div id="chipBoard">

                </div>
            </aside>
            
        </section>



        <section class="tab none">
        	
            <a class="history_btn_link play_wheel_history" href="javascript:void(0)"><span class="history"></span><span class="btn_txt"><%= $.l10n('aside.history') %></span></a>

        </section>
        
        <footer id="gameButtons">
        	
        </footer>
        
    </div>
    
</script>
<script type="text/template" id="gameButtonsTpl">
    <nav>
        <div class="buttons_navigation">
            <div class="nav_block">
                <a href="javascript:void(0)" class="round_btn spin"></a>
                <span><%= $.l10n('gameButtons.spin') %></span>
            </div>
            <div class="boxFlex1"></div>
            <div class="nav_block">
                <a href="javascript:void(0)" class="round_btn double"></a>
                <span><%= $.l10n('gameButtons.double') %></span>
            </div>
            <div class="boxFlex2"></div>
            <div class="nav_block">
                <a href="javascript:void(0)" class="round_btn undo"></a>
                <span><%= $.l10n('gameButtons.undo') %></span>
            </div>
            <div class="boxFlex1"></div>
            <div class="nav_block">
                <a href="javascript:void(0)" class="round_btn clear_bets"></a>
                <span><%= $.l10n('gameButtons.clearBets') %></span>
            </div>
        </div>
        <div class="buttons_navigation none">
            <div class="nav_block">
                <a href="javascript:void(0)" class="round_btn back_to_table"></a>
                <span><%= $.l10n('gameButtons.backToTable') %></span>
            </div>
            <div class="boxFlex1"></div>
            <div class="nav_block">
                <a href="javascript:void(0)" class="round_btn re_bet"></a>
                <span><%= $.l10n('gameButtons.rebetSpin') %></span>
            </div>
            <div class="boxFlex2"></div>
            <div class="nav_block">
                <a href="javascript:void(0)" class="round_btn re_double"></a>
                <span><%= $.l10n('gameButtons.doubleAndSpin') %></span>
            </div>
            <div class="boxFlex1"></div>
            <div class="nav_block">
                <a href="javascript:void(0)" class="round_btn bet"></a>
                <span><%= $.l10n('gameButtons.newBet') %></span>
            </div>
        </div>
    </nav>
	<!--<a href="#" id="spin">Spin</a>&nbsp;<a href="#" id="double">Double</a>&nbsp;<a href="#" id="undo">Undo</a>&nbsp;<a href="#" id="remove_all">Remove all</a>-->
    
</script>
<script type="text/template" id="helpTpl">
    <div class="wrapper">
        <div>
            <div class="help_header"><%= $.l10n('common.gameName') %>&nbsp;<%= $.l10n('rules.rules') %></div>
            <div class="help_scroll_box" id="help_scroll_wrapper">
                <div id="help_scroller">
                <%=content %>
                </div>
            </div>
            <div class="float-l text-c help_button">
                <a href="javascript:void(0)" class="general_button " id="closeHelp"><span><%= $.l10n('rules.backToGame') %></span></a>
            </div>
        </div>
    </div>
</script>
<script type="text/template" id="historyTpl">
    <div class="history_container">
        <div class="history_slider">
            <div class="history_arrow a_left disabled"></div>
                <div class="boxFlex history_wrapper">
                    <div id="historyScroll">
                        <ul class="history_nums">
                        <% _.each(winNumbers, function( number, index ) { %>
                            <li class="cell <%= colors[index] %>"><span><%= number %></span></li>
                        <% }); %>
                        </ul>
                    </div>
                </div>
            <div class="history_arrow a_right disabled"></div>
        </div>
    </div>
</script>
<script type="text/template" id="incorrectSizeMsgTpl">
    <div class="incorrectSizeMsg box-hcenterd">
        <div><%= $.l10n('errors.needToMaximize')%></div>
    </div>
</script>
<script type="text/template" id="menuTpl">
		<header>
            <div class="homeContainer">
			    <a id="menuHome" href="javascript:void(0)"><span><%= $.l10n('common.home') %></span></a>
            </div>
            <div class="boxFlex1"></div>
            <div class="game_info_landscape clockContainer none">
                <span class="time">12:45</span>
            </div>
            <div class="boxFlex1 clockAlign none"></div>
            <div class="totalBet_Balance">

                <div class="game_info_landscape">
                    <label><%= $.l10n('menu.totalBet') %>:</label>
                    <span class="summ totalBet"><%=totalBet%></span>
                </div>
                <div class="game_info_landscape">
                    <label><%= $.l10n('menu.balance') %>:</label>
                    <span class="summ balance"><%=balance%></span>
                </div>
            </div>
            <ul>
                <li><a href="javascript:void(0)" id="reBuy" class="float-r"></a></li>
                <li><a href="javascript:void(0)" id="settings" class="float-r"></a></li>
                <li><a href="javascript:void(0)" id="help" class="float-r"></a></li>
            </ul>
            <div class="game_info_landscape game_id">
                <span class="game_sequence_id"><%=gameSequenceId%></span>
            </div>
            <div class="boxFlex1"></div>
            <div id="logo"></div>
		</header>

		<section>
            <div class="boxFlex1"></div>
            <div id="totalBet">
                <label><%= $.l10n('menu.totalBet') %>:</label>
                <span class="summ totalBet"><%=totalBet%></span>
            </div>
            <div id="gameSequenceId">
                <span class="game_sequence_id"><%=gameSequenceId%></span>
            </div>
            <div id="balance">
                <label><%= $.l10n('menu.balance') %>:</label>
                <span class="summ balance"><%=balance%></span>
            </div>
            <div class="clockContainer none">
                <span class="time">12:45</span>
            </div>
            <div class="boxFlex1"></div>
        </section>
</script>
<script type="text/template" id="modalTpl" xmlns="http://www.w3.org/1999/html">
	
	<div id="modal" class="transparent box-hcenterd">

            <div id="mess_table">
                <div>
                    <div class="tl"></div>
                    <div class="t"></div>
                    <div class="tr"></div>
                </div>

                <div>
                    <div class="ml"></div>

                    <div class="m">
                        <div class="ico">
                            <span><%= message %></span>
                        </div>
                        <div class="none">
                            <div class="box-hcenterd">
                                <div id="spiner"></div>
                            </div>
                        </div>
                        <div id="msg_btns_container">
                            <ul>
                            <% buttons.forEach(function(btnObj){ %>
                                <li>
                                    <a href="javascript:void(0)" class="button modal_button <%= btnObj.text.length > 23 ? 'longText' : '' %>"
                                       id="<%= btnObj.elId %>">
                                        <span><%= btnObj.text %></span>
                                    </a>
                                </li>
                            <%})%>
                            </ul>
                        </div>
                    </div>
                    <div class="mr"></div>
                </div>

                <div>
                    <div class="bl"></div>
                    <div class="b"></div>
                    <div class="br"></div>
                </div>

        </div>
    </div>
    
</script>
<script type="text/template" id="playTableTpl">
	<div id="playTable" class="box-hcenterd">

        <div id="tapTrackHolder">
			
			<div></div>
				
			<div class="playtable_tooltip hidden">
	            <span class="bet"></span>
	            <span class="ratio"></span>
	        </div>
	        
		</div>

	</div>
    <div class="wheelPart"></div>

</script>
<script type="text/template" id="playWheelTpl">

	<div id="playWheel">

		<div class="boxFlex"></div>
		<div id="animation">
			<div id="wheel" class="none"><img/></div>
			<div id="ball" class="none"></div>
		</div>
		<div class="boxFlex2"></div>
		
	</div>
    
</script>
<script type="text/template" id="roundResultTpl">
    <div class="round_result">
        <div class="you_win none">
            <div class="win_text"></div>
            <div class="win_amount"></div>
        </div>
        <div class="win_number <%= winColor %>">
            <% _.each(winNumbers, function( number ) { %>
            <div><%= number %></div>
            <% }); %>
        </div>
    </div>
</script>
<script type="text/template" id="settingsTpl">
    <div class="wrapper">
        <div>
            <div class="help_header"><%= $.l10n('common.gameName') %>&nbsp;<%= $.l10n('settings.settings') %></div>

            <div class="settings_block">
                <div>
                    <div class="turboMode">
                        <div class="text_settings"><%= $.l10n('settings.turboMode')%>:</div>
                        <div class="turbo_trigger">
                            <div>
                                <div class="on_off float-l"><%= $.l10n('settings.on')%></div>
                                <div class="on_off float-r"><%= $.l10n('settings.off')%></div>
                                <div class="trigger"></div>
                            </div>
                        </div>
                    </div>
                    <div class="SFX">
                        <div class="text_settings"><%= $.l10n('settings.SFX')%>:</div>
                        <div class="sfx_trigger">
                            <div>
                                <div class="on_off float-l"><%= $.l10n('settings.on')%></div>
                                <div class="on_off float-r"><%= $.l10n('settings.off')%></div>
                                <div class="trigger"></div>
                            </div>
                        </div>
                    </div>
                </div>
            </div>

            <div class="float-l text-c help_button">
                <a href="javascript:void(0)" class="general_button " id="closeSettings"><span><%= $.l10n('rules.backToGame') %></span></a>
            </div>
        </div>
    </div>
</script>
<script type="text/template" id="yourBetsTpl">
    <div id="darkening" class="none"></div>
	<div id="yourBets">
        <header><%= $.l10n('yourBets.yourBets') %></header>
        <section>
            <a class="arrow left disabled" id="leftArrow"></a>
            <div id="yourBetsAlignContainer">
                <div id="yourBetsHolder">
                    <ul id="yourBetsScroller">
                        <% _.each(items, function(item) { %>
                        <li><a href="javascript:void(0)" class="greenBet" id="<%=item.betId%>"><%= item.description %></a></li>
                        <% }); %>
                    </ul>
                </div>
            </div>
            <a class="arrow right disabled" id="rightArrow"></a>
        </section>
    </div>
</script></section>
    	
    