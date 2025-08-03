# 1 "data/maps/Route1/scripts.pory"

# 2 "data/maps/Route1/scripts.pory"
Route1_MapScripts::
# 3 "data/maps/Route1/scripts.pory"
	.byte 0
# 4 "data/maps/Route1/scripts.pory"

# 5 "data/maps/Route1/scripts.pory"
Route1_EventScript_MartClerk::
# 6 "data/maps/Route1/scripts.pory"
	lock
# 7 "data/maps/Route1/scripts.pory"
	faceplayer
# 8 "data/maps/Route1/scripts.pory"
	goto_if_set FLAG_GOT_POTION_ON_ROUTE_1, Route1_EventScript_AlreadyGotPotion
# 9 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_WorkAtPokeMartTakeSample
# 10 "data/maps/Route1/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 11 "data/maps/Route1/scripts.pory"
	checkitemspace ITEM_POTION
# 12 "data/maps/Route1/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 13 "data/maps/Route1/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_POTION
# 14 "data/maps/Route1/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 15 "data/maps/Route1/scripts.pory"
	message Text_ObtainedTheX
# 16 "data/maps/Route1/scripts.pory"
	waitmessage
# 17 "data/maps/Route1/scripts.pory"
	waitfanfare
# 18 "data/maps/Route1/scripts.pory"
	additem ITEM_POTION
# 19 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_PutPotionAway
# 20 "data/maps/Route1/scripts.pory"
	call EventScript_RestorePrevTextColor
# 21 "data/maps/Route1/scripts.pory"
	setflag FLAG_GOT_POTION_ON_ROUTE_1
# 22 "data/maps/Route1/scripts.pory"
	release
# 23 "data/maps/Route1/scripts.pory"
	end
# 24 "data/maps/Route1/scripts.pory"

# 25 "data/maps/Route1/scripts.pory"
Route1_EventScript_AlreadyGotPotion::
# 26 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_ComeSeeUsIfYouNeedPokeBalls
# 27 "data/maps/Route1/scripts.pory"
	release
# 28 "data/maps/Route1/scripts.pory"
	end
# 29 "data/maps/Route1/scripts.pory"

# 30 "data/maps/Route1/scripts.pory"
Route1_EventScript_RouteSign::
# 31 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_RouteSign, MSGBOX_SIGN
# 32 "data/maps/Route1/scripts.pory"
	end

Route1_EventScript_Ray::
# 37 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ROUTE_1_RAY, ROUTE1_TEXT_RAY_INTRO, ROUTE1_TEXT_RAY_OUTRO
# 38 "data/maps/Route1/scripts.pory"
	msgbox ROUTE1_TEXT_RAY_POST_BATTLE, MSGBOX_AUTOCLOSE
	return


Route1_HOBO_EVENT_SCRIPT::
# 42 "data/maps/Route1/scripts.pory"
	lock
# 43 "data/maps/Route1/scripts.pory"
	applymovement Route1_HOBO_LOCALID, Route1_HOBO_EVENT_SCRIPT_Movement_0
# 44 "data/maps/Route1/scripts.pory"
	goto_if_unset FLAG_HOBO_KYLE_ASKED, Route1_HOBO_EVENT_SCRIPT_2
# 56 "data/maps/Route1/scripts.pory"
	msgbox Route1_HOBO_TEXT_DEFAULT, MSGBOX_NPC
Route1_HOBO_EVENT_SCRIPT_1:
# 58 "data/maps/Route1/scripts.pory"
	release
	end

Route1_HOBO_EVENT_SCRIPT_2:
# 45 "data/maps/Route1/scripts.pory"
	setflag FLAG_HOBO_KYLE_ASKED
# 46 "data/maps/Route1/scripts.pory"
	msgbox Route1_HOBO_TEXT_Q, MSGBOX_YESNO
# 47 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_HOBO_EVENT_SCRIPT_5
# 52 "data/maps/Route1/scripts.pory"
	msgbox Route1_HOBO_EVENT_SCRIPT_Text_1, MSGBOX_NPC
	goto Route1_HOBO_EVENT_SCRIPT_1

Route1_HOBO_EVENT_SCRIPT_5:
# 48 "data/maps/Route1/scripts.pory"
	addvar GOOD_PTS, 5
