PewterCity_Gym_Text_BrockIntro::
    .string "Welcome to the GYM. I'm BROCK.\n"
    .string "I'm PEWTER's GYM LEADER.\p"
    .string "I admire the stoic strengtth\n"
    .string "of ROCK POKeMON, and I hope\p"
    .string "that I may learn from them,\n"
    .string "since often in life we could\p"
    .string "be more solid, and have thicker skin.\n"
    .string "By taking on challenges we both grow.\p"
    .string "Let's go!{PLAY_BGM}{MUS_ENCOUNTER_GYM_LEADER}$"

@ NOTE: This defeat text actually causes a buffer overflow. It's too long for the gDisplayedStringBattle
@ buffer that it's put into, and it stomps all over the gBattleTextBuffs after, as well as the otherwise
@ unused array after that, sFlickerArray. Perhaps that's the reason why said array exists.
PewterCity_Gym_Text_BrockDefeat::
    .string "Your preparation was immaculate,\n"
    .string "and so, I lost.\p"
    .string "As proof of your victory, I confer\n"
    .string "on you this…the official POKéMON\l"
    .string "LEAGUE BOULDERBADGE.\p"
    .string "{FONT_NORMAL}{PLAYER} received the BOULDERBADGE\n"
    .string "from BROCK!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}\p"
    .string "{FONT_MALE}Just having the BOULDERBADGE makes\n"
    .string "your POKéMON more powerful.\p"
    .string "It also enables the use of the\n"
    .string "move FLASH outside of battle.\p"
    .string "Of course, a POKéMON must know the\n"
    .string "move FLASH to use it.$"

PewterCity_Gym_Text_TakeThisWithYou::
    .string "Also, {PLAYER}\n"
    .string "Take this with you.$"

PewterCity_Gym_Text_ReceivedTM39FromBrock::
    .string "{PLAYER} received TM39\n"
    .string "from BROCK.$"

PewterCity_Gym_Text_ExplainTM39::
    .string "A TM, Technical Machine, contains a\n"
    .string "technique for POKéMON.\p"
    .string "Using a TM teaches the move it\n"
    .string "contains to a POKéMON.\p"
    .string "A TM is good for only one use.\p"
    .string "Anyways…\n"
    .string "TM39 contains ROCK TOMB.\p"
    .string "It hurls boulders at the foe and\n"
    .string "lowers its SPEED.$"

PewterCity_Gym_Text_BrockPostBattle::
    .string "There are all kinds of TRAINERS in\n"
    .string "this huge world of ours.\p"
    .string "You appear to be very gifted as a\n"
    .string "POKéMON TRAINER.\p"
    .string "So let me make a suggestion.\p"
    .string "Go to the GYM in CERULEAN and test\n"
    .string "your abilities.$"

PewterCity_Gym_Text_DontHaveRoomForThis::
    .string "You don't have room for this.$"

PewterCity_Gym_Text_LiamIntro::
    .string "Welcome to our GYM.\n"
    .string "Though you are young,\p"
    .string "you shall receive no mercy.\n"
    .string "All I ask is you do your best\p"
    .string "and be gracious, whether you\n"
    .string "'win' or 'lose'.$"

PewterCity_Gym_Text_LiamDefeat::
    .string "Great effort young sage.\p"
    .string "I am glad to let you proceed\n"
    .string "to challenge BROCK!\p"
    .string "He is a great teacher...$"

PewterCity_Gym_Text_LiamPostBattle::
    .string "Crack rocks and rock cracks.\n"
    .string "Too much time in this GYM?$"

PewterCity_Gym_Text_LetMeTakeYouToTheTop::
    .string "Hello, {PLAYER}.\n"
    .string "I pride myself in identifying\p"
    .string "future CHAMPIONS.\n"
    .string "Greatness comes in many forms.\p"
    .string "It is often easier to spot it\n"
    .string "than to desribe it.\p"
    .string "Today you take on BROCK.\n"
    .string "He uses tough ROCK type POKeMON.\p"
    .string "Would you like my help on your path?$"

PewterCity_Gym_Text_LetsGetHappening::
    .string "All right!\n"
    .string "Let's rock baby!$"

PewterCity_Gym_Text_TryDifferentPartyOrders::
    .string "The first POKéMON out in a match is\n"
    .string "at the left of the POKéMON LIST.\p"
    .string "By changing the order of POKéMON,\n"
    .string "you may gain an advantage.\p"
    .string "Try different orders to suit your\n"
    .string "opponent's party.$"

PewterCity_Gym_Text_ItsFreeLetsGetHappening::
    .string "It's a free service!\n"
    .string "Let's get happening!$"

PewterCity_Gym_Text_YoureChampMaterial::
    .string "AYYY! Just as I thought!\n"
    .string "You're POKéMON champ material!$"

PewterCity_Gym_Text_GymStatue::
    .string "PEWTER POKéMON GYM\n"
    .string "LEADER: BROCK\p"
    .string "WINNING TRAINERS:\n"
    .string "{RIVAL}$"

PewterCity_Gym_Text_GymStatuePlayerWon::
    .string "PEWTER POKéMON GYM\n"
    .string "LEADER: BROCK\p"
    .string "WINNING TRAINERS:\n"
    .string "{RIVAL}, {PLAYER}$"

