#pragma region MOVE_TYPE

#define TYPE_NORMAL "Normal"
#define TYPE_GROUND "Ground"
#define TYPE_FAIRY "Fairy"
#define TYPE_PSYCHIC "Psychic"
#define TYPE_GRASS "Grass"
#define TYPE_DRAGON "Dragon"
#define TYPE_STEEL "Steel"
#define TYPE_POISON "Poison"
#define TYPE_GHOST "Ghost"
#define TYPE_ROCK "Rock"
#define TYPE_FIGHTING "Fighting"
#define TYPE_MYSTERY "Mystery"
#define TYPE_DARK "Dark"
#define TYPE_ICE "Ice"
#define TYPE_FIRE "Fire"
#define TYPE_ELECTRIC "Electric"
#define TYPE_WATER "Water"
#define TYPE_FLYING "Flying"
#define TYPE_BUG "Bug"

#pragma endregion MOVE_TYPE

#pragma region MOVE_TARGET

#define MOVE_TARGET_RANDOM "Random"
#define MOVE_TARGET_DEPENDS "Depends"
#define MOVE_TARGET_OPPONENTS_FIELD "Opponents Field"
#define MOVE_TARGET_USER_OR_PARTNER "User or Partner"
#define MOVE_TARGET_USER "User"
#define MOVE_TARGET_FOES_AND_ALLY "For and Ally"
#define MOVE_TARGET_SELECTED "Selected"
#define MOVE_TARGET_BOTH "Both"

#pragma endregion MOVE_TARGET

#pragma region SPLIT

#define SPLIT_STATUS "Status"
#define SPLIT_PHYSICAL "Physical"
#define SPLIT_SPECIAL "Special"

#pragma endregion SPLIT

#pragma region FLAGS

#define FLAG_MIRROR_MOVE_AFFECTED 0b000001
#define FLAG_MAKES_CONTACT 0b000010
#define FLAG_PROTECT_AFFECTED 0b000100
#define FLAG_TRIAGE_AFFECTED 0b001000
#define FLAG_SNATCH_AFFECTED 0b010000
#define FLAG_MAGIC_COAT_AFFECTED 0b100000

#pragma endregion FLAGS

#pragma region MAX_EFFECT

#define REGULAR_Z_MOVE 0
#define Z_EFFECT_SPDEF_UP_2 1
#define MAX_EFFECT_ELECTRIC_TERRAIN 2
#define MAX_EFFECT_RAISE_TEAM_DEFENSE 3
#define MAX_EFFECT_PARALYZE_FOES 4
#define MAX_EFFECT_TORMENT_FOES 5
#define MAX_EFFECT_LOWER_EVASIVENESS_FOES 6
#define MAX_EFFECT_PSYCHIC_TERRAIN 7
#define MAX_EFFECT_DEFOG 8
#define MAX_EFFECT_LOWER_ATTACK 9
#define MAX_EFFECT_RAISE_TEAM_SP_ATK 10
#define MAX_EFFECT_AURORA_VEIL 11
#define MAX_EFFECT_SANDBLAST_FOES 12
#define MAX_EFFECT_MISTY_TERRAIN 13
#define Z_EFFECT_SPD_UP_2 14
#define MAX_EFFECT_MEAN_LOOK 15
#define MAX_EFFECT_LOWER_SPEED 16
#define MAX_EFFECT_RECYCLE_BERRIES 17
#define Z_EFFECT_RECOVER_HP 18
#define MAX_EFFECT_VOLCAITH_FOES 19
#define Z_EFFECT_EVSN_UP_1 20
#define Z_EFFECT_FOLLOW_ME 21
#define Z_EFFECT_RESTORE_REPLACEMENT_HP 22
#define Z_EFFECT_RESET_STATS 23
#define MAX_EFFECT_IGNORE_ABILITY 24
#define MAX_EFFECT_STEALTH_ROCK 25
#define MAX_EFFECT_YAWN_FOE 26
#define MAX_EFFECT_LOWER_DEFENSE 27
#define MAX_EFFECT_GRAVITY 28
#define MAX_EFFECT_SUN 29
#define MAX_EFFECT_POISON_FOES 30
#define MAX_EFFECT_CRIT_PLUS 31
#define Z_EFFECT_BOOST_CRITS 32
#define MAX_EFFECT_RAIN 33
#define Z_EFFECT_SPATK_UP_1 34
#define MAX_EFFECT_LOWER_SP_DEF 35
#define MAX_EFFECT_AROMATHERAPY 36
#define Z_EFFECT_DEF_UP_1 37
#define Z_EFFECT_ALL_STATS_UP_1 38
#define Z_EFFECT_ATK_UP_2 39
#define Z_EFFECT_ATK_UP_3 40
#define MAX_EFFECT_HEAL_TEAM 41
#define MAX_EFFECT_STEELSURGE 42
#define Z_EFFECT_SPATK_UP_2 43
#define MAX_EFFECT_HAIL 44
#define Z_EFFECT_SPDEF_UP_1 45
#define Z_EFFECT_ACC_UP_1 46
#define MAX_EFFECT_LOWER_SP_ATK 47
#define Z_EFFECT_ATK_UP_1 48
#define Z_EFFECT_CURSE 49
#define MAX_EFFECT_EFFECT_SPORE_FOES 50
#define MAX_EFFECT_CONFUSE_FOES_PAY_DAY 51
#define MAX_EFFECT_LOWER_SPEED_2_FOES 52
#define MAX_EFFECT_INFATUATE_FOES 53
#define MAX_EFFECT_SPITE 54
#define MAX_EFFECT_RAISE_TEAM_SPEED 55
#define MAX_EFFECT_CANNONADE 56
#define MAX_EFFECT_SANDSTORM 57
#define MAX_EFFECT_VINE_LASH 58
#define MAX_EFFECT_CONFUSE_FOES 59
#define MAX_EFFECT_GRASSY_TERRAIN 60
#define MAX_EFFECT_RAISE_TEAM_ATTACK 61
#define MAX_EFFECT_BYPASS_PROTECT 62
#define MAX_EFFECT_WILDFIRE 63
#define Z_EFFECT_SPD_UP_1 64
#define MAX_EFFECT_POISON_PARALYZE_FOES 65
#define MAX_EFFECT_RAISE_TEAM_SP_DEF 66
#define MAX_EFFECT_FIRE_SPIN_FOES 67

#pragma endregion MAX_EFFECT

#pragma region EFFECTS

