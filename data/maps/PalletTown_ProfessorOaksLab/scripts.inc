# 1 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 2 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ PLAYER_STARTER_NUM,      VAR_TEMP_1
# 3 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ PLAYER_STARTER_SPECIES,  VAR_TEMP_2
# 4 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ RIVAL_STARTER_SPECIES,   VAR_TEMP_3
# 5 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ RIVAL_STARTER_ID,        VAR_TEMP_4
# 6 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 7 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ SHOWED_OAK_COMPLETE_DEX, FLAG_TEMP_2
# 8 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 9 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_MapScripts::
# 10 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_ProfessorOaksLab_OnTransition
# 11 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PalletTown_ProfessorOaksLab_OnWarp
# 12 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_ProfessorOaksLab_OnFrame
# 13 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.byte 0
# 14 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 15 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_OnTransition::
# 16 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_VISITED_OAKS_LAB
# 17 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_EventScript_ReadyOakForStarterScene
# 18 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7, PalletTown_ProfessorOaksLab_EventScript_ReadyOakForNationalDexScene
# 19 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8, PalletTown_ProfessorOaksLab_EventScript_SetNationalDexSceneFinished
# 20 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_EventScript_SetSkipPokeBallCheck
# 21 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 22 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 23 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SetSkipPokeBallCheck::
# 24 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_OAK_SKIP_22_RIVAL_CHECK
# 25 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 26 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 27 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SetNationalDexSceneFinished::
# 28 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9
# 29 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 30 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 31 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyOakForStarterScene::
# 32 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 11
# 33 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_UP
# 34 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	savebgm MUS_OAK
# 35 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 36 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 37 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyOakForNationalDexScene::
# 38 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 11
# 39 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_UP
# 40 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 41 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 42 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_OnWarp::
# 43 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_EventScript_ReadyPlayerForStarterScene
# 44 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.2byte 0
# 45 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 46 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyPlayerForStarterScene::
# 47 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 48 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 49 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 50 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_OnFrame::
# 51 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_ChooseStarterScene
# 52 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7, PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene
# 53 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.2byte 0
# 54 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 55 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene:: @ 8169002 
# 56 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 57 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_FACING, DIR_NORTH
# 58 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 59 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakEnter
# 60 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 61 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_OAKS_LAB_PROF_OAK
# 62 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 3
# 63 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_DOWN
# 64 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 65 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerEnter
# 66 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 67 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
# 68 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 69 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 70 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene::
# 71 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakSightingsOfRareMons
# 72 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 73 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterNorth
# 74 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterSouth
# 75 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest
# 76 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest
# 77 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalJustLetMeHandleEverything
# 78 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 79 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakNeedYourHelpTooNeedToSeePokedexes
# 80 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakNorth
# 81 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakWest
# 82 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 83 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTookBothPokedexUnits
# 84 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 85 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 86 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskNorth
# 87 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskSouth
# 88 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskEast
# 89 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskWest
# 90 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_POKEDEX_1
# 91 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_POKEDEX_2
# 92 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 93 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakNowTheseUnitsCanRecordMoreData
# 94 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 95 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_1
# 96 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_2
# 97 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 98 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth
# 99 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth
# 100 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast
# 101 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest
# 102 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 103 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 104 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_PlayersPokedexWasUpgraded
# 105 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 106 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 107 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 108 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special EnableNationalPokedex
# 109 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMustReallyWorkToFillPokedex
# 110 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllCompleteThePokedex
# 111 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 112 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 113 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 114 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 115 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 116 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 117 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_OAKS_LAB_RIVAL
# 118 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 119 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8
# 120 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 121 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 122 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 123 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterNorth::
# 124 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 5, 10
# 125 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 126 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 127 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 128 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 129 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 130 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 131 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 132 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest::
# 133 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 134 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 135 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 136 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 137 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 138 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 139 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 140 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 141 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 142 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterSouth::
# 143 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 144 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 145 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 146 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 147 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 148 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 149 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 150 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 151 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakNorth::
# 152 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 153 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 154 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 155 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 156 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakWest::
# 157 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 158 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 159 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 160 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 161 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskNorth::
# 162 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 163 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 164 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 165 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 166 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskSouth::
# 167 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth
# 168 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 169 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 170 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 171 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 172 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 173 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskEast::
# 174 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 175 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 176 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 177 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 178 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 179 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskWest::
# 180 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 181 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 182 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 183 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 184 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk::
# 185 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 186 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 187 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 188 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 189 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 190 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 191 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 192 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth::
# 193 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 194 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 195 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 196 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 197 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 198 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 199 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 200 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_ChooseStarterScene::
# 201 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 202 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 203 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakEnter
# 204 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 205 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_OAKS_LAB_PROF_OAK
# 206 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 3
# 207 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_DOWN
# 208 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 209 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerEnter
# 210 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 211 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 212 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 213 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 214 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	savebgm MUS_DUMMY
# 215 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 216 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalFedUpWithWaiting
# 217 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 218 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 60
# 219 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThreeMonsChooseOne
# 220 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 221 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 222 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalReact
# 223 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 224 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalNoFairWhatAboutMe
# 225 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBePatientRival
# 226 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
# 227 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 228 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 229 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 230 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakEnter::
# 231 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 232 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 233 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 234 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 235 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 236 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 237 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 238 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 239 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerEnter::
# 240 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 241 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 242 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 243 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 244 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 245 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 246 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 247 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 248 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 249 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 250 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalReact::
# 251 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 252 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 253 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 254 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 255 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LeaveStarterSceneTrigger::
# 256 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 257 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 258 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FaceDown
# 259 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 260 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHeyDontGoAwayYet
# 261 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 262 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp
# 263 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 264 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 265 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 266 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 267 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp::
# 268 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 269 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 270 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 271 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerLeft::
# 272 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 273 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 1
# 274 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 275 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 276 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 277 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerMid::
# 278 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 279 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 2
# 280 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 281 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 282 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 283 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerRight::
# 284 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 285 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 3
# 286 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 287 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 288 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 289 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattle::
# 290 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 291 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 292 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 293 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 294 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 295 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 296 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLetsCheckOutMons
# 297 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 298 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FaceDown
# 299 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 300 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 0, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander
# 301 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur
# 302 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle
# 303 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 304 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 305 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ The scripts for the rival approaching the player for battle are a bit bloated because
# 306 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ both the player and rival can be in 3 different positions, so theres 9 different approaches
# 307 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ NOTE: Names below refer to the Rival's mon (e.g. for RivalBattleSquirtle, player has Charmander)
# 308 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 309 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle::
# 310 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft
# 311 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid
# 312 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight
# 313 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 314 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 315 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft::
# 316 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft
# 317 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 318 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 319 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 320 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 321 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid::
# 322 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid
# 323 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 324 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 325 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 326 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 327 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight::
# 328 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight
# 329 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 330 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 331 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 332 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 333 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle::
# 334 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_SQUIRTLE, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 335 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 336 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 337 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 338 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft::
# 339 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 340 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 341 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 342 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 343 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 344 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 345 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 346 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 347 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid::
# 348 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 349 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 350 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 351 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 352 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 353 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 354 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 355 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight::
# 356 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 357 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 358 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 359 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 360 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 361 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 362 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander::
# 363 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft
# 364 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid
# 365 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight
# 366 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 367 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 368 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft::
# 369 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft
# 370 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 371 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 372 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 373 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 374 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid::
# 375 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid
# 376 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 377 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 378 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 379 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 380 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight::
# 381 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight
# 382 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 383 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 384 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 385 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 386 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander::
# 387 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_CHARMANDER, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 388 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 389 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 390 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 391 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft::
# 392 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 393 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 394 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 395 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 396 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 397 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 398 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 399 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 400 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 401 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid::
# 402 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 403 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 404 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 405 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 406 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 407 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 408 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 409 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 410 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight::
# 411 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 412 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 413 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 414 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 415 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 416 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 417 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 418 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur::
# 419 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft
# 420 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid
# 421 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight
# 422 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 423 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 424 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft::
# 425 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft
# 426 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 427 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 428 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 429 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 430 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid::
# 431 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid
# 432 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 433 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 434 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 435 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 436 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight::
# 437 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight
# 438 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 439 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 440 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 441 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 442 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur::
# 443 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_BULBASAUR, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 444 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 445 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 446 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 447 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft::
# 448 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 449 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 450 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 451 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 452 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 453 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 454 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 455 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid::
# 456 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 457 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 458 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 459 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 460 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 461 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 462 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight::
# 463 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 464 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 465 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 466 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 467 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 468 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle::
# 469 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special HealPlayerParty
# 470 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
    setvar VAR_0x40FE, 3
