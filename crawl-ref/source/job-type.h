#pragma once

enum job_type
{
    JOB_FIGHTER,
    JOB_WIZARD,
    JOB_PRIEST,
    JOB_GLADIATOR,
    JOB_NECROMANCER,
    JOB_ASSASSIN,
    JOB_BERSERKER,
    JOB_HUNTER,
    JOB_CONJURER,
    JOB_ENCHANTER,
    JOB_FIRE_ELEMENTALIST,
    JOB_ICE_ELEMENTALIST,
    JOB_SUMMONER,
    JOB_AIR_ELEMENTALIST,
    JOB_EARTH_ELEMENTALIST,
    JOB_SKALD,
    JOB_VENOM_MAGE,
    JOB_CHAOS_KNIGHT,
    JOB_TRANSMUTER,
    JOB_HEALER,
#if TAG_MAJOR_VERSION == 34
    JOB_STALKER,
#endif
    JOB_MONK,
    JOB_WARPER,
    JOB_WANDERER,
    JOB_ARTIFICER,                     //   Greenberg/Bane
    JOB_ARCANE_MARKSMAN,
    JOB_DEATH_KNIGHT,
    JOB_ABYSSAL_KNIGHT,
	JOB_ARCHAEOLOGIST,
#if TAG_MAJOR_VERSION == 34
    JOB_JESTER,
#endif
    NUM_JOBS,                          // always after the last job

    JOB_UNKNOWN = 100,
    JOB_RANDOM,
    JOB_VIABLE,
};
COMPILE_CHECK(NUM_JOBS < JOB_UNKNOWN);