#define EFFECT_ATTACK_DOWN_HIT 0
#define EFFECT_LAST_RESORT 1
#define EFFECT_CONVERSION_2 2
#define EFFECT_SKILL_SWAP 3
#define EFFECT_SLEEP 4
#define EFFECT_LIGHT_SCREEN 5
#define EFFECT_REMOVE_TARGET_STAT_CHANGES 6
#define EFFECT_REFRESH 7
#define EFFECT_STAT_SWAP_SPLIT 8
#define EFFECT_RAGE 9
#define EFFECT_NATURAL_GIFT 10
#define EFFECT_GRUDGE 11
#define EFFECT_RECOIL_IF_MISS 12
#define EFFECT_WATER_SPORT 13
#define EFFECT_RAZOR_WIND 14
#define EFFECT_RECHARGE 15
#define EFFECT_HELPING_HAND 16
#define EFFECT_SUPERPOWER 17
#define EFFECT_SPLASH 18
#define EFFECT_LOCK_ON 19
#define EFFECT_PARALYZE 20
#define EFFECT_TWISTER 21
#define EFFECT_BURN_HIT 22
#define EFFECT_RAPID_SPIN 23
#define EFFECT_QUICK_ATTACK 24
#define EFFECT_MUD_SPORT 25
#define EFFECT_ACCURACY_DOWN_HIT 26
#define EFFECT_DEFENSE_DOWN_2 27
#define EFFECT_BAD_POISON_HIT 28
#define EFFECT_TRAP 29
#define EFFECT_DRAGON_DANCE 30
#define EFFECT_EVASION_DOWN_2 31
#define EFFECT_SNORE 32
#define EFFECT_RECYCLE 33
#define EFFECT_HAZE 34
#define EFFECT_DESTINY_BOND 35
#define EFFECT_SWALLOW 36
#define EFFECT_HIGH_CRITICAL 37
#define EFFECT_SMACK_DOWN 38
#define EFFECT_DEFENSE_UP_HIT 39
#define EFFECT_GUST 40
#define EFFECT_CONFUSE_HIT 41
#define EFFECT_SPECIAL_DEFENSE_DOWN_2_HIT 42
#define EFFECT_FLINCH_HIT 43
#define EFFECT_TOXIC 44
#define EFFECT_CHARGE 45
#define EFFECT_ATTACK_DOWN_2 46
#define EFFECT_MEMENTO 47
#define EFFECT_SPEED_DOWN 48
#define EFFECT_WILL_O_WISP 49
#define EFFECT_DREAM_EATER 50
#define EFFECT_NATURE_POWER 51
#define EFFECT_TRICK 52
#define EFFECT_SPECIAL_DEFENSE_DOWN_2 53
#define EFFECT_BELLY_DRUM 54
#define EFFECT_THIEF 55
#define EFFECT_YAWN 56
#define EFFECT_ATTACK_UP_HIT 57
#define EFFECT_KNOCK_OFF 58
#define EFFECT_CALM_MIND 59
#define EFFECT_IMPRISON 60
#define EFFECT_EXTREME_EVOBOOST 61
#define EFFECT_SPECIAL_DEFENSE_UP 62
#define EFFECT_EAT_BERRY 63
#define EFFECT_FREEZE_HIT 64
#define EFFECT_METRONOME 65
#define EFFECT_ATTACK_UP_2 66
#define EFFECT_ATK_SPATK_UP 67
#define EFFECT_MAX_MOVE 68
#define EFFECT_DEFENSE_DOWN_HIT 69
#define EFFECT_BEAT_UP 70
#define EFFECT_ATTACK_DOWN 71
#define EFFECT_TORMENT 72
#define EFFECT_TAUNT 73
#define EFFECT_SPITE 74
#define EFFECT_COUNTER 75
#define EFFECT_EVASION_UP 76
#define EFFECT_SANDSTORM 77
#define EFFECT_BIDE 78
#define EFFECT_SMELLINGSALT 79
#define EFFECT_BULK_UP 80
#define EFFECT_PLAY_NICE 81
#define EFFECT_SET_TERRAIN 82
#define EFFECT_SUNNY_DAY 83
#define EFFECT_SKY_DROP 84
#define EFFECT_PSYCH_UP 85
#define EFFECT_PAY_DAY 86
#define EFFECT_FOCUS_ENERGY 87
#define EFFECT_MAGNITUDE 88
#define EFFECT_SPIT_UP 89
#define EFFECT_SPECIAL_DEFENSE_UP_2 90
#define EFFECT_ACCURACY_DOWN 91
#define EFFECT_PRESENT 92
#define EFFECT_TEAM_EFFECTS 93
#define EFFECT_TELEPORT 94
#define EFFECT_REFLECT 95
#define EFFECT_FALSE_SWIPE 96
#define EFFECT_FUTURE_SIGHT 97
#define EFFECT_RECOIL 98
#define EFFECT_ENCORE 99
#define EFFECT_POISON 100
#define EFFECT_TRI_ATTACK 101
#define EFFECT_SPECIAL_ATTACK_DOWN 102
#define EFFECT_SKETCH 103
#define EFFECT_SPIKES 104
#define EFFECT_HEAL_TARGET 105
#define EFFECT_MORNING_SUN 106
#define EFFECT_ASSIST 107
#define EFFECT_PARALYZE_HIT 108
#define EFFECT_ATTACK_UP 109
#define EFFECT_SUPER_FANG 110
#define EFFECT_TEATIME 111
#define EFFECT_SLEEP_TALK 112
#define EFFECT_HIT 113
#define EFFECT_THUNDER 114
#define EFFECT_FLING 115
#define EFFECT_RAIN_DANCE 116
#define EFFECT_FORESIGHT 117
#define EFFECT_SPEED_UP_2 118
#define EFFECT_RESTORE_HP 119
#define EFFECT_MINIMIZE 120
#define EFFECT_CAMOUFLAGE 121
#define EFFECT_PLEDGE 122
#define EFFECT_EXPLOSION 123
#define EFFECT_PURSUIT 124
#define EFFECT_DEF_SPD_UP 125
#define EFFECT_ALL_STATS_UP_HIT 126
#define EFFECT_DOUBLE_HIT 127
#define EFFECT_RAMPAGE 128
#define EFFECT_HAIL 129
#define EFFECT_ATK_ACC_UP 130
#define EFFECT_RELIC_SONG 131
#define EFFECT_POISON_HIT 132
#define EFFECT_MEAN_LOOK 133
#define EFFECT_WISH 134
#define EFFECT_SPRINGTIDE_STORM 135
#define EFFECT_ROAR 136
#define EFFECT_BRICK_BREAK 137
#define EFFECT_MIST 138
#define EFFECT_DISABLE 139
#define EFFECT_SKY_ATTACK 140
#define EFFECT_FLATTER 141
#define EFFECT_SUBSTITUTE 142
#define EFFECT_SPLINTER 143
#define EFFECT_PSYWAVE 144
#define EFFECT_ABSORB 145
#define EFFECT_FAKE_OUT 146
#define EFFECT_CONVERSION 147
#define EFFECT_ME_FIRST 148
#define EFFECT_CONFUSE 149
#define EFFECT_IGNORE_REDIRECTION 150
#define EFFECT_SPECIAL_ATTACK_UP_2 151
#define EFFECT_DEFENSE_CURL 152
#define EFFECT_TOPSY_TURVY_ELECTRIFY 153
#define EFFECT_SAFEGUARD 154
#define EFFECT_FAIRY_LOCK_HAPPY_HOUR 155
#define EFFECT_ROLLOUT 156
#define EFFECT_TICKLE 157
#define EFFECT_PERISH_SONG 158
#define EFFECT_POLTERGEIST 159
#define EFFECT_TRIPLE_KICK 160
#define EFFECT_MAGIC_COAT 161
#define EFFECT_ENDEAVOR 162
#define EFFECT_SECRET_POWER 163
#define EFFECT_STOCKPILE 164
#define EFFECT_DEFENSE_DOWN 165
#define EFFECT_TRANSFORM 166
#define EFFECT_DRAGON_RAGE 167
#define EFFECT_FURY_CUTTER 168
#define EFFECT_HIGHER_OFFENSES_DEFENSES_UP_HIT 169
#define EFFECT_SPEED_DOWN_HIT 170
#define EFFECT_INGRAIN 171
#define EFFECT_LEECH_SEED 172
#define EFFECT_SEMI_INVULNERABLE 173
#define EFFECT_SWAGGER 174
#define EFFECT_SPECIAL_ATTACK_UP_HIT 175
#define EFFECT_MIMIC 176
#define EFFECT_SPECIAL_ATTACK_DOWN_HIT 177
#define EFFECT_SNATCH 178
#define EFFECT_COSMIC_POWER 179
#define EFFECT_MULTI_HIT 180
#define EFFECT_0HKO 181
#define EFFECT_CURSE 182
#define EFFECT_REST 183
#define EFFECT_BURN_UP 184
#define EFFECT_LEVEL_DAMAGE 185
#define EFFECT_FLAIL 186
#define EFFECT_SPEED_UP_1_HIT 187
#define EFFECT_PAIN_SPLIT 188
#define EFFECT_NIGHTMARE 189
#define EFFECT_FOCUS_PUNCH 190
#define EFFECT_FIELD_EFFECTS 191
#define EFFECT_DAMAGE_SET_TERRAIN 192
#define EFFECT_FOLLOW_ME 193
#define EFFECT_ALWAYS_HIT 194
#define EFFECT_ATTRACT 195
#define EFFECT_VENOM_DRENCH 196
#define EFFECT_DEFENSE_UP_2 197
#define EFFECT_ATTACK_BLOCKERS 198
#define EFFECT_MIRROR_COAT 199
#define EFFECT_ROLE_PLAY 200
#define EFFECT_OVERHEAT 201
#define EFFECT_BATON_PASS 202
#define EFFECT_DEFENSE_UP_2_HIT 203
#define EFFECT_UPROAR 204
#define EFFECT_SPECIAL_DEFENSE_DOWN_HIT 205
#define EFFECT_DEFENSE_UP 206
#define EFFECT_SKULL_BASH 207
#define EFFECT_SUCKER_PUNCH 208
#define EFFECT_MIRROR_MOVE 209
#define EFFECT_TYPE_CHANGES 210
#define EFFECT_SOLARBEAM 211
#define EFFECT_SPEED_DOWN_2 212
#define EFFECT_INSTRUCT_AFTER_YOU_QUASH 213
#define EFFECT_FEINT 214
#define EFFECT_HEAL_BELL 215
#define EFFECT_SONICBOOM 216
#define EFFECT_PROTECT 217
#define EFFECT_SPECIAL_ATTACK_DOWN_2 218
#define EFFECT_FLAMEBURST 219