# 471 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoToughenMyMon
# 472 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 473 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 474 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft
# 475 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid
# 476 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight
# 477 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_OAKS_LAB_RIVAL
# 478 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_EXIT
# 479 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 480 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
# 481 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_BEAT_RIVAL_IN_OAKS_LAB
# 482 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 483 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 484 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 485 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft::
# 486 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft
# 487 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 488 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_RIVAL
# 489 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 490 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 491 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid::
# 492 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid
# 493 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 494 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_RIVAL
# 495 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 496 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 497 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight::
# 498 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight
# 499 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight
# 500 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_RIVAL
# 501 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 502 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 503 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft::
# 504 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 505 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 506 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 507 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 508 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 509 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 510 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 511 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 512 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 513 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight::
# 514 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 515 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 516 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 517 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 518 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 519 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 520 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 521 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 522 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 523 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid::
# 524 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 525 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 526 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 527 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 528 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 529 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 530 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 531 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 532 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 533 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 534 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle::
# 535 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 536 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 537 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 538 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 539 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 540 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 541 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 542 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight::
# 543 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 544 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 545 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 546 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 547 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 548 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 549 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 550 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Rival::
# 551 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 552 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 553 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter
# 554 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter
# 555 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGrampsIsntAround
# 556 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 557 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 558 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 559 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter::
# 560 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoChoosePlayer
# 561 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 562 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 563 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 564 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter::
# 565 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalMyMonLooksTougher
# 566 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 567 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 568 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 569 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ProfOak::
# 570 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 571 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 572 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set SHOWED_OAK_COMPLETE_DEX, PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex
# 573 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 574 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 575 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene
# 576 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 577 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls
# 578 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene
# 579 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4, PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow
# 580 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon
# 581 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakWhichOneWillYouChoose
# 582 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 583 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 584 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 585 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex::
# 586 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 587 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 588 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 589 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 590 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon::
# 591 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCanReachNextTownWithMon
# 592 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 593 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 594 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 595 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow::
# 596 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBattleMonForItToGrow
# 597 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 598 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 599 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 600 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene::
# 601 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveSomethingForMe
# 602 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 603 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 604 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_DeliveredOaksParcel
# 605 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 606 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 607 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 608 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeitem ITEM_OAKS_PARCEL
# 609 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCustomBallIOrdered
# 610 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 611 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGramps
# 612 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 613 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth
# 614 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth
# 615 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 616 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 617 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 618 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalWhatDidYouCallMeFor
# 619 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 620 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 621 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_PIN
# 622 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_ExclamationMark
# 623 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 624 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_Delay48
# 625 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 626 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth
# 627 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast
# 628 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest
# 629 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth
# 630 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveRequestForYouTwo
# 631 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 632 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth
# 633 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth
# 634 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast
# 635 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest
# 636 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakPokedexOnDesk
# 637 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 638 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 40
# 639 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTakeTheseWithYou
# 640 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 641 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterUp
# 642 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 643 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_1
# 644 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 10
# 645 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_2
# 646 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 25
# 647 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth
# 648 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth
# 649 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast
# 650 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest
# 651 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 10
# 652 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 653 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 654 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedPokedexFromOak
# 655 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 656 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 657 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 658 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 659 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 660 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1
# 661 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCatchMonsForDataTakeThese
# 662 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 663 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakExplainCatching
# 664 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_OAK, 1
# 665 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCompleteMonGuideWasMyDream
# 666 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLeaveItToMeGramps
# 667 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth
# 668 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth
# 669 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 670 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 671 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalTellSisNotToGiveYouMap
# 672 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 673 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 674 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 675 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 676 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 677 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 678 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_OAKS_LAB_RIVAL
# 679 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 680 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
# 681 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2
# 682 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
# 683 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1
# 684 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 1
# 685 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 686 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 687 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 688 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth::
# 689 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 690 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 691 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 692 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 693 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth::
# 694 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth
# 695 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 696 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 697 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 698 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast::
# 699 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 700 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast
# 701 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 702 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 703 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 704 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest::
# 705 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 706 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 707 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 708 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 709 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast::
# 710 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 711 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 712 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 713 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 714 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 715 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver::
# 716 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 717 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 718 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 719 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 720 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth::
# 721 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 722 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 723 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 724 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 725 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth::
# 726 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 727 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 728 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 729 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 730 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth::
# 731 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth
# 732 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 733 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 734 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 735 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 736 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 737 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast::
# 738 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 739 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 740 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 741 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 742 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 743 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest::
# 744 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 745 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 746 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 747 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 748 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast::
# 749 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 750 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 751 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 752 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 753 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 754 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk::
# 755 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 756 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 757 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 758 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 759 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 760 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk::
# 761 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 762 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 763 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 764 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 765 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 766 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 767 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth::
# 768 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 769 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 770 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 771 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 772 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 773 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 774 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 775 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls::
# 776 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8004, 0
# 777 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	specialvar VAR_RESULT, GetPokedexCount
# 778 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 779 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 780 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 781 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 782 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_0x8009, 1, PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls  @ Player only has starter
# 783 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 784 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 785 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 786 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedex::
# 787 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 788 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_OAK_SAW_DEX_COMPLETION, PalletTown_ProfessorOaksLab_EventScript_DexCompleted
# 789 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 790 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 791 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 792 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexCompleted::
# 793 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 794 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 40
# 795 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PokedexRating_Text_Wroooaaarrr
# 796 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 797 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth
# 798 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth
# 799 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast
# 800 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest
# 801 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 802 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 803 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 804 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 70
# 805 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 806 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag SHOWED_OAK_COMPLETE_DEX
# 807 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 808 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 809 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 810 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth::
# 811 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth
# 812 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 813 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 814 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 815 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth::
# 816 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth
# 817 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 818 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 819 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 820 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast::
# 821 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedEast
# 822 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 823 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 824 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 825 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest::
# 826 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedWest
# 827 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 828 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 829 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 830 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth::
# 831 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 832 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_down
# 833 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 834 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 835 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_down
# 836 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 837 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 838 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 839 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth::
# 840 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 841 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_up
# 842 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 843 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 844 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_up
# 845 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 846 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 847 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 848 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedEast::
# 849 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 850 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_left
# 851 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 852 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 853 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_left
# 854 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 855 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 856 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 857 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedWest::
# 858 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 859 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_right
# 860 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 861 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 862 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_right
# 863 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 864 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 865 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 866 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ Unused
# 867 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_Search:
# 868 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 869 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 870 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 871 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 872 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 873 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 874 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 875 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 876 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 877 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 878 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 879 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 880 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 881 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 882 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 883 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 884 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 885 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 886 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 887 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 888 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 889 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 890 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 891 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 892 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 893 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 894 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ Unused
# 895 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_VerticalPacing:
# 896 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 897 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 898 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 899 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 900 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 901 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 902 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 903 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 904 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 905 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 906 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene::
# 907 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 908 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 909 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_lt VAR_0x8009, 60, PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 910 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_unset FLAG_WORLD_MAP_ONE_ISLAND, PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 911 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 912 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakFavorToAskYouPlayer
# 913 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
# 914 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 915 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 916 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene::
# 917 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 918 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 919 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 920 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls::
# 921 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 922 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special QuestLog_CutRecording
# 923 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_OAK_SKIP_22_RIVAL_CHECK, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 924 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls
# 925 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	checkitem ITEM_POKE_BALL
# 926 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls
# 927 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 928 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 929 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 930 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls::
# 931 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ROUTE22, 2, PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls
# 932 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 933 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 934 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 935 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls::
# 936 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakAddedNothingToPokedex
# 937 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 938 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL
# 939 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 940 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 941 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 942 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait::
# 943 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMonsAroundWorldWait
# 944 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 945 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 946 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 947 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls::
# 948 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakComeSeeMeSometime
# 949 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 950 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 951 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 952 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth::
# 953 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 5, 10
# 954 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 955 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 956 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 957 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 958 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 959 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 960 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest::
# 961 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 962 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 963 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 964 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 965 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 966 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 967 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 968 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 969 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth::
# 970 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 971 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 972 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 973 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 974 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 975 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 976 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 977 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth::
# 978 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 979 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 980 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 981 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 982 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 983 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 984 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 985 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest::
# 986 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 987 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 988 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 989 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 990 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 991 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 992 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 993 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 994 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast::
# 995 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 996 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 997 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 998 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 999 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1000 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1001 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1002 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1003 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth::
# 1004 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_FacePlayer
# 1005 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1006 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1007 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1008 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1009 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth::
# 1010 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 1011 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1012 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1013 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1014 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1015 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest::
# 1016 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_FacePlayer
# 1017 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1018 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1019 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1020 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1021 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth::
# 1022 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 1023 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 1024 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1025 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1026 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1027 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExit::
# 1028 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 1029 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1030 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1031 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1032 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth::
# 1033 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1034 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1035 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1036 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1037 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest::
# 1038 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 1039 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 1040 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1041 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1042 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth::
# 1043 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 1044 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1045 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1046 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1047 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1048 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1049 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 1050 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 1051 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1052 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1053 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalEnter::
# 1054 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1055 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1056 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1057 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1058 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1059 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1060 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1061 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1062 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExit::
# 1063 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1064 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1065 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1066 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1067 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1068 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1069 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1070 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1071 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall::
# 1072 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1073 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1074 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_NUM, 0
# 1075 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_BULBASAUR
# 1076 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_CHARMANDER
# 1077 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_CHARMANDER_BALL
# 1078 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1079 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1080 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1081 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1082 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1083 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1084 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice::
# 1085 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FaceRight
# 1086 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1087 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	showmonpic PLAYER_STARTER_SPECIES, 10, 3
# 1088 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1089 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 0, PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur
# 1090 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 1, PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle
# 1091 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander
# 1092 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1093 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1094 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur::
# 1095 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingBulbasaur, MSGBOX_YESNO
# 1096 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1097 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1098 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1099 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1100 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle::
# 1101 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingSquirtle, MSGBOX_YESNO
# 1102 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1103 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1104 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1105 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1106 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander::
# 1107 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingCharmander, MSGBOX_YESNO
# 1108 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1109 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1110 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1111 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1112 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter::
# 1113 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	hidemonpic
# 1114 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1115 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1116 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1117 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ChoseStarter::
# 1118 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	hidemonpic
# 1119 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
    setvar VAR_0x40FE, 2
