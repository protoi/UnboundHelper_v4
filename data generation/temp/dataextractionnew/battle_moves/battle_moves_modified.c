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
	movename_mapping[0] = strdup("None");
	movename_mapping[1] = strdup("Pound");
	movename_mapping[2] = strdup("Karate Chop");
	movename_mapping[3] = strdup("Double Slap");
	movename_mapping[4] = strdup("Comet Punch");
	movename_mapping[5] = strdup("Mega Punch");
	movename_mapping[6] = strdup("Pay Day");
	movename_mapping[7] = strdup("Fire Punch");
	movename_mapping[8] = strdup("Ice Punch");
	movename_mapping[9] = strdup("Thunder Punch");
	movename_mapping[10] = strdup("Scratch");
	movename_mapping[11] = strdup("Vice Grip");
	movename_mapping[12] = strdup("Guillotine");
	movename_mapping[13] = strdup("Razor Wind");
	movename_mapping[14] = strdup("Swords Dance");
	movename_mapping[15] = strdup("Cut");
	movename_mapping[16] = strdup("Gust");
	movename_mapping[17] = strdup("Wing Attack");
	movename_mapping[18] = strdup("Whirlwind");
	movename_mapping[19] = strdup("Fly");
	movename_mapping[20] = strdup("Bind");
	movename_mapping[21] = strdup("Slam");
	movename_mapping[22] = strdup("Vine Whip");
	movename_mapping[23] = strdup("Stomp");
	movename_mapping[24] = strdup("Double Kick");
	movename_mapping[25] = strdup("Mega Kick");
	movename_mapping[26] = strdup("Jump Kick");
	movename_mapping[27] = strdup("Rolling Kick");
	movename_mapping[28] = strdup("Sand Attack");
	movename_mapping[29] = strdup("Headbutt");
	movename_mapping[30] = strdup("Horn Attack");
	movename_mapping[31] = strdup("Fury Attack");
	movename_mapping[32] = strdup("Horn Drill");
	movename_mapping[33] = strdup("Tackle");
	movename_mapping[34] = strdup("Body Slam");
	movename_mapping[35] = strdup("Wrap");
	movename_mapping[36] = strdup("Take Down");
	movename_mapping[37] = strdup("Thrash");
	movename_mapping[38] = strdup("Double-Edge");
	movename_mapping[39] = strdup("Tail Whip");
	movename_mapping[40] = strdup("Poison Sting");
	movename_mapping[41] = strdup("Twineedle");
	movename_mapping[42] = strdup("Pin Missile");
	movename_mapping[43] = strdup("Leer");
	movename_mapping[44] = strdup("Bite");
	movename_mapping[45] = strdup("Growl");
	movename_mapping[46] = strdup("Roar");
	movename_mapping[47] = strdup("Sing");
	movename_mapping[48] = strdup("Supersonic");
	movename_mapping[49] = strdup("Sonic Boom");
	movename_mapping[50] = strdup("Disable");
	movename_mapping[51] = strdup("Acid");
	movename_mapping[52] = strdup("Ember");
	movename_mapping[53] = strdup("Flamethrower");
	movename_mapping[54] = strdup("Mist");
	movename_mapping[55] = strdup("Water Gun");
	movename_mapping[56] = strdup("Hydro Pump");
	movename_mapping[57] = strdup("Surf");
	movename_mapping[58] = strdup("Ice Beam");
	movename_mapping[59] = strdup("Blizzard");
	movename_mapping[60] = strdup("Psybeam");
	movename_mapping[61] = strdup("Bubble Beam");
	movename_mapping[62] = strdup("Aurora Beam");
	movename_mapping[63] = strdup("Hyper Beam");
	movename_mapping[64] = strdup("Peck");
	movename_mapping[65] = strdup("Drill Peck");
	movename_mapping[66] = strdup("Submission");
	movename_mapping[67] = strdup("Low Kick");
	movename_mapping[68] = strdup("Counter");
	movename_mapping[69] = strdup("Seismic Toss");
	movename_mapping[70] = strdup("Strength");
	movename_mapping[71] = strdup("Absorb");
	movename_mapping[72] = strdup("Mega Drain");
	movename_mapping[73] = strdup("Leech Seed");
	movename_mapping[74] = strdup("Growth");
	movename_mapping[75] = strdup("Razor Leaf");
	movename_mapping[76] = strdup("Solar Beam");
	movename_mapping[77] = strdup("Poison Powder");
	movename_mapping[78] = strdup("Stun Spore");
	movename_mapping[79] = strdup("Sleep Powder");
	movename_mapping[80] = strdup("Petal Dance");
	movename_mapping[81] = strdup("String Shot");
	movename_mapping[82] = strdup("Dragon Rage");
	movename_mapping[83] = strdup("Fire Spin");
	movename_mapping[84] = strdup("Thunder Shock");
	movename_mapping[85] = strdup("Thunderbolt");
	movename_mapping[86] = strdup("Thunder Wave");
	movename_mapping[87] = strdup("Thunder");
	movename_mapping[88] = strdup("Rock Throw");
	movename_mapping[89] = strdup("Earthquake");
	movename_mapping[90] = strdup("Fissure");
	movename_mapping[91] = strdup("Dig");
	movename_mapping[92] = strdup("Toxic");
	movename_mapping[93] = strdup("Confusion");
	movename_mapping[94] = strdup("Psychic");
	movename_mapping[95] = strdup("Hypnosis");
	movename_mapping[96] = strdup("Meditate");
	movename_mapping[97] = strdup("Agility");
	movename_mapping[98] = strdup("Quick Attack");
	movename_mapping[99] = strdup("Rage");
	movename_mapping[100] = strdup("Teleport");
	movename_mapping[101] = strdup("Night Shade");
	movename_mapping[102] = strdup("Mimic");
	movename_mapping[103] = strdup("Screech");
	movename_mapping[104] = strdup("Double Team");
	movename_mapping[105] = strdup("Recover");
	movename_mapping[106] = strdup("Harden");
	movename_mapping[107] = strdup("Minimize");
	movename_mapping[108] = strdup("Smokescreen");
	movename_mapping[109] = strdup("Confuse Ray");
	movename_mapping[110] = strdup("Withdraw");
	movename_mapping[111] = strdup("Defense Curl");
	movename_mapping[112] = strdup("Barrier");
	movename_mapping[113] = strdup("Light Screen");
	movename_mapping[114] = strdup("Haze");
	movename_mapping[115] = strdup("Reflect");
	movename_mapping[116] = strdup("Focus Energy");
	movename_mapping[117] = strdup("Bide");
	movename_mapping[118] = strdup("Metronome");
	movename_mapping[119] = strdup("Mirror Move");
	movename_mapping[120] = strdup("Self-Destruct");
	movename_mapping[121] = strdup("Egg Bomb");
	movename_mapping[122] = strdup("Lick");
	movename_mapping[123] = strdup("Smog");
	movename_mapping[124] = strdup("Sludge");
	movename_mapping[125] = strdup("Bone Club");
	movename_mapping[126] = strdup("Fire Blast");
	movename_mapping[127] = strdup("Waterfall");
	movename_mapping[128] = strdup("Clamp");
	movename_mapping[129] = strdup("Swift");
	movename_mapping[130] = strdup("Skull Bash");
	movename_mapping[131] = strdup("Spike Cannon");
	movename_mapping[132] = strdup("Constrict");
	movename_mapping[133] = strdup("Amnesia");
	movename_mapping[134] = strdup("Kinesis");
	movename_mapping[135] = strdup("Soft-Boiled");
	movename_mapping[136] = strdup("High Jump Kick");
	movename_mapping[137] = strdup("Glare");
	movename_mapping[138] = strdup("Dream Eater");
	movename_mapping[139] = strdup("Poison Gas");
	movename_mapping[140] = strdup("Barrage");
	movename_mapping[141] = strdup("Leech Life");
	movename_mapping[142] = strdup("Lovely Kiss");
	movename_mapping[143] = strdup("Sky Attack");
	movename_mapping[144] = strdup("Transform");
	movename_mapping[145] = strdup("Bubble");
	movename_mapping[146] = strdup("Dizzy Punch");
	movename_mapping[147] = strdup("Spore");
	movename_mapping[148] = strdup("Flash");
	movename_mapping[149] = strdup("Psywave");
	movename_mapping[150] = strdup("Splash");
	movename_mapping[151] = strdup("Acid Armor");
	movename_mapping[152] = strdup("Crabhammer");
	movename_mapping[153] = strdup("Explosion");
	movename_mapping[154] = strdup("Fury Swipes");
	movename_mapping[155] = strdup("Bonemerang");
	movename_mapping[156] = strdup("Rest");
	movename_mapping[157] = strdup("Rock Slide");
	movename_mapping[158] = strdup("Hyper Fang");
	movename_mapping[159] = strdup("Sharpen");
	movename_mapping[160] = strdup("Conversion");
	movename_mapping[161] = strdup("Tri Attack");
	movename_mapping[162] = strdup("Super Fang");
	movename_mapping[163] = strdup("Slash");
	movename_mapping[164] = strdup("Substitute");
	movename_mapping[165] = strdup("Struggle");
	movename_mapping[166] = strdup("Sketch");
	movename_mapping[167] = strdup("Triple Kick");
	movename_mapping[168] = strdup("Thief");
	movename_mapping[169] = strdup("Spider Web");
	movename_mapping[170] = strdup("Mind Reader");
	movename_mapping[171] = strdup("Nightmare");
	movename_mapping[172] = strdup("Flame Wheel");
	movename_mapping[173] = strdup("Snore");
	movename_mapping[174] = strdup("Curse");
	movename_mapping[175] = strdup("Flail");
	movename_mapping[176] = strdup("Conversion 2");
	movename_mapping[177] = strdup("Aeroblast");
	movename_mapping[178] = strdup("Cotton Spore");
	movename_mapping[179] = strdup("Reversal");
	movename_mapping[180] = strdup("Spite");
	movename_mapping[181] = strdup("Powder Snow");
	movename_mapping[182] = strdup("Protect");
	movename_mapping[183] = strdup("Mach Punch");
	movename_mapping[184] = strdup("Scary Face");
	movename_mapping[185] = strdup("Feint Attack");
	movename_mapping[186] = strdup("Sweet Kiss");
	movename_mapping[187] = strdup("Belly Drum");
	movename_mapping[188] = strdup("Sludge Bomb");
	movename_mapping[189] = strdup("Mud-Slap");
	movename_mapping[190] = strdup("Octazooka");
	movename_mapping[191] = strdup("Spikes");
	movename_mapping[192] = strdup("Zap Cannon");
	movename_mapping[193] = strdup("Foresight");
	movename_mapping[194] = strdup("Destiny Bond");
	movename_mapping[195] = strdup("Perish Song");
	movename_mapping[196] = strdup("Icy Wind");
	movename_mapping[197] = strdup("Detect");
	movename_mapping[198] = strdup("Bone Rush");
	movename_mapping[199] = strdup("Lock-On");
	movename_mapping[200] = strdup("Outrage");
	movename_mapping[201] = strdup("Sandstorm");
	movename_mapping[202] = strdup("Giga Drain");
	movename_mapping[203] = strdup("Endure");
	movename_mapping[204] = strdup("Charm");
	movename_mapping[205] = strdup("Rollout");
	movename_mapping[206] = strdup("False Swipe");
	movename_mapping[207] = strdup("Swagger");
	movename_mapping[208] = strdup("Milk Drink");
	movename_mapping[209] = strdup("Spark");
	movename_mapping[210] = strdup("Fury Cutter");
	movename_mapping[211] = strdup("Steel Wing");
	movename_mapping[212] = strdup("Mean Look");
	movename_mapping[213] = strdup("Attract");
	movename_mapping[214] = strdup("Sleep Talk");
	movename_mapping[215] = strdup("Heal Bell");
	movename_mapping[216] = strdup("Return");
	movename_mapping[217] = strdup("Present");
	movename_mapping[218] = strdup("Frustration");
	movename_mapping[219] = strdup("Safeguard");
	movename_mapping[220] = strdup("Pain Split");
	movename_mapping[221] = strdup("Sacred Fire");
	movename_mapping[222] = strdup("Magnitude");
	movename_mapping[223] = strdup("Dynamic Punch");
	movename_mapping[224] = strdup("Megahorn");
	movename_mapping[225] = strdup("Dragon Breath");
	movename_mapping[226] = strdup("Baton Pass");
	movename_mapping[227] = strdup("Encore");
	movename_mapping[228] = strdup("Pursuit");
	movename_mapping[229] = strdup("Rapid Spin");
	movename_mapping[230] = strdup("Sweet Scent");
	movename_mapping[231] = strdup("Iron Tail");
	movename_mapping[232] = strdup("Metal Claw");
	movename_mapping[233] = strdup("Vital Throw");
	movename_mapping[234] = strdup("Morning Sun");
	movename_mapping[235] = strdup("Synthesis");
	movename_mapping[236] = strdup("Moonlight");
	movename_mapping[237] = strdup("Hidden Power");
	movename_mapping[238] = strdup("Cross Chop");
	movename_mapping[239] = strdup("Twister");
	movename_mapping[240] = strdup("Rain Dance");
	movename_mapping[241] = strdup("Sunny Day");
	movename_mapping[242] = strdup("Crunch");
	movename_mapping[243] = strdup("Mirror Coat");
	movename_mapping[244] = strdup("Psych Up");
	movename_mapping[245] = strdup("Extreme Speed");
	movename_mapping[246] = strdup("Ancient Power");
	movename_mapping[247] = strdup("Shadow Ball");
	movename_mapping[248] = strdup("Future Sight");
	movename_mapping[249] = strdup("Rock Smash");
	movename_mapping[250] = strdup("Whirlpool");
	movename_mapping[251] = strdup("Beat Up");
	movename_mapping[252] = strdup("Fake Out");
	movename_mapping[253] = strdup("Uproar");
	movename_mapping[254] = strdup("Stockpile");
	movename_mapping[255] = strdup("Spit Up");
	movename_mapping[256] = strdup("Swallow");
	movename_mapping[257] = strdup("Heat Wave");
	movename_mapping[258] = strdup("Hail");
	movename_mapping[259] = strdup("Torment");
	movename_mapping[260] = strdup("Flatter");
	movename_mapping[261] = strdup("Will-O-Wisp");
	movename_mapping[262] = strdup("Memento");
	movename_mapping[263] = strdup("Facade");
	movename_mapping[264] = strdup("Focus Punch");
	movename_mapping[265] = strdup("Smelling Salts");
	movename_mapping[266] = strdup("Follow Me");
	movename_mapping[267] = strdup("Nature Power");
	movename_mapping[268] = strdup("Charge");
	movename_mapping[269] = strdup("Taunt");
	movename_mapping[270] = strdup("Helping Hand");
	movename_mapping[271] = strdup("Trick");
	movename_mapping[272] = strdup("Role Play");
	movename_mapping[273] = strdup("Wish");
	movename_mapping[274] = strdup("Assist");
	movename_mapping[275] = strdup("Ingrain");
	movename_mapping[276] = strdup("Superpower");
	movename_mapping[277] = strdup("Magic Coat");
	movename_mapping[278] = strdup("Recycle");
	movename_mapping[279] = strdup("Revenge");
	movename_mapping[280] = strdup("Brick Break");
	movename_mapping[281] = strdup("Yawn");
	movename_mapping[282] = strdup("Knock Off");
	movename_mapping[283] = strdup("Endeavor");
	movename_mapping[284] = strdup("Eruption");
	movename_mapping[285] = strdup("Skill Swap");
	movename_mapping[286] = strdup("Imprison");
	movename_mapping[287] = strdup("Refresh");
	movename_mapping[288] = strdup("Grudge");
	movename_mapping[289] = strdup("Snatch");
	movename_mapping[290] = strdup("Secret Power");
	movename_mapping[291] = strdup("Dive");
	movename_mapping[292] = strdup("Arm Thrust");
	movename_mapping[293] = strdup("Camouflage");
	movename_mapping[294] = strdup("Tail Glow");
	movename_mapping[295] = strdup("Luster Purge");
	movename_mapping[296] = strdup("Mist Ball");
	movename_mapping[297] = strdup("Feather Dance");
	movename_mapping[298] = strdup("Teeter Dance");
	movename_mapping[299] = strdup("Blaze Kick");
	movename_mapping[300] = strdup("Mud Sport");
	movename_mapping[301] = strdup("Ice Ball");
	movename_mapping[302] = strdup("Needle Arm");
	movename_mapping[303] = strdup("Slack Off");
	movename_mapping[304] = strdup("Hyper Voice");
	movename_mapping[305] = strdup("Poison Fang");
	movename_mapping[306] = strdup("Crush Claw");
	movename_mapping[307] = strdup("Blast Burn");
	movename_mapping[308] = strdup("Hydro Cannon");
	movename_mapping[309] = strdup("Meteor Mash");
	movename_mapping[310] = strdup("Astonish");
	movename_mapping[311] = strdup("Weather Ball");
	movename_mapping[312] = strdup("Aromatherapy");
	movename_mapping[313] = strdup("Fake Tears");
	movename_mapping[314] = strdup("Air Cutter");
	movename_mapping[315] = strdup("Overheat");
	movename_mapping[316] = strdup("Odor Sleuth");
	movename_mapping[317] = strdup("Rock Tomb");
	movename_mapping[318] = strdup("Silver Wind");
	movename_mapping[319] = strdup("Metal Sound");
	movename_mapping[320] = strdup("Grass Whistle");
	movename_mapping[321] = strdup("Tickle");
	movename_mapping[322] = strdup("Cosmic Power");
	movename_mapping[323] = strdup("Water Spout");
	movename_mapping[324] = strdup("Signal Beam");
	movename_mapping[325] = strdup("Shadow Punch");
	movename_mapping[326] = strdup("Extrasensory");
	movename_mapping[327] = strdup("Sky Uppercut");
	movename_mapping[328] = strdup("Sand Tomb");
	movename_mapping[329] = strdup("Sheer Cold");
	movename_mapping[330] = strdup("Muddy Water");
	movename_mapping[331] = strdup("Bullet Seed");
	movename_mapping[332] = strdup("Aerial Ace");
	movename_mapping[333] = strdup("Icicle Spear");
	movename_mapping[334] = strdup("Iron Defense");
	movename_mapping[335] = strdup("Block");
	movename_mapping[336] = strdup("Howl");
	movename_mapping[337] = strdup("Dragon Claw");
	movename_mapping[338] = strdup("Frenzy Plant");
	movename_mapping[339] = strdup("Bulk Up");
	movename_mapping[340] = strdup("Bounce");
	movename_mapping[341] = strdup("Mud Shot");
	movename_mapping[342] = strdup("Poison Tail");
	movename_mapping[343] = strdup("Covet");
	movename_mapping[344] = strdup("Volt Tackle");
	movename_mapping[345] = strdup("Magical Leaf");
	movename_mapping[346] = strdup("Water Sport");
	movename_mapping[347] = strdup("Calm Mind");
	movename_mapping[348] = strdup("Leaf Blade");
	movename_mapping[349] = strdup("Dragon Dance");
	movename_mapping[350] = strdup("Rock Blast");
	movename_mapping[351] = strdup("Shock Wave");
	movename_mapping[352] = strdup("Water Pulse");
	movename_mapping[353] = strdup("Doom Desire");
	movename_mapping[354] = strdup("Psycho Boost");
	movename_mapping[355] = strdup("Leech Fang");
	movename_mapping[356] = strdup("Air Slash");
	movename_mapping[357] = strdup("Aqua Jet");
	movename_mapping[358] = strdup("Aqua Tail");
	movename_mapping[359] = strdup("Aura Sphere");
	movename_mapping[360] = strdup("Avalanche");
	movename_mapping[361] = strdup("Brave Bird");
	movename_mapping[362] = strdup("Bug Buzz");
	movename_mapping[363] = strdup("Bullet Punch");
	movename_mapping[364] = strdup("Charge Beam");
	movename_mapping[365] = strdup("Close Combat");
	movename_mapping[366] = strdup("Cross Poison");
	movename_mapping[367] = strdup("Dark Pulse");
	movename_mapping[368] = strdup("Discharge");
	movename_mapping[369] = strdup("Draco Meteor");
	movename_mapping[370] = strdup("Dragon Pulse");
	movename_mapping[371] = strdup("Drain Punch");
	movename_mapping[372] = strdup("Earth Power");
	movename_mapping[373] = strdup("Energy Ball");
	movename_mapping[374] = strdup("Focus Blast");
	movename_mapping[375] = strdup("Force Palm");
	movename_mapping[376] = strdup("Giga Impact");
	movename_mapping[377] = strdup("Grass Knot");
	movename_mapping[378] = strdup("Gunk Shot");
	movename_mapping[379] = strdup("Hammer Arm");
	movename_mapping[380] = strdup("Head Smash");
	movename_mapping[381] = strdup("Ice Shard");
	movename_mapping[382] = strdup("Iron Head");
	movename_mapping[383] = strdup("Lava Plume");
	movename_mapping[384] = strdup("Magnet Bomb");
	movename_mapping[385] = strdup("Mud Bomb");
	movename_mapping[386] = strdup("Nasty Plot");
	movename_mapping[387] = strdup("Night Slash");
	movename_mapping[388] = strdup("Ominous Wind");
	movename_mapping[389] = strdup("Power Gem");
	movename_mapping[390] = strdup("Power Whip");
	movename_mapping[391] = strdup("Psycho Cut");
	movename_mapping[392] = strdup("Rock Climb");
	movename_mapping[393] = strdup("Rock Polish");
	movename_mapping[394] = strdup("Rock Wrecker");
	movename_mapping[395] = strdup("Roost");
	movename_mapping[396] = strdup("Seed Bomb");
	movename_mapping[397] = strdup("Shadow Claw");
	movename_mapping[398] = strdup("Shadow Sneak");
	movename_mapping[399] = strdup("Vacuum Wave");
	movename_mapping[400] = strdup("X-Scissor");
	movename_mapping[401] = strdup("Zen Headbutt");
	movename_mapping[402] = strdup("Switcheroo");
	movename_mapping[403] = strdup("Drill Run");
	movename_mapping[404] = strdup("Bulldoze");
	movename_mapping[405] = strdup("Electroweb");
	movename_mapping[406] = strdup("Flame Charge");
	movename_mapping[407] = strdup("Frost Breath");
	movename_mapping[408] = strdup("Heart Stamp");
	movename_mapping[409] = strdup("Hone Claws");
	movename_mapping[410] = strdup("Horn Leech");
	movename_mapping[411] = strdup("Coil");
	movename_mapping[412] = strdup("Hurricane");
	movename_mapping[413] = strdup("Icicle Crash");
	movename_mapping[414] = strdup("Work Up");
	movename_mapping[415] = strdup("Quiver Dance");
	movename_mapping[416] = strdup("Leaf Tornado");
	movename_mapping[417] = strdup("Low Sweep");
	movename_mapping[418] = strdup("Snarl");
	movename_mapping[419] = strdup("Struggle Bug");
	movename_mapping[420] = strdup("Steamroller");
	movename_mapping[421] = strdup("Storm Throw");
	movename_mapping[422] = strdup("Venoshock");
	movename_mapping[423] = strdup("Wild Charge");
	movename_mapping[424] = strdup("Poison Jab");
	movename_mapping[425] = strdup("Acid Spray");
	movename_mapping[426] = strdup("Fiery Dance");
	movename_mapping[427] = strdup("Clear Smog");
	movename_mapping[428] = strdup("Leaf Storm");
	movename_mapping[429] = strdup("Stone Edge");
	movename_mapping[430] = strdup("Payback");
	movename_mapping[431] = strdup("Fire Fang");
	movename_mapping[432] = strdup("Ice Fang");
	movename_mapping[433] = strdup("Thunder Fang");
	movename_mapping[434] = strdup("Flare Blitz");
	movename_mapping[435] = strdup("Inferno");
	movename_mapping[436] = strdup("Hex");
	movename_mapping[437] = strdup("Dual Chop");
	movename_mapping[438] = strdup("Double Hit");
	movename_mapping[439] = strdup("Cotton Guard");
	movename_mapping[440] = strdup("Acrobatics");
	movename_mapping[441] = strdup("Flame Burst");
	movename_mapping[442] = strdup("U-turn");
	movename_mapping[443] = strdup("Volt Switch");
	movename_mapping[444] = strdup("Dragon Tail");
	movename_mapping[445] = strdup("Circle Throw");
	movename_mapping[446] = strdup("Mirror Shot");
	movename_mapping[447] = strdup("Wood Hammer");
	movename_mapping[448] = strdup("Heal Pulse");
	movename_mapping[449] = strdup("Flash Cannon");
	movename_mapping[450] = strdup("Bug Bite");
	movename_mapping[451] = strdup("Pluck");
	movename_mapping[452] = strdup("Shell Smash");
	movename_mapping[453] = strdup("Rage Powder");
	movename_mapping[454] = strdup("Wake-Up Slap");
	movename_mapping[455] = strdup("Razor Shell");
	movename_mapping[456] = strdup("Copycat");
	movename_mapping[457] = strdup("Miracle Eye");
	movename_mapping[458] = strdup("Sucker Punch");
	movename_mapping[459] = strdup("Scald");
	movename_mapping[460] = strdup("Brine");
	movename_mapping[461] = strdup("Fairy Wind");
	movename_mapping[462] = strdup("Baby-Doll Eyes");
	movename_mapping[463] = strdup("Play Rough");
	movename_mapping[464] = strdup("Moonblast");
	movename_mapping[465] = strdup("Draining Kiss");
	movename_mapping[466] = strdup("Dazzling Gleam");
	movename_mapping[467] = strdup("Disarming Voice");
	movename_mapping[468] = strdup("Stealth Rock");
	movename_mapping[469] = strdup("Toxic Spikes");
	movename_mapping[470] = strdup("Healing Wish");
	movename_mapping[471] = strdup("Lunar Dance");
	movename_mapping[472] = strdup("Tailwind");
	movename_mapping[473] = strdup("Boomburst");
	movename_mapping[474] = strdup("Incinerate");
	movename_mapping[475] = strdup("Worry Seed");
	movename_mapping[476] = strdup("Gastro Acid");
	movename_mapping[477] = strdup("Geomancy");
	movename_mapping[478] = strdup("Flower Shield");
	movename_mapping[479] = strdup("Rototiller");
	movename_mapping[480] = strdup("Shift Gear");
	movename_mapping[481] = strdup("Sticky Web");
	movename_mapping[482] = strdup("Stored Power");
	movename_mapping[483] = strdup("Acupressure");
	movename_mapping[484] = strdup("Punishment");
	movename_mapping[485] = strdup("Assurance");
	movename_mapping[486] = strdup("Dragon Rush");
	movename_mapping[487] = strdup("Dark Void");
	movename_mapping[488] = strdup("Feint");
	movename_mapping[489] = strdup("Phantom Force");
	movename_mapping[490] = strdup("Petal Blizzard");
	movename_mapping[491] = strdup("Play Nice");
	movename_mapping[492] = strdup("Roar of Time");
	movename_mapping[493] = strdup("Spacial Rend");
	movename_mapping[494] = strdup("Magma Storm");
	movename_mapping[495] = strdup("Final Gambit");
	movename_mapping[496] = strdup("Shadow Force");
	movename_mapping[497] = strdup("Nuzzle");
	movename_mapping[498] = strdup("Retaliate");
	movename_mapping[499] = strdup("Steely Hit");
	movename_mapping[500] = strdup("Judgment");
	movename_mapping[501] = strdup("Freeze-Dry");
	movename_mapping[502] = strdup("Psyshock");
	movename_mapping[503] = strdup("Round");
	movename_mapping[504] = strdup("Tail Slap");
	movename_mapping[505] = strdup("Gear Grind");
	movename_mapping[506] = strdup("Natural Gift");
	movename_mapping[507] = strdup("Chip Away");
	movename_mapping[508] = strdup("Smack Down");
	movename_mapping[509] = strdup("Hyperspace Hole");
	movename_mapping[510] = strdup("Gyro Ball");
	movename_mapping[511] = strdup("Hyperspace Fury");
	movename_mapping[512] = strdup("Attack Order");
	movename_mapping[513] = strdup("Defend Order");
	movename_mapping[514] = strdup("Heal Order");
	movename_mapping[515] = strdup("Captivate");
	movename_mapping[516] = strdup("Defog");
	movename_mapping[517] = strdup("Origin Pulse");
	movename_mapping[518] = strdup("Precipice Blades");
	movename_mapping[519] = strdup("Guard Swap");
	movename_mapping[520] = strdup("Steam Eruption");
	movename_mapping[521] = strdup("Metal Burst");
	movename_mapping[522] = strdup("Me First");
	movename_mapping[523] = strdup("Power Swap");
	movename_mapping[524] = strdup("Power Trick");
	movename_mapping[525] = strdup("Psycho Shift");
	movename_mapping[526] = strdup("Wring Out");
	movename_mapping[527] = strdup("King's Shield");
	movename_mapping[528] = strdup("Psystrike");
	movename_mapping[529] = strdup("Autotomize");
	movename_mapping[530] = strdup("Diamond Storm");
	movename_mapping[531] = strdup("Sludge Wave");
	movename_mapping[532] = strdup("Heavy Slam");
	movename_mapping[533] = strdup("Synchronoise");
	movename_mapping[534] = strdup("Electro Ball");
	movename_mapping[535] = strdup("Foul Play");
	movename_mapping[536] = strdup("Entrainment");
	movename_mapping[537] = strdup("Night Daze");
	movename_mapping[538] = strdup("Echoed Voice");
	movename_mapping[539] = strdup("Land's Wrath");
	movename_mapping[540] = strdup("Oblivion Wing");
	movename_mapping[541] = strdup("Heart Swap");
	movename_mapping[542] = strdup("Crush Grip");
	movename_mapping[543] = strdup("Sacred Sword");
	movename_mapping[544] = strdup("Heat Crash");
	movename_mapping[545] = strdup("Head Charge");
	movename_mapping[546] = strdup("Techno Blast");
	movename_mapping[547] = strdup("Relic Song");
	movename_mapping[548] = strdup("Secret Sword");
	movename_mapping[549] = strdup("Glaciate");
	movename_mapping[550] = strdup("Bolt Strike");
	movename_mapping[551] = strdup("Blue Flare");
	movename_mapping[552] = strdup("Freeze Shock");
	movename_mapping[553] = strdup("Ice Burn");
	movename_mapping[554] = strdup("V-create");
	movename_mapping[555] = strdup("Fusion Flare");
	movename_mapping[556] = strdup("Fusion Bolt");
	movename_mapping[557] = strdup("Fell Stinger");
	movename_mapping[558] = strdup("Noble Roar");
	movename_mapping[559] = strdup("Dragon Ascent");
	movename_mapping[560] = strdup("Parting Shot");
	movename_mapping[561] = strdup("Topsy-Turvy");
	movename_mapping[562] = strdup("Core Enforcer");
	movename_mapping[563] = strdup("Chatter");
	movename_mapping[564] = strdup("Confide");
	movename_mapping[565] = strdup("Water Shuriken");
	movename_mapping[566] = strdup("Mystical Fire");
	movename_mapping[567] = strdup("Spiky Shield");
	movename_mapping[568] = strdup("Eerie Impulse");
	movename_mapping[569] = strdup("Hold Back");
	movename_mapping[570] = strdup("Infestation");
	movename_mapping[571] = strdup("Power-up Punch");
	movename_mapping[572] = strdup("Thousand Arrows");
	movename_mapping[573] = strdup("Thousand Waves");
	movename_mapping[574] = strdup("Parabolic Charge");
	movename_mapping[575] = strdup("Searing Shot");
	movename_mapping[576] = strdup("Seed Flare");
	movename_mapping[577] = strdup("Accelerock");
	movename_mapping[578] = strdup("Anchor Shot");
	movename_mapping[579] = strdup("Aurora Veil");
	movename_mapping[580] = strdup("Baneful Bunker");
	movename_mapping[581] = strdup("Beak Blast");
	movename_mapping[582] = strdup("Brutal Swing");
	movename_mapping[583] = strdup("Burn Up");
	movename_mapping[584] = strdup("Clanging Scales");
	movename_mapping[585] = strdup("Darkest Lariat");
	movename_mapping[586] = strdup("Dragon Hammer");
	movename_mapping[587] = strdup("Fire Lash");
	movename_mapping[588] = strdup("First Impression");
	movename_mapping[589] = strdup("Fleur Cannon");
	movename_mapping[590] = strdup("Floral Healing");
	movename_mapping[591] = strdup("Gear Up");
	movename_mapping[592] = strdup("High Horsepower");
	movename_mapping[593] = strdup("Ice Hammer");
	movename_mapping[594] = strdup("Laser Focus");
	movename_mapping[595] = strdup("Leafage");
	movename_mapping[596] = strdup("Liquidation");
	movename_mapping[597] = strdup("Lunge");
	movename_mapping[598] = strdup("Moongeist Beam");
	movename_mapping[599] = strdup("Multi-Attack");
	movename_mapping[600] = strdup("Nature's Madness");
	movename_mapping[601] = strdup("Pollen Puff");
	movename_mapping[602] = strdup("Power Trip");
	movename_mapping[603] = strdup("Prismatic Laser");
	movename_mapping[604] = strdup("Psychic Fangs");
	movename_mapping[605] = strdup("Purify");
	movename_mapping[606] = strdup("Revelation Dance");
	movename_mapping[607] = strdup("Shadow Bone");
	movename_mapping[608] = strdup("Shell Trap");
	movename_mapping[609] = strdup("Shore Up");
	movename_mapping[610] = strdup("Smart Strike");
	movename_mapping[611] = strdup("Solar Blade");
	movename_mapping[612] = strdup("Sparkling Aria");
	movename_mapping[613] = strdup("Spectral Thief");
	movename_mapping[614] = strdup("Speed Swap");
	movename_mapping[615] = strdup("Spirit Shackle");
	movename_mapping[616] = strdup("Spotlight");
	movename_mapping[617] = strdup("Stomping Tantrum");
	movename_mapping[618] = strdup("Strength Sap");
	movename_mapping[619] = strdup("Sunsteel Strike");
	movename_mapping[620] = strdup("Tearful Look");
	movename_mapping[621] = strdup("Throat Chop");
	movename_mapping[622] = strdup("Toxic Thread");
	movename_mapping[623] = strdup("Trop Kick");
	movename_mapping[624] = strdup("Zing Zap");
	movename_mapping[625] = strdup("Electric Terrain");
	movename_mapping[626] = strdup("Grassy Terrain");
	movename_mapping[627] = strdup("Misty Terrain");
	movename_mapping[628] = strdup("Psychic Terrain");
	movename_mapping[629] = strdup("Grass Pledge");
	movename_mapping[630] = strdup("Fire Pledge");
	movename_mapping[631] = strdup("Water Pledge");
	movename_mapping[632] = strdup("Trick Room");
	movename_mapping[633] = strdup("Magic Room");
	movename_mapping[634] = strdup("Wonder Room");
	movename_mapping[635] = strdup("Crafty Shield");
	movename_mapping[636] = strdup("Mat Block");
	movename_mapping[637] = strdup("Quick Guard");
	movename_mapping[638] = strdup("Wide Guard");
	movename_mapping[639] = strdup("Aqua Ring");
	movename_mapping[640] = strdup("Aromatic Mist");
	movename_mapping[641] = strdup("Belch");
	movename_mapping[642] = strdup("Bestow");
	movename_mapping[643] = strdup("Fling");
	movename_mapping[644] = strdup("Flying Press");
	movename_mapping[645] = strdup("Gravity");
	movename_mapping[646] = strdup("Guard Split");
	movename_mapping[647] = strdup("Heal Block");
	movename_mapping[648] = strdup("Ion Deluge");
	movename_mapping[649] = strdup("Lucky Chant");
	movename_mapping[650] = strdup("Magnet Rise");
	movename_mapping[651] = strdup("Magnetic Flux");
	movename_mapping[652] = strdup("Powder");
	movename_mapping[653] = strdup("Power Split");
	movename_mapping[654] = strdup("Reflect Type");
	movename_mapping[655] = strdup("Simple Beam");
	movename_mapping[656] = strdup("Soak");
	movename_mapping[657] = strdup("Telekinesis");
	movename_mapping[658] = strdup("Trick-or-Treat");
	movename_mapping[659] = strdup("Venom Drench");
	movename_mapping[660] = strdup("Forest's Curse");
	movename_mapping[661] = strdup("Mind Blown");
	movename_mapping[662] = strdup("Photon Geyser");
	movename_mapping[663] = strdup("Plasma Fists");
	movename_mapping[664] = strdup("Electrify");
	movename_mapping[665] = strdup("Embargo");
	movename_mapping[666] = strdup("Fairy Lock");
	movename_mapping[667] = strdup("Light of Ruin");
	movename_mapping[668] = strdup("Trump Card");
	movename_mapping[669] = strdup("After You");
	movename_mapping[670] = strdup("Instruct");
	movename_mapping[671] = strdup("Quash");
	movename_mapping[672] = strdup("Happy Hour");
	movename_mapping[673] = strdup("Double Iron Bash");
	movename_mapping[674] = strdup("Last Resort");
	movename_mapping[675] = strdup("Sky Drop");
	movename_mapping[676] = strdup("Celebrate");
	movename_mapping[677] = strdup("Hold Hands");
	movename_mapping[678] = strdup("Dynamax Cannon");
	movename_mapping[679] = strdup("Snipe Shot");
	movename_mapping[680] = strdup("Jaw Lock");
	movename_mapping[681] = strdup("Stuff Cheeks");
	movename_mapping[682] = strdup("No Retreat");
	movename_mapping[683] = strdup("Tar Shot");
	movename_mapping[684] = strdup("Magic Powder");
	movename_mapping[685] = strdup("Dragon Darts");
	movename_mapping[686] = strdup("Tea Time");
	movename_mapping[687] = strdup("Octolock");
	movename_mapping[688] = strdup("Bolt Beak");
	movename_mapping[689] = strdup("Fishious Rend");
	movename_mapping[690] = strdup("Court Change");
	movename_mapping[691] = strdup("Clangorous Soul");
	movename_mapping[692] = strdup("Body Press");
	movename_mapping[693] = strdup("Decorate");
	movename_mapping[694] = strdup("Drum Beating");
	movename_mapping[695] = strdup("Snap Trap");
	movename_mapping[696] = strdup("Pyro Ball");
	movename_mapping[697] = strdup("Behemoth Blade");
	movename_mapping[698] = strdup("Behemoth Bash");
	movename_mapping[699] = strdup("Aura Wheel");
	movename_mapping[700] = strdup("Breaking Swipe");
	movename_mapping[701] = strdup("Branch Poke");
	movename_mapping[702] = strdup("Overdrive");
	movename_mapping[703] = strdup("Apple Acid");
	movename_mapping[704] = strdup("Grav Apple");
	movename_mapping[705] = strdup("Spirit Break");
	movename_mapping[706] = strdup("Strange Steam");
	movename_mapping[707] = strdup("Life Dew");
	movename_mapping[708] = strdup("Obstruct");
	movename_mapping[709] = strdup("False Surrender");
	movename_mapping[710] = strdup("Meteor Assault");
	movename_mapping[711] = strdup("Eternabeam");
	movename_mapping[712] = strdup("Steel Beam");
	movename_mapping[713] = strdup("Expanding Force");
	movename_mapping[714] = strdup("Steel Roller");
	movename_mapping[715] = strdup("Scale Shot");
	movename_mapping[716] = strdup("Meteor Beam");
	movename_mapping[717] = strdup("Shell Sidearm");
	movename_mapping[718] = strdup("Misty Explosion");
	movename_mapping[719] = strdup("Grassy Glide");
	movename_mapping[720] = strdup("Rising Voltage");
	movename_mapping[721] = strdup("Terrain Pulse");
	movename_mapping[722] = strdup("Skitter Smack");
	movename_mapping[723] = strdup("Burning Jealousy");
	movename_mapping[724] = strdup("Lash Out");
	movename_mapping[725] = strdup("Poltergeist");
	movename_mapping[726] = strdup("Corrosive Gas");
	movename_mapping[727] = strdup("Coaching");
	movename_mapping[728] = strdup("Flip Turn");
	movename_mapping[729] = strdup("Triple Axel");
	movename_mapping[730] = strdup("Dual Wingbeat");
	movename_mapping[731] = strdup("Scorching Sands");
	movename_mapping[732] = strdup("Jungle Healing");
	movename_mapping[733] = strdup("Wicked Blow");
	movename_mapping[734] = strdup("Surging Strikes");
	movename_mapping[735] = strdup("Freezing Glare");
	movename_mapping[736] = strdup("Thunderous Kick");
	movename_mapping[737] = strdup("Fiery Wrath");
	movename_mapping[738] = strdup("Eerie Spell");
	movename_mapping[739] = strdup("Thunder Cage");
	movename_mapping[740] = strdup("Dragon Energy");
	movename_mapping[741] = strdup("Astral Barrage");
	movename_mapping[742] = strdup("Glacial Lance");
	movename_mapping[743] = strdup("Dire Claw");
	movename_mapping[744] = strdup("Psyshield Bash");
	movename_mapping[745] = strdup("Power Shift");
	movename_mapping[746] = strdup("Stone Axe");
	movename_mapping[747] = strdup("Mystical Power");
	movename_mapping[748] = strdup("Raging Fury");
	movename_mapping[749] = strdup("Wave Crash");
	movename_mapping[750] = strdup("Chloroblast");
	movename_mapping[751] = strdup("Mountain Gale");
	movename_mapping[752] = strdup("Victory Dance");
	movename_mapping[753] = strdup("Headlong Rush");
	movename_mapping[754] = strdup("Barb Barrage");
	movename_mapping[755] = strdup("Esper Wing");
	movename_mapping[756] = strdup("Bitter Malice");
	movename_mapping[757] = strdup("Shelter");
	movename_mapping[758] = strdup("Triple Arrows");
	movename_mapping[759] = strdup("Infernal Parade");
	movename_mapping[760] = strdup("Ceaseless Edge");
	movename_mapping[761] = strdup("Bleak Windstorm");
	movename_mapping[762] = strdup("Wild Bolt Storm");
	movename_mapping[763] = strdup("Sandsear Storm");
	movename_mapping[764] = strdup("Springtide Storm");
	movename_mapping[765] = strdup("Lunar Blessing");
	movename_mapping[766] = strdup("Take Heart");
	movename_mapping[767] = strdup("Breakneck Blitz Physical");
	movename_mapping[768] = strdup("Breakneck Blitz Special");
	movename_mapping[769] = strdup("All-Out Pummeling Physical");
	movename_mapping[770] = strdup("All-Out Pummeling Special");
	movename_mapping[771] = strdup("Supersonic Skystrike Physical");
	movename_mapping[772] = strdup("Supersonic Skystrike Special");
	movename_mapping[773] = strdup("Acid Downpour Physical");
	movename_mapping[774] = strdup("Acid Downpour Special");
	movename_mapping[775] = strdup("Tectonic Rage Physical");
	movename_mapping[776] = strdup("Tectonic Rage Special");
	movename_mapping[777] = strdup("Continental Crush Physical");
	movename_mapping[778] = strdup("Continental Crush Special");
	movename_mapping[779] = strdup("Savage Spin-Out Physical");
	movename_mapping[780] = strdup("Savage Spin-Out Special");
	movename_mapping[781] = strdup("Never-Ending Nightmare Physical");
	movename_mapping[782] = strdup("Never-Ending Nightmare Special");
	movename_mapping[783] = strdup("Corkscrew Crash Physical");
	movename_mapping[784] = strdup("Corkscrew Crash Special");
	movename_mapping[785] = strdup("Inferno Overdrive Physical");
	movename_mapping[786] = strdup("Inferno Overdrive Special");
	movename_mapping[787] = strdup("Hydro Vortex Physical");
	movename_mapping[788] = strdup("Hydro Vortex Special");
	movename_mapping[789] = strdup("Bloom Doom Physical");
	movename_mapping[790] = strdup("Bloom Doom Special");
	movename_mapping[791] = strdup("Gigavolt Havoc Physical");
	movename_mapping[792] = strdup("Gigavolt Havoc Special");
	movename_mapping[793] = strdup("Shattered Psyche Physical");
	movename_mapping[794] = strdup("Shattered Psyche Special");
	movename_mapping[795] = strdup("Subzero Slammer Physical");
	movename_mapping[796] = strdup("Subzero Slammer Special");
	movename_mapping[797] = strdup("Devastating Drake Physical");
	movename_mapping[798] = strdup("Devastating Drake Special");
	movename_mapping[799] = strdup("Black Hole Eclipse Physical");
	movename_mapping[800] = strdup("Black Hole Eclipse Special");
	movename_mapping[801] = strdup("Twinkle Tackle Physical");
	movename_mapping[802] = strdup("Twinkle Tackle Special");
	movename_mapping[803] = strdup("Catastropika");
	movename_mapping[804] = strdup("10,000,000 Volt Thunderbolt");
	movename_mapping[805] = strdup("Stoked Sparksurfer");
	movename_mapping[806] = strdup("Extreme Evo Boost");
	movename_mapping[807] = strdup("Pulverizing Pancake");
	movename_mapping[808] = strdup("Genesis Supernova");
	movename_mapping[809] = strdup("Sinister Arrow Raid");
	movename_mapping[810] = strdup("Malicious Moonsault");
	movename_mapping[811] = strdup("Oceanic Operetta");
	movename_mapping[812] = strdup("Splintered Stormshards");
	movename_mapping[813] = strdup("Let's Snuggle Forever");
	movename_mapping[814] = strdup("Clangorous Soulblaze");
	movename_mapping[815] = strdup("Guardian of Alola");
	movename_mapping[816] = strdup("Searing Sunraze Smash");
	movename_mapping[817] = strdup("Menacing Moonraze Maelstrom");
	movename_mapping[818] = strdup("Light That Burns the Sky");
	movename_mapping[819] = strdup("Soul-Stealing 7-Star Strike");
	movename_mapping[820] = strdup("Max Guard");
	movename_mapping[821] = strdup("Max Flare Physical");
	movename_mapping[822] = strdup("Max Flare Special");
	movename_mapping[823] = strdup("Max Flutterby Physical");
	movename_mapping[824] = strdup("Max Flutterby Special");
	movename_mapping[825] = strdup("Max Lightning Physical");
	movename_mapping[826] = strdup("Max Lightning Special");
	movename_mapping[827] = strdup("Max Strike Physical");
	movename_mapping[828] = strdup("Max Strike Special");
	movename_mapping[829] = strdup("Max Knuckle Physical");
	movename_mapping[830] = strdup("Max Knuckle Special");
	movename_mapping[831] = strdup("Max Phantasm Physical");
	movename_mapping[832] = strdup("Max Phantasm Special");
	movename_mapping[833] = strdup("Max Hailstorm Physical");
	movename_mapping[834] = strdup("Max Hailstorm Special");
	movename_mapping[835] = strdup("Max Ooze Physical");
	movename_mapping[836] = strdup("Max Ooze Special");
	movename_mapping[837] = strdup("Max Geyser Physical");
	movename_mapping[838] = strdup("Max Geyser Special");
	movename_mapping[839] = strdup("Max Airstream Physical");
	movename_mapping[840] = strdup("Max Airstream Special");
	movename_mapping[841] = strdup("Max Starfall Physical");
	movename_mapping[842] = strdup("Max Starfall Special");
	movename_mapping[843] = strdup("Max Wyrmwind Physical");
	movename_mapping[844] = strdup("Max Wyrmwind Special");
	movename_mapping[845] = strdup("Max Mindstorm Physical");
	movename_mapping[846] = strdup("Max Mindstorm Special");
	movename_mapping[847] = strdup("Max Rockfall Physical");
	movename_mapping[848] = strdup("Max Rockfall Special");
	movename_mapping[849] = strdup("Max Quake Physical");
	movename_mapping[850] = strdup("Max Quake Special");
	movename_mapping[851] = strdup("Max Darkness Physical");
	movename_mapping[852] = strdup("Max Darkness Special");
	movename_mapping[853] = strdup("Max Overgrowth Physical");
	movename_mapping[854] = strdup("Max Overgrowth Special");
	movename_mapping[855] = strdup("Max Steel Spike Physical");
	movename_mapping[856] = strdup("Max Steel Spike Special");
	movename_mapping[857] = strdup("G-Max Vine Lash Physical");
	movename_mapping[858] = strdup("G-Max Vine Lash Special");
	movename_mapping[859] = strdup("G-Max Wildfire Physical");
	movename_mapping[860] = strdup("G-Max Wildfire Special");
	movename_mapping[861] = strdup("G-Max Cannonade Physical");
	movename_mapping[862] = strdup("G-Max Cannonade Special");
	movename_mapping[863] = strdup("G-Max Befuddle Physical");
	movename_mapping[864] = strdup("G-Max Befuddle Special");
	movename_mapping[865] = strdup("G-Max Volt Crash Physical");
	movename_mapping[866] = strdup("G-Max Volt Crash Special");
	movename_mapping[867] = strdup("G-Max Gold Rush Physical");
	movename_mapping[868] = strdup("G-Max Gold Rush Special");
	movename_mapping[869] = strdup("G-Max Chi Strike Physical");
	movename_mapping[870] = strdup("G-Max Chi Strike Special");
	movename_mapping[871] = strdup("G-Max Terror Physical");
	movename_mapping[872] = strdup("G-Max Terror Special");
	movename_mapping[873] = strdup("G-Max Foam Burst Physical");
	movename_mapping[874] = strdup("G-Max Foam Burst Special");
	movename_mapping[875] = strdup("G-Max Resonance Physical");
	movename_mapping[876] = strdup("G-Max Resonance Special");
	movename_mapping[877] = strdup("G-Max Cuddle Physical");
	movename_mapping[878] = strdup("G-Max Cuddle Special");
	movename_mapping[879] = strdup("G-Max Replenish Physical");
	movename_mapping[880] = strdup("G-Max Replenish Special");
	movename_mapping[881] = strdup("G-Max Malodor Physical");
	movename_mapping[882] = strdup("G-Max Malodor Special");
	movename_mapping[883] = strdup("G-Max Meltdown Physical");
	movename_mapping[884] = strdup("G-Max Meltdown Special");
	movename_mapping[885] = strdup("G-Max Drum Solo Physical");
	movename_mapping[886] = strdup("G-Max Drum Solo Special");
	movename_mapping[887] = strdup("G-Max Fireball Physical");
	movename_mapping[888] = strdup("G-Max Fireball Special");
	movename_mapping[889] = strdup("G-Max Hydrosnipe Physical");
	movename_mapping[890] = strdup("G-Max Hydrosnipe Special");
	movename_mapping[891] = strdup("G-Max Wind Rage Physical");
	movename_mapping[892] = strdup("G-Max Wind Rage Special");
	movename_mapping[893] = strdup("G-Max Gravitas Physical");
	movename_mapping[894] = strdup("G-Max Gravitas Special");
	movename_mapping[895] = strdup("G-Max Stone Surge Physical");
	movename_mapping[896] = strdup("G-Max Stone Surge Special");
	movename_mapping[897] = strdup("G-Max Volcalith Physical");
	movename_mapping[898] = strdup("G-Max Volcalith Special");
	movename_mapping[899] = strdup("G-Max Tartness Physical");
	movename_mapping[900] = strdup("G-Max Tartness Special");
	movename_mapping[901] = strdup("G-Max Sweetness Physical");
	movename_mapping[902] = strdup("G-Max Sweetness Special");
	movename_mapping[903] = strdup("G-Max Sandblast Physical");
	movename_mapping[904] = strdup("G-Max Sandblast Special");
	movename_mapping[905] = strdup("G-Max Stun Shock Physical");
	movename_mapping[906] = strdup("G-Max Stun Shock Special");
	movename_mapping[907] = strdup("G-Max Centiferno Physical");
	movename_mapping[908] = strdup("G-Max Centiferno Special");
	movename_mapping[909] = strdup("G-Max Smite Physical");
	movename_mapping[910] = strdup("G-Max Smite Special");
	movename_mapping[911] = strdup("G-Max Snooze Physical");
	movename_mapping[912] = strdup("G-Max Snooze Special");
	movename_mapping[913] = strdup("G-Max Finale Physical");
	movename_mapping[914] = strdup("G-Max Finale Special");
	movename_mapping[915] = strdup("G-Max Steelsurge Physical");
	movename_mapping[916] = strdup("G-Max Steelsurge Special");
	movename_mapping[917] = strdup("G-Max Depletion Physical");
	movename_mapping[918] = strdup("G-Max Depletion Special");
	movename_mapping[919] = strdup("G-Max One Blow Physical");
	movename_mapping[920] = strdup("G-Max One Blow Special");
	movename_mapping[921] = strdup("G-Max Rapid Flow Physical");
	movename_mapping[922] = strdup("G-Max Rapid Flow Special");

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