#pragma endregion EFFECTS

#pragma region MOVES

#define MOVE_NONE 0
#define MOVE_POUND 1
#define MOVE_KARATECHOP 2
#define MOVE_DOUBLESLAP 3
#define MOVE_COMETPUNCH 4
#define MOVE_MEGAPUNCH 5
#define MOVE_PAYDAY 6
#define MOVE_FIREPUNCH 7
#define MOVE_ICEPUNCH 8
#define MOVE_THUNDERPUNCH 9
#define MOVE_SCRATCH 10
#define MOVE_VICEGRIP 11
#define MOVE_GUILLOTINE 12
#define MOVE_RAZORWIND 13
#define MOVE_SWORDSDANCE 14
#define MOVE_CUT 15
#define MOVE_GUST 16
#define MOVE_WINGATTACK 17
#define MOVE_WHIRLWIND 18
#define MOVE_FLY 19
#define MOVE_BIND 20
#define MOVE_SLAM 21
#define MOVE_VINEWHIP 22
#define MOVE_STOMP 23
#define MOVE_DOUBLEKICK 24
#define MOVE_MEGAKICK 25
#define MOVE_JUMPKICK 26
#define MOVE_ROLLINGKICK 27
#define MOVE_SANDATTACK 28
#define MOVE_HEADBUTT 29
#define MOVE_HORNATTACK 30
#define MOVE_FURYATTACK 31
#define MOVE_HORNDRILL 32
#define MOVE_TACKLE 33
#define MOVE_BODYSLAM 34
#define MOVE_WRAP 35
#define MOVE_TAKEDOWN 36
#define MOVE_THRASH 37
#define MOVE_DOUBLEEDGE 38
#define MOVE_TAILWHIP 39
#define MOVE_POISONSTING 40
#define MOVE_TWINEEDLE 41
#define MOVE_PINMISSILE 42
#define MOVE_LEER 43
#define MOVE_BITE 44
#define MOVE_GROWL 45
#define MOVE_ROAR 46
#define MOVE_SING 47
#define MOVE_SUPERSONIC 48
#define MOVE_SONICBOOM 49
#define MOVE_DISABLE 50
#define MOVE_ACID 51
#define MOVE_EMBER 52
#define MOVE_FLAMETHROWER 53
#define MOVE_MIST 54
#define MOVE_WATERGUN 55
#define MOVE_HYDROPUMP 56
#define MOVE_SURF 57
#define MOVE_ICEBEAM 58
#define MOVE_BLIZZARD 59
#define MOVE_PSYBEAM 60
#define MOVE_BUBBLEBEAM 61
#define MOVE_AURORABEAM 62
#define MOVE_HYPERBEAM 63
#define MOVE_PECK 64
#define MOVE_DRILLPECK 65
#define MOVE_SUBMISSION 66
#define MOVE_LOWKICK 67
#define MOVE_COUNTER 68
#define MOVE_SEISMICTOSS 69
#define MOVE_STRENGTH 70
#define MOVE_ABSORB 71
#define MOVE_MEGADRAIN 72
#define MOVE_LEECHSEED 73
#define MOVE_GROWTH 74
#define MOVE_RAZORLEAF 75
#define MOVE_SOLARBEAM 76
#define MOVE_POISONPOWDER 77
#define MOVE_STUNSPORE 78
#define MOVE_SLEEPPOWDER 79
#define MOVE_PETALDANCE 80
#define MOVE_STRINGSHOT 81
#define MOVE_DRAGONRAGE 82
#define MOVE_FIRESPIN 83
#define MOVE_THUNDERSHOCK 84
#define MOVE_THUNDERBOLT 85
#define MOVE_THUNDERWAVE 86
#define MOVE_THUNDER 87
#define MOVE_ROCKTHROW 88
#define MOVE_EARTHQUAKE 89
#define MOVE_FISSURE 90
#define MOVE_DIG 91
#define MOVE_TOXIC 92
#define MOVE_CONFUSION 93
#define MOVE_PSYCHIC 94
#define MOVE_HYPNOSIS 95
#define MOVE_MEDITATE 96
#define MOVE_AGILITY 97
#define MOVE_QUICKATTACK 98
#define MOVE_RAGE 99
#define MOVE_TELEPORT 100
#define MOVE_NIGHTSHADE 101
#define MOVE_MIMIC 102
#define MOVE_SCREECH 103
#define MOVE_DOUBLETEAM 104
#define MOVE_RECOVER 105
#define MOVE_HARDEN 106
#define MOVE_MINIMIZE 107
#define MOVE_SMOKESCREEN 108
#define MOVE_CONFUSERAY 109
#define MOVE_WITHDRAW 110
#define MOVE_DEFENSECURL 111
#define MOVE_BARRIER 112
#define MOVE_LIGHTSCREEN 113
#define MOVE_HAZE 114
#define MOVE_REFLECT 115
#define MOVE_FOCUSENERGY 116
#define MOVE_BIDE 117
#define MOVE_METRONOME 118
#define MOVE_MIRRORMOVE 119
#define MOVE_SELFDESTRUCT 120
#define MOVE_EGGBOMB 121
#define MOVE_LICK 122
#define MOVE_SMOG 123
#define MOVE_SLUDGE 124
#define MOVE_BONECLUB 125
#define MOVE_FIREBLAST 126
#define MOVE_WATERFALL 127
#define MOVE_CLAMP 128
#define MOVE_SWIFT 129
#define MOVE_SKULLBASH 130
#define MOVE_SPIKECANNON 131
#define MOVE_CONSTRICT 132
#define MOVE_AMNESIA 133
#define MOVE_KINESIS 134
#define MOVE_SOFTBOILED 135
#define MOVE_HIGHJUMPKICK 136
#define MOVE_GLARE 137
#define MOVE_DREAMEATER 138
#define MOVE_POISONGAS 139
#define MOVE_BARRAGE 140
#define MOVE_LEECHLIFE 141
#define MOVE_LOVELYKISS 142
#define MOVE_SKYATTACK 143
#define MOVE_TRANSFORM 144
#define MOVE_BUBBLE 145
#define MOVE_DIZZYPUNCH 146
#define MOVE_SPORE 147
#define MOVE_FLASH 148
#define MOVE_PSYWAVE 149
#define MOVE_SPLASH 150
#define MOVE_ACIDARMOR 151
#define MOVE_CRABHAMMER 152
#define MOVE_EXPLOSION 153
#define MOVE_FURYSWIPES 154
#define MOVE_BONEMERANG 155
#define MOVE_REST 156
#define MOVE_ROCKSLIDE 157
#define MOVE_HYPERFANG 158
#define MOVE_SHARPEN 159
#define MOVE_CONVERSION 160
#define MOVE_TRIATTACK 161
#define MOVE_SUPERFANG 162
#define MOVE_SLASH 163
#define MOVE_SUBSTITUTE 164
#define MOVE_STRUGGLE 165
#define MOVE_SKETCH 166
#define MOVE_TRIPLEKICK 167
#define MOVE_THIEF 168
#define MOVE_SPIDERWEB 169
#define MOVE_MINDREADER 170
#define MOVE_NIGHTMARE 171
#define MOVE_FLAMEWHEEL 172
#define MOVE_SNORE 173
#define MOVE_CURSE 174
#define MOVE_FLAIL 175
#define MOVE_CONVERSION2 176
#define MOVE_AEROBLAST 177
#define MOVE_COTTONSPORE 178
#define MOVE_REVERSAL 179
#define MOVE_SPITE 180
#define MOVE_POWDERSNOW 181
#define MOVE_PROTECT 182
#define MOVE_MACHPUNCH 183
#define MOVE_SCARYFACE 184
#define MOVE_FEINTATTACK 185
#define MOVE_SWEETKISS 186
#define MOVE_BELLYDRUM 187
#define MOVE_SLUDGEBOMB 188
#define MOVE_MUDSLAP 189
#define MOVE_OCTAZOOKA 190
#define MOVE_SPIKES 191
#define MOVE_ZAPCANNON 192
#define MOVE_FORESIGHT 193
#define MOVE_DESTINYBOND 194
#define MOVE_PERISHSONG 195
#define MOVE_ICYWIND 196
#define MOVE_DETECT 197
#define MOVE_BONERUSH 198
#define MOVE_LOCKON 199
#define MOVE_OUTRAGE 200
#define MOVE_SANDSTORM 201
#define MOVE_GIGADRAIN 202
#define MOVE_ENDURE 203
#define MOVE_CHARM 204
#define MOVE_ROLLOUT 205
#define MOVE_FALSESWIPE 206
#define MOVE_SWAGGER 207
#define MOVE_MILKDRINK 208
#define MOVE_SPARK 209
#define MOVE_FURYCUTTER 210
#define MOVE_STEELWING 211
#define MOVE_MEANLOOK 212
#define MOVE_ATTRACT 213
#define MOVE_SLEEPTALK 214
#define MOVE_HEALBELL 215
#define MOVE_RETURN 216
#define MOVE_PRESENT 217
#define MOVE_FRUSTRATION 218
#define MOVE_SAFEGUARD 219
#define MOVE_PAINSPLIT 220
#define MOVE_SACREDFIRE 221
#define MOVE_MAGNITUDE 222
#define MOVE_DYNAMICPUNCH 223
#define MOVE_MEGAHORN 224
#define MOVE_DRAGONBREATH 225
#define MOVE_BATONPASS 226
#define MOVE_ENCORE 227
#define MOVE_PURSUIT 228
#define MOVE_RAPIDSPIN 229
#define MOVE_SWEETSCENT 230
#define MOVE_IRONTAIL 231
#define MOVE_METALCLAW 232
#define MOVE_VITALTHROW 233
#define MOVE_MORNINGSUN 234
#define MOVE_SYNTHESIS 235
#define MOVE_MOONLIGHT 236
#define MOVE_HIDDENPOWER 237
#define MOVE_CROSSCHOP 238
#define MOVE_TWISTER 239
#define MOVE_RAINDANCE 240
#define MOVE_SUNNYDAY 241
#define MOVE_CRUNCH 242
#define MOVE_MIRRORCOAT 243
#define MOVE_PSYCHUP 244
#define MOVE_EXTREMESPEED 245
#define MOVE_ANCIENTPOWER 246
#define MOVE_SHADOWBALL 247
#define MOVE_FUTURESIGHT 248
#define MOVE_ROCKSMASH 249
#define MOVE_WHIRLPOOL 250
#define MOVE_BEATUP 251
#define MOVE_FAKEOUT 252
#define MOVE_UPROAR 253
#define MOVE_STOCKPILE 254
#define MOVE_SPITUP 255
#define MOVE_SWALLOW 256
#define MOVE_HEATWAVE 257
#define MOVE_HAIL 258
#define MOVE_TORMENT 259
#define MOVE_FLATTER 260
#define MOVE_WILLOWISP 261
#define MOVE_MEMENTO 262
#define MOVE_FACADE 263
#define MOVE_FOCUSPUNCH 264
#define MOVE_SMELLINGSALTS 265
#define MOVE_FOLLOWME 266
#define MOVE_NATUREPOWER 267
#define MOVE_CHARGE 268
#define MOVE_TAUNT 269
#define MOVE_HELPINGHAND 270
#define MOVE_TRICK 271
#define MOVE_ROLEPLAY 272
#define MOVE_WISH 273
#define MOVE_ASSIST 274
#define MOVE_INGRAIN 275
#define MOVE_SUPERPOWER 276
#define MOVE_MAGICCOAT 277
#define MOVE_RECYCLE 278
#define MOVE_REVENGE 279
#define MOVE_BRICKBREAK 280
#define MOVE_YAWN 281
#define MOVE_KNOCKOFF 282
#define MOVE_ENDEAVOR 283
#define MOVE_ERUPTION 284
#define MOVE_SKILLSWAP 285
#define MOVE_IMPRISON 286
#define MOVE_REFRESH 287
#define MOVE_GRUDGE 288
#define MOVE_SNATCH 289
#define MOVE_SECRETPOWER 290
#define MOVE_DIVE 291
#define MOVE_ARMTHRUST 292
#define MOVE_CAMOUFLAGE 293
#define MOVE_TAILGLOW 294
#define MOVE_LUSTERPURGE 295
#define MOVE_MISTBALL 296
#define MOVE_FEATHERDANCE 297
#define MOVE_TEETERDANCE 298
#define MOVE_BLAZEKICK 299
#define MOVE_MUDSPORT 300
#define MOVE_ICEBALL 301
#define MOVE_NEEDLEARM 302
#define MOVE_SLACKOFF 303
#define MOVE_HYPERVOICE 304
#define MOVE_POISONFANG 305
#define MOVE_CRUSHCLAW 306
#define MOVE_BLASTBURN 307
#define MOVE_HYDROCANNON 308
#define MOVE_METEORMASH 309
#define MOVE_ASTONISH 310
#define MOVE_WEATHERBALL 311
#define MOVE_AROMATHERAPY 312
#define MOVE_FAKETEARS 313
#define MOVE_AIRCUTTER 314
#define MOVE_OVERHEAT 315
#define MOVE_ODORSLEUTH 316
#define MOVE_ROCKTOMB 317
#define MOVE_SILVERWIND 318
#define MOVE_METALSOUND 319
#define MOVE_GRASSWHISTLE 320
#define MOVE_TICKLE 321
#define MOVE_COSMICPOWER 322
#define MOVE_WATERSPOUT 323
#define MOVE_SIGNALBEAM 324
#define MOVE_SHADOWPUNCH 325
#define MOVE_EXTRASENSORY 326
#define MOVE_SKYUPPERCUT 327
#define MOVE_SANDTOMB 328
#define MOVE_SHEERCOLD 329
#define MOVE_MUDDYWATER 330
#define MOVE_BULLETSEED 331
#define MOVE_AERIALACE 332
#define MOVE_ICICLESPEAR 333
#define MOVE_IRONDEFENSE 334
#define MOVE_BLOCK 335
#define MOVE_HOWL 336
#define MOVE_DRAGONCLAW 337
#define MOVE_FRENZYPLANT 338
#define MOVE_BULKUP 339
#define MOVE_BOUNCE 340
#define MOVE_MUDSHOT 341
#define MOVE_POISONTAIL 342
#define MOVE_COVET 343
#define MOVE_VOLTTACKLE 344
#define MOVE_MAGICALLEAF 345
#define MOVE_WATERSPORT 346
#define MOVE_CALMMIND 347
#define MOVE_LEAFBLADE 348
#define MOVE_DRAGONDANCE 349
#define MOVE_ROCKBLAST 350
#define MOVE_SHOCKWAVE 351
#define MOVE_WATERPULSE 352
#define MOVE_DOOMDESIRE 353
#define MOVE_PSYCHOBOOST 354
#define MOVE_LEECHFANG 355
#define MOVE_AIRSLASH 356
#define MOVE_AQUAJET 357
#define MOVE_AQUATAIL 358
#define MOVE_AURASPHERE 359
#define MOVE_AVALANCHE 360
#define MOVE_BRAVEBIRD 361
#define MOVE_BUGBUZZ 362
#define MOVE_BULLETPUNCH 363
#define MOVE_CHARGEBEAM 364
#define MOVE_CLOSECOMBAT 365
#define MOVE_CROSSPOISON 366
#define MOVE_DARKPULSE 367
#define MOVE_DISCHARGE 368
#define MOVE_DRACOMETEOR 369
#define MOVE_DRAGONPULSE 370
#define MOVE_DRAINPUNCH 371
#define MOVE_EARTHPOWER 372
#define MOVE_ENERGYBALL 373
#define MOVE_FOCUSBLAST 374
#define MOVE_FORCEPALM 375
#define MOVE_GIGAIMPACT 376
#define MOVE_GRASSKNOT 377
#define MOVE_GUNKSHOT 378
#define MOVE_HAMMERARM 379
#define MOVE_HEADSMASH 380
#define MOVE_ICESHARD 381
#define MOVE_IRONHEAD 382
#define MOVE_LAVAPLUME 383
#define MOVE_MAGNETBOMB 384
#define MOVE_MUDBOMB 385
#define MOVE_NASTYPLOT 386
#define MOVE_NIGHTSLASH 387
#define MOVE_OMINOUSWIND 388
#define MOVE_POWERGEM 389
#define MOVE_POWERWHIP 390
#define MOVE_PSYCHOCUT 391
#define MOVE_ROCKCLIMB 392
#define MOVE_ROCKPOLISH 393
#define MOVE_ROCKWRECKER 394
#define MOVE_ROOST 395
#define MOVE_SEEDBOMB 396
#define MOVE_SHADOWCLAW 397
#define MOVE_SHADOWSNEAK 398
#define MOVE_VACUUMWAVE 399
#define MOVE_XSCISSOR 400
#define MOVE_ZENHEADBUTT 401
#define MOVE_SWITCHEROO 402
#define MOVE_DRILLRUN 403
#define MOVE_BULLDOZE 404
#define MOVE_ELECTROWEB 405
#define MOVE_FLAMECHARGE 406
#define MOVE_FROSTBREATH 407
#define MOVE_HEARTSTAMP 408
#define MOVE_HONECLAWS 409
#define MOVE_HORNLEECH 410
#define MOVE_COIL 411
#define MOVE_HURRICANE 412
#define MOVE_ICICLECRASH 413
#define MOVE_WORKUP 414
#define MOVE_QUIVERDANCE 415
#define MOVE_LEAFTORNADO 416
#define MOVE_LOWSWEEP 417
#define MOVE_SNARL 418
#define MOVE_STRUGGLEBUG 419
#define MOVE_STEAMROLLER 420
#define MOVE_STORMTHROW 421
#define MOVE_VENOSHOCK 422
#define MOVE_WILDCHARGE 423
#define MOVE_POISONJAB 424
#define MOVE_ACIDSPRAY 425
#define MOVE_FIERYDANCE 426
#define MOVE_CLEARSMOG 427
#define MOVE_LEAFSTORM 428
#define MOVE_STONEEDGE 429
#define MOVE_PAYBACK 430
#define MOVE_FIREFANG 431
#define MOVE_ICEFANG 432
#define MOVE_THUNDERFANG 433
#define MOVE_FLAREBLITZ 434
#define MOVE_INFERNO 435
#define MOVE_HEX 436
#define MOVE_DUALCHOP 437
#define MOVE_DOUBLEHIT 438
#define MOVE_COTTONGUARD 439
#define MOVE_ACROBATICS 440
#define MOVE_FLAMEBURST 441
#define MOVE_UTURN 442
#define MOVE_VOLTSWITCH 443
#define MOVE_DRAGONTAIL 444
#define MOVE_CIRCLETHROW 445
#define MOVE_MIRRORSHOT 446
#define MOVE_WOODHAMMER 447
#define MOVE_HEALPULSE 448
#define MOVE_FLASHCANNON 449
#define MOVE_BUGBITE 450
#define MOVE_PLUCK 451
#define MOVE_SHELLSMASH 452
#define MOVE_RAGEPOWDER 453
#define MOVE_WAKEUPSLAP 454
#define MOVE_RAZORSHELL 455
#define MOVE_COPYCAT 456
#define MOVE_MIRACLEEYE 457
#define MOVE_SUCKERPUNCH 458
#define MOVE_SCALD 459
#define MOVE_BRINE 460
#define MOVE_FAIRYWIND 461
#define MOVE_BABYDOLLEYES 462
#define MOVE_PLAYROUGH 463
#define MOVE_MOONBLAST 464
#define MOVE_DRAININGKISS 465
#define MOVE_DAZZLINGGLEAM 466
#define MOVE_DISARMINGVOICE 467
#define MOVE_STEALTHROCK 468
#define MOVE_TOXICSPIKES 469
#define MOVE_HEALINGWISH 470
#define MOVE_LUNARDANCE 471
#define MOVE_TAILWIND 472
#define MOVE_BOOMBURST 473
#define MOVE_INCINERATE 474
#define MOVE_WORRYSEED 475
#define MOVE_GASTROACID 476
#define MOVE_GEOMANCY 477
#define MOVE_FLOWERSHIELD 478
#define MOVE_ROTOTILLER 479
#define MOVE_SHIFTGEAR 480
#define MOVE_STICKYWEB 481
#define MOVE_STOREDPOWER 482
#define MOVE_ACUPRESSURE 483
#define MOVE_PUNISHMENT 484
#define MOVE_ASSURANCE 485
#define MOVE_DRAGONRUSH 486
#define MOVE_DARKVOID 487
#define MOVE_FEINT 488
#define MOVE_PHANTOMFORCE 489
#define MOVE_PETALBLIZZARD 490
#define MOVE_PLAYNICE 491
#define MOVE_ROAROFTIME 492
#define MOVE_SPACIALREND 493
#define MOVE_MAGMASTORM 494
#define MOVE_FINALGAMBIT 495
#define MOVE_SHADOWFORCE 496
#define MOVE_NUZZLE 497
#define MOVE_RETALIATE 498
#define MOVE_STEELYHIT 499
#define MOVE_JUDGMENT 500
#define MOVE_FREEZEDRY 501
#define MOVE_PSYSHOCK 502
#define MOVE_ROUND 503
#define MOVE_TAILSLAP 504
#define MOVE_GEARGRIND 505
#define MOVE_NATURALGIFT 506
#define MOVE_CHIPAWAY 507
#define MOVE_SMACKDOWN 508
#define MOVE_HYPERSPACEHOLE 509
#define MOVE_GYROBALL 510
#define MOVE_HYPERSPACEFURY 511
#define MOVE_ATTACKORDER 512
#define MOVE_DEFENDORDER 513
#define MOVE_HEALORDER 514
#define MOVE_CAPTIVATE 515
#define MOVE_DEFOG 516
#define MOVE_ORIGINPULSE 517
#define MOVE_PRECIPICEBLADES 518
#define MOVE_GUARDSWAP 519
#define MOVE_STEAMERUPTION 520
#define MOVE_METALBURST 521
#define MOVE_MEFIRST 522
#define MOVE_POWERSWAP 523
#define MOVE_POWERTRICK 524
#define MOVE_PSYCHOSHIFT 525
#define MOVE_WRINGOUT 526
#define MOVE_KINGSSHIELD 527
#define MOVE_PSYSTRIKE 528
#define MOVE_AUTOTOMIZE 529
#define MOVE_DIAMONDSTORM 530
#define MOVE_SLUDGEWAVE 531
#define MOVE_HEAVYSLAM 532
#define MOVE_SYNCHRONOISE 533
#define MOVE_ELECTROBALL 534
#define MOVE_FOULPLAY 535
#define MOVE_ENTRAINMENT 536
#define MOVE_NIGHTDAZE 537
#define MOVE_ECHOEDVOICE 538
#define MOVE_LANDSWRATH 539
#define MOVE_OBLIVIONWING 540
#define MOVE_HEARTSWAP 541
#define MOVE_CRUSHGRIP 542
#define MOVE_SACREDSWORD 543
#define MOVE_HEATCRASH 544
#define MOVE_HEADCHARGE 545
#define MOVE_TECHNOBLAST 546
#define MOVE_RELICSONG 547
#define MOVE_SECRETSWORD 548
#define MOVE_GLACIATE 549
#define MOVE_BOLTSTRIKE 550
#define MOVE_BLUEFLARE 551
#define MOVE_FREEZESHOCK 552
#define MOVE_ICEBURN 553
#define MOVE_VCREATE 554
#define MOVE_FUSIONFLARE 555
#define MOVE_FUSIONBOLT 556
#define MOVE_FELLSTINGER 557
#define MOVE_NOBLEROAR 558
#define MOVE_DRAGONASCENT 559
#define MOVE_PARTINGSHOT 560
#define MOVE_TOPSYTURVY 561
#define MOVE_COREENFORCER 562
#define MOVE_CHATTER 563
#define MOVE_CONFIDE 564
#define MOVE_WATERSHURIKEN 565
#define MOVE_MYSTICALFIRE 566
#define MOVE_SPIKYSHIELD 567
#define MOVE_EERIEIMPULSE 568
#define MOVE_HOLDBACK 569
#define MOVE_INFESTATION 570
#define MOVE_POWERUPPUNCH 571
#define MOVE_THOUSANDARROWS 572
#define MOVE_THOUSANDWAVES 573
#define MOVE_PARABOLICCHARGE 574
#define MOVE_SEARINGSHOT 575
#define MOVE_SEEDFLARE 576
#define MOVE_ACCELEROCK 577
#define MOVE_ANCHORSHOT 578
#define MOVE_AURORAVEIL 579
#define MOVE_BANEFULBUNKER 580
#define MOVE_BEAKBLAST 581
#define MOVE_BRUTALSWING 582
#define MOVE_BURNUP 583
#define MOVE_CLANGINGSCALES 584
#define MOVE_DARKESTLARIAT 585
#define MOVE_DRAGONHAMMER 586
#define MOVE_FIRELASH 587
#define MOVE_FIRSTIMPRESSION 588
#define MOVE_FLEURCANNON 589
#define MOVE_FLORALHEALING 590
#define MOVE_GEARUP 591
#define MOVE_HIGHHORSEPOWER 592
#define MOVE_ICEHAMMER 593
#define MOVE_LASERFOCUS 594
#define MOVE_LEAFAGE 595
#define MOVE_LIQUIDATION 596
#define MOVE_LUNGE 597
#define MOVE_MOONGEISTBEAM 598
#define MOVE_MULTIATTACK 599
#define MOVE_NATURESMADNESS 600
#define MOVE_POLLENPUFF 601
#define MOVE_POWERTRIP 602
#define MOVE_PRISMATICLASER 603
#define MOVE_PSYCHICFANGS 604
#define MOVE_PURIFY 605
#define MOVE_REVELATIONDANCE 606
#define MOVE_SHADOWBONE 607
#define MOVE_SHELLTRAP 608
#define MOVE_SHOREUP 609
#define MOVE_SMARTSTRIKE 610
#define MOVE_SOLARBLADE 611
#define MOVE_SPARKLINGARIA 612
#define MOVE_SPECTRALTHIEF 613
#define MOVE_SPEEDSWAP 614
#define MOVE_SPIRITSHACKLE 615
#define MOVE_SPOTLIGHT 616
#define MOVE_STOMPINGTANTRUM 617
#define MOVE_STRENGTHSAP 618
#define MOVE_SUNSTEELSTRIKE 619
#define MOVE_TEARFULLOOK 620
#define MOVE_THROATCHOP 621
#define MOVE_TOXICTHREAD 622
#define MOVE_TROPKICK 623
#define MOVE_ZINGZAP 624
#define MOVE_ELECTRICTERRAIN 625
#define MOVE_GRASSYTERRAIN 626
#define MOVE_MISTYTERRAIN 627
#define MOVE_PSYCHICTERRAIN 628
#define MOVE_GRASSPLEDGE 629
#define MOVE_FIREPLEDGE 630
#define MOVE_WATERPLEDGE 631
#define MOVE_TRICKROOM 632
#define MOVE_MAGICROOM 633
#define MOVE_WONDERROOM 634
#define MOVE_CRAFTYSHIELD 635
#define MOVE_MATBLOCK 636
#define MOVE_QUICKGUARD 637
#define MOVE_WIDEGUARD 638
#define MOVE_AQUARING 639
#define MOVE_AROMATICMIST 640
#define MOVE_BELCH 641
#define MOVE_BESTOW 642
#define MOVE_FLING 643
#define MOVE_FLYINGPRESS 644
#define MOVE_GRAVITY 645
#define MOVE_GUARDSPLIT 646
#define MOVE_HEALBLOCK 647
#define MOVE_IONDELUGE 648
#define MOVE_LUCKYCHANT 649
#define MOVE_MAGNETRISE 650
#define MOVE_MAGNETICFLUX 651
#define MOVE_POWDER 652
#define MOVE_POWERSPLIT 653
#define MOVE_REFLECTTYPE 654
#define MOVE_SIMPLEBEAM 655
#define MOVE_SOAK 656
#define MOVE_TELEKINESIS 657
#define MOVE_TRICKORTREAT 658
#define MOVE_VENOMDRENCH 659
#define MOVE_FORESTSCURSE 660
#define MOVE_MINDBLOWN 661
#define MOVE_PHOTONGEYSER 662
#define MOVE_PLASMAFISTS 663
#define MOVE_ELECTRIFY 664
#define MOVE_EMBARGO 665
#define MOVE_FAIRYLOCK 666
#define MOVE_LIGHTOFRUIN 667
#define MOVE_TRUMPCARD 668
#define MOVE_AFTERYOU 669
#define MOVE_INSTRUCT 670
#define MOVE_QUASH 671
#define MOVE_HAPPYHOUR 672
#define MOVE_DOUBLEIRONBASH 673
#define MOVE_LASTRESORT 674
#define MOVE_SKYDROP 675
#define MOVE_CELEBRATE 676
#define MOVE_HOLDHANDS 677
#define MOVE_DYNAMAXCANNON 678
#define MOVE_SNIPESHOT 679
#define MOVE_JAWLOCK 680
#define MOVE_STUFFCHEEKS 681
#define MOVE_NORETREAT 682
#define MOVE_TARSHOT 683
#define MOVE_MAGICPOWDER 684
#define MOVE_DRAGONDARTS 685
#define MOVE_TEATIME 686
#define MOVE_OCTOLOCK 687
#define MOVE_BOLTBEAK 688
#define MOVE_FISHIOUSREND 689
#define MOVE_COURTCHANGE 690
#define MOVE_CLANGOROUSSOUL 691
#define MOVE_BODYPRESS 692
#define MOVE_DECORATE 693
#define MOVE_DRUMBEATING 694
#define MOVE_SNAPTRAP 695
#define MOVE_PYROBALL 696
#define MOVE_BEHEMOTHBLADE 697
#define MOVE_BEHEMOTHBASH 698
#define MOVE_AURAWHEEL 699
#define MOVE_BREAKINGSWIPE 700
#define MOVE_BRANCHPOKE 701
#define MOVE_OVERDRIVE 702
#define MOVE_APPLEACID 703
#define MOVE_GRAVAPPLE 704
#define MOVE_SPIRITBREAK 705
#define MOVE_STRANGESTEAM 706
#define MOVE_LIFEDEW 707
#define MOVE_OBSTRUCT 708
#define MOVE_FALSESURRENDER 709
#define MOVE_METEORASSAULT 710
#define MOVE_ETERNABEAM 711
#define MOVE_STEELBEAM 712
#define MOVE_EXPANDINGFORCE 713
#define MOVE_STEELROLLER 714
#define MOVE_SCALESHOT 715
#define MOVE_METEORBEAM 716
#define MOVE_SHELLSIDEARM 717
#define MOVE_MISTYEXPLOSION 718
#define MOVE_GRASSYGLIDE 719
#define MOVE_RISINGVOLTAGE 720
#define MOVE_TERRAINPULSE 721
#define MOVE_SKITTERSMACK 722
#define MOVE_BURNINGJEALOUSY 723
#define MOVE_LASHOUT 724
#define MOVE_POLTERGEIST 725
#define MOVE_CORROSIVEGAS 726
#define MOVE_COACHING 727
#define MOVE_FLIPTURN 728
#define MOVE_TRIPLEAXEL 729
#define MOVE_DUALWINGBEAT 730
#define MOVE_SCORCHINGSANDS 731
#define MOVE_JUNGLEHEALING 732
#define MOVE_WICKEDBLOW 733
#define MOVE_SURGINGSTRIKES 734
#define MOVE_FREEZINGGLARE 735
#define MOVE_THUNDEROUSKICK 736
#define MOVE_FIERYWRATH 737
#define MOVE_EERIESPELL 738
#define MOVE_THUNDERCAGE 739
#define MOVE_DRAGONENERGY 740
#define MOVE_ASTRALBARRAGE 741
#define MOVE_GLACIALLANCE 742
#define MOVE_DIRECLAW 743
#define MOVE_PSYSHIELDBASH 744
#define MOVE_POWERSHIFT 745
#define MOVE_STONEAXE 746
#define MOVE_MYSTICALPOWER 747
#define MOVE_RAGINGFURY 748
#define MOVE_WAVECRASH 749
#define MOVE_CHLOROBLAST 750
#define MOVE_MOUNTAINGALE 751
#define MOVE_VICTORYDANCE 752
#define MOVE_HEADLONGRUSH 753
#define MOVE_BARBBARRAGE 754
#define MOVE_ESPERWING 755
#define MOVE_BITTERMALICE 756
#define MOVE_SHELTER 757
#define MOVE_TRIPLEARROWS 758
#define MOVE_INFERNALPARADE 759
#define MOVE_CEASELESSEDGE 760
#define MOVE_BLEAKWINDSTORM 761
#define MOVE_WILDBOLTSTORM 762
#define MOVE_SANDSEARSTORM 763
#define MOVE_SPRINGTIDESTORM 764
#define MOVE_LUNARBLESSING 765
#define MOVE_TAKEHEART 766
#define MOVE_BREAKNECK_BLITZ_P 767
#define MOVE_BREAKNECK_BLITZ_S 768
#define MOVE_ALL_OUT_PUMMELING_P 769
#define MOVE_ALL_OUT_PUMMELING_S 770
#define MOVE_SUPERSONIC_SKYSTRIKE_P 771
#define MOVE_SUPERSONIC_SKYSTRIKE_S 772
#define MOVE_ACID_DOWNPOUR_P 773
#define MOVE_ACID_DOWNPOUR_S 774
#define MOVE_TECTONIC_RAGE_P 775
#define MOVE_TECTONIC_RAGE_S 776
#define MOVE_CONTINENTAL_CRUSH_P 777
#define MOVE_CONTINENTAL_CRUSH_S 778
#define MOVE_SAVAGE_SPIN_OUT_P 779
#define MOVE_SAVAGE_SPIN_OUT_S 780
#define MOVE_NEVER_ENDING_NIGHTMARE_P 781
#define MOVE_NEVER_ENDING_NIGHTMARE_S 782
#define MOVE_CORKSCREW_CRASH_P 783
#define MOVE_CORKSCREW_CRASH_S 784
#define MOVE_INFERNO_OVERDRIVE_P 785
#define MOVE_INFERNO_OVERDRIVE_S 786
#define MOVE_HYDRO_VORTEX_P 787
#define MOVE_HYDRO_VORTEX_S 788
#define MOVE_BLOOM_DOOM_P 789
#define MOVE_BLOOM_DOOM_S 790
#define MOVE_GIGAVOLT_HAVOC_P 791
#define MOVE_GIGAVOLT_HAVOC_S 792
#define MOVE_SHATTERED_PSYCHE_P 793
#define MOVE_SHATTERED_PSYCHE_S 794
#define MOVE_SUBZERO_SLAMMER_P 795
#define MOVE_SUBZERO_SLAMMER_S 796
#define MOVE_DEVASTATING_DRAKE_P 797
#define MOVE_DEVASTATING_DRAKE_S 798
#define MOVE_BLACK_HOLE_ECLIPSE_P 799
#define MOVE_BLACK_HOLE_ECLIPSE_S 800
#define MOVE_TWINKLE_TACKLE_P 801
#define MOVE_TWINKLE_TACKLE_S 802
#define MOVE_CATASTROPIKA 803
#define MOVE_10000000_VOLT_THUNDERBOLT 804
#define MOVE_STOKED_SPARKSURFER 805
#define MOVE_EXTREME_EVOBOOST 806
#define MOVE_PULVERIZING_PANCAKE 807
#define MOVE_GENESIS_SUPERNOVA 808
#define MOVE_SINISTER_ARROW_RAID 809
#define MOVE_MALICIOUS_MOONSAULT 810
#define MOVE_OCEANIC_OPERETTA 811
#define MOVE_SPLINTERED_STORMSHARDS 812
#define MOVE_LETS_SNUGGLE_FOREVER 813
#define MOVE_CLANGOROUS_SOULBLAZE 814
#define MOVE_GUARDIAN_OF_ALOLA 815
#define MOVE_SEARING_SUNRAZE_SMASH 816
#define MOVE_MENACING_MOONRAZE_MAELSTROM 817
#define MOVE_LIGHT_THAT_BURNS_THE_SKY 818
#define MOVE_SOUL_STEALING_7_STAR_STRIKE 819
#define MOVE_MAX_GUARD 820
#define MOVE_MAX_FLARE_P 821
#define MOVE_MAX_FLARE_S 822
#define MOVE_MAX_FLUTTERBY_P 823
#define MOVE_MAX_FLUTTERBY_S 824
#define MOVE_MAX_LIGHTNING_P 825
#define MOVE_MAX_LIGHTNING_S 826
#define MOVE_MAX_STRIKE_P 827
#define MOVE_MAX_STRIKE_S 828
#define MOVE_MAX_KNUCKLE_P 829
#define MOVE_MAX_KNUCKLE_S 830
#define MOVE_MAX_PHANTASM_P 831
#define MOVE_MAX_PHANTASM_S 832
#define MOVE_MAX_HAILSTORM_P 833
#define MOVE_MAX_HAILSTORM_S 834
#define MOVE_MAX_OOZE_P 835
#define MOVE_MAX_OOZE_S 836
#define MOVE_MAX_GEYSER_P 837
#define MOVE_MAX_GEYSER_S 838
#define MOVE_MAX_AIRSTREAM_P 839
#define MOVE_MAX_AIRSTREAM_S 840
#define MOVE_MAX_STARFALL_P 841
#define MOVE_MAX_STARFALL_S 842
#define MOVE_MAX_WYRMWIND_P 843
#define MOVE_MAX_WYRMWIND_S 844
#define MOVE_MAX_MINDSTORM_P 845
#define MOVE_MAX_MINDSTORM_S 846
#define MOVE_MAX_ROCKFALL_P 847
#define MOVE_MAX_ROCKFALL_S 848
#define MOVE_MAX_QUAKE_P 849
#define MOVE_MAX_QUAKE_S 850
#define MOVE_MAX_DARKNESS_P 851
#define MOVE_MAX_DARKNESS_S 852
#define MOVE_MAX_OVERGROWTH_P 853
#define MOVE_MAX_OVERGROWTH_S 854
#define MOVE_MAX_STEELSPIKE_P 855
#define MOVE_MAX_STEELSPIKE_S 856
#define MOVE_G_MAX_VINE_LASH_P 857
#define MOVE_G_MAX_VINE_LASH_S 858
#define MOVE_G_MAX_WILDFIRE_P 859
#define MOVE_G_MAX_WILDFIRE_S 860
#define MOVE_G_MAX_CANNONADE_P 861
#define MOVE_G_MAX_CANNONADE_S 862
#define MOVE_G_MAX_BEFUDDLE_P 863
#define MOVE_G_MAX_BEFUDDLE_S 864
#define MOVE_G_MAX_VOLT_CRASH_P 865
#define MOVE_G_MAX_VOLT_CRASH_S 866
#define MOVE_G_MAX_GOLD_RUSH_P 867
#define MOVE_G_MAX_GOLD_RUSH_S 868
#define MOVE_G_MAX_CHI_STRIKE_P 869
#define MOVE_G_MAX_CHI_STRIKE_S 870
#define MOVE_G_MAX_TERROR_P 871
#define MOVE_G_MAX_TERROR_S 872
#define MOVE_G_MAX_FOAM_BURST_P 873
#define MOVE_G_MAX_FOAM_BURST_S 874
#define MOVE_G_MAX_RESONANCE_P 875
#define MOVE_G_MAX_RESONANCE_S 876
#define MOVE_G_MAX_CUDDLE_P 877
#define MOVE_G_MAX_CUDDLE_S 878
#define MOVE_G_MAX_REPLENISH_P 879
#define MOVE_G_MAX_REPLENISH_S 880
#define MOVE_G_MAX_MALODOR_P 881
#define MOVE_G_MAX_MALODOR_S 882
#define MOVE_G_MAX_MELTDOWN_P 883
#define MOVE_G_MAX_MELTDOWN_S 884
#define MOVE_G_MAX_DRUM_SOLO_P 885
#define MOVE_G_MAX_DRUM_SOLO_S 886
#define MOVE_G_MAX_FIREBALL_P 887
#define MOVE_G_MAX_FIREBALL_S 888
#define MOVE_G_MAX_HYDROSNIPE_P 889
#define MOVE_G_MAX_HYDROSNIPE_S 890
#define MOVE_G_MAX_WIND_RAGE_P 891
#define MOVE_G_MAX_WIND_RAGE_S 892
#define MOVE_G_MAX_GRAVITAS_P 893
#define MOVE_G_MAX_GRAVITAS_S 894
#define MOVE_G_MAX_STONESURGE_P 895
#define MOVE_G_MAX_STONESURGE_S 896
#define MOVE_G_MAX_VOLCALITH_P 897
#define MOVE_G_MAX_VOLCALITH_S 898
#define MOVE_G_MAX_TARTNESS_P 899
#define MOVE_G_MAX_TARTNESS_S 900
#define MOVE_G_MAX_SWEETNESS_P 901
#define MOVE_G_MAX_SWEETNESS_S 902
#define MOVE_G_MAX_SANDBLAST_P 903
#define MOVE_G_MAX_SANDBLAST_S 904
#define MOVE_G_MAX_STUN_SHOCK_P 905
#define MOVE_G_MAX_STUN_SHOCK_S 906
#define MOVE_G_MAX_CENTIFERNO_P 907
#define MOVE_G_MAX_CENTIFERNO_S 908
#define MOVE_G_MAX_SMITE_P 909
#define MOVE_G_MAX_SMITE_S 910
#define MOVE_G_MAX_SNOOZE_P 911
#define MOVE_G_MAX_SNOOZE_S 912
#define MOVE_G_MAX_FINALE_P 913
#define MOVE_G_MAX_FINALE_S 914
#define MOVE_G_MAX_STEELSURGE_P 915
#define MOVE_G_MAX_STEELSURGE_S 916
#define MOVE_G_MAX_DEPLETION_P 917
#define MOVE_G_MAX_DEPLETION_S 918
#define MOVE_G_MAX_ONE_BLOW_P 919
#define MOVE_G_MAX_ONE_BLOW_S 920
#define MOVE_G_MAX_RAPID_FLOW_P 921
#define MOVE_G_MAX_RAPID_FLOW_S 922

#pragma endregion MOVES