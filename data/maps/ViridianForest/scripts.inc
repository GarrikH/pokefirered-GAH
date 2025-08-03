# 1 "data/maps/ViridianForest/scripts.pory"

# 2 "data/maps/ViridianForest/scripts.pory"
ViridianForest_MapScripts::
# 3 "data/maps/ViridianForest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianForest_OnTransition
# 4 "data/maps/ViridianForest/scripts.pory"
	.byte 0
# 5 "data/maps/ViridianForest/scripts.pory"

# 6 "data/maps/ViridianForest/scripts.pory"
ViridianForest_OnTransition::
# 7 "data/maps/ViridianForest/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_VIRIDIAN_FOREST
# 8 "data/maps/ViridianForest/scripts.pory"
	end
# 9 "data/maps/ViridianForest/scripts.pory"

# 10 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_Boy::
# 11 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_RanOutOfPokeBalls, MSGBOX_NPC
# 12 "data/maps/ViridianForest/scripts.pory"
	end
# 13 "data/maps/ViridianForest/scripts.pory"

# 14 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_TrainerTips1::
# 15 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_AvoidGrassyAreasWhenWeak, MSGBOX_SIGN
# 16 "data/maps/ViridianForest/scripts.pory"
	end
# 17 "data/maps/ViridianForest/scripts.pory"

# 18 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_TrainerTips2::
# 19 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_UseAntidoteForPoison, MSGBOX_SIGN
# 20 "data/maps/ViridianForest/scripts.pory"
	end
# 21 "data/maps/ViridianForest/scripts.pory"

# 22 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_TrainerTips3::
# 23 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_ContactOakViaPCToRatePokedex, MSGBOX_SIGN
# 24 "data/maps/ViridianForest/scripts.pory"
	end
# 25 "data/maps/ViridianForest/scripts.pory"

# 26 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_TrainerTips4::
# 27 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_CantCatchOwnedMons, MSGBOX_SIGN
# 28 "data/maps/ViridianForest/scripts.pory"
	end
# 29 "data/maps/ViridianForest/scripts.pory"

# 30 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_TrainerTips5::
# 31 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_WeakenMonsBeforeCapture, MSGBOX_SIGN
# 32 "data/maps/ViridianForest/scripts.pory"
	end
# 33 "data/maps/ViridianForest/scripts.pory"

# 34 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_ExitSign::
# 35 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_LeavingViridianForest, MSGBOX_SIGN
# 36 "data/maps/ViridianForest/scripts.pory"
	end
# 37 "data/maps/ViridianForest/scripts.pory"

# 38 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_Rick::
# 39 "data/maps/ViridianForest/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_RICK, ViridianForest_Text_RickIntro, ViridianForest_Text_RickDefeat
# 40 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 41 "data/maps/ViridianForest/scripts.pory"
	end
# 42 "data/maps/ViridianForest/scripts.pory"

# 43 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_Doug::
# 44 "data/maps/ViridianForest/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_DOUG, ViridianForest_Text_DougIntro, ViridianForest_Text_DougDefeat
# 45 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_DougPostBattle, MSGBOX_AUTOCLOSE
# 46 "data/maps/ViridianForest/scripts.pory"
	end
# 47 "data/maps/ViridianForest/scripts.pory"

# 48 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_Sammy::
# 49 "data/maps/ViridianForest/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_SAMMY, ViridianForest_Text_SammyIntro, ViridianForest_Text_SammyDefeat
# 50 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_SammyPostBattle, MSGBOX_AUTOCLOSE
# 51 "data/maps/ViridianForest/scripts.pory"
	end
# 52 "data/maps/ViridianForest/scripts.pory"

# 53 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_Anthony::
# 54 "data/maps/ViridianForest/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_ANTHONY, ViridianForest_Text_AnthonyIntro, ViridianForest_Text_AnthonyDefeat
# 55 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 56 "data/maps/ViridianForest/scripts.pory"
	end
# 57 "data/maps/ViridianForest/scripts.pory"

# 58 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_Charlie::
# 59 "data/maps/ViridianForest/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_CHARLIE, ViridianForest_Text_CharlieIntro, ViridianForest_Text_CharlieDefeat
# 60 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
# 61 "data/maps/ViridianForest/scripts.pory"
	end

ViridianForest_EventScript_Youngster::
# 65 "data/maps/ViridianForest/scripts.pory"
	lock
# 66 "data/maps/ViridianForest/scripts.pory"
	goto_if_unset FLAG_VIRIDIAN_FOREST_ANSWERED, ViridianForest_EventScript_Youngster_2
# 75 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_EventScript_Youngster_Text_0, MSGBOX_NPC
ViridianForest_EventScript_Youngster_1:
# 77 "data/maps/ViridianForest/scripts.pory"
	release
	end

ViridianForest_EventScript_Youngster_2:
# 67 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Youngster_TEXT, MSGBOX_YESNO
# 68 "data/maps/ViridianForest/scripts.pory"
	waitmessage
# 69 "data/maps/ViridianForest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ViridianForest_EventScript_Youngster_6
ViridianForest_EventScript_Youngster_5:
# 72 "data/maps/ViridianForest/scripts.pory"
	setflag FLAG_VIRIDIAN_FOREST_ANSWERED
	goto ViridianForest_EventScript_Youngster_1

ViridianForest_EventScript_Youngster_6:
# 70 "data/maps/ViridianForest/scripts.pory"
	addvar GOOD_PTS, 5
	goto ViridianForest_EventScript_Youngster_5


ViridianForest_EventScript_Youngster_Text_0:
# 75 "data/maps/ViridianForest/scripts.pory"
	.string "Pass my kind greetings onto THAY,\n"
	.string "please.$"

ViridianForest_Youngster_TEXT::
# 86 "data/maps/ViridianForest/scripts.pory"
	.string "Sometimes I come here to\n"
	.string "meditate. The forest is quiet.\p"
	.string "Tell me, does the sage teach\n"
	.string "that which is known or unknown?\p"
	.string "Do you care to tell me what\n"
	.string "believe?$"
