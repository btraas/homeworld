//
//  ../Generated/Mission05.func.c
//
//  Finite state machine function pointers for "Mission05" mission
//
//  This code was autogenerated from Mission05.kp by KAS2C Version 2.05sdl
//


#include "../Generated/Mission05.h"  // prototypes and #includes for exposed game functions

// FSM init/watch function pointers.
const void* Mission05_FunctionPointers[] =
{
	(void*)Init_Mission05_FleetIntel,
	(void*)Watch_Mission05_FleetIntel,
	(void*)Init_Mission05_FleetIntel_FCIntro,
	(void*)Watch_Mission05_FleetIntel_FCIntro,
	(void*)Init_Mission05_FleetIntel_FISendProbeLBXIn,
	(void*)Watch_Mission05_FleetIntel_FISendProbeLBXIn,
	(void*)Init_Mission05_FleetIntel_FISendProbeOpenSensors,
	(void*)Watch_Mission05_FleetIntel_FISendProbeOpenSensors,
	(void*)Init_Mission05_FleetIntel_FISendProbe,
	(void*)Watch_Mission05_FleetIntel_FISendProbe,
	(void*)Init_Mission05_FleetIntel_FISendProbe2,
	(void*)Watch_Mission05_FleetIntel_FISendProbe2,
	(void*)Init_Mission05_FleetIntel_FISendProbePING,
	(void*)Watch_Mission05_FleetIntel_FISendProbePING,
	(void*)Init_Mission05_FleetIntel_FISendProbe3,
	(void*)Watch_Mission05_FleetIntel_FISendProbe3,
	(void*)Init_Mission05_FleetIntel_FISendProbeLBXOut,
	(void*)Watch_Mission05_FleetIntel_FISendProbeLBXOut,
	(void*)Init_Mission05_FleetIntel_FISendProbeWAITEND,
	(void*)Watch_Mission05_FleetIntel_FISendProbeWAITEND,
	(void*)Init_Mission05_FleetIntel_FISendProbeEND,
	(void*)Watch_Mission05_FleetIntel_FISendProbeEND,
	(void*)Init_Mission05_FleetIntel_FIEradicateEnemiesLBXIn,
	(void*)Watch_Mission05_FleetIntel_FIEradicateEnemiesLBXIn,
	(void*)Init_Mission05_FleetIntel_FIEradicateEnemiesOpenSensors,
	(void*)Watch_Mission05_FleetIntel_FIEradicateEnemiesOpenSensors,
	(void*)Init_Mission05_FleetIntel_FIEradicateEnemies,
	(void*)Watch_Mission05_FleetIntel_FIEradicateEnemies,
	(void*)Init_Mission05_FleetIntel_FIEradicateEnemies2,
	(void*)Watch_Mission05_FleetIntel_FIEradicateEnemies2,
	(void*)Init_Mission05_FleetIntel_FIEradicateEnemiesPING,
	(void*)Watch_Mission05_FleetIntel_FIEradicateEnemiesPING,
	(void*)Init_Mission05_FleetIntel_FIEradicateEnemiesLBXOut,
	(void*)Watch_Mission05_FleetIntel_FIEradicateEnemiesLBXOut,
	(void*)Init_Mission05_FleetIntel_FIEradicateEnemiesWAITEND,
	(void*)Watch_Mission05_FleetIntel_FIEradicateEnemiesWAITEND,
	(void*)Init_Mission05_FleetIntel_FIEradicateEnemiesEND,
	(void*)Watch_Mission05_FleetIntel_FIEradicateEnemiesEND,
	(void*)Init_Mission05_FleetIntel_FIDestroyResourcer,
	(void*)Watch_Mission05_FleetIntel_FIDestroyResourcer,
	(void*)Init_Mission05_FleetIntel_FITeachMoveAttack,
	(void*)Watch_Mission05_FleetIntel_FITeachMoveAttack,
	(void*)Init_Mission05_FleetIntel_FITeachDefenders,
	(void*)Watch_Mission05_FleetIntel_FITeachDefenders,
	(void*)Init_Mission05_FleetIntel_FIPlasmaTech,
	(void*)Watch_Mission05_FleetIntel_FIPlasmaTech,
	(void*)Init_Mission05_FleetIntel_FIIonTech,
	(void*)Watch_Mission05_FleetIntel_FIIonTech,
	(void*)Init_Mission05_FleetIntel_FIObjectivesComplete,
	(void*)Watch_Mission05_FleetIntel_FIObjectivesComplete,
	(void*)Init_Mission05_FleetIntel_FIIdle,
	(void*)Watch_Mission05_FleetIntel_FIIdle,
	(void*)Init_Mission05_Collector,
	(void*)Watch_Mission05_Collector,
	(void*)Init_Mission05_Collector_WaitingToCollect,
	(void*)Watch_Mission05_Collector_WaitingToCollect,
	(void*)Init_Mission05_Collector_MoveToHarvestArea,
	(void*)Watch_Mission05_Collector_MoveToHarvestArea,
	(void*)Init_Mission05_Collector_Harvest,
	(void*)Watch_Mission05_Collector_Harvest,
	(void*)Init_Mission05_Collector_Docking,
	(void*)Watch_Mission05_Collector_Docking,
	(void*)Init_Mission05_Collector_DockForGood,
	(void*)Watch_Mission05_Collector_DockForGood,
	(void*)Init_Mission05_Collector_NullState,
	(void*)Watch_Mission05_Collector_NullState,
	(void*)Init_Mission05_Interceptors,
	(void*)Watch_Mission05_Interceptors,
	(void*)Init_Mission05_Interceptors_AllDeadWaitForShips,
	(void*)Watch_Mission05_Interceptors_AllDeadWaitForShips,
	(void*)Init_Mission05_Interceptors_DockInstant,
	(void*)Watch_Mission05_Interceptors_DockInstant,
	(void*)Init_Mission05_Interceptors_WaitingToPatrol,
	(void*)Watch_Mission05_Interceptors_WaitingToPatrol,
	(void*)Init_Mission05_Interceptors_Launch,
	(void*)Watch_Mission05_Interceptors_Launch,
	(void*)Init_Mission05_Interceptors_Patrol,
	(void*)Watch_Mission05_Interceptors_Patrol,
	(void*)Init_Mission05_Interceptors_AttackNearby,
	(void*)Watch_Mission05_Interceptors_AttackNearby,
	(void*)Init_Mission05_Interceptors_AttackCarrierVol,
	(void*)Watch_Mission05_Interceptors_AttackCarrierVol,
	(void*)Init_Mission05_Interceptors_AttackFrigateVol,
	(void*)Watch_Mission05_Interceptors_AttackFrigateVol,
	(void*)Init_Mission05_Interceptors_GuardCollector,
	(void*)Watch_Mission05_Interceptors_GuardCollector,
	(void*)Init_Mission05_Interceptors_DockWithSupportFrigate,
	(void*)Watch_Mission05_Interceptors_DockWithSupportFrigate,
	(void*)Init_Mission05_Interceptors_BeingServiced,
	(void*)Watch_Mission05_Interceptors_BeingServiced,
	(void*)Init_Mission05_Interceptors_AttackCollector,
	(void*)Watch_Mission05_Interceptors_AttackCollector,
	(void*)Init_Mission05_Interceptors_ACT3Guard,
	(void*)Watch_Mission05_Interceptors_ACT3Guard,
	(void*)Init_Mission05_Interceptors_ACT3AttackWorld,
	(void*)Watch_Mission05_Interceptors_ACT3AttackWorld,
	(void*)Init_Mission05_Interceptors_NullState,
	(void*)Watch_Mission05_Interceptors_NullState,
	(void*)Init_Mission05_Frigates,
	(void*)Watch_Mission05_Frigates,
	(void*)Init_Mission05_Frigates_AllDeadWaitForShips,
	(void*)Watch_Mission05_Frigates_AllDeadWaitForShips,
	(void*)Init_Mission05_Frigates_WaitingToPatrol,
	(void*)Watch_Mission05_Frigates_WaitingToPatrol,
	(void*)Init_Mission05_Frigates_Patrol,
	(void*)Watch_Mission05_Frigates_Patrol,
	(void*)Init_Mission05_Frigates_DefendYourself,
	(void*)Watch_Mission05_Frigates_DefendYourself,
	(void*)Init_Mission05_Frigates_AttackLeftBox,
	(void*)Watch_Mission05_Frigates_AttackLeftBox,
	(void*)Init_Mission05_Frigates_AttackRightBox,
	(void*)Watch_Mission05_Frigates_AttackRightBox,
	(void*)Init_Mission05_Frigates_AttackCentreBox,
	(void*)Watch_Mission05_Frigates_AttackCentreBox,
	(void*)Init_Mission05_Frigates_AttackBottomBox,
	(void*)Watch_Mission05_Frigates_AttackBottomBox,
	(void*)Init_Mission05_Frigates_AttackTopBox,
	(void*)Watch_Mission05_Frigates_AttackTopBox,
	(void*)Init_Mission05_Frigates_ACT3AttackMothership,
	(void*)Watch_Mission05_Frigates_ACT3AttackMothership,
	(void*)Init_Mission05_Frigates_ACT3DefendYourself,
	(void*)Watch_Mission05_Frigates_ACT3DefendYourself,
	(void*)Init_Mission05_Frigates_NullState,
	(void*)Watch_Mission05_Frigates_NullState,
	(void*)Init_Mission05_Destroyers,
	(void*)Watch_Mission05_Destroyers,
	(void*)Init_Mission05_Destroyers_AllDeadWaitForShips,
	(void*)Watch_Mission05_Destroyers_AllDeadWaitForShips,
	(void*)Init_Mission05_Destroyers_WaitingToPatrol,
	(void*)Watch_Mission05_Destroyers_WaitingToPatrol,
	(void*)Init_Mission05_Destroyers_Patrol,
	(void*)Watch_Mission05_Destroyers_Patrol,
	(void*)Init_Mission05_Destroyers_AttackCarrierVol,
	(void*)Watch_Mission05_Destroyers_AttackCarrierVol,
	(void*)Init_Mission05_Destroyers_ACT3AttackMothership,
	(void*)Watch_Mission05_Destroyers_ACT3AttackMothership,
	(void*)Init_Mission05_Destroyers_ACT3DefendYourself,
	(void*)Watch_Mission05_Destroyers_ACT3DefendYourself,
	(void*)Init_Mission05_Destroyers_NullState,
	(void*)Watch_Mission05_Destroyers_NullState,
	(void*)Init_Mission05_SupportFrigate,
	(void*)Watch_Mission05_SupportFrigate,
	(void*)Init_Mission05_SupportFrigate_Wait,
	(void*)Watch_Mission05_SupportFrigate_Wait,
	(void*)Init_Mission05_SupportFrigate_GuardCarrier,
	(void*)Watch_Mission05_SupportFrigate_GuardCarrier,
	(void*)Init_Mission05_SupportFrigate_ACT3AttackMothership,
	(void*)Watch_Mission05_SupportFrigate_ACT3AttackMothership,
	(void*)Init_Mission05_SupportFrigate_ACT3DefendYourself,
	(void*)Watch_Mission05_SupportFrigate_ACT3DefendYourself,
	(void*)Init_Mission05_SupportFrigate_NullState,
	(void*)Watch_Mission05_SupportFrigate_NullState,
	(void*)Init_Mission05_Carrier,
	(void*)Watch_Mission05_Carrier,
	(void*)Init_Mission05_Carrier_Wait,
	(void*)Watch_Mission05_Carrier_Wait,
	(void*)Init_Mission05_Carrier_Patrol,
	(void*)Watch_Mission05_Carrier_Patrol,
	(void*)Init_Mission05_Carrier_UnderAttack,
	(void*)Watch_Mission05_Carrier_UnderAttack,
	(void*)Init_Mission05_Carrier_ACT3AttackMothership,
	(void*)Watch_Mission05_Carrier_ACT3AttackMothership,
	(void*)Init_Mission05_Carrier_ACT3DefendYourself,
	(void*)Watch_Mission05_Carrier_ACT3DefendYourself,
	(void*)Init_Mission05_Probes,
	(void*)Watch_Mission05_Probes,
	(void*)Init_Mission05_Probes_Wait,
	(void*)Watch_Mission05_Probes_Wait,
	(void*)Init_Mission05_Probes_RequestShips,
	(void*)Watch_Mission05_Probes_RequestShips,
	(void*)Init_Mission05_Probes_Move,
	(void*)Watch_Mission05_Probes_Move,
	(void*)Init_Mission05_Probes_NullState,
	(void*)Watch_Mission05_Probes_NullState,
	(void*)Init_Mission05_Defenders,
	(void*)Watch_Mission05_Defenders,
	(void*)Init_Mission05_Defenders_DockInstant,
	(void*)Watch_Mission05_Defenders_DockInstant,
	(void*)Init_Mission05_Defenders_Wait,
	(void*)Watch_Mission05_Defenders_Wait,
	(void*)Init_Mission05_Defenders_Launch,
	(void*)Watch_Mission05_Defenders_Launch,
	(void*)Init_Mission05_Defenders_Guard,
	(void*)Watch_Mission05_Defenders_Guard,
	(void*)Init_Mission05_Defenders_NullState,
	(void*)Watch_Mission05_Defenders_NullState,
	(void*)Init_Mission05_Kamikaze,
	(void*)Watch_Mission05_Kamikaze,
	(void*)Init_Mission05_Kamikaze_Dock,
	(void*)Watch_Mission05_Kamikaze_Dock,
	(void*)Init_Mission05_Kamikaze_Launch,
	(void*)Watch_Mission05_Kamikaze_Launch,
	(void*)Init_Mission05_Kamikaze_Kamikaze,
	(void*)Watch_Mission05_Kamikaze_Kamikaze,
	(void*)Init_Mission05_Kamikaze_NullState,
	(void*)Watch_Mission05_Kamikaze_NullState,
	(void*)Init_Mission05_Kamikaze2,
	(void*)Watch_Mission05_Kamikaze2,
	(void*)Init_Mission05_Kamikaze2_Dock,
	(void*)Watch_Mission05_Kamikaze2_Dock,
	(void*)Init_Mission05_Kamikaze2_Launch,
	(void*)Watch_Mission05_Kamikaze2_Launch,
	(void*)Init_Mission05_Kamikaze2_Kamikaze,
	(void*)Watch_Mission05_Kamikaze2_Kamikaze,
	(void*)Init_Mission05_Kamikaze2_NullState,
	(void*)Watch_Mission05_Kamikaze2_NullState,
	(void*)Init_Mission05,
	(void*)Watch_Mission05,
};

// Number of FSM init/watch function pointers.
const unsigned int Mission05_FunctionPointerCount = 208;
