// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "./battle_move_mapping.h"

struct BattleMove
{
	char *target;
	char *type;
	char *split;
	int flags;
	int z_move_effect;
	int effect;
	int power;
	int accuracy;
	int pp;
	int secondaryEffectChance;
	int priority;
	int z_move_power;
};

#pragma region battlemoves
const struct BattleMove gBattleMoves[] =
	{
		[MOVE_NONE] =
			{
				.effect = EFFECT_HIT,
				.power = 40,
				.type = TYPE_MYSTERY,
				.accuracy = 100,
				.pp = 35,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_POUND] =
			{
				.effect = EFFECT_HIT,
				.power = 40,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 35,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_KARATECHOP] =
			{
				.effect = EFFECT_HIGH_CRITICAL,
				.power = 50,
				.type = TYPE_FIGHTING,
				.accuracy = 100,
				.pp = 25,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_DOUBLESLAP] =
			{
				.effect = EFFECT_MULTI_HIT,
				.power = 15,
				.type = TYPE_NORMAL,
				.accuracy = 85,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_COMETPUNCH] =
			{
				.effect = EFFECT_MULTI_HIT,
				.power = 18,
				.type = TYPE_NORMAL,
				.accuracy = 85,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_MEGAPUNCH] =
			{
				.effect = EFFECT_HIT,
				.power = 80,
				.type = TYPE_NORMAL,
				.accuracy = 85,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_PAYDAY] =
			{
				.effect = EFFECT_PAY_DAY,
				.power = 40,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_FIREPUNCH] =
			{
				.effect = EFFECT_BURN_HIT,
				.power = 75,
				.type = TYPE_FIRE,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_ICEPUNCH] =
			{
				.effect = EFFECT_FREEZE_HIT,
				.power = 75,
				.type = TYPE_ICE,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_THUNDERPUNCH] =
			{
				.effect = EFFECT_PARALYZE_HIT,
				.power = 75,
				.type = TYPE_ELECTRIC,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SCRATCH] =
			{
				.effect = EFFECT_HIT,
				.power = 40,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 35,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_VICEGRIP] =
			{
				.effect = EFFECT_HIT,
				.power = 55,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_GUILLOTINE] =
			{
				.effect = EFFECT_0HKO,
				.power = 1,
				.type = TYPE_NORMAL,
				.accuracy = 30,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_RAZORWIND] =
			{
				.effect = EFFECT_RAZOR_WIND,
				.power = 80,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SWORDSDANCE] =
			{
				.effect = EFFECT_ATTACK_UP_2,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_CUT] =
			{
				.effect = EFFECT_HIT,
				.power = 50,
				.type = TYPE_NORMAL,
				.accuracy = 95,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_GUST] =
			{
				.effect = EFFECT_GUST,
				.power = 40,
				.type = TYPE_FLYING,
				.accuracy = 100,
				.pp = 35,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_WINGATTACK] =
			{
				.effect = EFFECT_HIT,
				.power = 60,
				.type = TYPE_FLYING,
				.accuracy = 100,
				.pp = 35,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_WHIRLWIND] =
			{
				.effect = EFFECT_ROAR,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 250,
				.flags = FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPDEF_UP_1},

		[MOVE_FLY] =
			{
				.effect = EFFECT_SEMI_INVULNERABLE,
#ifdef UNBOUND
				.power = 100,
#else
				.power = 90,
#endif
				.type = TYPE_FLYING,
				.accuracy = 95,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_BIND] =
			{
				.effect = EFFECT_TRAP,
				.power = 15,
				.type = TYPE_NORMAL,
				.accuracy = 85,
				.pp = 20,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SLAM] =
			{
				.effect = EFFECT_HIT,
				.power = 80,
				.type = TYPE_NORMAL,
				.accuracy = 75,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_VINEWHIP] =
			{
				.effect = EFFECT_HIT,
				.power = 45,
				.type = TYPE_GRASS,
				.accuracy = 100,
				.pp = 25,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_STOMP] =
			{
				.effect = EFFECT_FLINCH_HIT,
				.power = 65,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_DOUBLEKICK] =
			{
				.effect = EFFECT_DOUBLE_HIT,
				.power = 30,
				.type = TYPE_FIGHTING,
				.accuracy = 100,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_MEGAKICK] =
			{
				.effect = EFFECT_HIT,
				.power = 120,
				.type = TYPE_NORMAL,
				.accuracy = 75,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_JUMPKICK] =
			{
				.effect = EFFECT_RECOIL_IF_MISS,
				.power = 100,
				.type = TYPE_FIGHTING,
				.accuracy = 95,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_ROLLINGKICK] =
			{
				.effect = EFFECT_FLINCH_HIT,
				.power = 60,
				.type = TYPE_FIGHTING,
				.accuracy = 85,
				.pp = 15,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SANDATTACK] =
			{
				.effect = EFFECT_ACCURACY_DOWN,
				.power = 0,
				.type = TYPE_GROUND,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_EVSN_UP_1},

		[MOVE_HEADBUTT] =
			{
				.effect = EFFECT_FLINCH_HIT,
				.power = 70,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_HORNATTACK] =
			{
				.effect = EFFECT_HIT,
				.power = 65,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 25,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_FURYATTACK] =
			{
				.effect = EFFECT_MULTI_HIT,
				.power = 15,
				.type = TYPE_NORMAL,
				.accuracy = 85,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_HORNDRILL] =
			{
				.effect = EFFECT_0HKO,
				.power = 1,
				.type = TYPE_NORMAL,
				.accuracy = 30,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_TACKLE] =
			{
				.effect = EFFECT_HIT,
				.power = 40,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 35,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_BODYSLAM] =
			{
				.effect = EFFECT_PARALYZE_HIT,
				.power = 85,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_WRAP] =
			{
				.effect = EFFECT_TRAP,
				.power = 15,
				.type = TYPE_NORMAL,
				.accuracy = 90,
				.pp = 20,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_TAKEDOWN] =
			{
				.effect = EFFECT_RECOIL,
				.power = 90,
				.type = TYPE_NORMAL,
				.accuracy = 85,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_THRASH] =
			{
				.effect = EFFECT_RAMPAGE,
				.power = 120,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_RANDOM,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_DOUBLEEDGE] =
			{
				.effect = EFFECT_RECOIL,
				.power = 120,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_TAILWHIP] =
			{
				.effect = EFFECT_DEFENSE_DOWN,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ATK_UP_1},

		[MOVE_POISONSTING] =
			{
				.effect = EFFECT_POISON_HIT,
				.power = 15,
				.type = TYPE_POISON,
				.accuracy = 100,
				.pp = 35,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_TWINEEDLE] =
			{
				.effect = EFFECT_POISON_HIT,
				.power = 25,
				.type = TYPE_BUG,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 20,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_PINMISSILE] =
			{
				.effect = EFFECT_MULTI_HIT,
				.power = 25,
				.type = TYPE_BUG,
				.accuracy = 95,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_LEER] =
			{
				.effect = EFFECT_DEFENSE_DOWN,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ATK_UP_1},

		[MOVE_BITE] =
			{
				.effect = EFFECT_FLINCH_HIT,
				.power = 60,
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 25,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_GROWL] =
			{
				.effect = EFFECT_ATTACK_DOWN,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 40,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_ROAR] =
			{
				.effect = EFFECT_ROAR,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 250,
				.flags = FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_SING] =
			{
				.effect = EFFECT_SLEEP,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 55,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_SUPERSONIC] =
			{
				.effect = EFFECT_CONFUSE,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 55,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_SONICBOOM] =
			{
				.effect = EFFECT_SONICBOOM,
				.power = 1,
				.type = TYPE_NORMAL,
				.accuracy = 90,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_DISABLE] =
			{
				.effect = EFFECT_DISABLE,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_ACID] =
			{
				.effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
				.power = 40,
				.type = TYPE_POISON,
				.accuracy = 100,
				.pp = 30,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_EMBER] =
			{
				.effect = EFFECT_BURN_HIT,
				.power = 40,
				.type = TYPE_FIRE,
				.accuracy = 100,
				.pp = 25,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_FLAMETHROWER] =
			{
				.effect = EFFECT_BURN_HIT,
#ifdef GEN_6_POWER_NERFS
				.power = 90,
#else
				.power = 95,
#endif
				.type = TYPE_FIRE,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_MIST] =
			{
				.effect = EFFECT_MIST,
				.power = 0,
				.type = TYPE_ICE,
				.accuracy = 0,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RECOVER_HP},

		[MOVE_WATERGUN] =
			{
				.effect = EFFECT_HIT,
				.power = 40,
				.type = TYPE_WATER,
				.accuracy = 100,
				.pp = 25,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_HYDROPUMP] =
			{
				.effect = EFFECT_HIT,
#ifdef GEN_6_POWER_NERFS
				.power = 110,
#else
				.power = 120,
#endif
				.type = TYPE_WATER,
				.accuracy = 80,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SURF] =
			{
				.effect = EFFECT_HIT,
#ifdef GEN_6_POWER_NERFS
				.power = 90,
#else
				.power = 95,
#endif
				.type = TYPE_WATER,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_FOES_AND_ALLY,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_ICEBEAM] =
			{
				.effect = EFFECT_FREEZE_HIT,
#ifdef GEN_6_POWER_NERFS
				.power = 90,
#else
				.power = 95,
#endif
				.type = TYPE_ICE,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_BLIZZARD] =
			{
				.effect = EFFECT_FREEZE_HIT,
#ifdef GEN_6_POWER_NERFS
				.power = 110,
#else
				.power = 120,
#endif
				.type = TYPE_ICE,
				.accuracy = 70,
				.pp = 5,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_PSYBEAM] =
			{
				.effect = EFFECT_CONFUSE_HIT,
				.power = 65,
				.type = TYPE_PSYCHIC,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_BUBBLEBEAM] =
			{
				.effect = EFFECT_SPEED_DOWN_HIT,
				.power = 65,
				.type = TYPE_WATER,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_AURORABEAM] =
			{
				.effect = EFFECT_ATTACK_DOWN_HIT,
				.power = 65,
				.type = TYPE_ICE,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_HYPERBEAM] =
			{
				.effect = EFFECT_RECHARGE,
				.power = 150,
				.type = TYPE_NORMAL,
				.accuracy = 90,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 200,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_PECK] =
			{
				.effect = EFFECT_HIT,
				.power = 35,
				.type = TYPE_FLYING,
				.accuracy = 100,
				.pp = 35,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_DRILLPECK] =
			{
				.effect = EFFECT_HIT,
				.power = 80,
				.type = TYPE_FLYING,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SUBMISSION] =
			{
				.effect = EFFECT_RECOIL,
				.power = 80,
				.type = TYPE_FIGHTING,
				.accuracy = 80,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_LOWKICK] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_FIGHTING,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_COUNTER] =
			{
				.effect = EFFECT_COUNTER,
				.power = 1,
				.type = TYPE_FIGHTING,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_DEPENDS,
				.priority = 251,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SEISMICTOSS] =
			{
				.effect = EFFECT_LEVEL_DAMAGE,
				.power = 1,
				.type = TYPE_FIGHTING,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_STRENGTH] =
			{
				.effect = EFFECT_HIT,
				.power = 80,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_ABSORB] =
			{
				.effect = EFFECT_ABSORB,
				.power = 25,
				.type = TYPE_GRASS,
				.accuracy = 100,
				.pp = 25,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_TRIAGE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_MEGADRAIN] =
			{
				.effect = EFFECT_ABSORB,
				.power = 40,
				.type = TYPE_GRASS,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_TRIAGE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_LEECHSEED] =
			{
				.effect = EFFECT_LEECH_SEED,
				.power = 0,
				.type = TYPE_GRASS,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_GROWTH] =
			{
				.effect = EFFECT_ATK_SPATK_UP,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPATK_UP_1},

		[MOVE_RAZORLEAF] =
			{
				.effect = EFFECT_HIGH_CRITICAL,
				.power = 55,
				.type = TYPE_GRASS,
				.accuracy = 95,
				.pp = 25,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SOLARBEAM] =
			{
				.effect = EFFECT_SOLARBEAM,
				.power = 120,
				.type = TYPE_GRASS,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_POISONPOWDER] =
			{
				.effect = EFFECT_POISON,
				.power = 0,
				.type = TYPE_POISON,
				.accuracy = 75,
				.pp = 35,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_STUNSPORE] =
			{
				.effect = EFFECT_PARALYZE,
				.power = 0,
				.type = TYPE_GRASS,
				.accuracy = 75,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPDEF_UP_1},

		[MOVE_SLEEPPOWDER] =
			{
				.effect = EFFECT_SLEEP,
				.power = 0,
				.type = TYPE_GRASS,
				.accuracy = 75,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_PETALDANCE] =
			{
				.effect = EFFECT_RAMPAGE,
				.power = 120,
				.type = TYPE_GRASS,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_RANDOM,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_STRINGSHOT] =
			{
				.effect = EFFECT_SPEED_DOWN_2,
				.power = 0,
				.type = TYPE_BUG,
				.accuracy = 95,
				.pp = 40,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_DRAGONRAGE] =
			{
				.effect = EFFECT_DRAGON_RAGE,
				.power = 1,
				.type = TYPE_DRAGON,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_FIRESPIN] =
			{
				.effect = EFFECT_TRAP,
				.power = 35,
				.type = TYPE_FIRE,
				.accuracy = 85,
				.pp = 15,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_THUNDERSHOCK] =
			{
				.effect = EFFECT_PARALYZE_HIT,
				.power = 40,
				.type = TYPE_ELECTRIC,
				.accuracy = 100,
				.pp = 30,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_THUNDERBOLT] =
			{
				.effect = EFFECT_PARALYZE_HIT,
#ifdef GEN_6_POWER_NERFS
				.power = 90,
#else
				.power = 95,
#endif
				.type = TYPE_ELECTRIC,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_THUNDERWAVE] =
			{
				.effect = EFFECT_PARALYZE,
				.power = 0,
				.type = TYPE_ELECTRIC,
				.accuracy = 90,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPDEF_UP_1},

		[MOVE_THUNDER] =
			{
				.effect = EFFECT_THUNDER,
#ifdef GEN_6_POWER_NERFS
				.power = 110,
#else
				.power = 120,
#endif
				.type = TYPE_ELECTRIC,
				.accuracy = 70,
				.pp = 10,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_ROCKTHROW] =
			{
				.effect = EFFECT_HIT,
				.power = 50,
				.type = TYPE_ROCK,
				.accuracy = 90,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_EARTHQUAKE] =
			{
				.effect = EFFECT_HIT,
				.power = 100,
				.type = TYPE_GROUND,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_FOES_AND_ALLY,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_FISSURE] =
			{
				.effect = EFFECT_0HKO,
				.power = 1,
				.type = TYPE_GROUND,
				.accuracy = 30,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_DIG] =
			{
				.effect = EFFECT_SEMI_INVULNERABLE,
				.power = 80,
				.type = TYPE_GROUND,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_TOXIC] =
			{
				.effect = EFFECT_TOXIC,
				.power = 0,
				.type = TYPE_POISON,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_CONFUSION] =
			{
				.effect = EFFECT_CONFUSE_HIT,
				.power = 50,
				.type = TYPE_PSYCHIC,
				.accuracy = 100,
				.pp = 25,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_PSYCHIC] =
			{
				.effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
				.power = 90,
				.type = TYPE_PSYCHIC,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_HYPNOSIS] =
			{
				.effect = EFFECT_SLEEP,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 60,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_MEDITATE] =
			{
				.effect = EFFECT_ATTACK_UP,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 40,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ATK_UP_1},

		[MOVE_AGILITY] =
			{
				.effect = EFFECT_SPEED_UP_2,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_QUICKATTACK] =
			{
				.effect = EFFECT_QUICK_ATTACK,
				.power = 40,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 1,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_RAGE] =
			{
				.effect = EFFECT_RAGE,
				.power = 20,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_TELEPORT] =
			{
				.effect = EFFECT_TELEPORT,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 250,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RECOVER_HP},

		[MOVE_NIGHTSHADE] =
			{
				.effect = EFFECT_LEVEL_DAMAGE,
				.power = 1,
				.type = TYPE_GHOST,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_MIMIC] =
			{
				.effect = EFFECT_MIMIC,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ACC_UP_1},

		[MOVE_SCREECH] =
			{
				.effect = EFFECT_DEFENSE_DOWN_2,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 85,
				.pp = 40,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ATK_UP_1},

		[MOVE_DOUBLETEAM] =
			{
				.effect = EFFECT_EVASION_UP,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_RECOVER] =
			{
				.effect = EFFECT_RESTORE_HP,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED | FLAG_TRIAGE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_HARDEN] =
			{
				.effect = EFFECT_DEFENSE_UP,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_MINIMIZE] =
			{
				.effect = EFFECT_MINIMIZE,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_SMOKESCREEN] =
			{
				.effect = EFFECT_ACCURACY_DOWN,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_EVSN_UP_1},

		[MOVE_CONFUSERAY] =
			{
				.effect = EFFECT_CONFUSE,
				.power = 0,
				.type = TYPE_GHOST,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPATK_UP_1},

		[MOVE_WITHDRAW] =
			{
				.effect = EFFECT_DEFENSE_UP,
				.power = 0,
				.type = TYPE_WATER,
				.accuracy = 0,
				.pp = 40,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_DEFENSECURL] =
			{
				.effect = EFFECT_DEFENSE_CURL,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 40,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ACC_UP_1},

		[MOVE_BARRIER] =
			{
				.effect = EFFECT_DEFENSE_UP_2,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_LIGHTSCREEN] =
			{
				.effect = EFFECT_LIGHT_SCREEN,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPDEF_UP_1},

		[MOVE_HAZE] =
			{
				.effect = EFFECT_HAZE,
				.power = 0,
				.type = TYPE_ICE,
				.accuracy = 0,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RECOVER_HP},

		[MOVE_REFLECT] =
			{
				.effect = EFFECT_REFLECT,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_FOCUSENERGY] =
			{
				.effect = EFFECT_FOCUS_ENERGY,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ACC_UP_1},

		[MOVE_BIDE] =
			{
				.effect = EFFECT_BIDE,
				.power = 1,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 1,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_METRONOME] =
			{
				.effect = EFFECT_METRONOME,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_DEPENDS,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = 0},

		[MOVE_MIRRORMOVE] =
			{
				.effect = EFFECT_MIRROR_MOVE,
				.power = 0,
				.type = TYPE_FLYING,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ATK_UP_2},

		[MOVE_SELFDESTRUCT] =
			{
				.effect = EFFECT_EXPLOSION,
				.power = 200,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_FOES_AND_ALLY,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 200,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_EGGBOMB] =
			{
				.effect = EFFECT_HIT,
				.power = 100,
				.type = TYPE_NORMAL,
				.accuracy = 75,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_LICK] =
			{
				.effect = EFFECT_PARALYZE_HIT,
				.power = 30,
				.type = TYPE_GHOST,
				.accuracy = 100,
				.pp = 30,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SMOG] =
			{
				.effect = EFFECT_POISON_HIT,
				.power = 30,
				.type = TYPE_POISON,
#ifdef UNBOUND
				.accuracy = 100,
#else
				.accuracy = 70,
#endif
				.pp = 20,
				.secondaryEffectChance = 40,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SLUDGE] =
			{
				.effect = EFFECT_POISON_HIT,
				.power = 65,
				.type = TYPE_POISON,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_BONECLUB] =
			{
				.effect = EFFECT_FLINCH_HIT,
				.power = 65,
				.type = TYPE_GROUND,
				.accuracy = 85,
				.pp = 20,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_FIREBLAST] =
			{
				.effect = EFFECT_BURN_HIT,
#ifdef GEN_6_POWER_NERFS
				.power = 110,
#else
				.power = 120,
#endif
				.type = TYPE_FIRE,
				.accuracy = 85,
				.pp = 5,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_WATERFALL] =
			{
				.effect = EFFECT_FLINCH_HIT,
				.power = 80,
				.type = TYPE_WATER,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 20,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_CLAMP] =
			{
				.effect = EFFECT_TRAP,
				.power = 35,
				.type = TYPE_WATER,
				.accuracy = 85,
				.pp = 15,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SWIFT] =
			{
				.effect = EFFECT_ALWAYS_HIT,
				.power = 60,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SKULLBASH] =
			{
				.effect = EFFECT_SKULL_BASH,
				.power = 130,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 195,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SPIKECANNON] =
			{
				.effect = EFFECT_MULTI_HIT,
				.power = 20,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_CONSTRICT] =
			{
				.effect = EFFECT_SPEED_DOWN_HIT,
				.power = 10,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 35,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_AMNESIA] =
			{
				.effect = EFFECT_SPECIAL_DEFENSE_UP_2,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_KINESIS] =
			{
				.effect = EFFECT_ACCURACY_DOWN,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 80,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_EVSN_UP_1},

		[MOVE_SOFTBOILED] =
			{
				.effect = EFFECT_RESTORE_HP,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED | FLAG_TRIAGE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_HIGHJUMPKICK] =
			{
				.effect = EFFECT_RECOIL_IF_MISS,
				.power = 130,
				.type = TYPE_FIGHTING,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 195,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_GLARE] =
			{
				.effect = EFFECT_PARALYZE,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPDEF_UP_1},

		[MOVE_DREAMEATER] =
			{
				.effect = EFFECT_DREAM_EATER,
				.power = 100,
				.type = TYPE_PSYCHIC,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_TRIAGE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_POISONGAS] =
			{
				.effect = EFFECT_POISON,
				.power = 0,
				.type = TYPE_POISON,
				.accuracy = 90,
				.pp = 40,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_BARRAGE] =
			{
				.effect = EFFECT_MULTI_HIT,
				.power = 15,
				.type = TYPE_NORMAL,
				.accuracy = 85,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_LEECHLIFE] =
			{
				.effect = EFFECT_ABSORB,
#ifdef BUFFED_LEECH_LIFE
				.power = 80,
#else
				.power = 20,
#endif
				.type = TYPE_BUG,
				.accuracy = 100,
#ifdef BUFFED_LEECH_LIFE
				.pp = 10,
#else
				.pp = 15,
#endif
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_TRIAGE_AFFECTED,
#ifdef BUFFED_LEECH_LIFE
				.z_move_power = 160,
#else
				.z_move_power = 100,
#endif
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_LOVELYKISS] =
			{
				.effect = EFFECT_SLEEP,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 75,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_SKYATTACK] =
			{
				.effect = EFFECT_SKY_ATTACK,
				.power = 140,
				.type = TYPE_FLYING,
				.accuracy = 90,
				.pp = 5,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 200,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_TRANSFORM] =
			{
				.effect = EFFECT_TRANSFORM,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RECOVER_HP},

		[MOVE_BUBBLE] =
			{
				.effect = EFFECT_SPEED_DOWN_HIT,
				.power = 40,
				.type = TYPE_WATER,
				.accuracy = 100,
				.pp = 30,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_DIZZYPUNCH] =
			{
				.effect = EFFECT_CONFUSE_HIT,
				.power = 70,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 20,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SPORE] =
			{
				.effect = EFFECT_SLEEP,
				.power = 0,
				.type = TYPE_GRASS,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_FLASH] =
			{
				.effect = EFFECT_ACCURACY_DOWN,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_EVSN_UP_1},

		[MOVE_PSYWAVE] =
			{
				.effect = EFFECT_PSYWAVE,
				.power = 1,
				.type = TYPE_PSYCHIC,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SPLASH] =
			{
				.effect = EFFECT_SPLASH,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 40,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ATK_UP_3},

		[MOVE_ACIDARMOR] =
			{
				.effect = EFFECT_DEFENSE_UP_2,
				.power = 0,
				.type = TYPE_POISON,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_CRABHAMMER] =
			{
				.effect = EFFECT_HIGH_CRITICAL,
				.power = 100,
				.type = TYPE_WATER,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_EXPLOSION] =
			{
				.effect = EFFECT_EXPLOSION,
				.power = 250,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_FOES_AND_ALLY,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 200,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_FURYSWIPES] =
			{
				.effect = EFFECT_MULTI_HIT,
				.power = 18,
				.type = TYPE_NORMAL,
				.accuracy = 80,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_BONEMERANG] =
			{
				.effect = EFFECT_DOUBLE_HIT,
				.power = 50,
				.type = TYPE_GROUND,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_REST] =
			{
				.effect = EFFECT_REST,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED | FLAG_TRIAGE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_ROCKSLIDE] =
			{
				.effect = EFFECT_FLINCH_HIT,
				.power = 75,
				.type = TYPE_ROCK,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_HYPERFANG] =
			{
				.effect = EFFECT_FLINCH_HIT,
				.power = 80,
				.type = TYPE_NORMAL,
				.accuracy = 90,
				.pp = 15,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SHARPEN] =
			{
				.effect = EFFECT_ATTACK_UP,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ATK_UP_1},

		[MOVE_CONVERSION] =
			{
				.effect = EFFECT_CONVERSION,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ALL_STATS_UP_1},

		[MOVE_TRIATTACK] =
			{
				.effect = EFFECT_TRI_ATTACK,
				.power = 80,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 20,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SUPERFANG] =
			{
				.effect = EFFECT_SUPER_FANG,
				.power = 1,
				.type = TYPE_NORMAL,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SLASH] =
			{
				.effect = EFFECT_HIGH_CRITICAL,
				.power = 70,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SUBSTITUTE] =
			{
				.effect = EFFECT_SUBSTITUTE,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_STRUGGLE] =
			{
				.effect = EFFECT_RECOIL,
				.power = 50,
				.type = TYPE_MYSTERY,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_RANDOM,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED,
				.z_move_power = 1,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SKETCH] =
			{
				.effect = EFFECT_SKETCH,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ALL_STATS_UP_1},

		[MOVE_TRIPLEKICK] =
			{
				.effect = EFFECT_TRIPLE_KICK,
				.power = 10,
				.type = TYPE_FIGHTING,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_THIEF] =
			{
				.effect = EFFECT_THIEF,
				.power = 60,
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 25,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SPIDERWEB] =
			{
				.effect = EFFECT_MEAN_LOOK,
				.power = 0,
				.type = TYPE_BUG,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_MINDREADER] =
			{
				.effect = EFFECT_LOCK_ON,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPATK_UP_1},

		[MOVE_NIGHTMARE] =
			{
				.effect = EFFECT_NIGHTMARE,
				.power = 0,
				.type = TYPE_GHOST,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPATK_UP_1},

		[MOVE_FLAMEWHEEL] =
			{
				.effect = EFFECT_BURN_HIT,
				.power = 60,
				.type = TYPE_FIRE,
				.accuracy = 100,
				.pp = 25,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SNORE] =
			{
				.effect = EFFECT_SNORE,
#ifdef UNBOUND
				.power = 80,
#else
				.power = 50,
#endif
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_CURSE] =
			{
				.effect = EFFECT_CURSE,
				.power = 0,
				.type = TYPE_GHOST,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_CURSE},

		[MOVE_FLAIL] =
			{
				.effect = EFFECT_FLAIL,
				.power = 1,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_CONVERSION2] =
			{
				.effect = EFFECT_CONVERSION_2,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RECOVER_HP},

		[MOVE_AEROBLAST] =
			{
				.effect = EFFECT_HIGH_CRITICAL,
				.power = 100,
				.type = TYPE_FLYING,
				.accuracy = 95,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_COTTONSPORE] =
			{
				.effect = EFFECT_SPEED_DOWN_2,
				.power = 0,
				.type = TYPE_GRASS,
				.accuracy = 100,
				.pp = 40,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_REVERSAL] =
			{
				.effect = EFFECT_FLAIL,
				.power = 1,
				.type = TYPE_FIGHTING,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SPITE] =
			{
				.effect = EFFECT_SPITE,
				.power = 0,
				.type = TYPE_GHOST,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RECOVER_HP},

		[MOVE_POWDERSNOW] =
			{
				.effect = EFFECT_FREEZE_HIT,
				.power = 40,
				.type = TYPE_ICE,
				.accuracy = 100,
				.pp = 25,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_PROTECT] =
			{
				.effect = EFFECT_PROTECT,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 4,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_MACHPUNCH] =
			{
				.effect = EFFECT_QUICK_ATTACK,
				.power = 40,
				.type = TYPE_FIGHTING,
				.accuracy = 100,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 1,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SCARYFACE] =
			{
				.effect = EFFECT_SPEED_DOWN_2,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_FEINTATTACK] =
			{
				.effect = EFFECT_ALWAYS_HIT,
				.power = 60,
				.type = TYPE_DARK,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SWEETKISS] =
			{
				.effect = EFFECT_CONFUSE,
				.power = 0,
				.type = TYPE_FAIRY,
				.accuracy = 75,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPATK_UP_1},

		[MOVE_BELLYDRUM] =
			{
				.effect = EFFECT_BELLY_DRUM,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RECOVER_HP},

		[MOVE_SLUDGEBOMB] =
			{
				.effect = EFFECT_POISON_HIT,
				.power = 90,
				.type = TYPE_POISON,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_MUDSLAP] =
			{
				.effect = EFFECT_ACCURACY_DOWN_HIT,
				.power = 20,
				.type = TYPE_GROUND,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_OCTAZOOKA] =
			{
				.effect = EFFECT_ACCURACY_DOWN_HIT,
				.power = 65,
				.type = TYPE_WATER,
				.accuracy = 85,
				.pp = 10,
				.secondaryEffectChance = 50,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SPIKES] =
			{
				.effect = EFFECT_SPIKES,
				.power = 0,
				.type = TYPE_GROUND,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_OPPONENTS_FIELD,
				.priority = 0,
				.flags = FLAG_MAGIC_COAT_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_ZAPCANNON] =
			{
				.effect = EFFECT_PARALYZE_HIT,
				.power = 120,
				.type = TYPE_ELECTRIC,
				.accuracy = 50,
				.pp = 5,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_FORESIGHT] =
			{
				.effect = EFFECT_FORESIGHT,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 40,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_BOOST_CRITS},

		[MOVE_DESTINYBOND] =
			{
				.effect = EFFECT_DESTINY_BOND,
				.power = 0,
				.type = TYPE_GHOST,
				.accuracy = 0,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_FOLLOW_ME},

		[MOVE_PERISHSONG] =
			{
				.effect = EFFECT_PERISH_SONG,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_ICYWIND] =
			{
				.effect = EFFECT_SPEED_DOWN_HIT,
				.power = 55,
				.type = TYPE_ICE,
				.accuracy = 95,
				.pp = 15,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_DETECT] =
			{
				.effect = EFFECT_PROTECT,
				.power = 0,
				.type = TYPE_FIGHTING,
				.accuracy = 0,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 4,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_EVSN_UP_1},

		[MOVE_BONERUSH] =
			{
				.effect = EFFECT_MULTI_HIT,
				.power = 25,
				.type = TYPE_GROUND,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_LOCKON] =
			{
				.effect = EFFECT_LOCK_ON,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_OUTRAGE] =
			{
				.effect = EFFECT_RAMPAGE,
				.power = 120,
				.type = TYPE_DRAGON,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_RANDOM,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SANDSTORM] =
			{
				.effect = EFFECT_SANDSTORM,
				.power = 0,
				.type = TYPE_ROCK,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_GIGADRAIN] =
			{
				.effect = EFFECT_ABSORB,
				.power = 75,
				.type = TYPE_GRASS,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_TRIAGE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_ENDURE] =
			{
				.effect = EFFECT_PROTECT,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 4,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_CHARM] =
			{
				.effect = EFFECT_ATTACK_DOWN_2,
				.power = 0,
				.type = TYPE_FAIRY,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_ROLLOUT] =
			{
				.effect = EFFECT_ROLLOUT,
				.power = 30,
				.type = TYPE_ROCK,
				.accuracy = 90,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_FALSESWIPE] =
			{
				.effect = EFFECT_FALSE_SWIPE,
				.power = 40,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 40,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SWAGGER] =
			{
				.effect = EFFECT_SWAGGER,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 85,
				.pp = 15,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_MILKDRINK] =
			{
				.effect = EFFECT_RESTORE_HP,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED | FLAG_TRIAGE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_SPARK] =
			{
				.effect = EFFECT_PARALYZE_HIT,
				.power = 65,
				.type = TYPE_ELECTRIC,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_FURYCUTTER] =
			{
				.effect = EFFECT_FURY_CUTTER,
				.power = 40,
				.type = TYPE_BUG,
				.accuracy = 95,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_STEELWING] =
			{
				.effect = EFFECT_DEFENSE_UP_HIT,
				.power = 70,
				.type = TYPE_STEEL,
				.accuracy = 90,
				.pp = 25,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_MEANLOOK] =
			{
				.effect = EFFECT_MEAN_LOOK,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPDEF_UP_1},

		[MOVE_ATTRACT] =
			{
				.effect = EFFECT_ATTRACT,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_SLEEPTALK] =
			{
				.effect = EFFECT_SLEEP_TALK,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_DEPENDS,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_BOOST_CRITS},

		[MOVE_HEALBELL] =
			{
				.effect = EFFECT_HEAL_BELL,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RECOVER_HP},

		[MOVE_RETURN] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_PRESENT] =
			{
				.effect = EFFECT_PRESENT,
				.power = 1,
				.type = TYPE_NORMAL,
				.accuracy = 90,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_FRUSTRATION] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SAFEGUARD] =
			{
				.effect = EFFECT_SAFEGUARD,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 25,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_PAINSPLIT] =
			{
				.effect = EFFECT_PAIN_SPLIT,
				.power = 1,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_SACREDFIRE] =
			{
				.effect = EFFECT_BURN_HIT,
				.power = 100,
				.type = TYPE_FIRE,
				.accuracy = 95,
				.pp = 5,
				.secondaryEffectChance = 50,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_MAGNITUDE] =
			{
				.effect = EFFECT_MAGNITUDE,
				.power = 1,
				.type = TYPE_GROUND,
				.accuracy = 100,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_FOES_AND_ALLY,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_DYNAMICPUNCH] =
			{
				.effect = EFFECT_CONFUSE_HIT,
				.power = 100,
				.type = TYPE_FIGHTING,
				.accuracy = 50,
				.pp = 5,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_MEGAHORN] =
			{
				.effect = EFFECT_HIT,
				.power = 120,
				.type = TYPE_BUG,
				.accuracy = 85,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_DRAGONBREATH] =
			{
				.effect = EFFECT_PARALYZE_HIT,
				.power = 60,
				.type = TYPE_DRAGON,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_BATONPASS] =
			{
				.effect = EFFECT_BATON_PASS,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 40,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_ENCORE] =
			{
				.effect = EFFECT_ENCORE,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_PURSUIT] =
			{
				.effect = EFFECT_PURSUIT,
				.power = 40,
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_RAPIDSPIN] =
			{
				.effect = EFFECT_RAPID_SPIN,
				.power = 50,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 40,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SWEETSCENT] =
			{
				.effect = EFFECT_EVASION_DOWN_2,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ACC_UP_1},

		[MOVE_IRONTAIL] =
			{
				.effect = EFFECT_DEFENSE_DOWN_HIT,
				.power = 100,
				.type = TYPE_STEEL,
				.accuracy = 75,
				.pp = 15,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_METALCLAW] =
			{
				.effect = EFFECT_ATTACK_UP_HIT,
				.power = 50,
				.type = TYPE_STEEL,
				.accuracy = 95,
				.pp = 35,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_VITALTHROW] =
			{
				.effect = EFFECT_ALWAYS_HIT,
				.power = 70,
				.type = TYPE_FIGHTING,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 255,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_MORNINGSUN] =
			{
				.effect = EFFECT_MORNING_SUN,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED | FLAG_TRIAGE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_SYNTHESIS] =
			{
				.effect = EFFECT_MORNING_SUN,
				.power = 0,
				.type = TYPE_GRASS,
				.accuracy = 0,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED | FLAG_TRIAGE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_MOONLIGHT] =
			{
				.effect = EFFECT_MORNING_SUN,
				.power = 0,
				.type = TYPE_FAIRY,
				.accuracy = 0,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED | FLAG_TRIAGE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_HIDDENPOWER] =
			{
				.effect = EFFECT_HIT,
				.power = 60,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_CROSSCHOP] =
			{
				.effect = EFFECT_HIGH_CRITICAL,
				.power = 100,
				.type = TYPE_FIGHTING,
				.accuracy = 80,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_TWISTER] =
			{
				.effect = EFFECT_TWISTER,
				.power = 40,
				.type = TYPE_DRAGON,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 20,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_RAINDANCE] =
			{
				.effect = EFFECT_RAIN_DANCE,
				.power = 0,
				.type = TYPE_WATER,
				.accuracy = 0,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_SUNNYDAY] =
			{
				.effect = EFFECT_SUNNY_DAY,
				.power = 0,
				.type = TYPE_FIRE,
				.accuracy = 0,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_CRUNCH] =
			{
				.effect = EFFECT_DEFENSE_DOWN_HIT,
				.power = 80,
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 20,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_MIRRORCOAT] =
			{
				.effect = EFFECT_MIRROR_COAT,
				.power = 1,
				.type = TYPE_PSYCHIC,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_DEPENDS,
				.priority = 251,
				.flags = FLAG_PROTECT_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_PSYCHUP] =
			{
				.effect = EFFECT_PSYCH_UP,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RECOVER_HP},

		[MOVE_EXTREMESPEED] =
			{
				.effect = EFFECT_QUICK_ATTACK,
				.power = 80,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 2,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_ANCIENTPOWER] =
			{
				.effect = EFFECT_ALL_STATS_UP_HIT,
				.power = 60,
				.type = TYPE_ROCK,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SHADOWBALL] =
			{
				.effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
				.power = 80,
				.type = TYPE_GHOST,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 20,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_FUTURESIGHT] =
			{
				.effect = EFFECT_FUTURE_SIGHT,
				.power = 120,
				.type = TYPE_PSYCHIC,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 190,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_ROCKSMASH] =
			{
				.effect = EFFECT_DEFENSE_DOWN_HIT,
				.power = 40,
				.type = TYPE_FIGHTING,
				.accuracy = 100,
				.pp = 15,
#ifdef UNBOUND
				.secondaryEffectChance = 100,
#else
				.secondaryEffectChance = 50,
#endif
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_WHIRLPOOL] =
			{
				.effect = EFFECT_TRAP,
				.power = 35,
				.type = TYPE_WATER,
				.accuracy = 85,
				.pp = 15,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_BEATUP] =
			{
				.effect = EFFECT_BEAT_UP,
				.power = 1,
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_FAKEOUT] =
			{
				.effect = EFFECT_FAKE_OUT,
				.power = 40,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 3,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_UPROAR] =
			{
				.effect = EFFECT_UPROAR,
				.power = 90,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_RANDOM,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_STOCKPILE] =
			{
				.effect = EFFECT_STOCKPILE,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RECOVER_HP},

		[MOVE_SPITUP] =
			{
				.effect = EFFECT_SPIT_UP,
				.power = 1,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SWALLOW] =
			{
				.effect = EFFECT_SWALLOW,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED | FLAG_TRIAGE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_HEATWAVE] =
			{
				.effect = EFFECT_BURN_HIT,
#ifdef GEN_6_POWER_NERFS
				.power = 95,
#else
				.power = 100,
#endif
				.type = TYPE_FIRE,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_HAIL] =
			{
				.effect = EFFECT_HAIL,
				.power = 0,
				.type = TYPE_ICE,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_TORMENT] =
			{
				.effect = EFFECT_TORMENT,
				.power = 0,
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_FLATTER] =
			{
				.effect = EFFECT_FLATTER,
				.power = 0,
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPDEF_UP_1},

		[MOVE_WILLOWISP] =
			{
				.effect = EFFECT_WILL_O_WISP,
				.power = 0,
				.type = TYPE_FIRE,
				.accuracy = 85,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ATK_UP_1},

		[MOVE_MEMENTO] =
			{
				.effect = EFFECT_MEMENTO,
				.power = 0,
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESTORE_REPLACEMENT_HP},

		[MOVE_FACADE] =
			{
				.effect = EFFECT_HIT,
				.power = 70,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_FOCUSPUNCH] =
			{
				.effect = EFFECT_FOCUS_PUNCH,
				.power = 150,
				.type = TYPE_FIGHTING,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 253,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED,
				.z_move_power = 200,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SMELLINGSALTS] =
			{
				.effect = EFFECT_SMELLINGSALT,
				.power = 70,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_FOLLOWME] =
			{
				.effect = EFFECT_FOLLOW_ME,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 2,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_NATUREPOWER] =
			{
				.effect = EFFECT_NATURE_POWER,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = 0},

		[MOVE_CHARGE] =
			{
				.effect = EFFECT_CHARGE,
				.power = 0,
				.type = TYPE_ELECTRIC,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPDEF_UP_1},

		[MOVE_TAUNT] =
			{
				.effect = EFFECT_TAUNT,
				.power = 0,
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ATK_UP_1},

		[MOVE_HELPINGHAND] =
			{
				.effect = EFFECT_HELPING_HAND,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 5,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_TRICK] =
			{
				.effect = EFFECT_TRICK,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_2},

		[MOVE_ROLEPLAY] =
			{
				.effect = EFFECT_ROLE_PLAY,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_WISH] =
			{
				.effect = EFFECT_WISH,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED | FLAG_TRIAGE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPDEF_UP_1},

		[MOVE_ASSIST] =
			{
				.effect = EFFECT_ASSIST,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_DEPENDS,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = 0},

		[MOVE_INGRAIN] =
			{
				.effect = EFFECT_INGRAIN,
				.power = 0,
				.type = TYPE_GRASS,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPDEF_UP_1},

		[MOVE_SUPERPOWER] =
			{
				.effect = EFFECT_SUPERPOWER,
				.power = 120,
				.type = TYPE_FIGHTING,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_MAGICCOAT] =
			{
				.effect = EFFECT_MAGIC_COAT,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_DEPENDS,
				.priority = 4,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPDEF_UP_2},

		[MOVE_RECYCLE] =
			{
				.effect = EFFECT_RECYCLE,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_2},

		[MOVE_REVENGE] =
			{
				.effect = EFFECT_HIT,
				.power = 60,
				.type = TYPE_FIGHTING,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 252,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_BRICKBREAK] =
			{
				.effect = EFFECT_BRICK_BREAK,
				.power = 75,
				.type = TYPE_FIGHTING,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_YAWN] =
			{
				.effect = EFFECT_YAWN,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_KNOCKOFF] =
			{
				.effect = EFFECT_KNOCK_OFF,
				.power = 65,
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_ENDEAVOR] =
			{
				.effect = EFFECT_ENDEAVOR,
				.power = 1,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_ERUPTION] =
			{
				.effect = EFFECT_HIT,
				.power = 150,
				.type = TYPE_FIRE,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 200,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SKILLSWAP] =
			{
				.effect = EFFECT_SKILL_SWAP,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_IMPRISON] =
			{
				.effect = EFFECT_IMPRISON,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPDEF_UP_2},

		[MOVE_REFRESH] =
			{
				.effect = EFFECT_REFRESH,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RECOVER_HP},

		[MOVE_GRUDGE] =
			{
				.effect = EFFECT_GRUDGE,
				.power = 0,
				.type = TYPE_GHOST,
				.accuracy = 0,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_FOLLOW_ME},

		[MOVE_SNATCH] =
			{
				.effect = EFFECT_SNATCH,
				.power = 0,
				.type = TYPE_DARK,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_DEPENDS,
				.priority = 4,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_2},

		[MOVE_SECRETPOWER] =
			{
				.effect = EFFECT_SECRET_POWER,
				.power = 70,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_DIVE] =
			{
				.effect = EFFECT_SEMI_INVULNERABLE,
#ifdef UNBOUND
				.power = 100,
#else
				.power = 80,
#endif
				.type = TYPE_WATER,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_ARMTHRUST] =
			{
				.effect = EFFECT_MULTI_HIT,
				.power = 15,
				.type = TYPE_FIGHTING,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_CAMOUFLAGE] =
			{
				.effect = EFFECT_CAMOUFLAGE,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_EVSN_UP_1},

		[MOVE_TAILGLOW] =
			{
				.effect = EFFECT_SPECIAL_ATTACK_UP_2,
				.power = 0,
				.type = TYPE_BUG,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_LUSTERPURGE] =
			{
				.effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
				.power = 70,
				.type = TYPE_PSYCHIC,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 50,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_MISTBALL] =
			{
				.effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
				.power = 70,
				.type = TYPE_PSYCHIC,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 50,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_FEATHERDANCE] =
			{
				.effect = EFFECT_ATTACK_DOWN_2,
				.power = 0,
				.type = TYPE_FLYING,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_TEETERDANCE] =
			{
				.effect = EFFECT_CONFUSE,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_FOES_AND_ALLY,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPATK_UP_1},

		[MOVE_BLAZEKICK] =
			{
				.effect = EFFECT_BURN_HIT,
				.power = 85,
				.type = TYPE_FIRE,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_MUDSPORT] =
			{
				.effect = EFFECT_MUD_SPORT,
				.power = 0,
				.type = TYPE_GROUND,
				.accuracy = 0,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPDEF_UP_1},

		[MOVE_ICEBALL] =
			{
				.effect = EFFECT_ROLLOUT,
				.power = 30,
				.type = TYPE_ICE,
				.accuracy = 90,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_NEEDLEARM] =
			{
				.effect = EFFECT_FLINCH_HIT,
				.power = 60,
				.type = TYPE_GRASS,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SLACKOFF] =
			{
				.effect = EFFECT_RESTORE_HP,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED | FLAG_TRIAGE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_HYPERVOICE] =
			{
				.effect = EFFECT_HIT,
				.power = 90,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_POISONFANG] =
			{
				.effect = EFFECT_BAD_POISON_HIT,
				.power = 50,
				.type = TYPE_POISON,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 50,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_CRUSHCLAW] =
			{
				.effect = EFFECT_DEFENSE_DOWN_HIT,
				.power = 75,
				.type = TYPE_NORMAL,
				.accuracy = 95,
				.pp = 10,
				.secondaryEffectChance = 50,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_BLASTBURN] =
			{
				.effect = EFFECT_RECHARGE,
				.power = 150,
				.type = TYPE_FIRE,
				.accuracy = 90,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 200,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_HYDROCANNON] =
			{
				.effect = EFFECT_RECHARGE,
				.power = 150,
				.type = TYPE_WATER,
				.accuracy = 90,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 200,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_METEORMASH] =
			{
				.effect = EFFECT_ATTACK_UP_HIT,
#ifdef GEN_6_POWER_NERFS
				.power = 90,
#else
				.power = 100,
#endif
				.type = TYPE_STEEL,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 20,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_ASTONISH] =
			{
				.effect = EFFECT_FLINCH_HIT,
				.power = 30,
				.type = TYPE_GHOST,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_WEATHERBALL] =
			{
				.effect = EFFECT_HIT,
				.power = 50,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_AROMATHERAPY] =
			{
				.effect = EFFECT_HEAL_BELL,
				.power = 0,
				.type = TYPE_GRASS,
				.accuracy = 0,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RECOVER_HP},

		[MOVE_FAKETEARS] =
			{
				.effect = EFFECT_SPECIAL_DEFENSE_DOWN_2,
				.power = 0,
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPATK_UP_1},

		[MOVE_AIRCUTTER] =
			{
				.effect = EFFECT_HIGH_CRITICAL,
				.power = 60,
				.type = TYPE_FLYING,
				.accuracy = 95,
				.pp = 25,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_OVERHEAT] =
			{
				.effect = EFFECT_OVERHEAT,
#ifdef GEN_6_POWER_NERFS
				.power = 130,
#else
				.power = 140,
#endif
				.type = TYPE_FIRE,
				.accuracy = 90,
				.pp = 5,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 200,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_ODORSLEUTH] =
			{
				.effect = EFFECT_FORESIGHT,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 40,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ATK_UP_1},

		[MOVE_ROCKTOMB] =
			{
				.effect = EFFECT_SPEED_DOWN_HIT,
				.power = 60,
				.type = TYPE_ROCK,
				.accuracy = 95,
				.pp = 15,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SILVERWIND] =
			{
				.effect = EFFECT_ALL_STATS_UP_HIT,
				.power = 60,
				.type = TYPE_BUG,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_METALSOUND] =
			{
				.effect = EFFECT_SPECIAL_DEFENSE_DOWN_2,
				.power = 0,
				.type = TYPE_STEEL,
				.accuracy = 85,
				.pp = 40,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPATK_UP_1},

		[MOVE_GRASSWHISTLE] =
			{
				.effect = EFFECT_SLEEP,
				.power = 0,
				.type = TYPE_GRASS,
				.accuracy = 55,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_TICKLE] =
			{
				.effect = EFFECT_TICKLE,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_COSMICPOWER] =
			{
				.effect = EFFECT_COSMIC_POWER,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPDEF_UP_1},

		[MOVE_WATERSPOUT] =
			{
				.effect = EFFECT_HIT,
				.power = 150,
				.type = TYPE_WATER,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 200,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SIGNALBEAM] =
			{
				.effect = EFFECT_CONFUSE_HIT,
				.power = 75,
				.type = TYPE_BUG,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SHADOWPUNCH] =
			{
				.effect = EFFECT_ALWAYS_HIT,
				.power = 60,
				.type = TYPE_GHOST,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_EXTRASENSORY] =
			{
				.effect = EFFECT_FLINCH_HIT,
				.power = 80,
				.type = TYPE_PSYCHIC,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SKYUPPERCUT] =
			{
				.effect = EFFECT_HIT,
				.power = 85,
				.type = TYPE_FIGHTING,
				.accuracy = 90,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SANDTOMB] =
			{
				.effect = EFFECT_TRAP,
				.power = 35,
				.type = TYPE_GROUND,
				.accuracy = 85,
				.pp = 15,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SHEERCOLD] =
			{
				.effect = EFFECT_0HKO,
				.power = 1,
				.type = TYPE_ICE,
				.accuracy = 30,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_MUDDYWATER] =
			{
				.effect = EFFECT_ACCURACY_DOWN_HIT,
#ifdef GEN_6_POWER_NERFS
				.power = 90,
#else
				.power = 95,
#endif
				.type = TYPE_WATER,
				.accuracy = 85,
				.pp = 10,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_BULLETSEED] =
			{
				.effect = EFFECT_MULTI_HIT,
				.power = 25,
				.type = TYPE_GRASS,
				.accuracy = 100,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_AERIALACE] =
			{
				.effect = EFFECT_ALWAYS_HIT,
				.power = 60,
				.type = TYPE_FLYING,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_ICICLESPEAR] =
			{
				.effect = EFFECT_MULTI_HIT,
				.power = 25,
				.type = TYPE_ICE,
				.accuracy = 100,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_IRONDEFENSE] =
			{
				.effect = EFFECT_DEFENSE_UP_2,
				.power = 0,
				.type = TYPE_STEEL,
				.accuracy = 0,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_BLOCK] =
			{
				.effect = EFFECT_MEAN_LOOK,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_HOWL] =
			{
				.effect = EFFECT_ATTACK_UP,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 40,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ATK_UP_1},

		[MOVE_DRAGONCLAW] =
			{
				.effect = EFFECT_HIT,
				.power = 80,
				.type = TYPE_DRAGON,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_FRENZYPLANT] =
			{
				.effect = EFFECT_RECHARGE,
				.power = 150,
				.type = TYPE_GRASS,
				.accuracy = 90,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 200,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_BULKUP] =
			{
				.effect = EFFECT_BULK_UP,
				.power = 0,
				.type = TYPE_FIGHTING,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ATK_UP_1},

		[MOVE_BOUNCE] =
			{
				.effect = EFFECT_SEMI_INVULNERABLE,
				.power = 85,
				.type = TYPE_FLYING,
				.accuracy = 85,
				.pp = 5,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_MUDSHOT] =
			{
				.effect = EFFECT_SPEED_DOWN_HIT,
				.power = 55,
				.type = TYPE_GROUND,
				.accuracy = 95,
				.pp = 15,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_POISONTAIL] =
			{
				.effect = EFFECT_POISON_HIT,
				.power = 50,
				.type = TYPE_POISON,
				.accuracy = 100,
				.pp = 25,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_COVET] =
			{
				.effect = EFFECT_THIEF,
				.power = 60,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 25,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_VOLTTACKLE] =
			{
				.effect = EFFECT_PARALYZE_HIT,
				.power = 120,
				.type = TYPE_ELECTRIC,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_MAGICALLEAF] =
			{
				.effect = EFFECT_ALWAYS_HIT,
				.power = 60,
				.type = TYPE_GRASS,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_WATERSPORT] =
			{
				.effect = EFFECT_WATER_SPORT,
				.power = 0,
				.type = TYPE_WATER,
				.accuracy = 0,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPDEF_UP_1},

		[MOVE_CALMMIND] =
			{
				.effect = EFFECT_CALM_MIND,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_LEAFBLADE] =
			{
				.effect = EFFECT_HIGH_CRITICAL,
				.power = 90,
				.type = TYPE_GRASS,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_DRAGONDANCE] =
			{
				.effect = EFFECT_DRAGON_DANCE,
				.power = 0,
				.type = TYPE_DRAGON,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_ROCKBLAST] =
			{
				.effect = EFFECT_MULTI_HIT,
				.power = 25,
				.type = TYPE_ROCK,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SHOCKWAVE] =
			{
				.effect = EFFECT_ALWAYS_HIT,
				.power = 60,
				.type = TYPE_ELECTRIC,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_WATERPULSE] =
			{
				.effect = EFFECT_CONFUSE_HIT,
				.power = 60,
				.type = TYPE_WATER,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 20,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_DOOMDESIRE] =
			{
				.effect = EFFECT_FUTURE_SIGHT,
				.power = 140,
				.type = TYPE_STEEL,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 200,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_PSYCHOBOOST] =
			{
				.effect = EFFECT_OVERHEAT,
				.power = 140,
				.type = TYPE_PSYCHIC,
				.accuracy = 90,
				.pp = 5,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 200,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_LEECHFANG] =
			{
				.effect = EFFECT_ABSORB,
				.power = 80,
				.type = TYPE_BUG,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_TRIAGE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_AIRSLASH] =
			{
				.effect = EFFECT_FLINCH_HIT,
				.power = 75,
				.type = TYPE_FLYING,
				.accuracy = 95,
				.pp = 15,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_AQUAJET] =
			{
				.effect = EFFECT_QUICK_ATTACK,
				.power = 40,
				.type = TYPE_WATER,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 1,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_AQUATAIL] =
			{
				.effect = EFFECT_HIT,
				.power = 90,
				.type = TYPE_WATER,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_AURASPHERE] =
			{
				.effect = EFFECT_ALWAYS_HIT,
#ifdef GEN_6_POWER_NERFS
				.power = 80,
#else
				.power = 90,
#endif
				.type = TYPE_FIGHTING,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_AVALANCHE] =
			{
				.effect = EFFECT_HIT,
				.power = 60,
				.type = TYPE_ICE,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 252,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_BRAVEBIRD] =
			{
				.effect = EFFECT_RECOIL,
				.power = 120,
				.type = TYPE_FLYING,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_BUGBUZZ] =
			{
				.effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
				.power = 90,
				.type = TYPE_BUG,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_BULLETPUNCH] =
			{
				.effect = EFFECT_QUICK_ATTACK,
				.power = 40,
				.type = TYPE_STEEL,
				.accuracy = 100,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 1,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_CHARGEBEAM] =
			{
				.effect = EFFECT_SPECIAL_ATTACK_UP_HIT,
				.power = 50,
				.type = TYPE_ELECTRIC,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 70,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_CLOSECOMBAT] =
			{
				.effect = EFFECT_SUPERPOWER,
				.power = 120,
				.type = TYPE_FIGHTING,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_CROSSPOISON] =
			{
				.effect = EFFECT_POISON_HIT,
				.power = 70,
				.type = TYPE_POISON,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_DARKPULSE] =
			{
				.effect = EFFECT_FLINCH_HIT,
				.power = 80,
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 20,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_DISCHARGE] =
			{
				.effect = EFFECT_PARALYZE_HIT,
				.power = 80,
				.type = TYPE_ELECTRIC,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_FOES_AND_ALLY,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_DRACOMETEOR] =
			{
				.effect = EFFECT_OVERHEAT,
#ifdef GEN_6_POWER_NERFS
				.power = 130,
#else
				.power = 140,
#endif
				.type = TYPE_DRAGON,
				.accuracy = 90,
				.pp = 5,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 200,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_DRAGONPULSE] =
			{
				.effect = EFFECT_HIT,
#ifdef GEN_6_POWER_NERFS
				.power = 85,
#else
				.power = 90,
#endif
				.type = TYPE_DRAGON,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_DRAINPUNCH] =
			{
				.effect = EFFECT_ABSORB,
				.power = 75,
				.type = TYPE_FIGHTING,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_TRIAGE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_EARTHPOWER] =
			{
				.effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
				.power = 90,
				.type = TYPE_GROUND,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_ENERGYBALL] =
			{
				.effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
				.power = 90,
				.type = TYPE_GRASS,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_FOCUSBLAST] =
			{
				.effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
				.power = 120,
				.type = TYPE_FIGHTING,
				.accuracy = 70,
				.pp = 5,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_FORCEPALM] =
			{
				.effect = EFFECT_PARALYZE_HIT,
				.power = 60,
				.type = TYPE_FIGHTING,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_GIGAIMPACT] =
			{
				.effect = EFFECT_RECHARGE,
				.power = 150,
				.type = TYPE_NORMAL,
				.accuracy = 90,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 200,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_GRASSKNOT] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_GRASS,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_GUNKSHOT] =
			{
				.effect = EFFECT_POISON_HIT,
				.power = 120,
				.type = TYPE_POISON,
				.accuracy = 80,
				.pp = 5,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_HAMMERARM] =
			{
				.effect = EFFECT_SUPERPOWER,
				.power = 100,
				.type = TYPE_FIGHTING,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_HEADSMASH] =
			{
				.effect = EFFECT_RECOIL,
				.power = 150,
				.type = TYPE_ROCK,
				.accuracy = 80,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 200,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_ICESHARD] =
			{
				.effect = EFFECT_QUICK_ATTACK,
				.power = 40,
				.type = TYPE_ICE,
				.accuracy = 100,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 1,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_IRONHEAD] =
			{
				.effect = EFFECT_FLINCH_HIT,
				.power = 80,
				.type = TYPE_STEEL,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_LAVAPLUME] =
			{
				.effect = EFFECT_BURN_HIT,
				.power = 80,
				.type = TYPE_FIRE,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_FOES_AND_ALLY,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_MAGNETBOMB] =
			{
				.effect = EFFECT_ALWAYS_HIT,
				.power = 60,
				.type = TYPE_STEEL,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_MUDBOMB] =
			{
				.effect = EFFECT_ACCURACY_DOWN_HIT,
				.power = 65,
				.type = TYPE_GROUND,
				.accuracy = 85,
				.pp = 10,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_NASTYPLOT] =
			{
				.effect = EFFECT_SPECIAL_ATTACK_UP_2,
				.power = 0,
				.type = TYPE_DARK,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_NIGHTSLASH] =
			{
				.effect = EFFECT_HIGH_CRITICAL,
				.power = 70,
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_OMINOUSWIND] =
			{
				.effect = EFFECT_ALL_STATS_UP_HIT,
				.power = 60,
				.type = TYPE_GHOST,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_POWERGEM] =
			{
				.effect = EFFECT_HIT,
				.power = 80,
				.type = TYPE_ROCK,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_POWERWHIP] =
			{
				.effect = EFFECT_HIT,
				.power = 120,
				.type = TYPE_GRASS,
				.accuracy = 85,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_PSYCHOCUT] =
			{
				.effect = EFFECT_HIGH_CRITICAL,
				.power = 70,
				.type = TYPE_PSYCHIC,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_ROCKCLIMB] =
			{
				.effect = EFFECT_CONFUSE_HIT,
				.power = 90,
				.type = TYPE_NORMAL,
				.accuracy = 85,
				.pp = 20,
				.secondaryEffectChance = 20,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_ROCKPOLISH] =
			{
				.effect = EFFECT_SPEED_UP_2,
				.power = 0,
				.type = TYPE_ROCK,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_ROCKWRECKER] =
			{
				.effect = EFFECT_RECHARGE,
				.power = 150,
				.type = TYPE_ROCK,
				.accuracy = 90,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 200,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_ROOST] =
			{
				.effect = EFFECT_RESTORE_HP,
				.power = 0,
				.type = TYPE_FLYING,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED | FLAG_TRIAGE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_SEEDBOMB] =
			{
				.effect = EFFECT_HIT,
				.power = 80,
				.type = TYPE_GRASS,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SHADOWCLAW] =
			{
				.effect = EFFECT_HIGH_CRITICAL,
				.power = 70,
				.type = TYPE_GHOST,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SHADOWSNEAK] =
			{
				.effect = EFFECT_QUICK_ATTACK,
				.power = 40,
				.type = TYPE_GHOST,
				.accuracy = 100,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 1,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_VACUUMWAVE] =
			{
				.effect = EFFECT_QUICK_ATTACK,
				.power = 40,
				.type = TYPE_FIGHTING,
				.accuracy = 100,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 1,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_XSCISSOR] =
			{
				.effect = EFFECT_HIT,
				.power = 80,
				.type = TYPE_BUG,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_ZENHEADBUTT] =
			{
				.effect = EFFECT_FLINCH_HIT,
				.power = 80,
				.type = TYPE_PSYCHIC,
				.accuracy = 90,
				.pp = 15,
				.secondaryEffectChance = 20,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SWITCHEROO] =
			{
				.effect = EFFECT_TRICK,
				.power = 0,
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_2},

		[MOVE_DRILLRUN] =
			{
				.effect = EFFECT_HIGH_CRITICAL,
				.power = 80,
				.type = TYPE_GROUND,
				.accuracy = 95,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_BULLDOZE] =
			{
				.effect = EFFECT_SPEED_DOWN_HIT,
				.power = 60,
				.type = TYPE_GROUND,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_FOES_AND_ALLY,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_ELECTROWEB] =
			{
				.effect = EFFECT_SPEED_DOWN_HIT,
				.power = 55,
				.type = TYPE_ELECTRIC,
				.accuracy = 95,
				.pp = 15,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_FLAMECHARGE] =
			{
				.effect = EFFECT_SPEED_UP_1_HIT,
				.power = 50,
				.type = TYPE_FIRE,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_FROSTBREATH] =
			{
				.effect = EFFECT_HIT,
				.power = 60,
				.type = TYPE_ICE,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_HEARTSTAMP] =
			{
				.effect = EFFECT_FLINCH_HIT,
				.power = 60,
				.type = TYPE_PSYCHIC,
				.accuracy = 100,
				.pp = 25,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_HONECLAWS] =
			{
				.effect = EFFECT_ATK_ACC_UP,
				.power = 0,
				.type = TYPE_DARK,
				.accuracy = 0,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ATK_UP_1},

		[MOVE_HORNLEECH] =
			{
				.effect = EFFECT_ABSORB,
				.power = 75,
				.type = TYPE_GRASS,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_TRIAGE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_COIL] =
			{
				.effect = EFFECT_BULK_UP,
				.power = 0,
				.type = TYPE_POISON,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_HURRICANE] =
			{
				.effect = EFFECT_THUNDER,
#ifdef GEN_6_POWER_NERFS
				.power = 110,
#else
				.power = 120,
#endif
				.type = TYPE_FLYING,
				.accuracy = 70,
				.pp = 10,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_ICICLECRASH] =
			{
				.effect = EFFECT_FLINCH_HIT,
				.power = 85,
				.type = TYPE_ICE,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_WORKUP] =
			{
				.effect = EFFECT_ATK_SPATK_UP,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ATK_UP_1},

		[MOVE_QUIVERDANCE] =
			{
				.effect = EFFECT_CALM_MIND,
				.power = 0,
				.type = TYPE_BUG,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_LEAFTORNADO] =
			{
				.effect = EFFECT_ACCURACY_DOWN_HIT,
				.power = 65,
				.type = TYPE_GRASS,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_LOWSWEEP] =
			{
				.effect = EFFECT_SPEED_DOWN_HIT,
				.power = 65,
				.type = TYPE_FIGHTING,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SNARL] =
			{
				.effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
				.power = 55,
				.type = TYPE_DARK,
				.accuracy = 95,
				.pp = 15,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_STRUGGLEBUG] =
			{
				.effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
				.power = 50,
				.type = TYPE_BUG,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_STEAMROLLER] =
			{
				.effect = EFFECT_FLINCH_HIT,
				.power = 65,
				.type = TYPE_BUG,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_STORMTHROW] =
			{
				.effect = EFFECT_HIT,
				.power = 60,
				.type = TYPE_FIGHTING,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_VENOSHOCK] =
			{
				.effect = EFFECT_HIT, // Also double damage on poisoned foes
				.power = 65,
				.type = TYPE_POISON,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_WILDCHARGE] =
			{
				.effect = EFFECT_RECOIL,
				.power = 90,
				.type = TYPE_ELECTRIC,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_POISONJAB] =
			{
				.effect = EFFECT_POISON_HIT,
				.power = 80,
				.type = TYPE_POISON,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_ACIDSPRAY] =
			{
				.effect = EFFECT_SPECIAL_DEFENSE_DOWN_2_HIT,
				.power = 40,
				.type = TYPE_POISON,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_FIERYDANCE] =
			{
				.effect = EFFECT_SPECIAL_ATTACK_UP_HIT,
				.power = 80,
				.type = TYPE_FIRE,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 50,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_CLEARSMOG] =
			{
				.effect = EFFECT_REMOVE_TARGET_STAT_CHANGES,
				.power = 50,
				.type = TYPE_POISON,
				.accuracy = 0,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_LEAFSTORM] =
			{
				.effect = EFFECT_OVERHEAT,
#ifdef GEN_6_POWER_NERFS
				.power = 130,
#else
				.power = 140,
#endif
				.type = TYPE_GRASS,
				.accuracy = 90,
				.pp = 5,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 200,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_STONEEDGE] =
			{
				.effect = EFFECT_HIGH_CRITICAL,
				.power = 100,
				.type = TYPE_ROCK,
				.accuracy = 80,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_PAYBACK] =
			{
				.effect = EFFECT_HIT,
				.power = 50,
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_FIREFANG] =
			{
				.effect = EFFECT_FLINCH_HIT,
				.power = 65,
				.type = TYPE_FIRE,
				.accuracy = 95,
				.pp = 15,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_ICEFANG] =
			{
				.effect = EFFECT_FLINCH_HIT,
				.power = 65,
				.type = TYPE_ICE,
				.accuracy = 95,
				.pp = 15,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_THUNDERFANG] =
			{
				.effect = EFFECT_FLINCH_HIT,
				.power = 65,
				.type = TYPE_ELECTRIC,
				.accuracy = 95,
				.pp = 15,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_FLAREBLITZ] =
			{
				.effect = EFFECT_BURN_HIT,
				.power = 120,
				.type = TYPE_FIRE,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_INFERNO] =
			{
				.effect = EFFECT_BURN_HIT,
				.power = 100,
				.type = TYPE_FIRE,
				.accuracy = 50,
				.pp = 5,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_HEX] =
			{
				.effect = EFFECT_HIT,
				.power = 65,
				.type = TYPE_GHOST,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_DUALCHOP] =
			{
				.effect = EFFECT_DOUBLE_HIT,
				.power = 40,
				.type = TYPE_DRAGON,
				.accuracy = 90,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_DOUBLEHIT] =
			{
				.effect = EFFECT_DOUBLE_HIT,
				.power = 35,
				.type = TYPE_NORMAL,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_COTTONGUARD] =
			{
				.effect = EFFECT_DEFENSE_UP_2,
				.power = 0,
				.type = TYPE_GRASS,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_ACROBATICS] =
			{
				.effect = EFFECT_HIT,
				.power = 55,
				.type = TYPE_FLYING,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_FLAMEBURST] =
			{
				.effect = EFFECT_FLAMEBURST,
				.power = 70,
				.type = TYPE_FIRE,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_UTURN] =
			{
				.effect = EFFECT_BATON_PASS,
				.power = 70,
				.type = TYPE_BUG,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_VOLTSWITCH] =
			{
				.effect = EFFECT_BATON_PASS,
				.power = 70,
				.type = TYPE_ELECTRIC,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_DRAGONTAIL] =
			{
				.effect = EFFECT_ROAR,
				.power = 60,
				.type = TYPE_DRAGON,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 250,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_CIRCLETHROW] =
			{
				.effect = EFFECT_ROAR,
				.power = 60,
				.type = TYPE_FIGHTING,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 250,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_MIRRORSHOT] =
			{
				.effect = EFFECT_ACCURACY_DOWN_HIT,
				.power = 65,
				.type = TYPE_STEEL,
				.accuracy = 85,
				.pp = 10,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_WOODHAMMER] =
			{
				.effect = EFFECT_RECOIL,
				.power = 120,
				.type = TYPE_GRASS,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_HEALPULSE] =
			{
				.effect = EFFECT_HEAL_TARGET,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_TRIAGE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_FLASHCANNON] =
			{
				.effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
				.power = 80,
				.type = TYPE_STEEL,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_BUGBITE] =
			{
				.effect = EFFECT_EAT_BERRY,
				.power = 60,
				.type = TYPE_BUG,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_PLUCK] =
			{
				.effect = EFFECT_EAT_BERRY,
				.power = 60,
				.type = TYPE_FLYING,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SHELLSMASH] =
			{
				.effect = EFFECT_DRAGON_DANCE,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_RAGEPOWDER] =
			{
				.effect = EFFECT_FOLLOW_ME,
				.power = 0,
				.type = TYPE_BUG,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 2,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_WAKEUPSLAP] =
			{
				.effect = EFFECT_SMELLINGSALT,
				.power = 70,
				.type = TYPE_FIGHTING,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_RAZORSHELL] =
			{
				.effect = EFFECT_DEFENSE_DOWN_HIT,
				.power = 75,
				.type = TYPE_WATER,
				.accuracy = 95,
				.pp = 10,
				.secondaryEffectChance = 50,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_COPYCAT] =
			{
				.effect = EFFECT_MIRROR_MOVE,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_DEPENDS,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ACC_UP_1},

		[MOVE_MIRACLEEYE] =
			{
				.effect = EFFECT_FORESIGHT,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 40,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPATK_UP_1},

		[MOVE_SUCKERPUNCH] =
			{
				.effect = EFFECT_SUCKER_PUNCH,
#ifdef GEN_7_POWER_NERFS
				.power = 70,
#else
				.power = 80,
#endif
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 1,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SCALD] =
			{
				.effect = EFFECT_BURN_HIT,
				.power = 80,
				.type = TYPE_WATER,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_BRINE] =
			{
				.effect = EFFECT_HIT,
				.power = 65,
				.type = TYPE_WATER,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_FAIRYWIND] =
			{
				.effect = EFFECT_HIT,
				.power = 40,
				.type = TYPE_FAIRY,
				.accuracy = 100,
				.pp = 30,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_BABYDOLLEYES] =
			{
				.effect = EFFECT_ATTACK_DOWN,
				.power = 0,
				.type = TYPE_FAIRY,
				.accuracy = 100,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 1,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_PLAYROUGH] =
			{
				.effect = EFFECT_ATTACK_DOWN_HIT,
				.power = 90,
				.type = TYPE_FAIRY,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_MOONBLAST] =
			{
				.effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
				.power = 95,
				.type = TYPE_FAIRY,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_DRAININGKISS] =
			{
				.effect = EFFECT_ABSORB,
				.power = 50,
				.type = TYPE_FAIRY,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_TRIAGE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_DAZZLINGGLEAM] =
			{
				.effect = EFFECT_HIT,
				.power = 80,
				.type = TYPE_FAIRY,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_DISARMINGVOICE] =
			{
				.effect = EFFECT_ALWAYS_HIT,
				.power = 40,
				.type = TYPE_FAIRY,
				.accuracy = 0,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_STEALTHROCK] =
			{
				.effect = EFFECT_SPIKES,
				.power = 0,
				.type = TYPE_ROCK,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_OPPONENTS_FIELD,
				.priority = 0,
				.flags = FLAG_MAGIC_COAT_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_TOXICSPIKES] =
			{
				.effect = EFFECT_SPIKES,
				.power = 0,
				.type = TYPE_POISON,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_OPPONENTS_FIELD,
				.priority = 0,
				.flags = FLAG_MAGIC_COAT_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_HEALINGWISH] =
			{
				.effect = EFFECT_MEMENTO,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED | FLAG_TRIAGE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = 0},

		[MOVE_LUNARDANCE] =
			{
				.effect = EFFECT_MEMENTO,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED | FLAG_TRIAGE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = 0},

		[MOVE_TAILWIND] =
			{
				.effect = EFFECT_TEAM_EFFECTS,
				.power = 0,
				.type = TYPE_FLYING,
				.accuracy = 0,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_BOOST_CRITS},

		[MOVE_BOOMBURST] =
			{
				.effect = EFFECT_HIT,
				.power = 140,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_FOES_AND_ALLY,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 200,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_INCINERATE] =
			{
				.effect = EFFECT_EAT_BERRY,
				.power = 60,
				.type = TYPE_FIRE,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_WORRYSEED] =
			{
				.effect = EFFECT_SKILL_SWAP,
				.power = 0,
				.type = TYPE_GRASS,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_GASTROACID] =
			{
				.effect = EFFECT_SKILL_SWAP,
				.power = 0,
				.type = TYPE_POISON,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_GEOMANCY] =
			{
				.effect = EFFECT_CALM_MIND,
				.power = 0,
				.type = TYPE_FAIRY,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ALL_STATS_UP_1},

		[MOVE_FLOWERSHIELD] =
			{
				.effect = EFFECT_DEFENSE_UP,
				.power = 0,
				.type = TYPE_FAIRY,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_FOES_AND_ALLY,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_ROTOTILLER] =
			{
				.effect = EFFECT_ATK_SPATK_UP,
				.power = 0,
				.type = TYPE_GROUND,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_FOES_AND_ALLY,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ATK_UP_1},

		[MOVE_SHIFTGEAR] =
			{
				.effect = EFFECT_DRAGON_DANCE,
				.power = 0,
				.type = TYPE_STEEL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_STICKYWEB] =
			{
				.effect = EFFECT_SPIKES,
				.power = 0,
				.type = TYPE_BUG,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_OPPONENTS_FIELD,
				.priority = 0,
				.flags = FLAG_MAGIC_COAT_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_STOREDPOWER] =
			{
				.effect = EFFECT_HIT,
				.power = 20,
				.type = TYPE_PSYCHIC,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_ACUPRESSURE] =
			{
				.effect = EFFECT_EVASION_UP,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER_OR_PARTNER,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_BOOST_CRITS},

		[MOVE_PUNISHMENT] =
			{
				.effect = EFFECT_HIT,
				.power = 60, // Starts at 60 so best to show it to the player
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_ASSURANCE] =
			{
				.effect = EFFECT_HIT,
				.power = 60,
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_DRAGONRUSH] =
			{
				.effect = EFFECT_FLINCH_HIT,
				.power = 100,
				.type = TYPE_DRAGON,
				.accuracy = 75,
				.pp = 10,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_DARKVOID] =
			{
				.effect = EFFECT_SLEEP,
				.power = 0,
				.type = TYPE_DARK,
#ifdef DARK_VOID_ACC_NERF
				.accuracy = 50,
#else
				.accuracy = 80,
#endif
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_FEINT] =
			{
				.effect = EFFECT_FEINT,
#ifndef UNBOUND
				.power = 30,
#else // For Pokemon Unbound
				.power = 50,
#endif
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 2,
				.flags = FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_PHANTOMFORCE] =
			{
				.effect = EFFECT_SEMI_INVULNERABLE,
				.power = 90,
				.type = TYPE_GHOST,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_PETALBLIZZARD] =
			{
				.effect = EFFECT_HIT,
				.power = 90,
				.type = TYPE_GRASS,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_FOES_AND_ALLY,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_PLAYNICE] =
			{
				.effect = EFFECT_PLAY_NICE,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_ROAROFTIME] =
			{
				.effect = EFFECT_RECHARGE,
				.power = 150,
				.type = TYPE_DRAGON,
				.accuracy = 90,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 200,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SPACIALREND] =
			{
				.effect = EFFECT_HIGH_CRITICAL,
				.power = 100,
				.type = TYPE_DRAGON,
				.accuracy = 95,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_MAGMASTORM] =
			{
				.effect = EFFECT_TRAP,
#ifdef GEN_6_POWER_NERFS
				.power = 100,
#else
				.power = 120,
#endif
				.type = TYPE_FIRE,
				.accuracy = 75,
				.pp = 5,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_FINALGAMBIT] =
			{
				.effect = EFFECT_MEMENTO,
				.power = 1,
				.type = TYPE_FIGHTING,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SHADOWFORCE] =
			{
				.effect = EFFECT_SEMI_INVULNERABLE,
				.power = 120,
				.type = TYPE_GHOST,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_NUZZLE] =
			{
				.effect = EFFECT_PARALYZE_HIT,
				.power = 20,
				.type = TYPE_ELECTRIC,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_RETALIATE] =
			{
				.effect = EFFECT_HIT,
				.power = 70,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_STEELYHIT] =
			{
				.effect = EFFECT_HIT,
				.power = 40,
				.type = TYPE_STEEL,
				.accuracy = 100,
				.pp = 35,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_JUDGMENT] =
			{
				.effect = EFFECT_HIT,
				.power = 100,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_FREEZEDRY] =
			{
				.effect = EFFECT_FREEZE_HIT,
				.power = 70,
				.type = TYPE_ICE,
				.accuracy = 100,
				.pp = 20,
#ifndef FROSTBITE
				.secondaryEffectChance = 10,
#else
				.secondaryEffectChance = 30,
#endif
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_PSYSHOCK] =
			{
				.effect = EFFECT_HIT,
				.power = 80,
				.type = TYPE_PSYCHIC,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_ROUND] =
			{
				.effect = EFFECT_FURY_CUTTER,
				.power = 60,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_TAILSLAP] =
			{
				.effect = EFFECT_MULTI_HIT,
				.power = 25,
				.type = TYPE_NORMAL,
				.accuracy = 85,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_GEARGRIND] =
			{
				.effect = EFFECT_DOUBLE_HIT,
				.power = 50,
				.type = TYPE_STEEL,
				.accuracy = 85,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_NATURALGIFT] =
			{
				.effect = EFFECT_NATURAL_GIFT,
				.power = 1,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_CHIPAWAY] =
			{
				.effect = EFFECT_HIT,
				.power = 70,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SMACKDOWN] =
			{
				.effect = EFFECT_SMACK_DOWN,
				.power = 50,
				.type = TYPE_ROCK,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_HYPERSPACEHOLE] =
			{
				.effect = EFFECT_FEINT,
				.power = 80,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_GYROBALL] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_STEEL,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_HYPERSPACEFURY] =
			{
				.effect = EFFECT_SUPERPOWER,
				.power = 100,
				.type = TYPE_DARK,
				.accuracy = 0,
				.pp = 5,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_ATTACKORDER] =
			{
				.effect = EFFECT_HIGH_CRITICAL,
				.power = 90,
				.type = TYPE_BUG,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_DEFENDORDER] =
			{
				.effect = EFFECT_COSMIC_POWER,
				.power = 0,
				.type = TYPE_BUG,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_HEALORDER] =
			{
				.effect = EFFECT_RESTORE_HP,
				.power = 0,
				.type = TYPE_BUG,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED | FLAG_TRIAGE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_CAPTIVATE] =
			{
				.effect = EFFECT_SPECIAL_ATTACK_DOWN_2,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPDEF_UP_2},

		[MOVE_DEFOG] =
			{
				.effect = EFFECT_RAPID_SPIN,
				.power = 0,
				.type = TYPE_FLYING,
				.accuracy = 0,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ACC_UP_1},

		[MOVE_ORIGINPULSE] =
			{
				.effect = EFFECT_HIT,
#ifdef GEN_6_POWER_NERFS
				.power = 110,
#else
				.power = 120,
#endif
				.type = TYPE_WATER,
				.accuracy = 85,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_PRECIPICEBLADES] =
			{
				.effect = EFFECT_HIT,
				.power = 120,
				.type = TYPE_GROUND,
				.accuracy = 85,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_GUARDSWAP] =
			{
				.effect = EFFECT_STAT_SWAP_SPLIT,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_STEAMERUPTION] =
			{
				.effect = EFFECT_BURN_HIT,
				.power = 120,
				.type = TYPE_WATER,
				.accuracy = 95,
				.pp = 5,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_METALBURST] =
			{
				.effect = EFFECT_COUNTER,
				.power = 1,
				.type = TYPE_STEEL,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_DEPENDS,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_MEFIRST] =
			{
				.effect = EFFECT_ME_FIRST,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_2},

		[MOVE_POWERSWAP] =
			{
				.effect = EFFECT_STAT_SWAP_SPLIT,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_POWERTRICK] =
			{
				.effect = EFFECT_STAT_SWAP_SPLIT,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ATK_UP_1},

		[MOVE_PSYCHOSHIFT] =
			{
				.effect = EFFECT_REFRESH,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPATK_UP_2},

		[MOVE_WRINGOUT] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_KINGSSHIELD] =
			{
				.effect = EFFECT_PROTECT,
				.power = 0,
				.type = TYPE_STEEL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 4,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_PSYSTRIKE] =
			{
				.effect = EFFECT_HIT,
				.power = 100,
				.type = TYPE_PSYCHIC,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_AUTOTOMIZE] =
			{
				.effect = EFFECT_SPEED_UP_2,
				.power = 0,
				.type = TYPE_STEEL,
				.accuracy = 0,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_DIAMONDSTORM] =
			{
				.effect = EFFECT_DEFENSE_UP_2_HIT,
				.power = 100,
				.type = TYPE_ROCK,
				.accuracy = 95,
				.pp = 5,
				.secondaryEffectChance = 50,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SLUDGEWAVE] =
			{
				.effect = EFFECT_POISON_HIT,
				.power = 95,
				.type = TYPE_POISON,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_FOES_AND_ALLY,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_HEAVYSLAM] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_STEEL,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SYNCHRONOISE] =
			{
				.effect = EFFECT_HIT,
				.power = 120,
				.type = TYPE_PSYCHIC,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_FOES_AND_ALLY,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_ELECTROBALL] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_ELECTRIC,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_FOULPLAY] =
			{
				.effect = EFFECT_HIT,
				.power = 95,
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_ENTRAINMENT] =
			{
				.effect = EFFECT_SKILL_SWAP,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPDEF_UP_1},

		[MOVE_NIGHTDAZE] =
			{
				.effect = EFFECT_ACCURACY_DOWN_HIT,
				.power = 85,
				.type = TYPE_DARK,
				.accuracy = 95,
				.pp = 10,
				.secondaryEffectChance = 40,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_ECHOEDVOICE] =
			{
				.effect = EFFECT_FURY_CUTTER,
				.power = 40,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_LANDSWRATH] =
			{
				.effect = EFFECT_HIT,
				.power = 90,
				.type = TYPE_GROUND,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_OBLIVIONWING] =
			{
				.effect = EFFECT_ABSORB,
				.power = 80,
				.type = TYPE_FLYING,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_TRIAGE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_HEARTSWAP] =
			{
				.effect = EFFECT_STAT_SWAP_SPLIT,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_BOOST_CRITS},

		[MOVE_CRUSHGRIP] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SACREDSWORD] =
			{
				.effect = EFFECT_HIT,
				.power = 90,
				.type = TYPE_FIGHTING,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_HEATCRASH] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_FIRE,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_HEADCHARGE] =
			{
				.effect = EFFECT_RECOIL,
				.power = 120,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_TECHNOBLAST] =
			{
				.effect = EFFECT_HIT,
				.power = 120,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_RELICSONG] =
			{
				.effect = EFFECT_RELIC_SONG,
				.power = 75,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SECRETSWORD] =
			{
				.effect = EFFECT_HIT,
				.power = 85,
				.type = TYPE_FIGHTING,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_GLACIATE] =
			{
				.effect = EFFECT_SPEED_DOWN_HIT,
#ifdef UNBOUND
				.power = 75,
#else
				.power = 65,
#endif
				.type = TYPE_ICE,
#ifdef UNBOUND
				.accuracy = 100,
#else
				.accuracy = 95,
#endif
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_BOLTSTRIKE] =
			{
				.effect = EFFECT_PARALYZE_HIT,
				.power = 130,
				.type = TYPE_ELECTRIC,
				.accuracy = 85,
				.pp = 5,
				.secondaryEffectChance = 20,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 195,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_BLUEFLARE] =
			{
				.effect = EFFECT_BURN_HIT,
				.power = 130,
				.type = TYPE_FIRE,
				.accuracy = 85,
				.pp = 5,
				.secondaryEffectChance = 20,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 195,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_FREEZESHOCK] =
			{
				.effect = EFFECT_SKY_ATTACK,
				.power = 140,
				.type = TYPE_ICE,
				.accuracy = 90,
				.pp = 5,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 200,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_ICEBURN] =
			{
				.effect = EFFECT_SKY_ATTACK,
				.power = 140,
				.type = TYPE_ICE,
				.accuracy = 90,
				.pp = 5,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 200,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_VCREATE] =
			{
				.effect = EFFECT_SUPERPOWER,
				.power = 180,
				.type = TYPE_FIRE,
				.accuracy = 95,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 220,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_FUSIONFLARE] =
			{
				.effect = EFFECT_HIT,
				.power = 100,
				.type = TYPE_FIRE,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_FUSIONBOLT] =
			{
				.effect = EFFECT_HIT,
				.power = 100,
				.type = TYPE_ELECTRIC,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_FELLSTINGER] =
			{
				.effect = EFFECT_ATTACK_UP_HIT,
				.power = 50,
				.type = TYPE_BUG,
				.accuracy = 100,
				.pp = 25,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_NOBLEROAR] =
			{
				.effect = EFFECT_PLAY_NICE,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_DRAGONASCENT] =
			{
				.effect = EFFECT_SUPERPOWER,
				.power = 120,
				.type = TYPE_FLYING,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_PARTINGSHOT] =
			{
				.effect = EFFECT_BATON_PASS,
				.power = 0,
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESTORE_REPLACEMENT_HP},

		[MOVE_TOPSYTURVY] =
			{
				.effect = EFFECT_TOPSY_TURVY_ELECTRIFY,
				.power = 0,
				.type = TYPE_DARK,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ATK_UP_1},

		[MOVE_COREENFORCER] =
			{
				.effect = EFFECT_SKILL_SWAP,
				.power = 100,
				.type = TYPE_DRAGON,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_CHATTER] =
			{
				.effect = EFFECT_CONFUSE_HIT,
				.power = 65,
				.type = TYPE_FLYING,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_CONFIDE] =
			{
				.effect = EFFECT_SPECIAL_ATTACK_DOWN,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPDEF_UP_1},

		[MOVE_WATERSHURIKEN] =
			{
				.effect = EFFECT_MULTI_HIT,
				.power = 15,
				.type = TYPE_WATER,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 1,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_MYSTICALFIRE] =
			{
				.effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
				.power = 75,
				.type = TYPE_FIRE,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SPIKYSHIELD] =
			{
				.effect = EFFECT_PROTECT,
				.power = 0,
				.type = TYPE_GRASS,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 4,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_EERIEIMPULSE] =
			{
				.effect = EFFECT_SPECIAL_ATTACK_DOWN_2,
				.power = 0,
				.type = TYPE_ELECTRIC,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPDEF_UP_1},

		[MOVE_HOLDBACK] =
			{
				.effect = EFFECT_FALSE_SWIPE,
				.power = 40,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 40,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_INFESTATION] =
			{
				.effect = EFFECT_TRAP,
				.power = 20,
				.type = TYPE_BUG,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_POWERUPPUNCH] =
			{
				.effect = EFFECT_ATTACK_UP_HIT,
				.power = 40,
				.type = TYPE_FIGHTING,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_THOUSANDARROWS] =
			{
				.effect = EFFECT_SMACK_DOWN,
				.power = 90,
				.type = TYPE_GROUND,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_THOUSANDWAVES] =
			{
				.effect = EFFECT_MEAN_LOOK,
				.power = 90,
				.type = TYPE_GROUND,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_PARABOLICCHARGE] =
			{
				.effect = EFFECT_ABSORB,
				.power = 65,
				.type = TYPE_ELECTRIC,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_FOES_AND_ALLY,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_TRIAGE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SEARINGSHOT] =
			{
				.effect = EFFECT_BURN_HIT,
				.power = 100,
				.type = TYPE_FIRE,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_FOES_AND_ALLY,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SEEDFLARE] =
			{
				.effect = EFFECT_SPECIAL_DEFENSE_DOWN_2_HIT,
				.power = 120,
				.type = TYPE_GRASS,
				.accuracy = 85,
				.pp = 5,
				.secondaryEffectChance = 40,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_ACCELEROCK] =
			{
				.effect = EFFECT_QUICK_ATTACK,
				.power = 40,
				.type = TYPE_ROCK,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 1,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_ANCHORSHOT] =
			{
				.effect = EFFECT_MEAN_LOOK,
				.power = 80,
				.type = TYPE_STEEL,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_AURORAVEIL] =
			{
				.effect = EFFECT_REFLECT,
				.power = 0,
				.type = TYPE_ICE,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_BANEFULBUNKER] =
			{
				.effect = EFFECT_PROTECT,
				.power = 0,
				.type = TYPE_POISON,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 4,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_BEAKBLAST] =
			{
				.effect = EFFECT_FOCUS_PUNCH,
				.power = 100,
				.type = TYPE_FLYING,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 253,
				.flags = FLAG_PROTECT_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_BRUTALSWING] =
			{
				.effect = EFFECT_HIT,
				.power = 60,
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_FOES_AND_ALLY,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_BURNUP] =
			{
				.effect = EFFECT_BURN_UP,
#ifdef GEN_6_POWER_NERFS
				.power = 130,
#else
				.power = 140,
#endif
				.type = TYPE_FIRE,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 200,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_CLANGINGSCALES] =
			{
				.effect = EFFECT_SUPERPOWER,
#ifdef GEN_6_POWER_NERFS
				.power = 110,
#else
				.power = 120,
#endif
				.type = TYPE_DRAGON,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_DARKESTLARIAT] =
			{
				.effect = EFFECT_HIT,
				.power = 85,
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_DRAGONHAMMER] =
			{
				.effect = EFFECT_HIT,
				.power = 90,
				.type = TYPE_DRAGON,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_FIRELASH] =
			{
				.effect = EFFECT_DEFENSE_DOWN_HIT,
				.power = 80,
				.type = TYPE_FIRE,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_FIRSTIMPRESSION] =
			{
				.effect = EFFECT_FAKE_OUT,
				.power = 90,
				.type = TYPE_BUG,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 2,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_FLEURCANNON] =
			{
				.effect = EFFECT_OVERHEAT,
#ifdef GEN_6_POWER_NERFS
				.power = 130,
#else
				.power = 140,
#endif
				.type = TYPE_FAIRY,
				.accuracy = 90,
				.pp = 5,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 200,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_FLORALHEALING] =
			{
				.effect = EFFECT_HEAL_TARGET,
				.power = 0,
				.type = TYPE_FAIRY,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_TRIAGE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_GEARUP] =
			{
				.effect = EFFECT_ATK_SPATK_UP,
				.power = 0,
				.type = TYPE_STEEL,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_FOES_AND_ALLY,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPATK_UP_1},

		[MOVE_HIGHHORSEPOWER] =
			{
				.effect = EFFECT_HIT,
				.power = 95,
				.type = TYPE_GROUND,
				.accuracy = 95,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_ICEHAMMER] =
			{
				.effect = EFFECT_SUPERPOWER,
				.power = 100,
				.type = TYPE_ICE,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_LASERFOCUS] =
			{
				.effect = EFFECT_LOCK_ON,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ATK_UP_1},

		[MOVE_LEAFAGE] =
			{
				.effect = EFFECT_HIT,
				.power = 40,
				.type = TYPE_GRASS,
				.accuracy = 100,
				.pp = 40,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_LIQUIDATION] =
			{
				.effect = EFFECT_DEFENSE_DOWN_HIT,
				.power = 85,
				.type = TYPE_WATER,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 20,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_LUNGE] =
			{
				.effect = EFFECT_ATTACK_DOWN_HIT,
				.power = 80,
				.type = TYPE_BUG,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_MOONGEISTBEAM] =
			{
				.effect = EFFECT_HIT,
				.power = 100,
				.type = TYPE_GHOST,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_MULTIATTACK] =
			{
				.effect = EFFECT_HIT,
				.power = 120,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_NATURESMADNESS] =
			{
				.effect = EFFECT_SUPER_FANG,
				.power = 1,
				.type = TYPE_FAIRY,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_POLLENPUFF] =
			{
				.effect = EFFECT_HEAL_TARGET,
				.power = 90,
				.type = TYPE_BUG,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_POWERTRIP] =
			{
				.effect = EFFECT_HIT,
				.power = 20,
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_PRISMATICLASER] =
			{
				.effect = EFFECT_RECHARGE,
				.power = 160,
				.type = TYPE_PSYCHIC,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 200,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_PSYCHICFANGS] =
			{
				.effect = EFFECT_BRICK_BREAK,
				.power = 85,
				.type = TYPE_PSYCHIC,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_PURIFY] =
			{
				.effect = EFFECT_RESTORE_HP,
				.power = 0,
				.type = TYPE_POISON,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_TRIAGE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ALL_STATS_UP_1},

		[MOVE_REVELATIONDANCE] =
			{
				.effect = EFFECT_HIT,
				.power = 90,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SHADOWBONE] =
			{
				.effect = EFFECT_DEFENSE_DOWN_HIT,
				.power = 85,
				.type = TYPE_GHOST,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 20,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SHELLTRAP] =
			{
				.effect = EFFECT_FOCUS_PUNCH,
				.power = 150,
				.type = TYPE_FIRE,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_BOTH,
				.priority = 253,
				.flags = FLAG_PROTECT_AFFECTED,
				.z_move_power = 200,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SHOREUP] =
			{
				.effect = EFFECT_MORNING_SUN,
				.power = 0,
				.type = TYPE_GROUND,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED | FLAG_TRIAGE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_SMARTSTRIKE] =
			{
				.effect = EFFECT_ALWAYS_HIT,
				.power = 70,
				.type = TYPE_STEEL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SOLARBLADE] =
			{
				.effect = EFFECT_SOLARBEAM,
				.power = 125,
				.type = TYPE_GRASS,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SPARKLINGARIA] =
			{
				.effect = EFFECT_SMELLINGSALT,
				.power = 90,
				.type = TYPE_WATER,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_FOES_AND_ALLY,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SPECTRALTHIEF] =
			{
				.effect = EFFECT_PSYCH_UP,
				.power = 90,
				.type = TYPE_GHOST,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SPEEDSWAP] =
			{
				.effect = EFFECT_STAT_SWAP_SPLIT,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_SPIRITSHACKLE] =
			{
				.effect = EFFECT_MEAN_LOOK,
				.power = 80,
				.type = TYPE_GHOST,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SPOTLIGHT] =
			{
				.effect = EFFECT_FOLLOW_ME,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 3,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPDEF_UP_1},

		[MOVE_STOMPINGTANTRUM] =
			{
				.effect = EFFECT_HIT,
				.power = 75,
				.type = TYPE_GROUND,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_STRENGTHSAP] =
			{
				.effect = EFFECT_ABSORB,
				.power = 0,
				.type = TYPE_GRASS,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED | FLAG_TRIAGE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_SUNSTEELSTRIKE] =
			{
				.effect = EFFECT_HIT,
				.power = 100,
				.type = TYPE_STEEL,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_TEARFULLOOK] =
			{
				.effect = EFFECT_PLAY_NICE,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_THROATCHOP] =
			{
				.effect = EFFECT_ATTACK_BLOCKERS,
				.power = 80,
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_TOXICTHREAD] =
			{
				.effect = EFFECT_POISON,
				.power = 0,
				.type = TYPE_POISON,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_TROPKICK] =
			{
				.effect = EFFECT_ATTACK_DOWN_HIT,
				.power = 70,
				.type = TYPE_GRASS,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_ZINGZAP] =
			{
				.effect = EFFECT_FLINCH_HIT,
				.power = 80,
				.type = TYPE_ELECTRIC,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_ELECTRICTERRAIN] =
			{
				.effect = EFFECT_SET_TERRAIN,
				.power = 0,
				.type = TYPE_ELECTRIC,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_GRASSYTERRAIN] =
			{
				.effect = EFFECT_SET_TERRAIN,
				.power = 0,
				.type = TYPE_GRASS,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_MISTYTERRAIN] =
			{
				.effect = EFFECT_SET_TERRAIN,
				.power = 0,
				.type = TYPE_FAIRY,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPDEF_UP_1},

		[MOVE_PSYCHICTERRAIN] =
			{
				.effect = EFFECT_SET_TERRAIN,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPATK_UP_1},

		[MOVE_GRASSPLEDGE] =
			{
				.effect = EFFECT_PLEDGE,
				.power = 80,
				.type = TYPE_GRASS,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_FIREPLEDGE] =
			{
				.effect = EFFECT_PLEDGE,
				.power = 80,
				.type = TYPE_FIRE,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_WATERPLEDGE] =
			{
				.effect = EFFECT_PLEDGE,
				.power = 80,
				.type = TYPE_WATER,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_TRICKROOM] =
			{
				.effect = EFFECT_FIELD_EFFECTS,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 249,
				.flags = FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ACC_UP_1},

		[MOVE_MAGICROOM] =
			{
				.effect = EFFECT_FIELD_EFFECTS,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPDEF_UP_1},

		[MOVE_WONDERROOM] =
			{
				.effect = EFFECT_FIELD_EFFECTS,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPDEF_UP_1},

		[MOVE_CRAFTYSHIELD] =
			{
				.effect = EFFECT_PROTECT,
				.power = 0,
				.type = TYPE_FAIRY,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 3,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPDEF_UP_1},

		[MOVE_MATBLOCK] =
			{
				.effect = EFFECT_PROTECT,
				.power = 0,
				.type = TYPE_FIGHTING,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_QUICKGUARD] =
			{
				.effect = EFFECT_PROTECT,
				.power = 0,
				.type = TYPE_FIGHTING,
				.accuracy = 0,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 3,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_WIDEGUARD] =
			{
				.effect = EFFECT_PROTECT,
				.power = 0,
				.type = TYPE_ROCK,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 3,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_AQUARING] =
			{
				.effect = EFFECT_INGRAIN,
				.power = 0,
				.type = TYPE_WATER,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_AROMATICMIST] =
			{
				.effect = EFFECT_SPECIAL_DEFENSE_UP,
				.power = 0,
				.type = TYPE_FAIRY,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPDEF_UP_2},

		[MOVE_BELCH] =
			{
				.effect = EFFECT_RECYCLE,
				.power = 120,
				.type = TYPE_POISON,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_BESTOW] =
			{
				.effect = EFFECT_TRICK,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_2},

		[MOVE_FLING] =
			{
				.effect = EFFECT_FLING,
				.power = 1,
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_FLYINGPRESS] =
			{
				.effect = EFFECT_HIT,
				.power = 100,
				.type = TYPE_FIGHTING,
				.accuracy = 95,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 170,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_GRAVITY] =
			{
				.effect = EFFECT_FIELD_EFFECTS,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_FOES_AND_ALLY,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPATK_UP_1},

		[MOVE_GUARDSPLIT] =
			{
				.effect = EFFECT_STAT_SWAP_SPLIT,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_HEALBLOCK] =
			{
				.effect = EFFECT_ATTACK_BLOCKERS,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPATK_UP_2},

		[MOVE_IONDELUGE] =
			{
				.effect = EFFECT_FIELD_EFFECTS,
				.power = 0,
				.type = TYPE_ELECTRIC,
				.accuracy = 0,
				.pp = 25,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 1,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPATK_UP_1},

		[MOVE_LUCKYCHANT] =
			{
				.effect = EFFECT_TEAM_EFFECTS,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_EVSN_UP_1},

		[MOVE_MAGNETRISE] =
			{
				.effect = EFFECT_TEAM_EFFECTS,
				.power = 0,
				.type = TYPE_ELECTRIC,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_EVSN_UP_1},

		[MOVE_MAGNETICFLUX] =
			{
				.effect = EFFECT_COSMIC_POWER,
				.power = 0,
				.type = TYPE_ELECTRIC,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_FOES_AND_ALLY,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPDEF_UP_1},

		[MOVE_POWDER] =
			{
				.effect = EFFECT_ATTACK_BLOCKERS,
				.power = 0,
				.type = TYPE_BUG,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 1,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPDEF_UP_2},

		[MOVE_POWERSPLIT] =
			{
				.effect = EFFECT_STAT_SWAP_SPLIT,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_REFLECTTYPE] =
			{
				.effect = EFFECT_CONVERSION,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPATK_UP_1},

		[MOVE_SIMPLEBEAM] =
			{
				.effect = EFFECT_SKILL_SWAP,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPATK_UP_1},

		[MOVE_SOAK] =
			{
				.effect = EFFECT_TYPE_CHANGES,
				.power = 0,
				.type = TYPE_WATER,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPATK_UP_1},

		[MOVE_TELEKINESIS] =
			{
				.effect = EFFECT_ATTACK_BLOCKERS,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPATK_UP_1},

		[MOVE_TRICKORTREAT] =
			{
				.effect = EFFECT_TYPE_CHANGES,
				.power = 0,
				.type = TYPE_GHOST,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ALL_STATS_UP_1},

		[MOVE_VENOMDRENCH] =
			{
				.effect = EFFECT_VENOM_DRENCH,
				.power = 0,
				.type = TYPE_POISON,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_FORESTSCURSE] =
			{
				.effect = EFFECT_TYPE_CHANGES,
				.power = 0,
				.type = TYPE_GRASS,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = 0},

		[MOVE_MINDBLOWN] =
			{
				.effect = EFFECT_HIT,
				.power = 150,
				.type = TYPE_FIRE,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_FOES_AND_ALLY,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 200,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_PHOTONGEYSER] =
			{
				.effect = EFFECT_HIT,
				.power = 100,
				.type = TYPE_PSYCHIC,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_PLASMAFISTS] =
			{
				.effect = EFFECT_FIELD_EFFECTS,
				.power = 100,
				.type = TYPE_ELECTRIC,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_ELECTRIFY] =
			{
				.effect = EFFECT_TOPSY_TURVY_ELECTRIFY,
				.power = 0,
				.type = TYPE_ELECTRIC,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPATK_UP_1},

		[MOVE_EMBARGO] =
			{
				.effect = EFFECT_ATTACK_BLOCKERS,
				.power = 0,
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPATK_UP_1},

		[MOVE_FAIRYLOCK] =
			{
				.effect = EFFECT_FAIRY_LOCK_HAPPY_HOUR,
				.power = 0,
				.type = TYPE_FAIRY,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_DEF_UP_1},

		[MOVE_LIGHTOFRUIN] =
			{
				.effect = EFFECT_RECOIL,
				.power = 140,
				.type = TYPE_FAIRY,
				.accuracy = 90,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 200,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_TRUMPCARD] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_AFTERYOU] =
			{
				.effect = EFFECT_INSTRUCT_AFTER_YOU_QUASH,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_INSTRUCT] =
			{
				.effect = EFFECT_INSTRUCT_AFTER_YOU_QUASH,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPATK_UP_1},

		[MOVE_QUASH] =
			{
				.effect = EFFECT_INSTRUCT_AFTER_YOU_QUASH,
				.power = 0,
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPD_UP_1},

		[MOVE_HAPPYHOUR] =
			{
				.effect = EFFECT_FAIRY_LOCK_HAPPY_HOUR,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 30,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ALL_STATS_UP_1},

		[MOVE_DOUBLEIRONBASH] =
			{
				.effect = EFFECT_FLINCH_HIT,
				.power = 60,
				.type = TYPE_STEEL,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_LASTRESORT] =
			{
				.effect = EFFECT_LAST_RESORT,
				.power = 140,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 200,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SKYDROP] =
			{
				.effect = EFFECT_SKY_DROP,
				.power = 60,
				.type = TYPE_FLYING,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_CELEBRATE] =
			{
				.effect = EFFECT_FAIRY_LOCK_HAPPY_HOUR,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 40,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ALL_STATS_UP_1},

		[MOVE_HOLDHANDS] =
			{
				.effect = EFFECT_FAIRY_LOCK_HAPPY_HOUR,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 40,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ALL_STATS_UP_1},

		[MOVE_DYNAMAXCANNON] =
			{
				.effect = 0,
				.power = 100,
				.type = TYPE_DRAGON,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED,
				.split = SPLIT_SPECIAL,
				.z_move_power = 180,
				.z_move_effect = 0,
			},

		[MOVE_SNIPESHOT] =
			{
				.effect = EFFECT_IGNORE_REDIRECTION,
				.power = 80,
				.type = TYPE_WATER,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_SPECIAL,
				.z_move_power = 160,
				.z_move_effect = 0,
			},

		[MOVE_JAWLOCK] =
			{
				.effect = EFFECT_MEAN_LOOK,
				.power = 80,
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 160,
				.z_move_effect = 0,
			},

		[MOVE_STUFFCHEEKS] =
			{
				.effect = EFFECT_DEFENSE_UP_2,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.split = SPLIT_STATUS,
				.z_move_power = 0,
				.z_move_effect = Z_EFFECT_RESET_STATS,
			},

		[MOVE_NORETREAT] =
			{
				.effect = EFFECT_EXTREME_EVOBOOST,
				.power = 0,
				.type = TYPE_FIGHTING,
				.accuracy = 0,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.split = SPLIT_STATUS,
				.z_move_power = 0,
				.z_move_effect = Z_EFFECT_RESET_STATS,
			},

		[MOVE_TARSHOT] =
			{
				.effect = EFFECT_SPEED_DOWN,
				.power = 0,
				.type = TYPE_ROCK,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_STATUS,
				.z_move_power = 0,
				.z_move_effect = Z_EFFECT_SPD_UP_1,
			},

		[MOVE_MAGICPOWDER] =
			{
				.effect = EFFECT_TYPE_CHANGES,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MAGIC_COAT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_STATUS,
				.z_move_power = 0,
				.z_move_effect = Z_EFFECT_SPATK_UP_1,
			},

		[MOVE_DRAGONDARTS] =
			{
				.effect = 0,
				.power = 50,
				.type = TYPE_DRAGON,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 100,
				.z_move_effect = 0,
			},

		[MOVE_TEATIME] =
			{
				// ANIM TODO
				.effect = EFFECT_TEATIME, // EFFECT TODO
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_STATUS,
				.z_move_power = 0,
				.z_move_effect = Z_EFFECT_ALL_STATS_UP_1,
			},

		[MOVE_OCTOLOCK] =
			{
				.effect = EFFECT_MEAN_LOOK,
				.power = 0,
				.type = TYPE_FIGHTING,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_STATUS,
				.z_move_power = 0,
				.z_move_effect = Z_EFFECT_ATK_UP_1,
			},

		[MOVE_BOLTBEAK] =
			{
				.effect = 0,
				.power = 85,
				.type = TYPE_ELECTRIC,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 160,
				.z_move_effect = 0,
			},

		[MOVE_FISHIOUSREND] =
			{
				.effect = 0,
				.power = 85,
				.type = TYPE_WATER,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 160,
				.z_move_effect = 0,
			},

		[MOVE_COURTCHANGE] =
			{
				.effect = EFFECT_FIELD_EFFECTS,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_STATUS,
				.z_move_power = 0,
				.z_move_effect = Z_EFFECT_SPD_UP_1,
			},

		[MOVE_CLANGOROUSSOUL] =
			{
				.effect = EFFECT_EXTREME_EVOBOOST,
				.power = 0,
				.type = TYPE_DRAGON,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.split = SPLIT_STATUS,
				.z_move_power = 0,
				.z_move_effect = Z_EFFECT_RESET_STATS,
			},

		[MOVE_BODYPRESS] =
			{
				.effect = 0,
				.power = 80,
				.type = TYPE_FIGHTING,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 160,
				.z_move_effect = 0,
			},

		[MOVE_DECORATE] =
			{
				.effect = EFFECT_HELPING_HAND,
				.power = 0,
				.type = TYPE_FAIRY,
				.accuracy = 0,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_STATUS,
				.z_move_power = 0,
				.z_move_effect = Z_EFFECT_RESET_STATS,
			},

		[MOVE_DRUMBEATING] =
			{
				.effect = EFFECT_SPEED_DOWN_HIT,
				.power = 80,
				.type = TYPE_GRASS,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 160,
				.z_move_effect = 0,
			},

		[MOVE_SNAPTRAP] =
			{
				.effect = EFFECT_TRAP,
				.power = 35,
				.type = TYPE_GRASS,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 100,
				.z_move_effect = 0,
			},

		[MOVE_PYROBALL] =
			{
				.effect = EFFECT_BURN_HIT,
				.power = 120,
				.type = TYPE_FIRE,
				.accuracy = 90,
				.pp = 5,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 190,
				.z_move_effect = 0,
			},

		[MOVE_BEHEMOTHBLADE] =
			{
				.effect = 0,
				.power = 100,
				.type = TYPE_STEEL,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 180,
				.z_move_effect = 0,
			},

		[MOVE_BEHEMOTHBASH] =
			{
				.effect = 0,
				.power = 100,
				.type = TYPE_STEEL,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 180,
				.z_move_effect = 0,
			},

		[MOVE_AURAWHEEL] =
			{
				.effect = EFFECT_SPEED_UP_1_HIT,
				.power = 110,
				.type = TYPE_ELECTRIC,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 185,
				.z_move_effect = 0,
			},

		[MOVE_BREAKINGSWIPE] =
			{
				.effect = EFFECT_ATTACK_DOWN_HIT,
				.power = 60,
				.type = TYPE_DRAGON,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 120,
				.z_move_effect = 0,
			},

		[MOVE_BRANCHPOKE] =
			{
				.effect = 0,
				.power = 40,
				.type = TYPE_GRASS,
				.accuracy = 100,
				.pp = 40,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 100,
				.z_move_effect = 0,
			},

		[MOVE_OVERDRIVE] =
			{
				.effect = 0,
				.power = 80,
				.type = TYPE_ELECTRIC,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_SPECIAL,
				.z_move_power = 160,
				.z_move_effect = 0,
			},

		[MOVE_APPLEACID] =
			{
				.effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
				.power = 80,
				.type = TYPE_GRASS,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_SPECIAL,
				.z_move_power = 160,
				.z_move_effect = 0,
			},

		[MOVE_GRAVAPPLE] =
			{
				.effect = EFFECT_DEFENSE_DOWN_HIT,
				.power = 80,
				.type = TYPE_GRASS,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 160,
				.z_move_effect = 0,
			},

		[MOVE_SPIRITBREAK] =
			{
				.effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
				.power = 75,
				.type = TYPE_FAIRY,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 140,
				.z_move_effect = 0,
			},

		[MOVE_STRANGESTEAM] =
			{
				.effect = EFFECT_CONFUSE_HIT,
				.power = 90,
				.type = TYPE_FAIRY,
				.accuracy = 95,
				.pp = 10,
				.secondaryEffectChance = 20,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_SPECIAL,
				.z_move_power = 175,
				.z_move_effect = 0,
			},

		[MOVE_LIFEDEW] =
			{
				.effect = EFFECT_RESTORE_HP,
				.power = 0,
				.type = TYPE_WATER,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED | FLAG_TRIAGE_AFFECTED,
				.split = SPLIT_STATUS,
				.z_move_power = 0,
				.z_move_effect = Z_EFFECT_RESET_STATS,
			},

		[MOVE_OBSTRUCT] =
			{
				.effect = EFFECT_PROTECT,
				.power = 0,
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 4,
				.flags = 0,
				.split = SPLIT_STATUS,
				.z_move_power = 0,
				.z_move_effect = Z_EFFECT_DEF_UP_1,
			},

		[MOVE_FALSESURRENDER] =
			{
				.effect = 0,
				.power = 80,
				.type = TYPE_DARK,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 160,
				.z_move_effect = 0,
			},

		[MOVE_METEORASSAULT] =
			{
				.effect = EFFECT_RECHARGE,
				.power = 150,
				.type = TYPE_FIGHTING,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 200,
				.z_move_effect = 0,
			},

		[MOVE_ETERNABEAM] =
			{
				.effect = EFFECT_RECHARGE,
				.power = 160,
				.type = TYPE_DRAGON,
				.accuracy = 90,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_SPECIAL,
				.z_move_power = 200,
				.z_move_effect = 0,
			},

		[MOVE_STEELBEAM] =
			{
				.effect = 0,
				.power = 140,
				.type = TYPE_STEEL,
				.accuracy = 95,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_SPECIAL,
				.z_move_power = 200,
				.z_move_effect = 0,
			},

		[MOVE_EXPANDINGFORCE] =
			{
				.effect = EFFECT_HIT,
				.power = 80,
				.type = TYPE_PSYCHIC,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_STEELROLLER] =
			{
				.effect = EFFECT_DAMAGE_SET_TERRAIN,
				.power = 130,
				.type = TYPE_STEEL,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 195,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SCALESHOT] =
			{
				.effect = EFFECT_MULTI_HIT,
				.power = 25,
				.type = TYPE_DRAGON,
				.accuracy = 90,
				.pp = 25,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_METEORBEAM] =
			{
				.effect = EFFECT_SKULL_BASH,
				.power = 120,
				.type = TYPE_ROCK,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 190,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SHELLSIDEARM] =
			{
				.effect = EFFECT_HIT,
				.power = 90,
				.type = TYPE_POISON,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 10,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_MISTYEXPLOSION] =
			{
				.effect = EFFECT_EXPLOSION,
				.power = 100,
				.type = TYPE_FAIRY,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_FOES_AND_ALLY,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 180,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_GRASSYGLIDE] =
			{
				.effect = EFFECT_HIT,
				.power = 70,
				.type = TYPE_GRASS,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_RISINGVOLTAGE] =
			{
				.effect = EFFECT_HIT,
				.power = 70,
				.type = TYPE_ELECTRIC,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_TERRAINPULSE] =
			{
				.effect = EFFECT_HIT,
				.power = 50,
				.type = TYPE_NORMAL,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SKITTERSMACK] =
			{
				.effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
				.power = 70,
				.type = TYPE_BUG,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_BURNINGJEALOUSY] =
			{
				.effect = EFFECT_BURN_HIT,
				.power = 70,
				.type = TYPE_FIRE,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_LASHOUT] =
			{
				.effect = EFFECT_HIT,
				.power = 75,
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_POLTERGEIST] =
			{
				.effect = EFFECT_POLTERGEIST,
				.power = 110,
				.type = TYPE_GHOST,
				.accuracy = 90,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 185,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_CORROSIVEGAS] =
			{
				.effect = EFFECT_KNOCK_OFF,
				.power = 0,
				.type = TYPE_POISON,
				.accuracy = 100,
				.pp = 40,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MIRROR_MOVE_AFFECTED | FLAG_MAGIC_COAT_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = 0},

		[MOVE_COACHING] =
			{
				.effect = EFFECT_HELPING_HAND,
				.power = 0,
				.type = TYPE_FIGHTING,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_FLIPTURN] =
			{
				.effect = EFFECT_BATON_PASS,
				.power = 60,
				.type = TYPE_WATER,
				.accuracy = 100,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_TRIPLEAXEL] =
			{
				.effect = EFFECT_TRIPLE_KICK,
				.power = 20,
				.type = TYPE_ICE,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_DUALWINGBEAT] =
			{
				.effect = EFFECT_DOUBLE_HIT,
				.power = 40,
				.type = TYPE_FLYING,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SCORCHINGSANDS] =
			{
				.effect = EFFECT_BURN_HIT,
				.power = 70,
				.type = TYPE_GROUND,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_JUNGLEHEALING] =
			{
				.effect = EFFECT_RESTORE_HP,
				.power = 0,
				.type = TYPE_GRASS,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_TRIAGE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_WICKEDBLOW] =
			{
				.effect = EFFECT_HIT,
				.power = 80,
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SURGINGSTRIKES] =
			{
				.effect = EFFECT_MULTI_HIT,
				.power = 25,
				.type = TYPE_WATER,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 100,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_FREEZINGGLARE] =
			{
				.effect = EFFECT_FREEZE_HIT,
				.power = 90,
				.type = TYPE_PSYCHIC,
				.accuracy = 100,
				.pp = 10,
#ifndef FROSTBITE
				.secondaryEffectChance = 10,
#else
				.secondaryEffectChance = 20,
#endif
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_THUNDEROUSKICK] =
			{
				.effect = EFFECT_DEFENSE_DOWN_HIT,
				.power = 90,
				.type = TYPE_FIGHTING,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_FIERYWRATH] =
			{
				.effect = EFFECT_FLINCH_HIT,
				.power = 90,
				.type = TYPE_DARK,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 20,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 175,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_EERIESPELL] =
			{
				.effect = EFFECT_SPITE,
				.power = 80,
				.type = TYPE_PSYCHIC,
				.accuracy = 90,
				.pp = 15,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_THUNDERCAGE] =
			{
				.effect = EFFECT_TRAP,
				.power = 80,
				.type = TYPE_ELECTRIC,
				.accuracy = 90,
				.pp = 15,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 160,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_DRAGONENERGY] =
			{
				.effect = EFFECT_HIT,
				.power = 150,
				.type = TYPE_DRAGON,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 200,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_ASTRALBARRAGE] =
			{// ANIM TODO
			 .effect = EFFECT_HIT,
			 .power = 120,
			 .type = TYPE_GHOST,
			 .accuracy = 100,
			 .pp = 5,
			 .secondaryEffectChance = 0,
			 .target = MOVE_TARGET_BOTH,
			 .priority = 0,
			 .flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
			 .z_move_power = 190,
			 .split = SPLIT_SPECIAL,
			 .z_move_effect = 0},

		[MOVE_GLACIALLANCE] =
			{
				.effect = EFFECT_HIT,
				.power = 130,
				.type = TYPE_ICE,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 195,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_DIRECLAW] =
			{
				.effect = EFFECT_TRI_ATTACK,
				.power = 60,
				.type = TYPE_POISON,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 50,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_PSYSHIELDBASH] =
			{
				.effect = EFFECT_DEFENSE_UP_HIT,
				.power = 70,
				.type = TYPE_PSYCHIC,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_POWERSHIFT] =
			{
				.effect = EFFECT_STAT_SWAP_SPLIT,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_ATK_UP_1},

		[MOVE_STONEAXE] =
			{
				.effect = EFFECT_SPLINTER,
#ifdef ACTUAL_PLA_MOVE_POWERS
				.power = 65,
				.z_move_power = 120,
#else
				.power = 80,
				.z_move_power = 160,
#endif
				.type = TYPE_ROCK,
				.accuracy = 90,
				.pp = 15,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_MYSTICALPOWER] =
			{
				.effect = EFFECT_HIGHER_OFFENSES_DEFENSES_UP_HIT, // Atk/Sp. Atk up, or Def./Sp.Def up
				.power = 70,
				.type = TYPE_PSYCHIC,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_RAGINGFURY] =
			{
				.effect = EFFECT_RAMPAGE,
#ifdef ACTUAL_PLA_MOVE_POWERS
				.power = 90,
				.z_move_power = 175,
#else
				.power = 120, // Other rampage moves also had power reduced to 90 in PLA
				.z_move_power = 190,
#endif
				.type = TYPE_FIRE,
				.accuracy = 85,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_RANDOM,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_WAVECRASH] =
			{
				.effect = EFFECT_HIT,
				.power = 75,
				.type = TYPE_WATER,
				.accuracy = 100,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 1, //"Raises user's action speed" is said about PLA's equivalent to Priority moves
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_CHLOROBLAST] =
			{
				.effect = EFFECT_HIT, // Has the same recoil as Mind Blown and Steel Beam
#ifdef ACTUAL_PLA_MOVE_POWERS
				.power = 120,
				.z_move_power = 190,
#else
				.power = 150,
				.z_move_power = 200,
#endif
				.type = TYPE_GRASS,
				.accuracy = 95,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_MOUNTAINGALE] =
			{
				.effect = EFFECT_FLINCH_HIT,
#ifdef ACTUAL_PLA_MOVE_POWERS
				.power = 100,
				.z_move_power = 180,
#else
				.power = 110,
				.z_move_power = 185,
#endif
				.type = TYPE_ICE,
				.accuracy = 85,
				.pp = 5,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_VICTORYDANCE] =
			{
				.effect = EFFECT_BULK_UP,
				.power = 0,
				.type = TYPE_FIGHTING,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_HEADLONGRUSH] =
			{
				.effect = EFFECT_SUPERPOWER, //-Def, -Sp. Def
#ifdef ACTUAL_PLA_MOVE_POWERS
				.power = 100,
				.z_move_power = 180,
#else
				.power = 120,
				.z_move_power = 190,
#endif
				.type = TYPE_GROUND,
				.accuracy = 100,
				.pp = 5,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_BARBBARRAGE] =
			{
				.effect = EFFECT_POISON_HIT, // Also double damage on poisoned foes
#ifdef ACTUAL_PLA_MOVE_POWERS
				.power = 60,
				.z_move_power = 120,
#else
				.power = 75,
				.z_move_power = 140,
#endif
				.type = TYPE_POISON,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_ESPERWING] =
			{
				.effect = EFFECT_HIT,
				.power = 75,
				.type = TYPE_PSYCHIC,
				.accuracy = 90,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 1, //"Raises user's action speed" is said about PLA's equivalent to Priority moves
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 140,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_BITTERMALICE] =
			{
				.effect = EFFECT_FREEZE_HIT, // Also double damage on frozen foes
				.power = 60,
				.type = TYPE_GHOST,
				.accuracy = 100,
				.pp = 15,
#ifndef FROSTBITE
				.secondaryEffectChance = 20, // 30% Freeze chance is way too OP
#else
				.secondaryEffectChance = 30,
#endif
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.z_move_power = 120,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SHELTER] =
			{
				.effect = EFFECT_DEF_SPD_UP,
				.power = 0,
				.type = TYPE_STEEL,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_SPDEF_UP_1},

		[MOVE_TRIPLEARROWS] =
			{
				.effect = EFFECT_DEFENSE_DOWN_HIT, // Also raises crit chance
#ifdef ACTUAL_PLA_MOVE_POWERS
				.power = 50,
				.z_move_power = 100,
#else
				.power = 60,
				.z_move_power = 120,
#endif
				.type = TYPE_FIGHTING,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_INFERNALPARADE] =
			{
				.effect = EFFECT_BURN_HIT, // Also double damage on burned foes
#ifdef ACTUAL_PLA_MOVE_POWERS
				.power = 60,
				.z_move_power = 120,
#else
				.power = 75,
				.z_move_power = 140,
#endif
				.type = TYPE_GHOST,
				.accuracy = 100,
				.pp = 15,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_CEASELESSEDGE] =
			{
				.effect = EFFECT_SPLINTER,
#ifdef ACTUAL_PLA_MOVE_POWERS
				.power = 65,
				.z_move_power = 120,
#else
				.power = 80,
				.z_move_power = 160,
#endif
				.type = TYPE_DARK,
				.accuracy = 90,
				.pp = 15,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_MAKES_CONTACT | FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_BLEAKWINDSTORM] =
			{
				.effect = EFFECT_FREEZE_HIT,
#ifdef ACTUAL_PLA_MOVE_POWERS
				.power = 95,
				.z_move_power = 175,
#else
				.power = 105,
				.z_move_power = 180,
#endif
				.type = TYPE_FLYING,
				.accuracy = 80,
				.pp = 5,
#ifndef FROSTBITE
				.secondaryEffectChance = 20, // 30% Freeze chance is way too OP
#else
				.secondaryEffectChance = 30,
#endif
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_WILDBOLTSTORM] =
			{
				.effect = EFFECT_PARALYZE_HIT,
#ifdef ACTUAL_PLA_MOVE_POWERS
				.power = 95,
				.z_move_power = 175,
#else
				.power = 105,
				.z_move_power = 180,
#endif
				.type = TYPE_ELECTRIC,
				.accuracy = 80,
				.pp = 5,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SANDSEARSTORM] =
			{
				.effect = EFFECT_BURN_HIT,
#ifdef ACTUAL_PLA_MOVE_POWERS
				.power = 95,
				.z_move_power = 175,
#else
				.power = 105,
				.z_move_power = 180,
#endif
				.type = TYPE_GROUND,
				.accuracy = 80,
				.pp = 5,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SPRINGTIDESTORM] =
			{
				.effect = EFFECT_SPRINGTIDE_STORM, // Omniboost for Incarnate, Lower foe Sp. Def for Therian
#ifdef ACTUAL_PLA_MOVE_POWERS
				.power = 95,
				.z_move_power = 175,
#else
				.power = 105,
				.z_move_power = 180,
#endif
				.type = TYPE_FAIRY,
				.accuracy = 80,
				.pp = 5,
				.secondaryEffectChance = 30,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = FLAG_PROTECT_AFFECTED | FLAG_MIRROR_MOVE_AFFECTED,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_LUNARBLESSING] =
			{
				.effect = EFFECT_RESTORE_HP,
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_TRIAGE_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RESET_STATS},

		[MOVE_TAKEHEART] =
			{
				.effect = EFFECT_CALM_MIND, // Also heals status conditions
				.power = 0,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 20,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = FLAG_SNATCH_AFFECTED,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = Z_EFFECT_RECOVER_HP},

		// Z-Moves//
		[MOVE_BREAKNECK_BLITZ_P] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_BREAKNECK_BLITZ_S] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_ALL_OUT_PUMMELING_P] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_FIGHTING,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_ALL_OUT_PUMMELING_S] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_FIGHTING,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SUPERSONIC_SKYSTRIKE_P] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_FLYING,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SUPERSONIC_SKYSTRIKE_S] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_FLYING,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_ACID_DOWNPOUR_P] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_POISON,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_ACID_DOWNPOUR_S] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_POISON,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_TECTONIC_RAGE_P] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_GROUND,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_TECTONIC_RAGE_S] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_GROUND,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_CONTINENTAL_CRUSH_P] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_ROCK,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_CONTINENTAL_CRUSH_S] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_ROCK,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SAVAGE_SPIN_OUT_P] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_BUG,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SAVAGE_SPIN_OUT_S] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_BUG,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_NEVER_ENDING_NIGHTMARE_P] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_GHOST,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_NEVER_ENDING_NIGHTMARE_S] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_GHOST,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_CORKSCREW_CRASH_P] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_STEEL,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_CORKSCREW_CRASH_S] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_STEEL,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_INFERNO_OVERDRIVE_P] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_FIRE,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_INFERNO_OVERDRIVE_S] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_FIRE,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_HYDRO_VORTEX_P] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_WATER,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_HYDRO_VORTEX_S] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_WATER,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_BLOOM_DOOM_P] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_GRASS,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_BLOOM_DOOM_S] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_GRASS,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_GIGAVOLT_HAVOC_P] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_ELECTRIC,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_GIGAVOLT_HAVOC_S] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_ELECTRIC,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SHATTERED_PSYCHE_P] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SHATTERED_PSYCHE_S] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SUBZERO_SLAMMER_P] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_ICE,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_SUBZERO_SLAMMER_S] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_ICE,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_DEVASTATING_DRAKE_P] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_DRAGON,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_DEVASTATING_DRAKE_S] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_DRAGON,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_BLACK_HOLE_ECLIPSE_P] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_DARK,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_BLACK_HOLE_ECLIPSE_S] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_DARK,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_TWINKLE_TACKLE_P] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_FAIRY,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_TWINKLE_TACKLE_S] =
			{
				.effect = EFFECT_HIT,
				.power = 1,
				.type = TYPE_FAIRY,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_CATASTROPIKA] =
			{
				.effect = EFFECT_HIT,
				.power = 210,
				.type = TYPE_ELECTRIC,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_10000000_VOLT_THUNDERBOLT] =
			{
				.effect = EFFECT_HIGH_CRITICAL,
				.power = 195,
				.type = TYPE_ELECTRIC,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_STOKED_SPARKSURFER] =
			{
				.effect = EFFECT_PARALYZE_HIT,
				.power = 175,
				.type = TYPE_ELECTRIC,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_EXTREME_EVOBOOST] =
			{
				.effect = EFFECT_EXTREME_EVOBOOST,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_STATUS,
				.z_move_effect = 0},

		[MOVE_PULVERIZING_PANCAKE] =
			{
				.effect = EFFECT_HIT,
				.power = 210,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_GENESIS_SUPERNOVA] =
			{
				.effect = EFFECT_DAMAGE_SET_TERRAIN,
				.power = 185,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SINISTER_ARROW_RAID] =
			{
				.effect = EFFECT_HIT,
				.power = 180,
				.type = TYPE_GHOST,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_MALICIOUS_MOONSAULT] =
			{
				.effect = EFFECT_HIT,
				.power = 180,
				.type = TYPE_DARK,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_OCEANIC_OPERETTA] =
			{
				.effect = EFFECT_HIT,
				.power = 195,
				.type = TYPE_WATER,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SPLINTERED_STORMSHARDS] =
			{
				.effect = EFFECT_DAMAGE_SET_TERRAIN, //"Sets" the terrain to NONE
				.power = 190,
				.type = TYPE_ROCK,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_LETS_SNUGGLE_FOREVER] =
			{
				.effect = EFFECT_HIT,
				.power = 190,
				.type = TYPE_FAIRY,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_CLANGOROUS_SOULBLAZE] =
			{
				.effect = EFFECT_ALL_STATS_UP_HIT,
				.power = 185,
				.type = TYPE_DRAGON,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_BOTH,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_GUARDIAN_OF_ALOLA] =
			{
				.effect = EFFECT_SUPER_FANG,
				.power = 1,
				.type = TYPE_FAIRY,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SEARING_SUNRAZE_SMASH] =
			{
				.effect = EFFECT_HIT,
				.power = 200,
				.type = TYPE_STEEL,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

		[MOVE_MENACING_MOONRAZE_MAELSTROM] =
			{
				.effect = EFFECT_HIT,
				.power = 200,
				.type = TYPE_GHOST,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_LIGHT_THAT_BURNS_THE_SKY] =
			{
				.effect = EFFECT_HIT,
				.power = 200,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_SPECIAL,
				.z_move_effect = 0},

		[MOVE_SOUL_STEALING_7_STAR_STRIKE] =
			{
				.effect = EFFECT_HIT,
				.power = 195,
				.type = TYPE_GHOST,
				.accuracy = 0,
				.pp = 1,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.z_move_power = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_effect = 0},

#ifdef DYNAMAX_FEATURE
		[MOVE_MAX_GUARD] =
			{
				.effect = EFFECT_PROTECT,
				.power = 0,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_USER,
				.priority = 4,
				.flags = 0,
				.split = SPLIT_STATUS,
				.z_move_power = 0,
				.z_move_effect = 0,
			},

		[MOVE_MAX_FLARE_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_FIRE,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_SUN,
			},

		[MOVE_MAX_FLARE_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_FIRE,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_SUN,
			},

		[MOVE_MAX_FLUTTERBY_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_BUG,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_LOWER_SP_ATK,
			},

		[MOVE_MAX_FLUTTERBY_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_BUG,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_LOWER_SP_ATK,
			},

		[MOVE_MAX_LIGHTNING_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_ELECTRIC,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_ELECTRIC_TERRAIN,
			},

		[MOVE_MAX_LIGHTNING_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_ELECTRIC,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_ELECTRIC_TERRAIN,
			},

		[MOVE_MAX_STRIKE_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_LOWER_SPEED,
			},

		[MOVE_MAX_STRIKE_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_LOWER_SPEED,
			},

		[MOVE_MAX_KNUCKLE_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_FIGHTING,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_RAISE_TEAM_ATTACK,
			},

		[MOVE_MAX_KNUCKLE_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_FIGHTING,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_RAISE_TEAM_ATTACK,
			},

		[MOVE_MAX_PHANTASM_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_GHOST,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_LOWER_DEFENSE,
			},

		[MOVE_MAX_PHANTASM_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_GHOST,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_LOWER_DEFENSE,
			},

		[MOVE_MAX_HAILSTORM_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_ICE,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_HAIL,
			},

		[MOVE_MAX_HAILSTORM_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_ICE,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_HAIL,
			},

		[MOVE_MAX_OOZE_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_POISON,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_RAISE_TEAM_SP_ATK,
			},

		[MOVE_MAX_OOZE_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_POISON,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_RAISE_TEAM_SP_ATK,
			},

		[MOVE_MAX_GEYSER_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_WATER,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_RAIN,
			},

		[MOVE_MAX_GEYSER_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_WATER,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_RAIN,
			},

		[MOVE_MAX_AIRSTREAM_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_FLYING,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_RAISE_TEAM_SPEED,
			},

		[MOVE_MAX_AIRSTREAM_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_FLYING,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_RAISE_TEAM_SPEED,
			},

		[MOVE_MAX_STARFALL_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_FAIRY,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_MISTY_TERRAIN,
			},

		[MOVE_MAX_STARFALL_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_FAIRY,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_MISTY_TERRAIN,
			},

		[MOVE_MAX_WYRMWIND_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_DRAGON,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_LOWER_ATTACK,
			},

		[MOVE_MAX_WYRMWIND_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_DRAGON,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_LOWER_ATTACK,
			},

		[MOVE_MAX_MINDSTORM_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_PSYCHIC_TERRAIN,
			},

		[MOVE_MAX_MINDSTORM_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_PSYCHIC_TERRAIN,
			},

		[MOVE_MAX_ROCKFALL_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_ROCK,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_SANDSTORM,
			},

		[MOVE_MAX_ROCKFALL_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_ROCK,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_SANDSTORM,
			},

		[MOVE_MAX_QUAKE_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_GROUND,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_RAISE_TEAM_SP_DEF,
			},

		[MOVE_MAX_QUAKE_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_GROUND,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_RAISE_TEAM_SP_DEF,
			},

		[MOVE_MAX_DARKNESS_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_DARK,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_LOWER_SP_DEF,
			},

		[MOVE_MAX_DARKNESS_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 1,
				.type = TYPE_DARK,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 100,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_LOWER_SP_DEF,
			},

		[MOVE_MAX_OVERGROWTH_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_GRASS,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_GRASSY_TERRAIN,
			},

		[MOVE_MAX_OVERGROWTH_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_GRASS,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_GRASSY_TERRAIN,
			},

		[MOVE_MAX_STEELSPIKE_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_STEEL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_RAISE_TEAM_DEFENSE,
			},

		[MOVE_MAX_STEELSPIKE_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_STEEL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_RAISE_TEAM_DEFENSE,
			},

		[MOVE_G_MAX_VINE_LASH_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_GRASS,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_VINE_LASH,
			},

		[MOVE_G_MAX_VINE_LASH_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_GRASS,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_VINE_LASH,
			},

		[MOVE_G_MAX_WILDFIRE_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_FIRE,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_WILDFIRE,
			},

		[MOVE_G_MAX_WILDFIRE_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_FIRE,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_WILDFIRE,
			},

		[MOVE_G_MAX_CANNONADE_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_WATER,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_CANNONADE,
			},

		[MOVE_G_MAX_CANNONADE_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_WATER,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_CANNONADE,
			},

		[MOVE_G_MAX_BEFUDDLE_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_BUG,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_EFFECT_SPORE_FOES,
			},

		[MOVE_G_MAX_BEFUDDLE_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_BUG,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_EFFECT_SPORE_FOES,
			},

		[MOVE_G_MAX_VOLT_CRASH_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_ELECTRIC,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_PARALYZE_FOES,
			},

		[MOVE_G_MAX_VOLT_CRASH_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_ELECTRIC,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_PARALYZE_FOES,
			},

		[MOVE_G_MAX_GOLD_RUSH_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_CONFUSE_FOES_PAY_DAY,
			},

		[MOVE_G_MAX_GOLD_RUSH_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 100,
				.z_move_effect = MAX_EFFECT_CONFUSE_FOES_PAY_DAY,
			},

		[MOVE_G_MAX_CHI_STRIKE_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_FIGHTING,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_CRIT_PLUS,
			},

		[MOVE_G_MAX_CHI_STRIKE_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_FIGHTING,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_CRIT_PLUS,
			},

		[MOVE_G_MAX_TERROR_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_GHOST,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_MEAN_LOOK,
			},

		[MOVE_G_MAX_TERROR_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_GHOST,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_MEAN_LOOK,
			},

		[MOVE_G_MAX_FOAM_BURST_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_WATER,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_LOWER_SPEED_2_FOES,
			},

		[MOVE_G_MAX_FOAM_BURST_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_WATER,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_LOWER_SPEED_2_FOES,
			},

		[MOVE_G_MAX_RESONANCE_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_ICE,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_AURORA_VEIL,
			},

		[MOVE_G_MAX_RESONANCE_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_ICE,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_AURORA_VEIL,
			},

		[MOVE_G_MAX_CUDDLE_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_INFATUATE_FOES,
			},

		[MOVE_G_MAX_CUDDLE_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_INFATUATE_FOES,
			},

		[MOVE_G_MAX_REPLENISH_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_RECYCLE_BERRIES,
			},

		[MOVE_G_MAX_REPLENISH_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_NORMAL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_RECYCLE_BERRIES,
			},

		[MOVE_G_MAX_MALODOR_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_POISON,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_POISON_FOES,
			},

		[MOVE_G_MAX_MALODOR_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_POISON,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_POISON_FOES,
			},

		[MOVE_G_MAX_MELTDOWN_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_STEEL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_TORMENT_FOES,
			},

		[MOVE_G_MAX_MELTDOWN_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_STEEL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_TORMENT_FOES,
			},

		[MOVE_G_MAX_DRUM_SOLO_P] =
			{
				// ANIM TODO
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_GRASS,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_IGNORE_ABILITY,
			},

		[MOVE_G_MAX_DRUM_SOLO_S] =
			{
				// ANIM TODO
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_GRASS,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_IGNORE_ABILITY,
			},

		[MOVE_G_MAX_FIREBALL_P] =
			{
				// ANIM TODO
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_FIRE,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_IGNORE_ABILITY,
			},

		[MOVE_G_MAX_FIREBALL_S] =
			{
				// ANIM TODO
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_FIRE,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_IGNORE_ABILITY,
			},

		[MOVE_G_MAX_HYDROSNIPE_P] =
			{
				// ANIM TODO
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_WATER,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_IGNORE_ABILITY,
			},

		[MOVE_G_MAX_HYDROSNIPE_S] =
			{
				// ANIM TODO
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_WATER,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_IGNORE_ABILITY,
			},

		[MOVE_G_MAX_WIND_RAGE_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_FLYING,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_DEFOG,
			},

		[MOVE_G_MAX_WIND_RAGE_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_FLYING,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_DEFOG,
			},

		[MOVE_G_MAX_GRAVITAS_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_GRAVITY,
			},

		[MOVE_G_MAX_GRAVITAS_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_PSYCHIC,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_GRAVITY,
			},

		[MOVE_G_MAX_STONESURGE_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_WATER,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_STEALTH_ROCK,
			},

		[MOVE_G_MAX_STONESURGE_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_WATER,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_STEALTH_ROCK,
			},

		[MOVE_G_MAX_VOLCALITH_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_ROCK,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_VOLCAITH_FOES,
			},

		[MOVE_G_MAX_VOLCALITH_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_ROCK,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_VOLCAITH_FOES,
			},

		[MOVE_G_MAX_TARTNESS_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_GRASS,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_LOWER_EVASIVENESS_FOES,
			},

		[MOVE_G_MAX_TARTNESS_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_GRASS,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_LOWER_EVASIVENESS_FOES,
			},

		[MOVE_G_MAX_SWEETNESS_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_GRASS,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_AROMATHERAPY,
			},

		[MOVE_G_MAX_SWEETNESS_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_GRASS,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_AROMATHERAPY,
			},

		[MOVE_G_MAX_SANDBLAST_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_GROUND,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_SANDBLAST_FOES,
			},

		[MOVE_G_MAX_SANDBLAST_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_GROUND,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_SANDBLAST_FOES,
			},

		[MOVE_G_MAX_STUN_SHOCK_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_ELECTRIC,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_POISON_PARALYZE_FOES,
			},

		[MOVE_G_MAX_STUN_SHOCK_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_ELECTRIC,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_POISON_PARALYZE_FOES,
			},

		[MOVE_G_MAX_CENTIFERNO_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_FIRE,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_FIRE_SPIN_FOES,
			},

		[MOVE_G_MAX_CENTIFERNO_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_FIRE,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_FIRE_SPIN_FOES,
			},

		[MOVE_G_MAX_SMITE_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_FAIRY,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_CONFUSE_FOES,
			},

		[MOVE_G_MAX_SMITE_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_FAIRY,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_CONFUSE_FOES,
			},

		[MOVE_G_MAX_SNOOZE_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_DARK,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_YAWN_FOE,
			},

		[MOVE_G_MAX_SNOOZE_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_DARK,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_YAWN_FOE,
			},

		[MOVE_G_MAX_FINALE_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_FAIRY,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_HEAL_TEAM,
			},

		[MOVE_G_MAX_FINALE_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_FAIRY,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_HEAL_TEAM,
			},

		[MOVE_G_MAX_STEELSURGE_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_STEEL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_STEELSURGE,
			},

		[MOVE_G_MAX_STEELSURGE_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_STEEL,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_STEELSURGE,
			},

		[MOVE_G_MAX_DEPLETION_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_DRAGON,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_SPITE,
			},

		[MOVE_G_MAX_DEPLETION_S] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_DRAGON,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_SPITE,
			},

		[MOVE_G_MAX_ONE_BLOW_P] =
			{
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_DARK,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_BYPASS_PROTECT,
			},

		[MOVE_G_MAX_ONE_BLOW_S] =
			{
				// ANIM TODO
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_DARK,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_BYPASS_PROTECT,
			},

		[MOVE_G_MAX_RAPID_FLOW_P] =
			{
				// ANIM TODO
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_WATER,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_PHYSICAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_BYPASS_PROTECT,
			},

		[MOVE_G_MAX_RAPID_FLOW_S] =
			{
				// ANIM TODO
				.effect = EFFECT_MAX_MOVE,
				.power = 10,
				.type = TYPE_WATER,
				.accuracy = 0,
				.pp = 10,
				.secondaryEffectChance = 0,
				.target = MOVE_TARGET_SELECTED,
				.priority = 0,
				.flags = 0,
				.split = SPLIT_SPECIAL,
				.z_move_power = 0,
				.z_move_effect = MAX_EFFECT_BYPASS_PROTECT,
			}