# 1120 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 1121 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic
# 1122 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 1123 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1124 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
# 1125 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	givemon PLAYER_STARTER_SPECIES, 5
# 1126 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_STARTER_MON, PLAYER_STARTER_NUM
# 1127 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	bufferspeciesname STR_VAR_1, PLAYER_STARTER_SPECIES
# 1128 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak
# 1129 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 1130 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 1131 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 1132 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 1133 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_GiveNicknameToStarter
# 1134 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
# 1135 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1136 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1137 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
EventScript_GiveNicknameToStarter::
# 1138 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8004, 0
# 1139 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_ChangePokemonNickname
# 1140 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
# 1141 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1142 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1143 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter::
# 1144 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 1145 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 0, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander
# 1146 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 1, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur
# 1147 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle
# 1148 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1149 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1150 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander::
# 1151 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander
# 1152 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1153 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 1154 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1155 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1156 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle::
# 1157 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle
# 1158 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1159 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 1160 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1161 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1162 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur::
# 1163 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur
# 1164 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1165 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 1166 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1167 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1168 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter::
# 1169 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1170 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllTakeThisOneThen
# 1171 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject RIVAL_STARTER_ID
# 1172 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 1173 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	bufferspeciesname STR_VAR_1, RIVAL_STARTER_SPECIES
# 1174 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_RivalReceivedMonFromOak
# 1175 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 1176 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 1177 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 1178 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
# 1179 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_set FLAG_OPENED_START_MENU, PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene
# 1180 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1181 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1182 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1183 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene::
# 1184 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 1185 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1186 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1187 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander::
# 1188 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1189 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1190 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1191 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1192 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1193 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1194 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1195 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1196 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1197 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1198 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle::
# 1199 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1200 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1201 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1202 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1203 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1204 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 1205 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1206 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1207 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur::
# 1208 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1209 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1210 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1211 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1212 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 1213 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1214 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1215 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SquirtleBall::
# 1216 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1217 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1218 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_NUM, 1
# 1219 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_SQUIRTLE
# 1220 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_BULBASAUR
# 1221 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_BULBASAUR_BALL
# 1222 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1223 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1224 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1225 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1226 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1227 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1228 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CharmanderBall::
# 1229 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1230 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1231 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_NUM, 2
# 1232 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_CHARMANDER
# 1233 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_SQUIRTLE
# 1234 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_SQUIRTLE_BALL
# 1235 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1236 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1237 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1238 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1239 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1240 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1241 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LastPokeBall::
# 1242 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OaksLastMon
# 1243 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1244 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1245 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1246 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide1::
# 1247 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1248 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1249 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear
# 1250 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1251 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1252 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1253 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1254 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear::
# 1255 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_OAK, 5
# 1256 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsGoingToHaveRadioShow
# 1257 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1258 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1259 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1260 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide2::
# 1261 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1262 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1263 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear
# 1264 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1265 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1266 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1267 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1268 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear::
# 1269 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_DAISY, 0
# 1270 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_DaisyWillGroomMons
# 1271 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1272 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1273 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1274 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide3::
# 1275 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1276 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1277 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_OAK, 2
# 1278 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsAuthorityOnMons
# 1279 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1280 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1281 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1282 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Pokedex::
# 1283 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_BlankEncyclopedia, MSGBOX_NPC
# 1284 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1285 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1286 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Computer::
# 1287 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_EmailMessage, MSGBOX_SIGN
# 1288 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1289 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1290 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LeftSign::
# 1291 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_PressStartToOpenMenu, MSGBOX_SIGN
# 1292 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1293 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1294 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RightSign::
# 1295 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 1296 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RightSignAlt
# 1297 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_SaveOptionInMenu
# 1298 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 1299 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1300 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1301 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RightSignAlt::
# 1302 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_AllMonTypesHaveStrongAndWeakPoints
# 1303 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 1304 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end

