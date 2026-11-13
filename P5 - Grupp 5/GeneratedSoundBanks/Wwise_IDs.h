/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Audiokinetic Wwise generated include file. Do not edit.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __WWISE_IDS_H__
#define __WWISE_IDS_H__

#include <AK/SoundEngine/Common/AkTypes.h>

namespace AK
{
    namespace EVENTS
    {
        static const AkUniqueID INITIALIZE_MUSIC_SYSTEM = 4166188501U;
        static const AkUniqueID PAUSE_GAME = 528278262U;
        static const AkUniqueID PAUSE_MUSIC_SYSTEM = 475498527U;
        static const AkUniqueID PLAY_ABILITY_UNLOCKED = 1528054008U;
        static const AkUniqueID PLAY_AMBIENCE_LEVEL_1 = 2274326929U;
        static const AkUniqueID PLAY_AMBIENCE_LEVEL_2 = 2274326930U;
        static const AkUniqueID PLAY_BOSS_AOE_ATTACK = 227360424U;
        static const AkUniqueID PLAY_BOSS_AOE_WARNING = 4219410224U;
        static const AkUniqueID PLAY_BOSS_CHANGE_PHASE = 1268859200U;
        static const AkUniqueID PLAY_BOSS_DEATH = 3695176782U;
        static const AkUniqueID PLAY_BOSS_SCREAM = 3326215491U;
        static const AkUniqueID PLAY_BOSS_SPAWNING_POPCORN = 763268173U;
        static const AkUniqueID PLAY_BOSS_TAKE_DAMAGE = 438645199U;
        static const AkUniqueID PLAY_CHECHPOINT_REACHED = 1327141250U;
        static const AkUniqueID PLAY_END_TITLE = 1478662086U;
        static const AkUniqueID PLAY_ENEMY_POPCORN_ATTACK = 4254872019U;
        static const AkUniqueID PLAY_ENEMY_POPCORN_DEATH = 1966043283U;
        static const AkUniqueID PLAY_ENEMY_POPCORN_TAKE_DAMAGE = 4214071090U;
        static const AkUniqueID PLAY_ENEMY_POPCORN_WALK = 3453525588U;
        static const AkUniqueID PLAY_ENEMY_RANGED_AOE_CAST = 4089134270U;
        static const AkUniqueID PLAY_ENEMY_RANGED_AOE_HIT = 461636554U;
        static const AkUniqueID PLAY_ENEMY_RANGED_DEATH = 3914235351U;
        static const AkUniqueID PLAY_ENEMY_RANGED_TAKE_DAMAGE = 2391442630U;
        static const AkUniqueID PLAY_ENEMY_SUMMONER_ATTACK = 1454168108U;
        static const AkUniqueID PLAY_ENEMY_SUMMONER_DEATH = 1535617374U;
        static const AkUniqueID PLAY_ENEMY_SUMMONER_SURFACE = 1319327521U;
        static const AkUniqueID PLAY_ENEMY_SUMMONER_TAKE_DAMAGE = 2134822783U;
        static const AkUniqueID PLAY_INTRO_CUTSCENE = 1049578131U;
        static const AkUniqueID PLAY_INVALID_ACTION = 2264668508U;
        static const AkUniqueID PLAY_MENU_BACK = 455571771U;
        static const AkUniqueID PLAY_MENU_CONFIRM = 817598862U;
        static const AkUniqueID PLAY_MENU_HOVER = 3835684012U;
        static const AkUniqueID PLAY_PLAYER_CLEAVE_ABILLITY = 925767337U;
        static const AkUniqueID PLAY_PLAYER_DASH = 2175711460U;
        static const AkUniqueID PLAY_PLAYER_DEATH = 1835085974U;
        static const AkUniqueID PLAY_PLAYER_FOOTSTEP = 1724675634U;
        static const AkUniqueID PLAY_PLAYER_HEAL = 638998366U;
        static const AkUniqueID PLAY_PLAYER_HEAL_PICKUP = 4017243061U;
        static const AkUniqueID PLAY_PLAYER_LEVELUP = 1161564153U;
        static const AkUniqueID PLAY_PLAYER_MELEE_ATK = 2980837791U;
        static const AkUniqueID PLAY_PLAYER_RANGED_ATK = 1767242762U;
        static const AkUniqueID PLAY_PLAYER_RESPAWN = 4238880044U;
        static const AkUniqueID PLAY_PLAYER_TAKE_DAMAGE = 1172205655U;
        static const AkUniqueID PLAY_PLAYER_USE_ULTIMATE = 2301239065U;
        static const AkUniqueID PLAY_PLAYER_VINE_ABILLITY = 2195822293U;
        static const AkUniqueID PLAY_START_GAME = 3294915283U;
        static const AkUniqueID PLAY_WALLS_LOWERING = 4145597129U;
        static const AkUniqueID PLAY_WALLS_RISING = 1932334290U;
        static const AkUniqueID PLAY_WARNING_SOUND = 1297509074U;
        static const AkUniqueID RESUME_GAME = 1565052233U;
        static const AkUniqueID RESUME_MUSIC_SYSTEM = 1490314788U;
        static const AkUniqueID SET_MUSIC_TO_BOSS_FIGHT = 118758400U;
        static const AkUniqueID SET_MUSIC_TO_LEVELONE = 1056422470U;
        static const AkUniqueID SET_MUSIC_TO_LEVELTWO = 909513944U;
        static const AkUniqueID SET_MUSIC_TO_MAIN_TITLE = 699459892U;
        static const AkUniqueID STOP_MUSIC_SYSTEM = 3230625255U;
    } // namespace EVENTS