# 49 "data/maps/Route1/scripts.pory"
	msgbox Route1_HOBO_EVENT_SCRIPT_Text_0, MSGBOX_NPC
	goto Route1_HOBO_EVENT_SCRIPT_1


Route1_COP_EVENT_SCRIPT::
# 63 "data/maps/Route1/scripts.pory"
	lock
# 64 "data/maps/Route1/scripts.pory"
	applymovement Route1_COP_LOCALID, Route1_HOBO_EVENT_SCRIPT_Movement_0
# 65 "data/maps/Route1/scripts.pory"
	msgbox Route1_COP_TEXT, MSGBOX_NPC
# 66 "data/maps/Route1/scripts.pory"
	release
	end


ROUTE1_WORKER_EVENT_SCRIPT::
# 71 "data/maps/Route1/scripts.pory"
	lock
# 72 "data/maps/Route1/scripts.pory"
	applymovement ROUTE1_WORKER_LOCALID, Route1_HOBO_EVENT_SCRIPT_Movement_0
# 73 "data/maps/Route1/scripts.pory"
	goto_if_set FLAG_GOT_MACHOP, ROUTE1_WORKER_EVENT_SCRIPT_2
# 76 "data/maps/Route1/scripts.pory"
	compare GOOD_PTS, 10
	goto_if_ge ROUTE1_WORKER_EVENT_SCRIPT_3
# 85 "data/maps/Route1/scripts.pory"
	msgbox Route1_WORKER_TEXT_2, MSGBOX_NPC
ROUTE1_WORKER_EVENT_SCRIPT_1:
# 87 "data/maps/Route1/scripts.pory"
	release
	end

ROUTE1_WORKER_EVENT_SCRIPT_2:
# 74 "data/maps/Route1/scripts.pory"
	msgbox Route1_WORKER_TEXT_2, MSGBOX_NPC
	goto ROUTE1_WORKER_EVENT_SCRIPT_1

ROUTE1_WORKER_EVENT_SCRIPT_3:
# 77 "data/maps/Route1/scripts.pory"
	msgbox Route1_WORKER_TEXT_1, MSGBOX_NPC
# 78 "data/maps/Route1/scripts.pory"
	givemon SPECIES_MACHOP, 10
# 79 "data/maps/Route1/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 80 "data/maps/Route1/scripts.pory"
	waitfanfare
# 81 "data/maps/Route1/scripts.pory"
	setflag FLAG_GOT_MACHOP
# 82 "data/maps/Route1/scripts.pory"
	msgbox ROUTE1_WORKER_EVENT_SCRIPT_Text_0, MSGBOX_NPC
	goto ROUTE1_WORKER_EVENT_SCRIPT_1


Route1_EventScript_Boy::
# 92 "data/maps/Route1/scripts.pory"
	lockall
# 93 "data/maps/Route1/scripts.pory"
	applymovement ROUTE1_BOY_LOCALID, Route1_EventScript_Boy_Movement_0
# 94 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 95 "data/maps/Route1/scripts.pory"
	goto_if_unset FLAG_R1_ALTERCATION, Route1_EventScript_Boy_2
Route1_EventScript_Boy_1:
# 111 "data/maps/Route1/scripts.pory"
	releaseall
	return

Route1_EventScript_Boy_2:
# 96 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_CanJumpFromLedges, MSGBOX_NPC
# 97 "data/maps/Route1/scripts.pory"
	msgbox Route1_TEXT_RESPOND, MSGBOX_YESNO
# 98 "data/maps/Route1/scripts.pory"
	waitmessage
# 99 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route1_EventScript_Boy_5
# 104 "data/maps/Route1/scripts.pory"
	addvar GOOD_PTS, -5
# 105 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Boy_Text_1, MSGBOX_DEFAULT
Route1_EventScript_Boy_4:
# 107 "data/maps/Route1/scripts.pory"
	setflag FLAG_R1_ALTERCATION
# 108 "data/maps/Route1/scripts.pory"
	applymovement ROUTE1_BOY_LOCALID, Route1_EventScript_Boy_Movement_1
# 109 "data/maps/Route1/scripts.pory"
	waitmovement 1
	goto Route1_EventScript_Boy_1

Route1_EventScript_Boy_5:
# 100 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Boy_Text_0, MSGBOX_DEFAULT
# 101 "data/maps/Route1/scripts.pory"
	addvar GOOD_PTS, 5
	goto Route1_EventScript_Boy_4