setSceneIni::
# 1308 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1
# 1309 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 1310 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 1
# 1311 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
	return


PalletTown_ProfessorOaksLab_EventScript_TriggerMeetingThay_Left::
# 1315 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 1316 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call setSceneIni
# 1317 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 1318 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_EventScript_TriggerMeetingThay_Left_Movement_0
# 1319 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 5
# 1320 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_meetingThay
# 1321 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x40FE, 1
# 1322 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	return


PalletTown_ProfessorOaksLab_EventScript_TriggerMeetingThay_Middle::
# 1326 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 1327 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call setSceneIni
# 1328 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 1329 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_EventScript_TriggerMeetingThay_Middle_Movement_0
# 1330 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 5
# 1331 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_meetingThay
# 1332 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x40FE, 1
# 1333 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	return


PalletTown_ProfessorOaksLab_EventScript_TriggerMeetingThay_Right::
# 1337 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 1338 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call setSceneIni
# 1339 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 1340 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_EventScript_TriggerMeetingThay_Right_Movement_0
# 1341 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 5
# 1342 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_meetingThay
# 1343 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x40FE, 1
# 1344 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	return


PalletTown_ProfessorOaksLab_EventScript_meetingThay::
# 1348 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_EventScript_meetingThay_Movement_0
# 1349 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_meetingThay
# 1350 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_meetingThay_RIVAL
# 1351 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_meetingThay_question, MSGBOX_YESNO
# 1352 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_meetingThay_2
# 1357 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar GOOD_PTS, 0
# 1358 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_meetingThay_Text_1
PalletTown_ProfessorOaksLab_EventScript_meetingThay_1:
# 1360 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_meetingThay_Text_2
# 1361 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
	return

