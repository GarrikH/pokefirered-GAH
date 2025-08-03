# 1 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"

# 3 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
PewterCity_PokemonCenter_1F_MapScripts::
# 4 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_PokemonCenter_1F_OnTransition
# 5 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 6 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 7 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"

# 8 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
PewterCity_PokemonCenter_1F_OnTransition::
# 9 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PEWTER_CITY
# 10 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	end
# 11 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"

# 12 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
PewterCity_PokemonCenter_1F_EventScript_Nurse::
# 13 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	lock
# 14 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 15 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 16 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	release
# 17 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	end
# 18 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
PewterCity_PokemonCenter_1F_EventScript_Gentleman::
# 20 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_TeamRocketMtMoonImOnPhone, MSGBOX_NPC
# 21 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	end
# 22 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"

# 23 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
PewterCity_PokemonCenter_1F_EventScript_Jigglypuff::
# 24 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	lock
# 25 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 26 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	fadeoutbgm 0
# 27 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	playbgm MUS_JIGGLYPUFF, 0
# 28 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	message PewterCity_PokemonCenter_1F_Text_Jigglypuff
# 29 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 30 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	delay 455
# 31 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	playbgm MUS_POKE_CENTER, 1
# 32 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	release
# 33 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	end
# 34 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"

# 35 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
PewterCity_PokemonCenter_1F_EventScript_GBAKid1::
# 36 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	lock
# 37 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_TradingMyClefairyForPikachu
# 38 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	release
# 39 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	end
# 40 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"

# 41 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
PewterCity_PokemonCenter_1F_EventScript_GBAKid2::
# 42 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_TradingPikachuWithKid, MSGBOX_NPC
# 43 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	end

PewterCity_PokemonCenter_1F_EventScript_Youngster::
# 48 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	lock
# 49 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	applymovement PewterCity_PokemonCenter_1F_Youngster_LOCALID, PewterCity_PokemonCenter_1F_EventScript_Youngster_Movement_0
# 50 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_GOT_CLEFAIRY, PewterCity_PokemonCenter_1F_EventScript_Youngster_2
# 53 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	compare GOOD_PTS, 20
	goto_if_ge PewterCity_PokemonCenter_1F_EventScript_Youngster_3
# 62 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Youngster_TEXT_2, MSGBOX_NPC
PewterCity_PokemonCenter_1F_EventScript_Youngster_1:
# 64 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	release
	end

PewterCity_PokemonCenter_1F_EventScript_Youngster_2:
# 51 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Youngster_TEXT_2, MSGBOX_NPC
	goto PewterCity_PokemonCenter_1F_EventScript_Youngster_1

PewterCity_PokemonCenter_1F_EventScript_Youngster_3:
# 54 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Youngster_TEXT_1, MSGBOX_NPC
# 55 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	givemon SPECIES_CLEFAIRY, 15
# 56 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 57 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 58 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_GOT_CLEFAIRY
# 59 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_EventScript_Youngster_Text_0, MSGBOX_NPC
	goto PewterCity_PokemonCenter_1F_EventScript_Youngster_1


# 49 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
PewterCity_PokemonCenter_1F_EventScript_Youngster_Movement_0:
# 49 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	face_player
	step_end

PewterCity_PokemonCenter_1F_EventScript_Youngster_Text_0:
# 59 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	.string "That's a CLEFAIRY, not sure you\n"
	.string "know about that.\p"
	.string "I just blessed you,\n"
	.string "you're welcome.$"

PewterCity_PokemonCenter_1F_Youngster_TEXT_1::
# 69 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	.string "I try to be the change I wish\n"
	.string "to see in the world.\p"
	.string "I believe you feel similarly.\p"
	.string "$"

PewterCity_PokemonCenter_1F_Youngster_TEXT_2::
# 73 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	.string "Some POKeMON use SING to put their\n"
	.string "opponent to sleep.\p"
	.string "You smell bad by the way.\n;)$"