#endif
};
#pragma endregion battlemoves

void structPrinter(FILE *file, int moveindex, char *movename, struct BattleMove moveinfo, int commaFlag)
{
	fprintf(file, "\"%s\" : {\
\t\"target\": \"%s\",\
\t\"type\": \"%s\",\
\t\"split\": \"%s\",\
\t\"flags\": %d,\
\t\"z_move_effect\": %d,\
\t\"effect\": %d,\
\t\"power\": %d,\
\t\"accuracy\": %d,\
\t\"pp\": %d,\
\t\"secondaryEffectChance\": %d,\
\t\"priority\": %d,\
\t\"z_move_power\": %d\
}",
			movename,
			moveinfo.target,
			moveinfo.type,
			moveinfo.split,
			moveinfo.flags,
			moveinfo.z_move_effect,
			moveinfo.effect,
			moveinfo.power,
			moveinfo.accuracy,
			moveinfo.pp,
			moveinfo.secondaryEffectChance,
			moveinfo.priority,
			moveinfo.z_move_power);
	if (commaFlag == 1)
		fprintf(file, ",\n");

	fflush(file);
}

int main()
{
#pragma region movename

	char **movename_mapping = malloc(923 * sizeof(char *));
	movename_mapping[MOVE_NONE] = strdup("None");
	movename_mapping[MOVE_POUND] = strdup("Pound");
	movename_mapping[MOVE_KARATECHOP] = strdup("Karate Chop");
	movename_mapping[MOVE_DOUBLESLAP] = strdup("Double Slap");
	movename_mapping[MOVE_COMETPUNCH] = strdup("Comet Punch");
	movename_mapping[MOVE_MEGAPUNCH] = strdup("Mega Punch");
	movename_mapping[MOVE_PAYDAY] = strdup("Pay Day");
	movename_mapping[MOVE_FIREPUNCH] = strdup("Fire Punch");
	movename_mapping[MOVE_ICEPUNCH] = strdup("Ice Punch");
	movename_mapping[MOVE_THUNDERPUNCH] = strdup("Thunder Punch");
	movename_mapping[MOVE_SCRATCH] = strdup("Scratch");
	movename_mapping[MOVE_VICEGRIP] = strdup("Vice Grip");
	movename_mapping[MOVE_GUILLOTINE] = strdup("Guillotine");
	movename_mapping[MOVE_RAZORWIND] = strdup("Razor Wind");
	movename_mapping[MOVE_SWORDSDANCE] = strdup("Swords Dance");
	movename_mapping[MOVE_CUT] = strdup("Cut");
	movename_mapping[MOVE_GUST] = strdup("Gust");
	movename_mapping[MOVE_WINGATTACK] = strdup("Wing Attack");
	movename_mapping[MOVE_WHIRLWIND] = strdup("Whirlwind");
	movename_mapping[MOVE_FLY] = strdup("Fly");
	movename_mapping[MOVE_BIND] = strdup("Bind");
	movename_mapping[MOVE_SLAM] = strdup("Slam");
	movename_mapping[MOVE_VINEWHIP] = strdup("Vine Whip");
	movename_mapping[MOVE_STOMP] = strdup("Stomp");
	movename_mapping[MOVE_DOUBLEKICK] = strdup("Double Kick");
	movename_mapping[MOVE_MEGAKICK] = strdup("Mega Kick");
	movename_mapping[MOVE_JUMPKICK] = strdup("Jump Kick");
	movename_mapping[MOVE_ROLLINGKICK] = strdup("Rolling Kick");
	movename_mapping[MOVE_SANDATTACK] = strdup("Sand Attack");
	movename_mapping[MOVE_HEADBUTT] = strdup("Headbutt");
	movename_mapping[MOVE_HORNATTACK] = strdup("Horn Attack");
	movename_mapping[MOVE_FURYATTACK] = strdup("Fury Attack");
	movename_mapping[MOVE_HORNDRILL] = strdup("Horn Drill");
	movename_mapping[MOVE_TACKLE] = strdup("Tackle");
	movename_mapping[MOVE_BODYSLAM] = strdup("Body Slam");
	movename_mapping[MOVE_WRAP] = strdup("Wrap");
	movename_mapping[MOVE_TAKEDOWN] = strdup("Take Down");
	movename_mapping[MOVE_THRASH] = strdup("Thrash");
	movename_mapping[MOVE_DOUBLEEDGE] = strdup("Double-Edge");
	movename_mapping[MOVE_TAILWHIP] = strdup("Tail Whip");
	movename_mapping[MOVE_POISONSTING] = strdup("Poison Sting");
	movename_mapping[MOVE_TWINEEDLE] = strdup("Twineedle");
	movename_mapping[MOVE_PINMISSILE] = strdup("Pin Missile");
	movename_mapping[MOVE_LEER] = strdup("Leer");
	movename_mapping[MOVE_BITE] = strdup("Bite");
	movename_mapping[MOVE_GROWL] = strdup("Growl");
	movename_mapping[MOVE_ROAR] = strdup("Roar");
	movename_mapping[MOVE_SING] = strdup("Sing");
	movename_mapping[MOVE_SUPERSONIC] = strdup("Supersonic");
	movename_mapping[MOVE_SONICBOOM] = strdup("Sonic Boom");
	movename_mapping[MOVE_DISABLE] = strdup("Disable");
	movename_mapping[MOVE_ACID] = strdup("Acid");
	movename_mapping[MOVE_EMBER] = strdup("Ember");
	movename_mapping[MOVE_FLAMETHROWER] = strdup("Flamethrower");
	movename_mapping[MOVE_MIST] = strdup("Mist");
	movename_mapping[MOVE_WATERGUN] = strdup("Water Gun");
	movename_mapping[MOVE_HYDROPUMP] = strdup("Hydro Pump");
	movename_mapping[MOVE_SURF] = strdup("Surf");
	movename_mapping[MOVE_ICEBEAM] = strdup("Ice Beam");
	movename_mapping[MOVE_BLIZZARD] = strdup("Blizzard");
	movename_mapping[MOVE_PSYBEAM] = strdup("Psybeam");
	movename_mapping[MOVE_BUBBLEBEAM] = strdup("Bubble Beam");
	movename_mapping[MOVE_AURORABEAM] = strdup("Aurora Beam");
	movename_mapping[MOVE_HYPERBEAM] = strdup("Hyper Beam");
	movename_mapping[MOVE_PECK] = strdup("Peck");
	movename_mapping[MOVE_DRILLPECK] = strdup("Drill Peck");
	movename_mapping[MOVE_SUBMISSION] = strdup("Submission");
	movename_mapping[MOVE_LOWKICK] = strdup("Low Kick");
	movename_mapping[MOVE_COUNTER] = strdup("Counter");
	movename_mapping[MOVE_SEISMICTOSS] = strdup("Seismic Toss");
	movename_mapping[MOVE_STRENGTH] = strdup("Strength");
	movename_mapping[MOVE_ABSORB] = strdup("Absorb");
	movename_mapping[MOVE_MEGADRAIN] = strdup("Mega Drain");
	movename_mapping[MOVE_LEECHSEED] = strdup("Leech Seed");
	movename_mapping[MOVE_GROWTH] = strdup("Growth");
	movename_mapping[MOVE_RAZORLEAF] = strdup("Razor Leaf");
	movename_mapping[MOVE_SOLARBEAM] = strdup("Solar Beam");
	movename_mapping[MOVE_POISONPOWDER] = strdup("Poison Powder");
	movename_mapping[MOVE_STUNSPORE] = strdup("Stun Spore");
	movename_mapping[MOVE_SLEEPPOWDER] = strdup("Sleep Powder");
	movename_mapping[MOVE_PETALDANCE] = strdup("Petal Dance");
	movename_mapping[MOVE_STRINGSHOT] = strdup("String Shot");
	movename_mapping[MOVE_DRAGONRAGE] = strdup("Dragon Rage");
	movename_mapping[MOVE_FIRESPIN] = strdup("Fire Spin");
	movename_mapping[MOVE_THUNDERSHOCK] = strdup("Thunder Shock");
	movename_mapping[MOVE_THUNDERBOLT] = strdup("Thunderbolt");
	movename_mapping[MOVE_THUNDERWAVE] = strdup("Thunder Wave");
	movename_mapping[MOVE_THUNDER] = strdup("Thunder");
	movename_mapping[MOVE_ROCKTHROW] = strdup("Rock Throw");
	movename_mapping[MOVE_EARTHQUAKE] = strdup("Earthquake");
	movename_mapping[MOVE_FISSURE] = strdup("Fissure");
	movename_mapping[MOVE_DIG] = strdup("Dig");
	movename_mapping[MOVE_TOXIC] = strdup("Toxic");
	movename_mapping[MOVE_CONFUSION] = strdup("Confusion");
	movename_mapping[MOVE_PSYCHIC] = strdup("Psychic");
	movename_mapping[MOVE_HYPNOSIS] = strdup("Hypnosis");
	movename_mapping[MOVE_MEDITATE] = strdup("Meditate");
	movename_mapping[MOVE_AGILITY] = strdup("Agility");
	movename_mapping[MOVE_QUICKATTACK] = strdup("Quick Attack");
	movename_mapping[MOVE_RAGE] = strdup("Rage");
	movename_mapping[MOVE_TELEPORT] = strdup("Teleport");
	movename_mapping[MOVE_NIGHTSHADE] = strdup("Night Shade");
	movename_mapping[MOVE_MIMIC] = strdup("Mimic");
	movename_mapping[MOVE_SCREECH] = strdup("Screech");
	movename_mapping[MOVE_DOUBLETEAM] = strdup("Double Team");
	movename_mapping[MOVE_RECOVER] = strdup("Recover");
	movename_mapping[MOVE_HARDEN] = strdup("Harden");
	movename_mapping[MOVE_MINIMIZE] = strdup("Minimize");
	movename_mapping[MOVE_SMOKESCREEN] = strdup("Smokescreen");
	movename_mapping[MOVE_CONFUSERAY] = strdup("Confuse Ray");
	movename_mapping[MOVE_WITHDRAW] = strdup("Withdraw");
	movename_mapping[MOVE_DEFENSECURL] = strdup("Defense Curl");
	movename_mapping[MOVE_BARRIER] = strdup("Barrier");
	movename_mapping[MOVE_LIGHTSCREEN] = strdup("Light Screen");
	movename_mapping[MOVE_HAZE] = strdup("Haze");
	movename_mapping[MOVE_REFLECT] = strdup("Reflect");
	movename_mapping[MOVE_FOCUSENERGY] = strdup("Focus Energy");
	movename_mapping[MOVE_BIDE] = strdup("Bide");
	movename_mapping[MOVE_METRONOME] = strdup("Metronome");
	movename_mapping[MOVE_MIRRORMOVE] = strdup("Mirror Move");
	movename_mapping[MOVE_SELFDESTRUCT] = strdup("Self-Destruct");
	movename_mapping[MOVE_EGGBOMB] = strdup("Egg Bomb");
	movename_mapping[MOVE_LICK] = strdup("Lick");
	movename_mapping[MOVE_SMOG] = strdup("Smog");
	movename_mapping[MOVE_SLUDGE] = strdup("Sludge");
	movename_mapping[MOVE_BONECLUB] = strdup("Bone Club");
	movename_mapping[MOVE_FIREBLAST] = strdup("Fire Blast");
	movename_mapping[MOVE_WATERFALL] = strdup("Waterfall");
	movename_mapping[MOVE_CLAMP] = strdup("Clamp");
	movename_mapping[MOVE_SWIFT] = strdup("Swift");
	movename_mapping[MOVE_SKULLBASH] = strdup("Skull Bash");
	movename_mapping[MOVE_SPIKECANNON] = strdup("Spike Cannon");
	movename_mapping[MOVE_CONSTRICT] = strdup("Constrict");
	movename_mapping[MOVE_AMNESIA] = strdup("Amnesia");
	movename_mapping[MOVE_KINESIS] = strdup("Kinesis");
	movename_mapping[MOVE_SOFTBOILED] = strdup("Soft-Boiled");
	movename_mapping[MOVE_HIGHJUMPKICK] = strdup("High Jump Kick");
	movename_mapping[MOVE_GLARE] = strdup("Glare");
	movename_mapping[MOVE_DREAMEATER] = strdup("Dream Eater");
	movename_mapping[MOVE_POISONGAS] = strdup("Poison Gas");
	movename_mapping[MOVE_BARRAGE] = strdup("Barrage");
	movename_mapping[MOVE_LEECHLIFE] = strdup("Leech Life");
	movename_mapping[MOVE_LOVELYKISS] = strdup("Lovely Kiss");
	movename_mapping[MOVE_SKYATTACK] = strdup("Sky Attack");
	movename_mapping[MOVE_TRANSFORM] = strdup("Transform");
	movename_mapping[MOVE_BUBBLE] = strdup("Bubble");
	movename_mapping[MOVE_DIZZYPUNCH] = strdup("Dizzy Punch");
	movename_mapping[MOVE_SPORE] = strdup("Spore");
	movename_mapping[MOVE_FLASH] = strdup("Flash");
	movename_mapping[MOVE_PSYWAVE] = strdup("Psywave");
	movename_mapping[MOVE_SPLASH] = strdup("Splash");
	movename_mapping[MOVE_ACIDARMOR] = strdup("Acid Armor");
	movename_mapping[MOVE_CRABHAMMER] = strdup("Crabhammer");
	movename_mapping[MOVE_EXPLOSION] = strdup("Explosion");
	movename_mapping[MOVE_FURYSWIPES] = strdup("Fury Swipes");
	movename_mapping[MOVE_BONEMERANG] = strdup("Bonemerang");
	movename_mapping[MOVE_REST] = strdup("Rest");
	movename_mapping[MOVE_ROCKSLIDE] = strdup("Rock Slide");
	movename_mapping[MOVE_HYPERFANG] = strdup("Hyper Fang");
	movename_mapping[MOVE_SHARPEN] = strdup("Sharpen");
	movename_mapping[MOVE_CONVERSION] = strdup("Conversion");
	movename_mapping[MOVE_TRIATTACK] = strdup("Tri Attack");
	movename_mapping[MOVE_SUPERFANG] = strdup("Super Fang");
	movename_mapping[MOVE_SLASH] = strdup("Slash");
	movename_mapping[MOVE_SUBSTITUTE] = strdup("Substitute");
	movename_mapping[MOVE_STRUGGLE] = strdup("Struggle");
	movename_mapping[MOVE_SKETCH] = strdup("Sketch");
	movename_mapping[MOVE_TRIPLEKICK] = strdup("Triple Kick");
	movename_mapping[MOVE_THIEF] = strdup("Thief");
	movename_mapping[MOVE_SPIDERWEB] = strdup("Spider Web");
	movename_mapping[MOVE_MINDREADER] = strdup("Mind Reader");
	movename_mapping[MOVE_NIGHTMARE] = strdup("Nightmare");
	movename_mapping[MOVE_FLAMEWHEEL] = strdup("Flame Wheel");
	movename_mapping[MOVE_SNORE] = strdup("Snore");
	movename_mapping[MOVE_CURSE] = strdup("Curse");
	movename_mapping[MOVE_FLAIL] = strdup("Flail");
	movename_mapping[MOVE_CONVERSION2] = strdup("Conversion 2");
	movename_mapping[MOVE_AEROBLAST] = strdup("Aeroblast");
	movename_mapping[MOVE_COTTONSPORE] = strdup("Cotton Spore");
	movename_mapping[MOVE_REVERSAL] = strdup("Reversal");
	movename_mapping[MOVE_SPITE] = strdup("Spite");
	movename_mapping[MOVE_POWDERSNOW] = strdup("Powder Snow");
	movename_mapping[MOVE_PROTECT] = strdup("Protect");
	movename_mapping[MOVE_MACHPUNCH] = strdup("Mach Punch");
	movename_mapping[MOVE_SCARYFACE] = strdup("Scary Face");
	movename_mapping[MOVE_FEINTATTACK] = strdup("Feint Attack");
	movename_mapping[MOVE_SWEETKISS] = strdup("Sweet Kiss");
	movename_mapping[MOVE_BELLYDRUM] = strdup("Belly Drum");
	movename_mapping[MOVE_SLUDGEBOMB] = strdup("Sludge Bomb");
	movename_mapping[MOVE_MUDSLAP] = strdup("Mud-Slap");
	movename_mapping[MOVE_OCTAZOOKA] = strdup("Octazooka");
	movename_mapping[MOVE_SPIKES] = strdup("Spikes");
	movename_mapping[MOVE_ZAPCANNON] = strdup("Zap Cannon");
	movename_mapping[MOVE_FORESIGHT] = strdup("Foresight");
	movename_mapping[MOVE_DESTINYBOND] = strdup("Destiny Bond");
	movename_mapping[MOVE_PERISHSONG] = strdup("Perish Song");
	movename_mapping[MOVE_ICYWIND] = strdup("Icy Wind");
	movename_mapping[MOVE_DETECT] = strdup("Detect");
	movename_mapping[MOVE_BONERUSH] = strdup("Bone Rush");
	movename_mapping[MOVE_LOCKON] = strdup("Lock-On");
	movename_mapping[MOVE_OUTRAGE] = strdup("Outrage");
	movename_mapping[MOVE_SANDSTORM] = strdup("Sandstorm");
	movename_mapping[MOVE_GIGADRAIN] = strdup("Giga Drain");
	movename_mapping[MOVE_ENDURE] = strdup("Endure");
	movename_mapping[MOVE_CHARM] = strdup("Charm");
	movename_mapping[MOVE_ROLLOUT] = strdup("Rollout");
	movename_mapping[MOVE_FALSESWIPE] = strdup("False Swipe");
	movename_mapping[MOVE_SWAGGER] = strdup("Swagger");
	movename_mapping[MOVE_MILKDRINK] = strdup("Milk Drink");
	movename_mapping[MOVE_SPARK] = strdup("Spark");
	movename_mapping[MOVE_FURYCUTTER] = strdup("Fury Cutter");
	movename_mapping[MOVE_STEELWING] = strdup("Steel Wing");
	movename_mapping[MOVE_MEANLOOK] = strdup("Mean Look");
	movename_mapping[MOVE_ATTRACT] = strdup("Attract");
	movename_mapping[MOVE_SLEEPTALK] = strdup("Sleep Talk");
	movename_mapping[MOVE_HEALBELL] = strdup("Heal Bell");
	movename_mapping[MOVE_RETURN] = strdup("Return");
	movename_mapping[MOVE_PRESENT] = strdup("Present");
	movename_mapping[MOVE_FRUSTRATION] = strdup("Frustration");
	movename_mapping[MOVE_SAFEGUARD] = strdup("Safeguard");
	movename_mapping[MOVE_PAINSPLIT] = strdup("Pain Split");
	movename_mapping[MOVE_SACREDFIRE] = strdup("Sacred Fire");
	movename_mapping[MOVE_MAGNITUDE] = strdup("Magnitude");
	movename_mapping[MOVE_DYNAMICPUNCH] = strdup("Dynamic Punch");
	movename_mapping[MOVE_MEGAHORN] = strdup("Megahorn");
	movename_mapping[MOVE_DRAGONBREATH] = strdup("Dragon Breath");
	movename_mapping[MOVE_BATONPASS] = strdup("Baton Pass");
	movename_mapping[MOVE_ENCORE] = strdup("Encore");
	movename_mapping[MOVE_PURSUIT] = strdup("Pursuit");
	movename_mapping[MOVE_RAPIDSPIN] = strdup("Rapid Spin");
	movename_mapping[MOVE_SWEETSCENT] = strdup("Sweet Scent");
	movename_mapping[MOVE_IRONTAIL] = strdup("Iron Tail");
	movename_mapping[MOVE_METALCLAW] = strdup("Metal Claw");
	movename_mapping[MOVE_VITALTHROW] = strdup("Vital Throw");
	movename_mapping[MOVE_MORNINGSUN] = strdup("Morning Sun");
	movename_mapping[MOVE_SYNTHESIS] = strdup("Synthesis");
	movename_mapping[MOVE_MOONLIGHT] = strdup("Moonlight");
	movename_mapping[MOVE_HIDDENPOWER] = strdup("Hidden Power");
	movename_mapping[MOVE_CROSSCHOP] = strdup("Cross Chop");
	movename_mapping[MOVE_TWISTER] = strdup("Twister");
	movename_mapping[MOVE_RAINDANCE] = strdup("Rain Dance");
	movename_mapping[MOVE_SUNNYDAY] = strdup("Sunny Day");
	movename_mapping[MOVE_CRUNCH] = strdup("Crunch");
	movename_mapping[MOVE_MIRRORCOAT] = strdup("Mirror Coat");
	movename_mapping[MOVE_PSYCHUP] = strdup("Psych Up");
	movename_mapping[MOVE_EXTREMESPEED] = strdup("Extreme Speed");
	movename_mapping[MOVE_ANCIENTPOWER] = strdup("Ancient Power");
	movename_mapping[MOVE_SHADOWBALL] = strdup("Shadow Ball");
	movename_mapping[MOVE_FUTURESIGHT] = strdup("Future Sight");
	movename_mapping[MOVE_ROCKSMASH] = strdup("Rock Smash");
	movename_mapping[MOVE_WHIRLPOOL] = strdup("Whirlpool");
	movename_mapping[MOVE_BEATUP] = strdup("Beat Up");
	movename_mapping[MOVE_FAKEOUT] = strdup("Fake Out");
	movename_mapping[MOVE_UPROAR] = strdup("Uproar");
	movename_mapping[MOVE_STOCKPILE] = strdup("Stockpile");
	movename_mapping[MOVE_SPITUP] = strdup("Spit Up");
	movename_mapping[MOVE_SWALLOW] = strdup("Swallow");
	movename_mapping[MOVE_HEATWAVE] = strdup("Heat Wave");
	movename_mapping[MOVE_HAIL] = strdup("Hail");
	movename_mapping[MOVE_TORMENT] = strdup("Torment");
	movename_mapping[MOVE_FLATTER] = strdup("Flatter");
	movename_mapping[MOVE_WILLOWISP] = strdup("Will-O-Wisp");
	movename_mapping[MOVE_MEMENTO] = strdup("Memento");
	movename_mapping[MOVE_FACADE] = strdup("Facade");
	movename_mapping[MOVE_FOCUSPUNCH] = strdup("Focus Punch");
	movename_mapping[MOVE_SMELLINGSALTS] = strdup("Smelling Salts");
	movename_mapping[MOVE_FOLLOWME] = strdup("Follow Me");
	movename_mapping[MOVE_NATUREPOWER] = strdup("Nature Power");
	movename_mapping[MOVE_CHARGE] = strdup("Charge");
	movename_mapping[MOVE_TAUNT] = strdup("Taunt");
	movename_mapping[MOVE_HELPINGHAND] = strdup("Helping Hand");
	movename_mapping[MOVE_TRICK] = strdup("Trick");
	movename_mapping[MOVE_ROLEPLAY] = strdup("Role Play");
	movename_mapping[MOVE_WISH] = strdup("Wish");
	movename_mapping[MOVE_ASSIST] = strdup("Assist");
	movename_mapping[MOVE_INGRAIN] = strdup("Ingrain");
	movename_mapping[MOVE_SUPERPOWER] = strdup("Superpower");
	movename_mapping[MOVE_MAGICCOAT] = strdup("Magic Coat");
	movename_mapping[MOVE_RECYCLE] = strdup("Recycle");
	movename_mapping[MOVE_REVENGE] = strdup("Revenge");
	movename_mapping[MOVE_BRICKBREAK] = strdup("Brick Break");
	movename_mapping[MOVE_YAWN] = strdup("Yawn");
	movename_mapping[MOVE_KNOCKOFF] = strdup("Knock Off");
	movename_mapping[MOVE_ENDEAVOR] = strdup("Endeavor");
	movename_mapping[MOVE_ERUPTION] = strdup("Eruption");
	movename_mapping[MOVE_SKILLSWAP] = strdup("Skill Swap");
	movename_mapping[MOVE_IMPRISON] = strdup("Imprison");
	movename_mapping[MOVE_REFRESH] = strdup("Refresh");
	movename_mapping[MOVE_GRUDGE] = strdup("Grudge");
	movename_mapping[MOVE_SNATCH] = strdup("Snatch");
	movename_mapping[MOVE_SECRETPOWER] = strdup("Secret Power");
	movename_mapping[MOVE_DIVE] = strdup("Dive");
	movename_mapping[MOVE_ARMTHRUST] = strdup("Arm Thrust");
	movename_mapping[MOVE_CAMOUFLAGE] = strdup("Camouflage");
	movename_mapping[MOVE_TAILGLOW] = strdup("Tail Glow");
	movename_mapping[MOVE_LUSTERPURGE] = strdup("Luster Purge");
	movename_mapping[MOVE_MISTBALL] = strdup("Mist Ball");
	movename_mapping[MOVE_FEATHERDANCE] = strdup("Feather Dance");
	movename_mapping[MOVE_TEETERDANCE] = strdup("Teeter Dance");
	movename_mapping[MOVE_BLAZEKICK] = strdup("Blaze Kick");
	movename_mapping[MOVE_MUDSPORT] = strdup("Mud Sport");
	movename_mapping[MOVE_ICEBALL] = strdup("Ice Ball");
	movename_mapping[MOVE_NEEDLEARM] = strdup("Needle Arm");
	movename_mapping[MOVE_SLACKOFF] = strdup("Slack Off");
	movename_mapping[MOVE_HYPERVOICE] = strdup("Hyper Voice");
	movename_mapping[MOVE_POISONFANG] = strdup("Poison Fang");
	movename_mapping[MOVE_CRUSHCLAW] = strdup("Crush Claw");
	movename_mapping[MOVE_BLASTBURN] = strdup("Blast Burn");
	movename_mapping[MOVE_HYDROCANNON] = strdup("Hydro Cannon");
	movename_mapping[MOVE_METEORMASH] = strdup("Meteor Mash");
	movename_mapping[MOVE_ASTONISH] = strdup("Astonish");
	movename_mapping[MOVE_WEATHERBALL] = strdup("Weather Ball");
	movename_mapping[MOVE_AROMATHERAPY] = strdup("Aromatherapy");
	movename_mapping[MOVE_FAKETEARS] = strdup("Fake Tears");
	movename_mapping[MOVE_AIRCUTTER] = strdup("Air Cutter");
	movename_mapping[MOVE_OVERHEAT] = strdup("Overheat");
	movename_mapping[MOVE_ODORSLEUTH] = strdup("Odor Sleuth");
	movename_mapping[MOVE_ROCKTOMB] = strdup("Rock Tomb");
	movename_mapping[MOVE_SILVERWIND] = strdup("Silver Wind");
	movename_mapping[MOVE_METALSOUND] = strdup("Metal Sound");
	movename_mapping[MOVE_GRASSWHISTLE] = strdup("Grass Whistle");
	movename_mapping[MOVE_TICKLE] = strdup("Tickle");
	movename_mapping[MOVE_COSMICPOWER] = strdup("Cosmic Power");
	movename_mapping[MOVE_WATERSPOUT] = strdup("Water Spout");
	movename_mapping[MOVE_SIGNALBEAM] = strdup("Signal Beam");
	movename_mapping[MOVE_SHADOWPUNCH] = strdup("Shadow Punch");
	movename_mapping[MOVE_EXTRASENSORY] = strdup("Extrasensory");
	movename_mapping[MOVE_SKYUPPERCUT] = strdup("Sky Uppercut");
	movename_mapping[MOVE_SANDTOMB] = strdup("Sand Tomb");
	movename_mapping[MOVE_SHEERCOLD] = strdup("Sheer Cold");
	movename_mapping[MOVE_MUDDYWATER] = strdup("Muddy Water");
	movename_mapping[MOVE_BULLETSEED] = strdup("Bullet Seed");
	movename_mapping[MOVE_AERIALACE] = strdup("Aerial Ace");
	movename_mapping[MOVE_ICICLESPEAR] = strdup("Icicle Spear");
	movename_mapping[MOVE_IRONDEFENSE] = strdup("Iron Defense");
	movename_mapping[MOVE_BLOCK] = strdup("Block");
	movename_mapping[MOVE_HOWL] = strdup("Howl");
	movename_mapping[MOVE_DRAGONCLAW] = strdup("Dragon Claw");
	movename_mapping[MOVE_FRENZYPLANT] = strdup("Frenzy Plant");
	movename_mapping[MOVE_BULKUP] = strdup("Bulk Up");
	movename_mapping[MOVE_BOUNCE] = strdup("Bounce");
	movename_mapping[MOVE_MUDSHOT] = strdup("Mud Shot");
	movename_mapping[MOVE_POISONTAIL] = strdup("Poison Tail");
	movename_mapping[MOVE_COVET] = strdup("Covet");
	movename_mapping[MOVE_VOLTTACKLE] = strdup("Volt Tackle");
	movename_mapping[MOVE_MAGICALLEAF] = strdup("Magical Leaf");
	movename_mapping[MOVE_WATERSPORT] = strdup("Water Sport");
	movename_mapping[MOVE_CALMMIND] = strdup("Calm Mind");
	movename_mapping[MOVE_LEAFBLADE] = strdup("Leaf Blade");
	movename_mapping[MOVE_DRAGONDANCE] = strdup("Dragon Dance");
	movename_mapping[MOVE_ROCKBLAST] = strdup("Rock Blast");
	movename_mapping[MOVE_SHOCKWAVE] = strdup("Shock Wave");
	movename_mapping[MOVE_WATERPULSE] = strdup("Water Pulse");
	movename_mapping[MOVE_DOOMDESIRE] = strdup("Doom Desire");
	movename_mapping[MOVE_PSYCHOBOOST] = strdup("Psycho Boost");
	movename_mapping[MOVE_LEECHFANG] = strdup("Leech Fang");
	movename_mapping[MOVE_AIRSLASH] = strdup("Air Slash");
	movename_mapping[MOVE_AQUAJET] = strdup("Aqua Jet");
	movename_mapping[MOVE_AQUATAIL] = strdup("Aqua Tail");
	movename_mapping[MOVE_AURASPHERE] = strdup("Aura Sphere");
	movename_mapping[MOVE_AVALANCHE] = strdup("Avalanche");
	movename_mapping[MOVE_BRAVEBIRD] = strdup("Brave Bird");
	movename_mapping[MOVE_BUGBUZZ] = strdup("Bug Buzz");
	movename_mapping[MOVE_BULLETPUNCH] = strdup("Bullet Punch");
	movename_mapping[MOVE_CHARGEBEAM] = strdup("Charge Beam");
	movename_mapping[MOVE_CLOSECOMBAT] = strdup("Close Combat");
	movename_mapping[MOVE_CROSSPOISON] = strdup("Cross Poison");
	movename_mapping[MOVE_DARKPULSE] = strdup("Dark Pulse");
	movename_mapping[MOVE_DISCHARGE] = strdup("Discharge");
	movename_mapping[MOVE_DRACOMETEOR] = strdup("Draco Meteor");
	movename_mapping[MOVE_DRAGONPULSE] = strdup("Dragon Pulse");
	movename_mapping[MOVE_DRAINPUNCH] = strdup("Drain Punch");
	movename_mapping[MOVE_EARTHPOWER] = strdup("Earth Power");
	movename_mapping[MOVE_ENERGYBALL] = strdup("Energy Ball");
	movename_mapping[MOVE_FOCUSBLAST] = strdup("Focus Blast");
	movename_mapping[MOVE_FORCEPALM] = strdup("Force Palm");
	movename_mapping[MOVE_GIGAIMPACT] = strdup("Giga Impact");
	movename_mapping[MOVE_GRASSKNOT] = strdup("Grass Knot");
	movename_mapping[MOVE_GUNKSHOT] = strdup("Gunk Shot");
	movename_mapping[MOVE_HAMMERARM] = strdup("Hammer Arm");
	movename_mapping[MOVE_HEADSMASH] = strdup("Head Smash");
	movename_mapping[MOVE_ICESHARD] = strdup("Ice Shard");
	movename_mapping[MOVE_IRONHEAD] = strdup("Iron Head");
	movename_mapping[MOVE_LAVAPLUME] = strdup("Lava Plume");
	movename_mapping[MOVE_MAGNETBOMB] = strdup("Magnet Bomb");
	movename_mapping[MOVE_MUDBOMB] = strdup("Mud Bomb");
	movename_mapping[MOVE_NASTYPLOT] = strdup("Nasty Plot");
	movename_mapping[MOVE_NIGHTSLASH] = strdup("Night Slash");
	movename_mapping[MOVE_OMINOUSWIND] = strdup("Ominous Wind");
	movename_mapping[MOVE_POWERGEM] = strdup("Power Gem");
	movename_mapping[MOVE_POWERWHIP] = strdup("Power Whip");
	movename_mapping[MOVE_PSYCHOCUT] = strdup("Psycho Cut");
	movename_mapping[MOVE_ROCKCLIMB] = strdup("Rock Climb");
	movename_mapping[MOVE_ROCKPOLISH] = strdup("Rock Polish");
	movename_mapping[MOVE_ROCKWRECKER] = strdup("Rock Wrecker");
	movename_mapping[MOVE_ROOST] = strdup("Roost");
	movename_mapping[MOVE_SEEDBOMB] = strdup("Seed Bomb");
	movename_mapping[MOVE_SHADOWCLAW] = strdup("Shadow Claw");
	movename_mapping[MOVE_SHADOWSNEAK] = strdup("Shadow Sneak");
	movename_mapping[MOVE_VACUUMWAVE] = strdup("Vacuum Wave");
	movename_mapping[MOVE_XSCISSOR] = strdup("X-Scissor");
	movename_mapping[MOVE_ZENHEADBUTT] = strdup("Zen Headbutt");
	movename_mapping[MOVE_SWITCHEROO] = strdup("Switcheroo");
	movename_mapping[MOVE_DRILLRUN] = strdup("Drill Run");
	movename_mapping[MOVE_BULLDOZE] = strdup("Bulldoze");
	movename_mapping[MOVE_ELECTROWEB] = strdup("Electroweb");
	movename_mapping[MOVE_FLAMECHARGE] = strdup("Flame Charge");
	movename_mapping[MOVE_FROSTBREATH] = strdup("Frost Breath");
	movename_mapping[MOVE_HEARTSTAMP] = strdup("Heart Stamp");
	movename_mapping[MOVE_HONECLAWS] = strdup("Hone Claws");
	movename_mapping[MOVE_HORNLEECH] = strdup("Horn Leech");
	movename_mapping[MOVE_COIL] = strdup("Coil");
	movename_mapping[MOVE_HURRICANE] = strdup("Hurricane");
	movename_mapping[MOVE_ICICLECRASH] = strdup("Icicle Crash");
	movename_mapping[MOVE_WORKUP] = strdup("Work Up");
	movename_mapping[MOVE_QUIVERDANCE] = strdup("Quiver Dance");
	movename_mapping[MOVE_LEAFTORNADO] = strdup("Leaf Tornado");
	movename_mapping[MOVE_LOWSWEEP] = strdup("Low Sweep");
	movename_mapping[MOVE_SNARL] = strdup("Snarl");
	movename_mapping[MOVE_STRUGGLEBUG] = strdup("Struggle Bug");
	movename_mapping[MOVE_STEAMROLLER] = strdup("Steamroller");
	movename_mapping[MOVE_STORMTHROW] = strdup("Storm Throw");
	movename_mapping[MOVE_VENOSHOCK] = strdup("Venoshock");
	movename_mapping[MOVE_WILDCHARGE] = strdup("Wild Charge");
	movename_mapping[MOVE_POISONJAB] = strdup("Poison Jab");
	movename_mapping[MOVE_ACIDSPRAY] = strdup("Acid Spray");
	movename_mapping[MOVE_FIERYDANCE] = strdup("Fiery Dance");
	movename_mapping[MOVE_CLEARSMOG] = strdup("Clear Smog");
	movename_mapping[MOVE_LEAFSTORM] = strdup("Leaf Storm");
	movename_mapping[MOVE_STONEEDGE] = strdup("Stone Edge");
	movename_mapping[MOVE_PAYBACK] = strdup("Payback");
	movename_mapping[MOVE_FIREFANG] = strdup("Fire Fang");
	movename_mapping[MOVE_ICEFANG] = strdup("Ice Fang");
	movename_mapping[MOVE_THUNDERFANG] = strdup("Thunder Fang");
	movename_mapping[MOVE_FLAREBLITZ] = strdup("Flare Blitz");
	movename_mapping[MOVE_INFERNO] = strdup("Inferno");
	movename_mapping[MOVE_HEX] = strdup("Hex");
	movename_mapping[MOVE_DUALCHOP] = strdup("Dual Chop");
	movename_mapping[MOVE_DOUBLEHIT] = strdup("Double Hit");
	movename_mapping[MOVE_COTTONGUARD] = strdup("Cotton Guard");
	movename_mapping[MOVE_ACROBATICS] = strdup("Acrobatics");
	movename_mapping[MOVE_FLAMEBURST] = strdup("Flame Burst");
	movename_mapping[MOVE_UTURN] = strdup("U-turn");
	movename_mapping[MOVE_VOLTSWITCH] = strdup("Volt Switch");
	movename_mapping[MOVE_DRAGONTAIL] = strdup("Dragon Tail");
	movename_mapping[MOVE_CIRCLETHROW] = strdup("Circle Throw");
	movename_mapping[MOVE_MIRRORSHOT] = strdup("Mirror Shot");
	movename_mapping[MOVE_WOODHAMMER] = strdup("Wood Hammer");
	movename_mapping[MOVE_HEALPULSE] = strdup("Heal Pulse");
	movename_mapping[MOVE_FLASHCANNON] = strdup("Flash Cannon");
	movename_mapping[MOVE_BUGBITE] = strdup("Bug Bite");
	movename_mapping[MOVE_PLUCK] = strdup("Pluck");
	movename_mapping[MOVE_SHELLSMASH] = strdup("Shell Smash");
	movename_mapping[MOVE_RAGEPOWDER] = strdup("Rage Powder");
	movename_mapping[MOVE_WAKEUPSLAP] = strdup("Wake-Up Slap");
	movename_mapping[MOVE_RAZORSHELL] = strdup("Razor Shell");
	movename_mapping[MOVE_COPYCAT] = strdup("Copycat");
	movename_mapping[MOVE_MIRACLEEYE] = strdup("Miracle Eye");
	movename_mapping[MOVE_SUCKERPUNCH] = strdup("Sucker Punch");
	movename_mapping[MOVE_SCALD] = strdup("Scald");
	movename_mapping[MOVE_BRINE] = strdup("Brine");
	movename_mapping[MOVE_FAIRYWIND] = strdup("Fairy Wind");
	movename_mapping[MOVE_BABYDOLLEYES] = strdup("Baby-Doll Eyes");
	movename_mapping[MOVE_PLAYROUGH] = strdup("Play Rough");
	movename_mapping[MOVE_MOONBLAST] = strdup("Moonblast");
	movename_mapping[MOVE_DRAININGKISS] = strdup("Draining Kiss");
	movename_mapping[MOVE_DAZZLINGGLEAM] = strdup("Dazzling Gleam");
	movename_mapping[MOVE_DISARMINGVOICE] = strdup("Disarming Voice");
	movename_mapping[MOVE_STEALTHROCK] = strdup("Stealth Rock");
	movename_mapping[MOVE_TOXICSPIKES] = strdup("Toxic Spikes");
	movename_mapping[MOVE_HEALINGWISH] = strdup("Healing Wish");
	movename_mapping[MOVE_LUNARDANCE] = strdup("Lunar Dance");
	movename_mapping[MOVE_TAILWIND] = strdup("Tailwind");
	movename_mapping[MOVE_BOOMBURST] = strdup("Boomburst");
	movename_mapping[MOVE_INCINERATE] = strdup("Incinerate");
	movename_mapping[MOVE_WORRYSEED] = strdup("Worry Seed");
	movename_mapping[MOVE_GASTROACID] = strdup("Gastro Acid");
	movename_mapping[MOVE_GEOMANCY] = strdup("Geomancy");
	movename_mapping[MOVE_FLOWERSHIELD] = strdup("Flower Shield");
	movename_mapping[MOVE_ROTOTILLER] = strdup("Rototiller");
	movename_mapping[MOVE_SHIFTGEAR] = strdup("Shift Gear");
	movename_mapping[MOVE_STICKYWEB] = strdup("Sticky Web");
	movename_mapping[MOVE_STOREDPOWER] = strdup("Stored Power");
	movename_mapping[MOVE_ACUPRESSURE] = strdup("Acupressure");
	movename_mapping[MOVE_PUNISHMENT] = strdup("Punishment");
	movename_mapping[MOVE_ASSURANCE] = strdup("Assurance");
	movename_mapping[MOVE_DRAGONRUSH] = strdup("Dragon Rush");
	movename_mapping[MOVE_DARKVOID] = strdup("Dark Void");
	movename_mapping[MOVE_FEINT] = strdup("Feint");
	movename_mapping[MOVE_PHANTOMFORCE] = strdup("Phantom Force");
	movename_mapping[MOVE_PETALBLIZZARD] = strdup("Petal Blizzard");
	movename_mapping[MOVE_PLAYNICE] = strdup("Play Nice");
	movename_mapping[MOVE_ROAROFTIME] = strdup("Roar of Time");
	movename_mapping[MOVE_SPACIALREND] = strdup("Spacial Rend");
	movename_mapping[MOVE_MAGMASTORM] = strdup("Magma Storm");
	movename_mapping[MOVE_FINALGAMBIT] = strdup("Final Gambit");
	movename_mapping[MOVE_SHADOWFORCE] = strdup("Shadow Force");
	movename_mapping[MOVE_NUZZLE] = strdup("Nuzzle");
	movename_mapping[MOVE_RETALIATE] = strdup("Retaliate");
	movename_mapping[MOVE_STEELYHIT] = strdup("Steely Hit");
	movename_mapping[MOVE_JUDGMENT] = strdup("Judgment");
	movename_mapping[MOVE_FREEZEDRY] = strdup("Freeze-Dry");
	movename_mapping[MOVE_PSYSHOCK] = strdup("Psyshock");
	movename_mapping[MOVE_ROUND] = strdup("Round");
	movename_mapping[MOVE_TAILSLAP] = strdup("Tail Slap");
	movename_mapping[MOVE_GEARGRIND] = strdup("Gear Grind");
	movename_mapping[MOVE_NATURALGIFT] = strdup("Natural Gift");
	movename_mapping[MOVE_CHIPAWAY] = strdup("Chip Away");
	movename_mapping[MOVE_SMACKDOWN] = strdup("Smack Down");
	movename_mapping[MOVE_HYPERSPACEHOLE] = strdup("Hyperspace Hole");
	movename_mapping[MOVE_GYROBALL] = strdup("Gyro Ball");
	movename_mapping[MOVE_HYPERSPACEFURY] = strdup("Hyperspace Fury");
	movename_mapping[MOVE_ATTACKORDER] = strdup("Attack Order");
	movename_mapping[MOVE_DEFENDORDER] = strdup("Defend Order");
	movename_mapping[MOVE_HEALORDER] = strdup("Heal Order");
	movename_mapping[MOVE_CAPTIVATE] = strdup("Captivate");
	movename_mapping[MOVE_DEFOG] = strdup("Defog");
	movename_mapping[MOVE_ORIGINPULSE] = strdup("Origin Pulse");
	movename_mapping[MOVE_PRECIPICEBLADES] = strdup("Precipice Blades");
	movename_mapping[MOVE_GUARDSWAP] = strdup("Guard Swap");
	movename_mapping[MOVE_STEAMERUPTION] = strdup("Steam Eruption");
	movename_mapping[MOVE_METALBURST] = strdup("Metal Burst");
	movename_mapping[MOVE_MEFIRST] = strdup("Me First");
	movename_mapping[MOVE_POWERSWAP] = strdup("Power Swap");
	movename_mapping[MOVE_POWERTRICK] = strdup("Power Trick");
	movename_mapping[MOVE_PSYCHOSHIFT] = strdup("Psycho Shift");
	movename_mapping[MOVE_WRINGOUT] = strdup("Wring Out");
	movename_mapping[MOVE_KINGSSHIELD] = strdup("King's Shield");
	movename_mapping[MOVE_PSYSTRIKE] = strdup("Psystrike");
	movename_mapping[MOVE_AUTOTOMIZE] = strdup("Autotomize");
	movename_mapping[MOVE_DIAMONDSTORM] = strdup("Diamond Storm");
	movename_mapping[MOVE_SLUDGEWAVE] = strdup("Sludge Wave");
	movename_mapping[MOVE_HEAVYSLAM] = strdup("Heavy Slam");
	movename_mapping[MOVE_SYNCHRONOISE] = strdup("Synchronoise");
	movename_mapping[MOVE_ELECTROBALL] = strdup("Electro Ball");
	movename_mapping[MOVE_FOULPLAY] = strdup("Foul Play");
	movename_mapping[MOVE_ENTRAINMENT] = strdup("Entrainment");
	movename_mapping[MOVE_NIGHTDAZE] = strdup("Night Daze");
	movename_mapping[MOVE_ECHOEDVOICE] = strdup("Echoed Voice");
	movename_mapping[MOVE_LANDSWRATH] = strdup("Land's Wrath");
	movename_mapping[MOVE_OBLIVIONWING] = strdup("Oblivion Wing");
	movename_mapping[MOVE_HEARTSWAP] = strdup("Heart Swap");
	movename_mapping[MOVE_CRUSHGRIP] = strdup("Crush Grip");
	movename_mapping[MOVE_SACREDSWORD] = strdup("Sacred Sword");
	movename_mapping[MOVE_HEATCRASH] = strdup("Heat Crash");
	movename_mapping[MOVE_HEADCHARGE] = strdup("Head Charge");
	movename_mapping[MOVE_TECHNOBLAST] = strdup("Techno Blast");
	movename_mapping[MOVE_RELICSONG] = strdup("Relic Song");
	movename_mapping[MOVE_SECRETSWORD] = strdup("Secret Sword");
	movename_mapping[MOVE_GLACIATE] = strdup("Glaciate");
	movename_mapping[MOVE_BOLTSTRIKE] = strdup("Bolt Strike");
	movename_mapping[MOVE_BLUEFLARE] = strdup("Blue Flare");
	movename_mapping[MOVE_FREEZESHOCK] = strdup("Freeze Shock");
	movename_mapping[MOVE_ICEBURN] = strdup("Ice Burn");
	movename_mapping[MOVE_VCREATE] = strdup("V-create");
	movename_mapping[MOVE_FUSIONFLARE] = strdup("Fusion Flare");
	movename_mapping[MOVE_FUSIONBOLT] = strdup("Fusion Bolt");
	movename_mapping[MOVE_FELLSTINGER] = strdup("Fell Stinger");
	movename_mapping[MOVE_NOBLEROAR] = strdup("Noble Roar");
	movename_mapping[MOVE_DRAGONASCENT] = strdup("Dragon Ascent");
	movename_mapping[MOVE_PARTINGSHOT] = strdup("Parting Shot");
	movename_mapping[MOVE_TOPSYTURVY] = strdup("Topsy-Turvy");
	movename_mapping[MOVE_COREENFORCER] = strdup("Core Enforcer");
	movename_mapping[MOVE_CHATTER] = strdup("Chatter");
	movename_mapping[MOVE_CONFIDE] = strdup("Confide");
	movename_mapping[MOVE_WATERSHURIKEN] = strdup("Water Shuriken");
	movename_mapping[MOVE_MYSTICALFIRE] = strdup("Mystical Fire");
	movename_mapping[MOVE_SPIKYSHIELD] = strdup("Spiky Shield");
	movename_mapping[MOVE_EERIEIMPULSE] = strdup("Eerie Impulse");
	movename_mapping[MOVE_HOLDBACK] = strdup("Hold Back");
	movename_mapping[MOVE_INFESTATION] = strdup("Infestation");
	movename_mapping[MOVE_POWERUPPUNCH] = strdup("Power-up Punch");
	movename_mapping[MOVE_THOUSANDARROWS] = strdup("Thousand Arrows");
	movename_mapping[MOVE_THOUSANDWAVES] = strdup("Thousand Waves");
	movename_mapping[MOVE_PARABOLICCHARGE] = strdup("Parabolic Charge");
	movename_mapping[MOVE_SEARINGSHOT] = strdup("Searing Shot");
	movename_mapping[MOVE_SEEDFLARE] = strdup("Seed Flare");
	movename_mapping[MOVE_ACCELEROCK] = strdup("Accelerock");
	movename_mapping[MOVE_ANCHORSHOT] = strdup("Anchor Shot");
	movename_mapping[MOVE_AURORAVEIL] = strdup("Aurora Veil");
	movename_mapping[MOVE_BANEFULBUNKER] = strdup("Baneful Bunker");
	movename_mapping[MOVE_BEAKBLAST] = strdup("Beak Blast");
	movename_mapping[MOVE_BRUTALSWING] = strdup("Brutal Swing");
	movename_mapping[MOVE_BURNUP] = strdup("Burn Up");
	movename_mapping[MOVE_CLANGINGSCALES] = strdup("Clanging Scales");
	movename_mapping[MOVE_DARKESTLARIAT] = strdup("Darkest Lariat");
	movename_mapping[MOVE_DRAGONHAMMER] = strdup("Dragon Hammer");
	movename_mapping[MOVE_FIRELASH] = strdup("Fire Lash");
	movename_mapping[MOVE_FIRSTIMPRESSION] = strdup("First Impression");
	movename_mapping[MOVE_FLEURCANNON] = strdup("Fleur Cannon");
	movename_mapping[MOVE_FLORALHEALING] = strdup("Floral Healing");
	movename_mapping[MOVE_GEARUP] = strdup("Gear Up");
	movename_mapping[MOVE_HIGHHORSEPOWER] = strdup("High Horsepower");
	movename_mapping[MOVE_ICEHAMMER] = strdup("Ice Hammer");
	movename_mapping[MOVE_LASERFOCUS] = strdup("Laser Focus");
	movename_mapping[MOVE_LEAFAGE] = strdup("Leafage");
	movename_mapping[MOVE_LIQUIDATION] = strdup("Liquidation");
	movename_mapping[MOVE_LUNGE] = strdup("Lunge");
	movename_mapping[MOVE_MOONGEISTBEAM] = strdup("Moongeist Beam");
	movename_mapping[MOVE_MULTIATTACK] = strdup("Multi-Attack");
	movename_mapping[MOVE_NATURESMADNESS] = strdup("Nature's Madness");
	movename_mapping[MOVE_POLLENPUFF] = strdup("Pollen Puff");
	movename_mapping[MOVE_POWERTRIP] = strdup("Power Trip");
	movename_mapping[MOVE_PRISMATICLASER] = strdup("Prismatic Laser");
	movename_mapping[MOVE_PSYCHICFANGS] = strdup("Psychic Fangs");
	movename_mapping[MOVE_PURIFY] = strdup("Purify");
	movename_mapping[MOVE_REVELATIONDANCE] = strdup("Revelation Dance");
	movename_mapping[MOVE_SHADOWBONE] = strdup("Shadow Bone");
	movename_mapping[MOVE_SHELLTRAP] = strdup("Shell Trap");
	movename_mapping[MOVE_SHOREUP] = strdup("Shore Up");
	movename_mapping[MOVE_SMARTSTRIKE] = strdup("Smart Strike");
	movename_mapping[MOVE_SOLARBLADE] = strdup("Solar Blade");
	movename_mapping[MOVE_SPARKLINGARIA] = strdup("Sparkling Aria");
	movename_mapping[MOVE_SPECTRALTHIEF] = strdup("Spectral Thief");
	movename_mapping[MOVE_SPEEDSWAP] = strdup("Speed Swap");
	movename_mapping[MOVE_SPIRITSHACKLE] = strdup("Spirit Shackle");
	movename_mapping[MOVE_SPOTLIGHT] = strdup("Spotlight");
	movename_mapping[MOVE_STOMPINGTANTRUM] = strdup("Stomping Tantrum");
	movename_mapping[MOVE_STRENGTHSAP] = strdup("Strength Sap");
	movename_mapping[MOVE_SUNSTEELSTRIKE] = strdup("Sunsteel Strike");
	movename_mapping[MOVE_TEARFULLOOK] = strdup("Tearful Look");
	movename_mapping[MOVE_THROATCHOP] = strdup("Throat Chop");
	movename_mapping[MOVE_TOXICTHREAD] = strdup("Toxic Thread");
	movename_mapping[MOVE_TROPKICK] = strdup("Trop Kick");
	movename_mapping[MOVE_ZINGZAP] = strdup("Zing Zap");
	movename_mapping[MOVE_ELECTRICTERRAIN] = strdup("Electric Terrain");
	movename_mapping[MOVE_GRASSYTERRAIN] = strdup("Grassy Terrain");
	movename_mapping[MOVE_MISTYTERRAIN] = strdup("Misty Terrain");
	movename_mapping[MOVE_PSYCHICTERRAIN] = strdup("Psychic Terrain");
	movename_mapping[MOVE_GRASSPLEDGE] = strdup("Grass Pledge");
	movename_mapping[MOVE_FIREPLEDGE] = strdup("Fire Pledge");
	movename_mapping[MOVE_WATERPLEDGE] = strdup("Water Pledge");
	movename_mapping[MOVE_TRICKROOM] = strdup("Trick Room");
	movename_mapping[MOVE_MAGICROOM] = strdup("Magic Room");
	movename_mapping[MOVE_WONDERROOM] = strdup("Wonder Room");
	movename_mapping[MOVE_CRAFTYSHIELD] = strdup("Crafty Shield");
	movename_mapping[MOVE_MATBLOCK] = strdup("Mat Block");
	movename_mapping[MOVE_QUICKGUARD] = strdup("Quick Guard");
	movename_mapping[MOVE_WIDEGUARD] = strdup("Wide Guard");
	movename_mapping[MOVE_AQUARING] = strdup("Aqua Ring");
	movename_mapping[MOVE_AROMATICMIST] = strdup("Aromatic Mist");
	movename_mapping[MOVE_BELCH] = strdup("Belch");
	movename_mapping[MOVE_BESTOW] = strdup("Bestow");
	movename_mapping[MOVE_FLING] = strdup("Fling");
	movename_mapping[MOVE_FLYINGPRESS] = strdup("Flying Press");
	movename_mapping[MOVE_GRAVITY] = strdup("Gravity");
	movename_mapping[MOVE_GUARDSPLIT] = strdup("Guard Split");
	movename_mapping[MOVE_HEALBLOCK] = strdup("Heal Block");
	movename_mapping[MOVE_IONDELUGE] = strdup("Ion Deluge");
	movename_mapping[MOVE_LUCKYCHANT] = strdup("Lucky Chant");
	movename_mapping[MOVE_MAGNETRISE] = strdup("Magnet Rise");
	movename_mapping[MOVE_MAGNETICFLUX] = strdup("Magnetic Flux");
	movename_mapping[MOVE_POWDER] = strdup("Powder");
	movename_mapping[MOVE_POWERSPLIT] = strdup("Power Split");
	movename_mapping[MOVE_REFLECTTYPE] = strdup("Reflect Type");
	movename_mapping[MOVE_SIMPLEBEAM] = strdup("Simple Beam");
	movename_mapping[MOVE_SOAK] = strdup("Soak");
	movename_mapping[MOVE_TELEKINESIS] = strdup("Telekinesis");
	movename_mapping[MOVE_TRICKORTREAT] = strdup("Trick-or-Treat");
	movename_mapping[MOVE_VENOMDRENCH] = strdup("Venom Drench");
	movename_mapping[MOVE_FORESTSCURSE] = strdup("Forest's Curse");
	movename_mapping[MOVE_MINDBLOWN] = strdup("Mind Blown");
	movename_mapping[MOVE_PHOTONGEYSER] = strdup("Photon Geyser");
	movename_mapping[MOVE_PLASMAFISTS] = strdup("Plasma Fists");
	movename_mapping[MOVE_ELECTRIFY] = strdup("Electrify");
	movename_mapping[MOVE_EMBARGO] = strdup("Embargo");
	movename_mapping[MOVE_FAIRYLOCK] = strdup("Fairy Lock");
	movename_mapping[MOVE_LIGHTOFRUIN] = strdup("Light of Ruin");
	movename_mapping[MOVE_TRUMPCARD] = strdup("Trump Card");
	movename_mapping[MOVE_AFTERYOU] = strdup("After You");
	movename_mapping[MOVE_INSTRUCT] = strdup("Instruct");
	movename_mapping[MOVE_QUASH] = strdup("Quash");
	movename_mapping[MOVE_HAPPYHOUR] = strdup("Happy Hour");
	movename_mapping[MOVE_DOUBLEIRONBASH] = strdup("Double Iron Bash");
	movename_mapping[MOVE_LASTRESORT] = strdup("Last Resort");
	movename_mapping[MOVE_SKYDROP] = strdup("Sky Drop");
	movename_mapping[MOVE_CELEBRATE] = strdup("Celebrate");
	movename_mapping[MOVE_HOLDHANDS] = strdup("Hold Hands");
	movename_mapping[MOVE_DYNAMAXCANNON] = strdup("Dynamax Cannon");
	movename_mapping[MOVE_SNIPESHOT] = strdup("Snipe Shot");
	movename_mapping[MOVE_JAWLOCK] = strdup("Jaw Lock");
	movename_mapping[MOVE_STUFFCHEEKS] = strdup("Stuff Cheeks");
	movename_mapping[MOVE_NORETREAT] = strdup("No Retreat");
	movename_mapping[MOVE_TARSHOT] = strdup("Tar Shot");
	movename_mapping[MOVE_MAGICPOWDER] = strdup("Magic Powder");
	movename_mapping[MOVE_DRAGONDARTS] = strdup("Dragon Darts");
	movename_mapping[MOVE_TEATIME] = strdup("Tea Time");
	movename_mapping[MOVE_OCTOLOCK] = strdup("Octolock");
	movename_mapping[MOVE_BOLTBEAK] = strdup("Bolt Beak");
	movename_mapping[MOVE_FISHIOUSREND] = strdup("Fishious Rend");
	movename_mapping[MOVE_COURTCHANGE] = strdup("Court Change");
	movename_mapping[MOVE_CLANGOROUSSOUL] = strdup("Clangorous Soul");
	movename_mapping[MOVE_BODYPRESS] = strdup("Body Press");
	movename_mapping[MOVE_DECORATE] = strdup("Decorate");
	movename_mapping[MOVE_DRUMBEATING] = strdup("Drum Beating");
	movename_mapping[MOVE_SNAPTRAP] = strdup("Snap Trap");
	movename_mapping[MOVE_PYROBALL] = strdup("Pyro Ball");
	movename_mapping[MOVE_BEHEMOTHBLADE] = strdup("Behemoth Blade");
	movename_mapping[MOVE_BEHEMOTHBASH] = strdup("Behemoth Bash");
	movename_mapping[MOVE_AURAWHEEL] = strdup("Aura Wheel");
	movename_mapping[MOVE_BREAKINGSWIPE] = strdup("Breaking Swipe");
	movename_mapping[MOVE_BRANCHPOKE] = strdup("Branch Poke");
	movename_mapping[MOVE_OVERDRIVE] = strdup("Overdrive");
	movename_mapping[MOVE_APPLEACID] = strdup("Apple Acid");
	movename_mapping[MOVE_GRAVAPPLE] = strdup("Grav Apple");
	movename_mapping[MOVE_SPIRITBREAK] = strdup("Spirit Break");
	movename_mapping[MOVE_STRANGESTEAM] = strdup("Strange Steam");
	movename_mapping[MOVE_LIFEDEW] = strdup("Life Dew");
	movename_mapping[MOVE_OBSTRUCT] = strdup("Obstruct");
	movename_mapping[MOVE_FALSESURRENDER] = strdup("False Surrender");
	movename_mapping[MOVE_METEORASSAULT] = strdup("Meteor Assault");
	movename_mapping[MOVE_ETERNABEAM] = strdup("Eternabeam");
	movename_mapping[MOVE_STEELBEAM] = strdup("Steel Beam");
	movename_mapping[MOVE_EXPANDINGFORCE] = strdup("Expanding Force");
	movename_mapping[MOVE_STEELROLLER] = strdup("Steel Roller");
	movename_mapping[MOVE_SCALESHOT] = strdup("Scale Shot");
	movename_mapping[MOVE_METEORBEAM] = strdup("Meteor Beam");
	movename_mapping[MOVE_SHELLSIDEARM] = strdup("Shell Sidearm");
	movename_mapping[MOVE_MISTYEXPLOSION] = strdup("Misty Explosion");
	movename_mapping[MOVE_GRASSYGLIDE] = strdup("Grassy Glide");
	movename_mapping[MOVE_RISINGVOLTAGE] = strdup("Rising Voltage");
	movename_mapping[MOVE_TERRAINPULSE] = strdup("Terrain Pulse");
	movename_mapping[MOVE_SKITTERSMACK] = strdup("Skitter Smack");
	movename_mapping[MOVE_BURNINGJEALOUSY] = strdup("Burning Jealousy");
	movename_mapping[MOVE_LASHOUT] = strdup("Lash Out");
	movename_mapping[MOVE_POLTERGEIST] = strdup("Poltergeist");
	movename_mapping[MOVE_CORROSIVEGAS] = strdup("Corrosive Gas");
	movename_mapping[MOVE_COACHING] = strdup("Coaching");
	movename_mapping[MOVE_FLIPTURN] = strdup("Flip Turn");
	movename_mapping[MOVE_TRIPLEAXEL] = strdup("Triple Axel");
	movename_mapping[MOVE_DUALWINGBEAT] = strdup("Dual Wingbeat");
	movename_mapping[MOVE_SCORCHINGSANDS] = strdup("Scorching Sands");
	movename_mapping[MOVE_JUNGLEHEALING] = strdup("Jungle Healing");
	movename_mapping[MOVE_WICKEDBLOW] = strdup("Wicked Blow");
	movename_mapping[MOVE_SURGINGSTRIKES] = strdup("Surging Strikes");
	movename_mapping[MOVE_FREEZINGGLARE] = strdup("Freezing Glare");
	movename_mapping[MOVE_THUNDEROUSKICK] = strdup("Thunderous Kick");
	movename_mapping[MOVE_FIERYWRATH] = strdup("Fiery Wrath");
	movename_mapping[MOVE_EERIESPELL] = strdup("Eerie Spell");
	movename_mapping[MOVE_THUNDERCAGE] = strdup("Thunder Cage");
	movename_mapping[MOVE_DRAGONENERGY] = strdup("Dragon Energy");
	movename_mapping[MOVE_ASTRALBARRAGE] = strdup("Astral Barrage");
	movename_mapping[MOVE_GLACIALLANCE] = strdup("Glacial Lance");
	movename_mapping[MOVE_DIRECLAW] = strdup("Dire Claw");
	movename_mapping[MOVE_PSYSHIELDBASH] = strdup("Psyshield Bash");
	movename_mapping[MOVE_POWERSHIFT] = strdup("Power Shift");
	movename_mapping[MOVE_STONEAXE] = strdup("Stone Axe");
	movename_mapping[MOVE_MYSTICALPOWER] = strdup("Mystical Power");
	movename_mapping[MOVE_RAGINGFURY] = strdup("Raging Fury");
	movename_mapping[MOVE_WAVECRASH] = strdup("Wave Crash");
	movename_mapping[MOVE_CHLOROBLAST] = strdup("Chloroblast");
	movename_mapping[MOVE_MOUNTAINGALE] = strdup("Mountain Gale");
	movename_mapping[MOVE_VICTORYDANCE] = strdup("Victory Dance");
	movename_mapping[MOVE_HEADLONGRUSH] = strdup("Headlong Rush");
	movename_mapping[MOVE_BARBBARRAGE] = strdup("Barb Barrage");
	movename_mapping[MOVE_ESPERWING] = strdup("Esper Wing");
	movename_mapping[MOVE_BITTERMALICE] = strdup("Bitter Malice");
	movename_mapping[MOVE_SHELTER] = strdup("Shelter");
	movename_mapping[MOVE_TRIPLEARROWS] = strdup("Triple Arrows");
	movename_mapping[MOVE_INFERNALPARADE] = strdup("Infernal Parade");
	movename_mapping[MOVE_CEASELESSEDGE] = strdup("Ceaseless Edge");
	movename_mapping[MOVE_BLEAKWINDSTORM] = strdup("Bleak Windstorm");
	movename_mapping[MOVE_WILDBOLTSTORM] = strdup("Wild Bolt Storm");
	movename_mapping[MOVE_SANDSEARSTORM] = strdup("Sandsear Storm");
	movename_mapping[MOVE_SPRINGTIDESTORM] = strdup("Springtide Storm");
	movename_mapping[MOVE_LUNARBLESSING] = strdup("Lunar Blessing");
	movename_mapping[MOVE_TAKEHEART] = strdup("Take Heart");
	movename_mapping[MOVE_BREAKNECK_BLITZ_P] = strdup("Breakneck Blitz Physical");
	movename_mapping[MOVE_BREAKNECK_BLITZ_S] = strdup("Breakneck Blitz Special");
	movename_mapping[MOVE_ALL_OUT_PUMMELING_P] = strdup("All-Out Pummeling Physical");
	movename_mapping[MOVE_ALL_OUT_PUMMELING_S] = strdup("All-Out Pummeling Special");
	movename_mapping[MOVE_SUPERSONIC_SKYSTRIKE_P] = strdup("Supersonic Skystrike Physical");
	movename_mapping[MOVE_SUPERSONIC_SKYSTRIKE_S] = strdup("Supersonic Skystrike Special");
	movename_mapping[MOVE_ACID_DOWNPOUR_P] = strdup("Acid Downpour Physical");
	movename_mapping[MOVE_ACID_DOWNPOUR_S] = strdup("Acid Downpour Special");
	movename_mapping[MOVE_TECTONIC_RAGE_P] = strdup("Tectonic Rage Physical");
	movename_mapping[MOVE_TECTONIC_RAGE_S] = strdup("Tectonic Rage Special");
	movename_mapping[MOVE_CONTINENTAL_CRUSH_P] = strdup("Continental Crush Physical");
	movename_mapping[MOVE_CONTINENTAL_CRUSH_S] = strdup("Continental Crush Special");
	movename_mapping[MOVE_SAVAGE_SPIN_OUT_P] = strdup("Savage Spin-Out Physical");
	movename_mapping[MOVE_SAVAGE_SPIN_OUT_S] = strdup("Savage Spin-Out Special");
	movename_mapping[MOVE_NEVER_ENDING_NIGHTMARE_P] = strdup("Never-Ending Nightmare Physical");
	movename_mapping[MOVE_NEVER_ENDING_NIGHTMARE_S] = strdup("Never-Ending Nightmare Special");
	movename_mapping[MOVE_CORKSCREW_CRASH_P] = strdup("Corkscrew Crash Physical");
	movename_mapping[MOVE_CORKSCREW_CRASH_S] = strdup("Corkscrew Crash Special");
	movename_mapping[MOVE_INFERNO_OVERDRIVE_P] = strdup("Inferno Overdrive Physical");
	movename_mapping[MOVE_INFERNO_OVERDRIVE_S] = strdup("Inferno Overdrive Special");
	movename_mapping[MOVE_HYDRO_VORTEX_P] = strdup("Hydro Vortex Physical");
	movename_mapping[MOVE_HYDRO_VORTEX_S] = strdup("Hydro Vortex Special");
	movename_mapping[MOVE_BLOOM_DOOM_P] = strdup("Bloom Doom Physical");
	movename_mapping[MOVE_BLOOM_DOOM_S] = strdup("Bloom Doom Special");
	movename_mapping[MOVE_GIGAVOLT_HAVOC_P] = strdup("Gigavolt Havoc Physical");
	movename_mapping[MOVE_GIGAVOLT_HAVOC_S] = strdup("Gigavolt Havoc Special");
	movename_mapping[MOVE_SHATTERED_PSYCHE_P] = strdup("Shattered Psyche Physical");
	movename_mapping[MOVE_SHATTERED_PSYCHE_S] = strdup("Shattered Psyche Special");
	movename_mapping[MOVE_SUBZERO_SLAMMER_P] = strdup("Subzero Slammer Physical");
	movename_mapping[MOVE_SUBZERO_SLAMMER_S] = strdup("Subzero Slammer Special");
	movename_mapping[MOVE_DEVASTATING_DRAKE_P] = strdup("Devastating Drake Physical");
	movename_mapping[MOVE_DEVASTATING_DRAKE_S] = strdup("Devastating Drake Special");
	movename_mapping[MOVE_BLACK_HOLE_ECLIPSE_P] = strdup("Black Hole Eclipse Physical");
	movename_mapping[MOVE_BLACK_HOLE_ECLIPSE_S] = strdup("Black Hole Eclipse Special");
	movename_mapping[MOVE_TWINKLE_TACKLE_P] = strdup("Twinkle Tackle Physical");
	movename_mapping[MOVE_TWINKLE_TACKLE_S] = strdup("Twinkle Tackle Special");
	movename_mapping[MOVE_CATASTROPIKA] = strdup("Catastropika");
	movename_mapping[MOVE_10000000_VOLT_THUNDERBOLT] = strdup("10,000,000 Volt Thunderbolt");
	movename_mapping[MOVE_STOKED_SPARKSURFER] = strdup("Stoked Sparksurfer");
	movename_mapping[MOVE_EXTREME_EVOBOOST] = strdup("Extreme Evo Boost");
	movename_mapping[MOVE_PULVERIZING_PANCAKE] = strdup("Pulverizing Pancake");
	movename_mapping[MOVE_GENESIS_SUPERNOVA] = strdup("Genesis Supernova");
	movename_mapping[MOVE_SINISTER_ARROW_RAID] = strdup("Sinister Arrow Raid");
	movename_mapping[MOVE_MALICIOUS_MOONSAULT] = strdup("Malicious Moonsault");
	movename_mapping[MOVE_OCEANIC_OPERETTA] = strdup("Oceanic Operetta");
	movename_mapping[MOVE_SPLINTERED_STORMSHARDS] = strdup("Splintered Stormshards");
	movename_mapping[MOVE_LETS_SNUGGLE_FOREVER] = strdup("Let's Snuggle Forever");
	movename_mapping[MOVE_CLANGOROUS_SOULBLAZE] = strdup("Clangorous Soulblaze");
	movename_mapping[MOVE_GUARDIAN_OF_ALOLA] = strdup("Guardian of Alola");
	movename_mapping[MOVE_SEARING_SUNRAZE_SMASH] = strdup("Searing Sunraze Smash");
	movename_mapping[MOVE_MENACING_MOONRAZE_MAELSTROM] = strdup("Menacing Moonraze Maelstrom");
	movename_mapping[MOVE_LIGHT_THAT_BURNS_THE_SKY] = strdup("Light That Burns the Sky");
	movename_mapping[MOVE_SOUL_STEALING_7_STAR_STRIKE] = strdup("Soul-Stealing 7-Star Strike");
	movename_mapping[MOVE_MAX_GUARD] = strdup("Max Guard");
	movename_mapping[MOVE_MAX_FLARE_P] = strdup("Max Flare Physical");
	movename_mapping[MOVE_MAX_FLARE_S] = strdup("Max Flare Special");
	movename_mapping[MOVE_MAX_FLUTTERBY_P] = strdup("Max Flutterby Physical");
	movename_mapping[MOVE_MAX_FLUTTERBY_S] = strdup("Max Flutterby Special");
	movename_mapping[MOVE_MAX_LIGHTNING_P] = strdup("Max Lightning Physical");
	movename_mapping[MOVE_MAX_LIGHTNING_S] = strdup("Max Lightning Special");
	movename_mapping[MOVE_MAX_STRIKE_P] = strdup("Max Strike Physical");
	movename_mapping[MOVE_MAX_STRIKE_S] = strdup("Max Strike Special");
	movename_mapping[MOVE_MAX_KNUCKLE_P] = strdup("Max Knuckle Physical");
	movename_mapping[MOVE_MAX_KNUCKLE_S] = strdup("Max Knuckle Special");
	movename_mapping[MOVE_MAX_PHANTASM_P] = strdup("Max Phantasm Physical");
	movename_mapping[MOVE_MAX_PHANTASM_S] = strdup("Max Phantasm Special");
	movename_mapping[MOVE_MAX_HAILSTORM_P] = strdup("Max Hailstorm Physical");
	movename_mapping[MOVE_MAX_HAILSTORM_S] = strdup("Max Hailstorm Special");
	movename_mapping[MOVE_MAX_OOZE_P] = strdup("Max Ooze Physical");
	movename_mapping[MOVE_MAX_OOZE_S] = strdup("Max Ooze Special");
	movename_mapping[MOVE_MAX_GEYSER_P] = strdup("Max Geyser Physical");
	movename_mapping[MOVE_MAX_GEYSER_S] = strdup("Max Geyser Special");
	movename_mapping[MOVE_MAX_AIRSTREAM_P] = strdup("Max Airstream Physical");
	movename_mapping[MOVE_MAX_AIRSTREAM_S] = strdup("Max Airstream Special");
	movename_mapping[MOVE_MAX_STARFALL_P] = strdup("Max Starfall Physical");
	movename_mapping[MOVE_MAX_STARFALL_S] = strdup("Max Starfall Special");
	movename_mapping[MOVE_MAX_WYRMWIND_P] = strdup("Max Wyrmwind Physical");
	movename_mapping[MOVE_MAX_WYRMWIND_S] = strdup("Max Wyrmwind Special");
	movename_mapping[MOVE_MAX_MINDSTORM_P] = strdup("Max Mindstorm Physical");
	movename_mapping[MOVE_MAX_MINDSTORM_S] = strdup("Max Mindstorm Special");
	movename_mapping[MOVE_MAX_ROCKFALL_P] = strdup("Max Rockfall Physical");
	movename_mapping[MOVE_MAX_ROCKFALL_S] = strdup("Max Rockfall Special");
	movename_mapping[MOVE_MAX_QUAKE_P] = strdup("Max Quake Physical");
	movename_mapping[MOVE_MAX_QUAKE_S] = strdup("Max Quake Special");
	movename_mapping[MOVE_MAX_DARKNESS_P] = strdup("Max Darkness Physical");
	movename_mapping[MOVE_MAX_DARKNESS_S] = strdup("Max Darkness Special");
	movename_mapping[MOVE_MAX_OVERGROWTH_P] = strdup("Max Overgrowth Physical");
	movename_mapping[MOVE_MAX_OVERGROWTH_S] = strdup("Max Overgrowth Special");
	movename_mapping[MOVE_MAX_STEELSPIKE_P] = strdup("Max Steel Spike Physical");
	movename_mapping[MOVE_MAX_STEELSPIKE_S] = strdup("Max Steel Spike Special");
	movename_mapping[MOVE_G_MAX_VINE_LASH_P] = strdup("G-Max Vine Lash Physical");
	movename_mapping[MOVE_G_MAX_VINE_LASH_S] = strdup("G-Max Vine Lash Special");
	movename_mapping[MOVE_G_MAX_WILDFIRE_P] = strdup("G-Max Wildfire Physical");
	movename_mapping[MOVE_G_MAX_WILDFIRE_S] = strdup("G-Max Wildfire Special");
	movename_mapping[MOVE_G_MAX_CANNONADE_P] = strdup("G-Max Cannonade Physical");
	movename_mapping[MOVE_G_MAX_CANNONADE_S] = strdup("G-Max Cannonade Special");
	movename_mapping[MOVE_G_MAX_BEFUDDLE_P] = strdup("G-Max Befuddle Physical");
	movename_mapping[MOVE_G_MAX_BEFUDDLE_S] = strdup("G-Max Befuddle Special");
	movename_mapping[MOVE_G_MAX_VOLT_CRASH_P] = strdup("G-Max Volt Crash Physical");
	movename_mapping[MOVE_G_MAX_VOLT_CRASH_S] = strdup("G-Max Volt Crash Special");
	movename_mapping[MOVE_G_MAX_GOLD_RUSH_P] = strdup("G-Max Gold Rush Physical");
	movename_mapping[MOVE_G_MAX_GOLD_RUSH_S] = strdup("G-Max Gold Rush Special");
	movename_mapping[MOVE_G_MAX_CHI_STRIKE_P] = strdup("G-Max Chi Strike Physical");
	movename_mapping[MOVE_G_MAX_CHI_STRIKE_S] = strdup("G-Max Chi Strike Special");
	movename_mapping[MOVE_G_MAX_TERROR_P] = strdup("G-Max Terror Physical");
	movename_mapping[MOVE_G_MAX_TERROR_S] = strdup("G-Max Terror Special");
	movename_mapping[MOVE_G_MAX_FOAM_BURST_P] = strdup("G-Max Foam Burst Physical");
	movename_mapping[MOVE_G_MAX_FOAM_BURST_S] = strdup("G-Max Foam Burst Special");
	movename_mapping[MOVE_G_MAX_RESONANCE_P] = strdup("G-Max Resonance Physical");
	movename_mapping[MOVE_G_MAX_RESONANCE_S] = strdup("G-Max Resonance Special");
	movename_mapping[MOVE_G_MAX_CUDDLE_P] = strdup("G-Max Cuddle Physical");
	movename_mapping[MOVE_G_MAX_CUDDLE_S] = strdup("G-Max Cuddle Special");
	movename_mapping[MOVE_G_MAX_REPLENISH_P] = strdup("G-Max Replenish Physical");
	movename_mapping[MOVE_G_MAX_REPLENISH_S] = strdup("G-Max Replenish Special");
	movename_mapping[MOVE_G_MAX_MALODOR_P] = strdup("G-Max Malodor Physical");
	movename_mapping[MOVE_G_MAX_MALODOR_S] = strdup("G-Max Malodor Special");
	movename_mapping[MOVE_G_MAX_MELTDOWN_P] = strdup("G-Max Meltdown Physical");
	movename_mapping[MOVE_G_MAX_MELTDOWN_S] = strdup("G-Max Meltdown Special");
	movename_mapping[MOVE_G_MAX_DRUM_SOLO_P] = strdup("G-Max Drum Solo Physical");
	movename_mapping[MOVE_G_MAX_DRUM_SOLO_S] = strdup("G-Max Drum Solo Special");
	movename_mapping[MOVE_G_MAX_FIREBALL_P] = strdup("G-Max Fireball Physical");
	movename_mapping[MOVE_G_MAX_FIREBALL_S] = strdup("G-Max Fireball Special");
	movename_mapping[MOVE_G_MAX_HYDROSNIPE_P] = strdup("G-Max Hydrosnipe Physical");
	movename_mapping[MOVE_G_MAX_HYDROSNIPE_S] = strdup("G-Max Hydrosnipe Special");
	movename_mapping[MOVE_G_MAX_WIND_RAGE_P] = strdup("G-Max Wind Rage Physical");
	movename_mapping[MOVE_G_MAX_WIND_RAGE_S] = strdup("G-Max Wind Rage Special");
	movename_mapping[MOVE_G_MAX_GRAVITAS_P] = strdup("G-Max Gravitas Physical");
	movename_mapping[MOVE_G_MAX_GRAVITAS_S] = strdup("G-Max Gravitas Special");
	movename_mapping[MOVE_G_MAX_STONESURGE_P] = strdup("G-Max Stone Surge Physical");
	movename_mapping[MOVE_G_MAX_STONESURGE_S] = strdup("G-Max Stone Surge Special");
	movename_mapping[MOVE_G_MAX_VOLCALITH_P] = strdup("G-Max Volcalith Physical");
	movename_mapping[MOVE_G_MAX_VOLCALITH_S] = strdup("G-Max Volcalith Special");
	movename_mapping[MOVE_G_MAX_TARTNESS_P] = strdup("G-Max Tartness Physical");
	movename_mapping[MOVE_G_MAX_TARTNESS_S] = strdup("G-Max Tartness Special");
	movename_mapping[MOVE_G_MAX_SWEETNESS_P] = strdup("G-Max Sweetness Physical");
	movename_mapping[MOVE_G_MAX_SWEETNESS_S] = strdup("G-Max Sweetness Special");
	movename_mapping[MOVE_G_MAX_SANDBLAST_P] = strdup("G-Max Sandblast Physical");
	movename_mapping[MOVE_G_MAX_SANDBLAST_S] = strdup("G-Max Sandblast Special");
	movename_mapping[MOVE_G_MAX_STUN_SHOCK_P] = strdup("G-Max Stun Shock Physical");
	movename_mapping[MOVE_G_MAX_STUN_SHOCK_S] = strdup("G-Max Stun Shock Special");
	movename_mapping[MOVE_G_MAX_CENTIFERNO_P] = strdup("G-Max Centiferno Physical");
	movename_mapping[MOVE_G_MAX_CENTIFERNO_S] = strdup("G-Max Centiferno Special");
	movename_mapping[MOVE_G_MAX_SMITE_P] = strdup("G-Max Smite Physical");
	movename_mapping[MOVE_G_MAX_SMITE_S] = strdup("G-Max Smite Special");
	movename_mapping[MOVE_G_MAX_SNOOZE_P] = strdup("G-Max Snooze Physical");
	movename_mapping[MOVE_G_MAX_SNOOZE_S] = strdup("G-Max Snooze Special");
	movename_mapping[MOVE_G_MAX_FINALE_P] = strdup("G-Max Finale Physical");
	movename_mapping[MOVE_G_MAX_FINALE_S] = strdup("G-Max Finale Special");
	movename_mapping[MOVE_G_MAX_STEELSURGE_P] = strdup("G-Max Steelsurge Physical");
	movename_mapping[MOVE_G_MAX_STEELSURGE_S] = strdup("G-Max Steelsurge Special");
	movename_mapping[MOVE_G_MAX_DEPLETION_P] = strdup("G-Max Depletion Physical");
	movename_mapping[MOVE_G_MAX_DEPLETION_S] = strdup("G-Max Depletion Special");
	movename_mapping[MOVE_G_MAX_ONE_BLOW_P] = strdup("G-Max One Blow Physical");
	movename_mapping[MOVE_G_MAX_ONE_BLOW_S] = strdup("G-Max One Blow Special");
	movename_mapping[MOVE_G_MAX_RAPID_FLOW_P] = strdup("G-Max Rapid Flow Physical");
	movename_mapping[MOVE_G_MAX_RAPID_FLOW_S] = strdup("G-Max Rapid Flow Special");

#pragma endregion movename

	FILE *file = fopen("./battle_move.json", "w");
	if (file == NULL)
	{
		printf("Failed to open the file.");
		return 1;
	}

	fprintf(file, "{");
	for (int i = 0; i < 923; i++)
	{
		structPrinter(file, i, movename_mapping[i], gBattleMoves[i], i == 922 ? 0 : 1);
		printf("%d\n", i);
	}
	fprintf(file, "}");

	fclose(file);

	printf("finished");
	return 0;
}