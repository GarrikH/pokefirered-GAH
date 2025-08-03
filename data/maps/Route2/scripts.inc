# 1 "data/maps/Route2/scripts.pory"

# 2 "data/maps/Route2/scripts.pory"
Route2_MapScripts::
# 3 "data/maps/Route2/scripts.pory"
	.byte 0
# 4 "data/maps/Route2/scripts.pory"

# 5 "data/maps/Route2/scripts.pory"
Route2_EventScript_RouteSign::
# 6 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_RouteSign, MSGBOX_SIGN
# 7 "data/maps/Route2/scripts.pory"
	end
# 8 "data/maps/Route2/scripts.pory"

# 9 "data/maps/Route2/scripts.pory"
Route2_EventScript_DiglettsCaveSign::
# 10 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_DiglettsCave, MSGBOX_SIGN
# 11 "data/maps/Route2/scripts.pory"
	end

ROUTE2_GIRL_EVENT_SCRIPT::
# 15 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE_2_JAZZMINE, ROUTE2_TEXT_JAZZMINE_INTRO, ROUTE2_TEXT_JAZZMINE_OUTRO
# 16 "data/maps/Route2/scripts.pory"
	msgbox ROUTE2_TEXT_JAZZMINE_POST_BATTLE, MSGBOX_AUTOCLOSE
	return


ROUTE2_TEXT_JAZZMINE_INTRO::
# 19 "data/maps/Route2/scripts.pory"
	.string "Better get your weight up, real beasts\n"
	.string "ahead.$"

ROUTE2_TEXT_JAZZMINE_OUTRO::
# 23 "data/maps/Route2/scripts.pory"
	.string "I am glad you are well-prepared.$"

ROUTE2_TEXT_JAZZMINE_POST_BATTLE::
# 27 "data/maps/Route2/scripts.pory"
	.string "I want to see you do big things,\n"
	.string "{PLAYER}!$"