PalletTown_ProfessorOaksLab_EventScript_meetingThay_2:
# 1353 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar GOOD_PTS, 5
# 1354 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_meetingThay_Text_0
	goto PalletTown_ProfessorOaksLab_EventScript_meetingThay_1


PalletTown_ProfessorOaksLab_EventScript_leavingEarly::
# 1368 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1369 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_leavingEarly_Text_0
# 1370 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_EventScript_leavingEarly_Movement_0
# 1371 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1372 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	return


# 1375 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
up4:
# 1376 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1377 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1378 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1379 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
	step_end

# 1318 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_TriggerMeetingThay_Left_Movement_0:
# 1318 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1318 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1318 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1318 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1318 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
	step_end

# 1329 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_TriggerMeetingThay_Middle_Movement_0:
# 1329 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1329 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1329 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1329 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
	step_end

# 1340 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_TriggerMeetingThay_Right_Movement_0:
# 1340 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 1340 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1340 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1340 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1340 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
	step_end

# 1348 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_meetingThay_Movement_0:
# 1348 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	face_up
	step_end

# 1370 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_leavingEarly_Movement_0:
# 1370 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
	step_end

PalletTown_ProfessorOaksLab_EventScript_meetingThay_Text_0:
# 1354 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "THAY: That is very good to hear.$"