# 43 "data/maps/Route1/scripts.pory"
Route1_HOBO_EVENT_SCRIPT_Movement_0:
# 43 "data/maps/Route1/scripts.pory"
	face_player
	step_end

# 93 "data/maps/Route1/scripts.pory"
Route1_EventScript_Boy_Movement_0:
# 93 "data/maps/Route1/scripts.pory"
	faceplayer
	step_end

# 108 "data/maps/Route1/scripts.pory"
Route1_EventScript_Boy_Movement_1:
# 108 "data/maps/Route1/scripts.pory"
	walk_up
# 108 "data/maps/Route1/scripts.pory"
	walk_up
# 108 "data/maps/Route1/scripts.pory"
	walk_up
# 108 "data/maps/Route1/scripts.pory"
	walk_up
# 108 "data/maps/Route1/scripts.pory"
	walk_up
# 108 "data/maps/Route1/scripts.pory"
	walk_up
# 108 "data/maps/Route1/scripts.pory"
	walk_up
# 108 "data/maps/Route1/scripts.pory"
	walk_up
# 108 "data/maps/Route1/scripts.pory"
	walk_up
# 108 "data/maps/Route1/scripts.pory"
	walk_up
# 108 "data/maps/Route1/scripts.pory"
	walk_up
# 108 "data/maps/Route1/scripts.pory"
	walk_up
	step_end

Route1_HOBO_EVENT_SCRIPT_Text_0:
# 49 "data/maps/Route1/scripts.pory"
	.string "HOBO KYLE: Thank you so much!$"

Route1_HOBO_EVENT_SCRIPT_Text_1:
# 52 "data/maps/Route1/scripts.pory"
	.string "HOBO KYLE: Very well. That's ok with me...$"

ROUTE1_WORKER_EVENT_SCRIPT_Text_0:
# 82 "data/maps/Route1/scripts.pory"
	.string "That's a MACHOP, dippie.$"

Route1_EventScript_Boy_Text_0:
# 100 "data/maps/Route1/scripts.pory"
	.string "Wise Move.$"

Route1_EventScript_Boy_Text_1:
# 105 "data/maps/Route1/scripts.pory"
	.string "The NPC gave you a\nwhomping to remember.$"

Route1_HOBO_TEXT_Q::
# 114 "data/maps/Route1/scripts.pory"
	.string "HOBO KYLE: This officer informed me\n"
	.string "that if I sleep in the woods again\l"
	.string "they will arrest me in the morning;\p"
	.string "however, I have nowhere better to go.\n"
	.string "I thought I would at least\l"
	.string "find peace outside of the town,\l"
	.string "harming no one.\p"
	.string "Could you spare anything to\nhelp me out?$"

Route1_HOBO_TEXT_DEFAULT::
# 125 "data/maps/Route1/scripts.pory"
	.string "HOBO KYLE: Gotta keep on keepin' on\n"
	.string "brotha!$"

Route1_COP_TEXT::
# 129 "data/maps/Route1/scripts.pory"
	.string "OFFICER: I think work puts most of us\n"
	.string "in a tough position\n"
	.string "from time to time, but I will try to do\l"
	.string "what I think is right.$"

ROUTE1_TEXT_RAY_INTRO::
# 133 "data/maps/Route1/scripts.pory"
	.string "Now is the time. Be ready.$"

ROUTE1_TEXT_RAY_OUTRO::
# 137 "data/maps/Route1/scripts.pory"
	.string "Good luck, you seem strong.$"

ROUTE1_TEXT_RAY_POST_BATTLE::
# 141 "data/maps/Route1/scripts.pory"
	.string "I like training here, it's close to my\n"
	.string "friends.$"

Route1_WORKER_TEXT_1::
# 145 "data/maps/Route1/scripts.pory"
	.string "Oh, wow, I get a good feeling from\n"
	.string "you. Why don't you take this?\p"
	.string "I hope it will help you\n"
	.string "on your way.$"

Route1_WORKER_TEXT_2::
# 152 "data/maps/Route1/scripts.pory"
	.string "Hi.$"

Route1_TEXT_RESPOND::
# 156 "data/maps/Route1/scripts.pory"
	.string "Respond with violence?$"
