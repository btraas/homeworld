//
//  ../Generated/Mission12.func.c
//
//  Finite state machine function pointers for "Mission12" mission
//
//  This code was autogenerated from Mission12.kp by KAS2C Version 2.05sdl
//


#include "../Generated/Mission12.h"  // prototypes and #includes for exposed game functions

// FSM init/watch function pointers.
const void* Mission12_FunctionPointers[] =
{
	(void*)Init_Mission12_FleetIntel,
	(void*)Watch_Mission12_FleetIntel,
	(void*)Init_Mission12_FleetIntel_FCIntro,
	(void*)Watch_Mission12_FleetIntel_FCIntro,
	(void*)Init_Mission12_FleetIntel_FICaughtInField,
	(void*)Watch_Mission12_FleetIntel_FICaughtInField,
	(void*)Init_Mission12_FleetIntel_FIUnderAttack,
	(void*)Watch_Mission12_FleetIntel_FIUnderAttack,
	(void*)Init_Mission12_FleetIntel_FIMissileTechReady,
	(void*)Watch_Mission12_FleetIntel_FIMissileTechReady,
	(void*)Init_Mission12_FleetIntel_FINewFighterTech,
	(void*)Watch_Mission12_FleetIntel_FINewFighterTech,
	(void*)Init_Mission12_FleetIntel_FocusOnDefector,
	(void*)Watch_Mission12_FleetIntel_FocusOnDefector,
	(void*)Init_Mission12_FleetIntel_DefectorHelpMe,
	(void*)Watch_Mission12_FleetIntel_DefectorHelpMe,
	(void*)Init_Mission12_FleetIntel_DefectorHelpMe2,
	(void*)Watch_Mission12_FleetIntel_DefectorHelpMe2,
	(void*)Init_Mission12_FleetIntel_FIHelpDefector,
	(void*)Watch_Mission12_FleetIntel_FIHelpDefector,
	(void*)Init_Mission12_FleetIntel_FIDefectorOnBoard,
	(void*)Watch_Mission12_FleetIntel_FIDefectorOnBoard,
	(void*)Init_Mission12_FleetIntel_FIIdle,
	(void*)Watch_Mission12_FleetIntel_FIIdle,
	(void*)Init_Mission12_TestTeam,
	(void*)Watch_Mission12_TestTeam,
	(void*)Init_Mission12_TestTeam_Hide,
	(void*)Watch_Mission12_TestTeam_Hide,
	(void*)Init_Mission12_GravWells,
	(void*)Watch_Mission12_GravWells,
	(void*)Init_Mission12_GravWells_Move,
	(void*)Watch_Mission12_GravWells_Move,
	(void*)Init_Mission12_GravWells_Wait,
	(void*)Watch_Mission12_GravWells_Wait,
	(void*)Init_Mission12_GravWells_Wait2,
	(void*)Watch_Mission12_GravWells_Wait2,
	(void*)Init_Mission12_GravWells_GravityOn,
	(void*)Watch_Mission12_GravWells_GravityOn,
	(void*)Init_Mission12_GravWells_GravityOff,
	(void*)Watch_Mission12_GravWells_GravityOff,
	(void*)Init_Mission12_GravWellSupport,
	(void*)Watch_Mission12_GravWellSupport,
	(void*)Init_Mission12_GravWellSupport_Choose,
	(void*)Watch_Mission12_GravWellSupport_Choose,
	(void*)Init_Mission12_GravWellSupport_ServiceGravWell,
	(void*)Watch_Mission12_GravWellSupport_ServiceGravWell,
	(void*)Init_Mission12_GravWellSupport_ServiceCarrier,
	(void*)Watch_Mission12_GravWellSupport_ServiceCarrier,
	(void*)Init_Mission12_GravWellSupport_ServiceCruiser,
	(void*)Watch_Mission12_GravWellSupport_ServiceCruiser,
	(void*)Init_Mission12_GravWellSupport_GiveToAI,
	(void*)Watch_Mission12_GravWellSupport_GiveToAI,
	(void*)Init_Mission12_GuardGravWells,
	(void*)Watch_Mission12_GuardGravWells,
	(void*)Init_Mission12_GuardGravWells_Move,
	(void*)Watch_Mission12_GuardGravWells_Move,
	(void*)Init_Mission12_GuardGravWells_AttackFleet,
	(void*)Watch_Mission12_GuardGravWells_AttackFleet,
	(void*)Init_Mission12_GuardGravWells_AttackMothership,
	(void*)Watch_Mission12_GuardGravWells_AttackMothership,
	(void*)Init_Mission12_GuardGravWells_NullState,
	(void*)Watch_Mission12_GuardGravWells_NullState,
	(void*)Init_Mission12_AIShips,
	(void*)Watch_Mission12_AIShips,
	(void*)Init_Mission12_AIShips_GiveToAI,
	(void*)Watch_Mission12_AIShips_GiveToAI,
	(void*)Init_Mission12_Carrier,
	(void*)Watch_Mission12_Carrier,
	(void*)Init_Mission12_Carrier_ACT1Patrol,
	(void*)Watch_Mission12_Carrier_ACT1Patrol,
	(void*)Init_Mission12_Carrier_NullState,
	(void*)Watch_Mission12_Carrier_NullState,
	(void*)Init_Mission12_GuardCarrier,
	(void*)Watch_Mission12_GuardCarrier,
	(void*)Init_Mission12_GuardCarrier_Guard,
	(void*)Watch_Mission12_GuardCarrier_Guard,
	(void*)Init_Mission12_GuardCarrier_GuardCruiser,
	(void*)Watch_Mission12_GuardCarrier_GuardCruiser,
	(void*)Init_Mission12_GuardCarrier_AllDeadWaitForShips,
	(void*)Watch_Mission12_GuardCarrier_AllDeadWaitForShips,
	(void*)Init_Mission12_GuardCarrier_Kamikaze,
	(void*)Watch_Mission12_GuardCarrier_Kamikaze,
	(void*)Init_Mission12_GuardCarrier_Dock,
	(void*)Watch_Mission12_GuardCarrier_Dock,
	(void*)Init_Mission12_GuardCarrier_Launch,
	(void*)Watch_Mission12_GuardCarrier_Launch,
	(void*)Init_Mission12_GuardCarrier_NullState,
	(void*)Watch_Mission12_GuardCarrier_NullState,
	(void*)Init_Mission12_Cruiser,
	(void*)Watch_Mission12_Cruiser,
	(void*)Init_Mission12_Cruiser_Hide,
	(void*)Watch_Mission12_Cruiser_Hide,
	(void*)Init_Mission12_Cruiser_ComeOnIn,
	(void*)Watch_Mission12_Cruiser_ComeOnIn,
	(void*)Init_Mission12_Cruiser_AttackNearby,
	(void*)Watch_Mission12_Cruiser_AttackNearby,
	(void*)Init_Mission12_Cruiser_AttackFleet,
	(void*)Watch_Mission12_Cruiser_AttackFleet,
	(void*)Init_Mission12_Cruiser_AttackMothership,
	(void*)Watch_Mission12_Cruiser_AttackMothership,
	(void*)Init_Mission12_Cruiser_NullState,
	(void*)Watch_Mission12_Cruiser_NullState,
	(void*)Init_Mission12_GuardCruiser,
	(void*)Watch_Mission12_GuardCruiser,
	(void*)Init_Mission12_GuardCruiser_Hide,
	(void*)Watch_Mission12_GuardCruiser_Hide,
	(void*)Init_Mission12_GuardCruiser_Guard,
	(void*)Watch_Mission12_GuardCruiser_Guard,
	(void*)Init_Mission12_GuardCruiser_GuardCarrier,
	(void*)Watch_Mission12_GuardCruiser_GuardCarrier,
	(void*)Init_Mission12_GuardCruiser_Kamikaze,
	(void*)Watch_Mission12_GuardCruiser_Kamikaze,
	(void*)Init_Mission12_GuardCruiser_Dock,
	(void*)Watch_Mission12_GuardCruiser_Dock,
	(void*)Init_Mission12_GuardCruiser_Launch,
	(void*)Watch_Mission12_GuardCruiser_Launch,
	(void*)Init_Mission12_GuardCruiser_NullState,
	(void*)Watch_Mission12_GuardCruiser_NullState,
	(void*)Init_Mission12_STRInterceptors,
	(void*)Watch_Mission12_STRInterceptors,
	(void*)Init_Mission12_STRInterceptors_WaitForLaunchOrder,
	(void*)Watch_Mission12_STRInterceptors_WaitForLaunchOrder,
	(void*)Init_Mission12_STRInterceptors_Build,
	(void*)Watch_Mission12_STRInterceptors_Build,
	(void*)Init_Mission12_STRInterceptors_Decide,
	(void*)Watch_Mission12_STRInterceptors_Decide,
	(void*)Init_Mission12_STRInterceptors_AttackFleetAtMothership,
	(void*)Watch_Mission12_STRInterceptors_AttackFleetAtMothership,
	(void*)Init_Mission12_STRInterceptors_OnTheMoveToMothership,
	(void*)Watch_Mission12_STRInterceptors_OnTheMoveToMothership,
	(void*)Init_Mission12_STRInterceptors_AttackNearby,
	(void*)Watch_Mission12_STRInterceptors_AttackNearby,
	(void*)Init_Mission12_STRInterceptors_AttackRestOfWorld,
	(void*)Watch_Mission12_STRInterceptors_AttackRestOfWorld,
	(void*)Init_Mission12_STRInterceptors_OnTheMoveToRestOfWorld,
	(void*)Watch_Mission12_STRInterceptors_OnTheMoveToRestOfWorld,
	(void*)Init_Mission12_STRInterceptors_GuardCarrier,
	(void*)Watch_Mission12_STRInterceptors_GuardCarrier,
	(void*)Init_Mission12_STRInterceptors_Dock,
	(void*)Watch_Mission12_STRInterceptors_Dock,
	(void*)Init_Mission12_STRInterceptors_Launch,
	(void*)Watch_Mission12_STRInterceptors_Launch,
	(void*)Init_Mission12_STRInterceptors_NullState,
	(void*)Watch_Mission12_STRInterceptors_NullState,
	(void*)Init_Mission12_STRBombers,
	(void*)Watch_Mission12_STRBombers,
	(void*)Init_Mission12_STRBombers_WaitForLaunchOrder,
	(void*)Watch_Mission12_STRBombers_WaitForLaunchOrder,
	(void*)Init_Mission12_STRBombers_Build,
	(void*)Watch_Mission12_STRBombers_Build,
	(void*)Init_Mission12_STRBombers_Decide,
	(void*)Watch_Mission12_STRBombers_Decide,
	(void*)Init_Mission12_STRBombers_Guard,
	(void*)Watch_Mission12_STRBombers_Guard,
	(void*)Init_Mission12_STRBombers_AttackFleetAtMothership,
	(void*)Watch_Mission12_STRBombers_AttackFleetAtMothership,
	(void*)Init_Mission12_STRBombers_OnTheMoveToMothership,
	(void*)Watch_Mission12_STRBombers_OnTheMoveToMothership,
	(void*)Init_Mission12_STRBombers_AttackNearby,
	(void*)Watch_Mission12_STRBombers_AttackNearby,
	(void*)Init_Mission12_STRBombers_AttackRestOfWorld,
	(void*)Watch_Mission12_STRBombers_AttackRestOfWorld,
	(void*)Init_Mission12_STRBombers_OnTheMoveToRestOfWorld,
	(void*)Watch_Mission12_STRBombers_OnTheMoveToRestOfWorld,
	(void*)Init_Mission12_STRBombers_GuardCarrier,
	(void*)Watch_Mission12_STRBombers_GuardCarrier,
	(void*)Init_Mission12_STRBombers_Dock,
	(void*)Watch_Mission12_STRBombers_Dock,
	(void*)Init_Mission12_STRBombers_Launch,
	(void*)Watch_Mission12_STRBombers_Launch,
	(void*)Init_Mission12_STRBombers_NullState,
	(void*)Watch_Mission12_STRBombers_NullState,
	(void*)Init_Mission12_STRMG,
	(void*)Watch_Mission12_STRMG,
	(void*)Init_Mission12_STRMG_WaitForLaunchOrder,
	(void*)Watch_Mission12_STRMG_WaitForLaunchOrder,
	(void*)Init_Mission12_STRMG_Build,
	(void*)Watch_Mission12_STRMG_Build,
	(void*)Init_Mission12_STRMG_Decide,
	(void*)Watch_Mission12_STRMG_Decide,
	(void*)Init_Mission12_STRMG_Guard,
	(void*)Watch_Mission12_STRMG_Guard,
	(void*)Init_Mission12_STRMG_AttackFleetAtMothership,
	(void*)Watch_Mission12_STRMG_AttackFleetAtMothership,
	(void*)Init_Mission12_STRMG_OnTheMoveToMothership,
	(void*)Watch_Mission12_STRMG_OnTheMoveToMothership,
	(void*)Init_Mission12_STRMG_AttackNearby,
	(void*)Watch_Mission12_STRMG_AttackNearby,
	(void*)Init_Mission12_STRMG_AttackRestOfWorld,
	(void*)Watch_Mission12_STRMG_AttackRestOfWorld,
	(void*)Init_Mission12_STRMG_OnTheMoveToRestOfWorld,
	(void*)Watch_Mission12_STRMG_OnTheMoveToRestOfWorld,
	(void*)Init_Mission12_STRMG_GuardCarrier,
	(void*)Watch_Mission12_STRMG_GuardCarrier,
	(void*)Init_Mission12_STRMG_Dock,
	(void*)Watch_Mission12_STRMG_Dock,
	(void*)Init_Mission12_STRMG_Launch,
	(void*)Watch_Mission12_STRMG_Launch,
	(void*)Init_Mission12_STRMG_NullState,
	(void*)Watch_Mission12_STRMG_NullState,
	(void*)Init_Mission12_STRGW,
	(void*)Watch_Mission12_STRGW,
	(void*)Init_Mission12_STRGW_WaitForLaunchOrder,
	(void*)Watch_Mission12_STRGW_WaitForLaunchOrder,
	(void*)Init_Mission12_STRGW_Build,
	(void*)Watch_Mission12_STRGW_Build,
	(void*)Init_Mission12_STRGW_Decide,
	(void*)Watch_Mission12_STRGW_Decide,
	(void*)Init_Mission12_STRGW_Guard,
	(void*)Watch_Mission12_STRGW_Guard,
	(void*)Init_Mission12_STRGW_GuardGravityOn,
	(void*)Watch_Mission12_STRGW_GuardGravityOn,
	(void*)Init_Mission12_STRGW_GuardGravityOff,
	(void*)Watch_Mission12_STRGW_GuardGravityOff,
	(void*)Init_Mission12_STRGW_AttackFleetAtMothership,
	(void*)Watch_Mission12_STRGW_AttackFleetAtMothership,
	(void*)Init_Mission12_STRGW_OnTheMoveToMothership,
	(void*)Watch_Mission12_STRGW_OnTheMoveToMothership,
	(void*)Init_Mission12_STRGW_AttackNearby,
	(void*)Watch_Mission12_STRGW_AttackNearby,
	(void*)Init_Mission12_STRGW_AttackRestOfWorld,
	(void*)Watch_Mission12_STRGW_AttackRestOfWorld,
	(void*)Init_Mission12_STRGW_OnTheMoveToRestOfWorld,
	(void*)Watch_Mission12_STRGW_OnTheMoveToRestOfWorld,
	(void*)Init_Mission12_STRGW_GuardCarrier,
	(void*)Watch_Mission12_STRGW_GuardCarrier,
	(void*)Init_Mission12_STRGW_NullState,
	(void*)Watch_Mission12_STRGW_NullState,
	(void*)Init_Mission12_STRCG,
	(void*)Watch_Mission12_STRCG,
	(void*)Init_Mission12_STRCG_WaitForLaunchOrder,
	(void*)Watch_Mission12_STRCG_WaitForLaunchOrder,
	(void*)Init_Mission12_STRCG_Build,
	(void*)Watch_Mission12_STRCG_Build,
	(void*)Init_Mission12_STRCG_Decide,
	(void*)Watch_Mission12_STRCG_Decide,
	(void*)Init_Mission12_STRCG_Guard,
	(void*)Watch_Mission12_STRCG_Guard,
	(void*)Init_Mission12_STRCG_GuardCloakityOn,
	(void*)Watch_Mission12_STRCG_GuardCloakityOn,
	(void*)Init_Mission12_STRCG_GuardCloakityOff,
	(void*)Watch_Mission12_STRCG_GuardCloakityOff,
	(void*)Init_Mission12_STRCG_AttackFleetAtMothership,
	(void*)Watch_Mission12_STRCG_AttackFleetAtMothership,
	(void*)Init_Mission12_STRCG_OnTheMoveToMothership,
	(void*)Watch_Mission12_STRCG_OnTheMoveToMothership,
	(void*)Init_Mission12_STRCG_AttackNearby,
	(void*)Watch_Mission12_STRCG_AttackNearby,
	(void*)Init_Mission12_STRCG_AttackRestOfWorld,
	(void*)Watch_Mission12_STRCG_AttackRestOfWorld,
	(void*)Init_Mission12_STRCG_OnTheMoveToRestOfWorld,
	(void*)Watch_Mission12_STRCG_OnTheMoveToRestOfWorld,
	(void*)Init_Mission12_STRCG_GuardCarrier,
	(void*)Watch_Mission12_STRCG_GuardCarrier,
	(void*)Init_Mission12_STRCG_NullState,
	(void*)Watch_Mission12_STRCG_NullState,
	(void*)Init_Mission12_Defector,
	(void*)Watch_Mission12_Defector,
	(void*)Init_Mission12_Defector_HyperspaceOut,
	(void*)Watch_Mission12_Defector_HyperspaceOut,
	(void*)Init_Mission12_Defector_HyperspaceIn,
	(void*)Watch_Mission12_Defector_HyperspaceIn,
	(void*)Init_Mission12_Defector_GetToPlayerMothership,
	(void*)Watch_Mission12_Defector_GetToPlayerMothership,
	(void*)Init_Mission12_Defector_WaitToHyperspaceOut,
	(void*)Watch_Mission12_Defector_WaitToHyperspaceOut,
	(void*)Init_Mission12_Defector_HyperspaceOut2,
	(void*)Watch_Mission12_Defector_HyperspaceOut2,
	(void*)Init_Mission12_Defector_NullState,
	(void*)Watch_Mission12_Defector_NullState,
	(void*)Init_Mission12_ChaseDefector,
	(void*)Watch_Mission12_ChaseDefector,
	(void*)Init_Mission12_ChaseDefector_WaitToHyperspace,
	(void*)Watch_Mission12_ChaseDefector_WaitToHyperspace,
	(void*)Init_Mission12_ChaseDefector_HyperspaceOut,
	(void*)Watch_Mission12_ChaseDefector_HyperspaceOut,
	(void*)Init_Mission12_ChaseDefector_WaitToAttack,
	(void*)Watch_Mission12_ChaseDefector_WaitToAttack,
	(void*)Init_Mission12_ChaseDefector_AttackDefector,
	(void*)Watch_Mission12_ChaseDefector_AttackDefector,
	(void*)Init_Mission12_ChaseDefector_MoveAttackDefector,
	(void*)Watch_Mission12_ChaseDefector_MoveAttackDefector,
	(void*)Init_Mission12_ChaseDefector_AttackNearby,
	(void*)Watch_Mission12_ChaseDefector_AttackNearby,
	(void*)Init_Mission12_ChaseDefector_Dock,
	(void*)Watch_Mission12_ChaseDefector_Dock,
	(void*)Init_Mission12_ChaseDefector_WaitToLaunch,
	(void*)Watch_Mission12_ChaseDefector_WaitToLaunch,
	(void*)Init_Mission12_ChaseDefector_LaunchInts,
	(void*)Watch_Mission12_ChaseDefector_LaunchInts,
	(void*)Init_Mission12_ChaseDefector_NullState,
	(void*)Watch_Mission12_ChaseDefector_NullState,
	(void*)Init_Mission12_StrikeTeamDispatch,
	(void*)Watch_Mission12_StrikeTeamDispatch,
	(void*)Init_Mission12_StrikeTeamDispatch_WaitForACT2,
	(void*)Watch_Mission12_StrikeTeamDispatch_WaitForACT2,
	(void*)Init_Mission12_StrikeTeamDispatch_BeginSTRInterceptors,
	(void*)Watch_Mission12_StrikeTeamDispatch_BeginSTRInterceptors,
	(void*)Init_Mission12_StrikeTeamDispatch_BeginSTRBombers,
	(void*)Watch_Mission12_StrikeTeamDispatch_BeginSTRBombers,
	(void*)Init_Mission12_StrikeTeamDispatch_BeginSTRMGs,
	(void*)Watch_Mission12_StrikeTeamDispatch_BeginSTRMGs,
	(void*)Init_Mission12_StrikeTeamDispatch_BeginSTRGWs,
	(void*)Watch_Mission12_StrikeTeamDispatch_BeginSTRGWs,
	(void*)Init_Mission12_StrikeTeamDispatch_BeginSTRCGs,
	(void*)Watch_Mission12_StrikeTeamDispatch_BeginSTRCGs,
	(void*)Init_Mission12_StrikeTeamDispatch_NullState,
	(void*)Watch_Mission12_StrikeTeamDispatch_NullState,
	(void*)Init_Mission12,
	(void*)Watch_Mission12,
};

// Number of FSM init/watch function pointers.
const unsigned int Mission12_FunctionPointerCount = 310;