PalletTown_ProfessorOaksLab_EventScript_meetingThay_Text_1:
# 1358 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "THAY: Very well then.$"

PalletTown_ProfessorOaksLab_EventScript_meetingThay_Text_2:
# 1360 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "THAY: Now, {PLAYER}, please select\na Pokemon from the three\lon the table to the right.$"

PalletTown_ProfessorOaksLab_EventScript_leavingEarly_Text_0:
# 1369 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "THAY: Please select a Pokemon before receiving\nfurther instructions and departing.$"

PalletTown_ProfessorOaksLab_Text_meetingThay::
# 1382 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "THAY: Hello, {RIVAL} and {PLAYER}.\n"
	.string "Welcome to my monastery.\p"
	.string "My job is to help you\n"
	.string "find your way in the world.\p"
	.string "You both have expressed\n"
	.string "interest in training under me.\p"
	.string "I am always glad to have\n"
	.string "young people interested in\l"
	.string "deeper pursuits.\p"
	.string "I want you all to set out\n"
	.string "on a personal journey.\p"
	.string "This journey will not be easy;\n"
	.string "although you will receive as much\l"
	.string "help and guidance along the way\l"
	.string "from myself and other members of\l"
	.string "the Sangha.\p"
	.string "The task before you shall not be\n"
	.string "easy. The Gym Leaders are all in\l"
	.string "peak form and I want you to return\l"
	.string "having collected all badges.\p"
	.string "I would hope that the journey would\n"
	.string "have transfomed you and your Pokemon.\p"
	.string "When you return we shall discuss what\n"
	.string "your future entails.\p"
	.string "Remember that you represent me in\n"
	.string "the world; do your best to conduct\l"
	.string "yourself virtuously, yet without\l"
	.string "concern for the fruits\l"
	.string "of your efforts.$"

PalletTown_ProfessorOaksLab_Text_meetingThay_RIVAL::
# 1414 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "{RIVAL}: Grandpa Thay,\n"
	.string "I just want an adventure.\p"
	.string "You're boring me!$"

PalletTown_ProfessorOaksLab_Text_meetingThay_question::
# 1420 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "THAY: What about you, {PLAYER},\n"
	.string "What interests you?\p"
	.string "If I ask you to weed the\n"
	.string "garden, while {RIVAL} leaves\l"
	.string "on an adventure with his Pokemon,\p"
	.string "what would you say?$"