    namespace STATES
    {
        namespace GAMESTATE
        {
            static const AkUniqueID GROUP = 4091656514U;

            namespace STATE
            {
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID PAUSED = 319258907U;
                static const AkUniqueID UNPAUSED = 1365518790U;
            } // namespace STATE
        } // namespace GAMESTATE

        namespace MUSICSTATE
        {
            static const AkUniqueID GROUP = 1021618141U;

            namespace STATE
            {
                static const AkUniqueID BOSS = 1560169506U;
                static const AkUniqueID LEVEL_1 = 1290008369U;
                static const AkUniqueID LEVEL_2 = 1290008370U;
                static const AkUniqueID MAINMENU = 3604647259U;
                static const AkUniqueID NONE = 748895195U;
            } // namespace STATE
        } // namespace MUSICSTATE

    } // namespace STATES

    namespace SWITCHES
    {
        namespace BOSSSTATE
        {
            static const AkUniqueID GROUP = 3011728793U;

            namespace SWITCH
            {
                static const AkUniqueID PHASE_1 = 1622949422U;
                static const AkUniqueID PHASE_2 = 1622949421U;
                static const AkUniqueID PHASE_3 = 1622949420U;
            } // namespace SWITCH
        } // namespace BOSSSTATE

        namespace FOOTSTEPMATERIAL
        {
            static const AkUniqueID GROUP = 3287431056U;

            namespace SWITCH
            {
                static const AkUniqueID FLESH = 1153642577U;
                static const AkUniqueID GRASS = 4248645337U;
                static const AkUniqueID ROOTS = 1510358672U;
                static const AkUniqueID WOOD = 2058049674U;
            } // namespace SWITCH
        } // namespace FOOTSTEPMATERIAL

    } // namespace SWITCHES

    namespace GAME_PARAMETERS
    {
        static const AkUniqueID AMB_VOLUME = 509499584U;
        static const AkUniqueID MASTER_VOLUME = 4179668880U;
        static const AkUniqueID MUSIC_VOLUME = 1006694123U;
        static const AkUniqueID SFX_VOLUME = 1564184899U;
        static const AkUniqueID SS_AIR_FEAR = 1351367891U;
        static const AkUniqueID SS_AIR_FREEFALL = 3002758120U;
        static const AkUniqueID SS_AIR_FURY = 1029930033U;
        static const AkUniqueID SS_AIR_MONTH = 2648548617U;
        static const AkUniqueID SS_AIR_PRESENCE = 3847924954U;
        static const AkUniqueID SS_AIR_RPM = 822163944U;
        static const AkUniqueID SS_AIR_SIZE = 3074696722U;
        static const AkUniqueID SS_AIR_STORM = 3715662592U;
        static const AkUniqueID SS_AIR_TIMEOFDAY = 3203397129U;
        static const AkUniqueID SS_AIR_TURBULENCE = 4160247818U;
    } // namespace GAME_PARAMETERS

    namespace BANKS
    {
        static const AkUniqueID INIT = 1355168291U;
        static const AkUniqueID MAIN = 3161908922U;
    } // namespace BANKS

    namespace BUSSES
    {
        static const AkUniqueID AMB_BUS = 3319158528U;
        static const AkUniqueID ENEMY_BUS = 1411040840U;
        static const AkUniqueID ENVIRONMENT_BUS = 1523166483U;
        static const AkUniqueID MAIN_AUDIO_BUS = 2246998526U;
        static const AkUniqueID MUSIC_BUS = 2680856269U;
        static const AkUniqueID PLAYER_BUS = 1138681361U;
        static const AkUniqueID SFX_BUS = 213475909U;
        static const AkUniqueID UI_BUS = 3247222208U;
    } // namespace BUSSES

    namespace AUX_BUSSES
    {
        static const AkUniqueID WORLD_REVERB_BUS = 1492744757U;
    } // namespace AUX_BUSSES

    namespace AUDIO_DEVICES
    {
        static const AkUniqueID NO_OUTPUT = 2317455096U;
        static const AkUniqueID SYSTEM = 3859886410U;
    } // namespace AUDIO_DEVICES

}// namespace AK

#endif // __WWISE_IDS_H__
