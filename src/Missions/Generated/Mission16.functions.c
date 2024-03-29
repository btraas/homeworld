//
//  ../Generated/Mission16.functions.c
//
//  Finite state machine function pointers for "Mission16" mission
//
//  This code was autogenerated from Mission16.kp by KAS2C Version 2.05sdl
//


#include "../Generated/Mission16.h"  // prototypes and #includes for exposed game functions

// FSM init/watch function pointers.
const void* Mission16_FunctionPointers[] =
{
	(void*)Init_Mission16_Events,
	(void*)Watch_Mission16_Events,
	(void*)Init_Mission16_Events_LocationCard,
	(void*)Watch_Mission16_Events_LocationCard,
	(void*)Init_Mission16_Events_Wait1,
	(void*)Watch_Mission16_Events_Wait1,
	(void*)Init_Mission16_Events_LBXIn1,
	(void*)Watch_Mission16_Events_LBXIn1,
	(void*)Init_Mission16_Events_KaranMindControlled,
	(void*)Watch_Mission16_Events_KaranMindControlled,
	(void*)Init_Mission16_Events_OhBoyHereWeGo,
	(void*)Watch_Mission16_Events_OhBoyHereWeGo,
	(void*)Init_Mission16_Events_EmperorsShip,
	(void*)Watch_Mission16_Events_EmperorsShip,
	(void*)Init_Mission16_Events_LBXIn3,
	(void*)Watch_Mission16_Events_LBXIn3,
	(void*)Init_Mission16_Events_Reinforcements,
	(void*)Watch_Mission16_Events_Reinforcements,
	(void*)Init_Mission16_Events_Overwhelmed,
	(void*)Watch_Mission16_Events_Overwhelmed,
	(void*)Init_Mission16_Events_YayImHereButHurt,
	(void*)Watch_Mission16_Events_YayImHereButHurt,
	(void*)Init_Mission16_Events_HeresTheEmperor,
	(void*)Watch_Mission16_Events_HeresTheEmperor,
	(void*)Init_Mission16_Events_LBXIn4,
	(void*)Watch_Mission16_Events_LBXIn4,
	(void*)Init_Mission16_Events_HereIsMothership,
	(void*)Watch_Mission16_Events_HereIsMothership,
	(void*)Init_Mission16_Events_LBXIn2,
	(void*)Watch_Mission16_Events_LBXIn2,
	(void*)Init_Mission16_Events_HoneyImHome,
	(void*)Watch_Mission16_Events_HoneyImHome,
	(void*)Init_Mission16_Events_CouncilHere,
	(void*)Watch_Mission16_Events_CouncilHere,
	(void*)Init_Mission16_Events_NullState,
	(void*)Watch_Mission16_Events_NullState,
	(void*)Init_Mission16_GiveToAI,
	(void*)Watch_Mission16_GiveToAI,
	(void*)Init_Mission16_GiveToAI_Give,
	(void*)Watch_Mission16_GiveToAI_Give,
	(void*)Init_Mission16_GiveToAI_Given,
	(void*)Watch_Mission16_GiveToAI_Given,
	(void*)Init_Mission16_Council,
	(void*)Watch_Mission16_Council,
	(void*)Init_Mission16_Council_HyperspaceOut,
	(void*)Watch_Mission16_Council_HyperspaceOut,
	(void*)Init_Mission16_Council_SetDelays,
	(void*)Watch_Mission16_Council_SetDelays,
	(void*)Init_Mission16_Council_HyperspaceIn,
	(void*)Watch_Mission16_Council_HyperspaceIn,
	(void*)Init_Mission16_Council_NullState,
	(void*)Watch_Mission16_Council_NullState,
	(void*)Init_Mission16_Resource,
	(void*)Watch_Mission16_Resource,
	(void*)Init_Mission16_Resource_MoveToResourcePoint,
	(void*)Watch_Mission16_Resource_MoveToResourcePoint,
	(void*)Init_Mission16_Resource_Resource,
	(void*)Watch_Mission16_Resource_Resource,
	(void*)Init_Mission16_Resource_Replenish,
	(void*)Watch_Mission16_Resource_Replenish,
	(void*)Init_Mission16_Support,
	(void*)Watch_Mission16_Support,
	(void*)Init_Mission16_Support_SupportHCs,
	(void*)Watch_Mission16_Support_SupportHCs,
	(void*)Init_Mission16_Support_SupportMothership,
	(void*)Watch_Mission16_Support_SupportMothership,
	(void*)Init_Mission16_Support_NullState,
	(void*)Watch_Mission16_Support_NullState,
	(void*)Init_Mission16_Mining,
	(void*)Watch_Mission16_Mining,
	(void*)Init_Mission16_Mining_Wait,
	(void*)Watch_Mission16_Mining_Wait,
	(void*)Init_Mission16_Mining_MinePoints,
	(void*)Watch_Mission16_Mining_MinePoints,
	(void*)Init_Mission16_Mining_MinePort,
	(void*)Watch_Mission16_Mining_MinePort,
	(void*)Init_Mission16_Mining_MineSB,
	(void*)Watch_Mission16_Mining_MineSB,
	(void*)Init_Mission16_Mining_MineField1,
	(void*)Watch_Mission16_Mining_MineField1,
	(void*)Init_Mission16_Mining_MineField2,
	(void*)Watch_Mission16_Mining_MineField2,
	(void*)Init_Mission16_Mining_WaitForMove,
	(void*)Watch_Mission16_Mining_WaitForMove,
	(void*)Init_Mission16_Mining_Align,
	(void*)Watch_Mission16_Mining_Align,
	(void*)Init_Mission16_Mining_LayMines,
	(void*)Watch_Mission16_Mining_LayMines,
	(void*)Init_Mission16_Mining_NullState,
	(void*)Watch_Mission16_Mining_NullState,
	(void*)Init_Mission16_ProximityRoving,
	(void*)Watch_Mission16_ProximityRoving,
	(void*)Init_Mission16_ProximityRoving_StartRoving,
	(void*)Watch_Mission16_ProximityRoving_StartRoving,
	(void*)Init_Mission16_ProximityRoving_Roam,
	(void*)Watch_Mission16_ProximityRoving_Roam,
	(void*)Init_Mission16_ProximityRoving_ShadowIntruder,
	(void*)Watch_Mission16_ProximityRoving_ShadowIntruder,
	(void*)Init_Mission16_ProximityRoving_NullState,
	(void*)Watch_Mission16_ProximityRoving_NullState,
	(void*)Init_Mission16_TakeoutTarget,
	(void*)Watch_Mission16_TakeoutTarget,
	(void*)Init_Mission16_TakeoutTarget_Dock,
	(void*)Watch_Mission16_TakeoutTarget_Dock,
	(void*)Init_Mission16_TakeoutTarget_Wait,
	(void*)Watch_Mission16_TakeoutTarget_Wait,
	(void*)Init_Mission16_TakeoutTarget_ChooseType,
	(void*)Watch_Mission16_TakeoutTarget_ChooseType,
	(void*)Init_Mission16_TakeoutTarget_InterceptTarget,
	(void*)Watch_Mission16_TakeoutTarget_InterceptTarget,
	(void*)Init_Mission16_TakeoutTarget_GravWellDistCheck,
	(void*)Watch_Mission16_TakeoutTarget_GravWellDistCheck,
	(void*)Init_Mission16_TakeoutTarget_CloakGenDistCheck,
	(void*)Watch_Mission16_TakeoutTarget_CloakGenDistCheck,
	(void*)Init_Mission16_TakeoutTarget_ReturnToMothership,
	(void*)Watch_Mission16_TakeoutTarget_ReturnToMothership,
	(void*)Init_Mission16_TakeoutTarget_AttackYummies,
	(void*)Watch_Mission16_TakeoutTarget_AttackYummies,
	(void*)Init_Mission16_TakeoutTarget_KillSelf,
	(void*)Watch_Mission16_TakeoutTarget_KillSelf,
	(void*)Init_Mission16_TakeoutTarget_NullState,
	(void*)Watch_Mission16_TakeoutTarget_NullState,
	(void*)Init_Mission16_StrikeCraftAssault,
	(void*)Watch_Mission16_StrikeCraftAssault,
	(void*)Init_Mission16_StrikeCraftAssault_MoveToTarget,
	(void*)Watch_Mission16_StrikeCraftAssault_MoveToTarget,
	(void*)Init_Mission16_StrikeCraftAssault_PrioritizeAttack,
	(void*)Watch_Mission16_StrikeCraftAssault_PrioritizeAttack,
	(void*)Init_Mission16_StrikeCraftAssault_SurgicalAssault,
	(void*)Watch_Mission16_StrikeCraftAssault_SurgicalAssault,
	(void*)Init_Mission16_StrikeCraftAssault_FighterAnnihilation,
	(void*)Watch_Mission16_StrikeCraftAssault_FighterAnnihilation,
	(void*)Init_Mission16_StrikeCraftAssault_AntiFighterSupport,
	(void*)Watch_Mission16_StrikeCraftAssault_AntiFighterSupport,
	(void*)Init_Mission16_StrikeCraftAssault_FighterStrike,
	(void*)Watch_Mission16_StrikeCraftAssault_FighterStrike,
	(void*)Init_Mission16_StrikeCraftAssault_AttackGeneral,
	(void*)Watch_Mission16_StrikeCraftAssault_AttackGeneral,
	(void*)Init_Mission16_StrikeCraftAssault_Dock,
	(void*)Watch_Mission16_StrikeCraftAssault_Dock,
	(void*)Init_Mission16_StrikeCraftAssault_Wait,
	(void*)Watch_Mission16_StrikeCraftAssault_Wait,
	(void*)Init_Mission16_StrikeCraftAssault_Launch,
	(void*)Watch_Mission16_StrikeCraftAssault_Launch,
	(void*)Init_Mission16_StrikeCraftAssault_NullState,
	(void*)Watch_Mission16_StrikeCraftAssault_NullState,
	(void*)Init_Mission16_AssaultGeneral,
	(void*)Watch_Mission16_AssaultGeneral,
	(void*)Init_Mission16_AssaultGeneral_MoveToMothership,
	(void*)Watch_Mission16_AssaultGeneral_MoveToMothership,
	(void*)Init_Mission16_AssaultGeneral_PrioritizeAttack,
	(void*)Watch_Mission16_AssaultGeneral_PrioritizeAttack,
	(void*)Init_Mission16_AssaultGeneral_FrigateAssault,
	(void*)Watch_Mission16_AssaultGeneral_FrigateAssault,
	(void*)Init_Mission16_AssaultGeneral_SurgicalStrikeGravWells,
	(void*)Watch_Mission16_AssaultGeneral_SurgicalStrikeGravWells,
	(void*)Init_Mission16_AssaultGeneral_SurgicalStrike,
	(void*)Watch_Mission16_AssaultGeneral_SurgicalStrike,
	(void*)Init_Mission16_AssaultGeneral_IonCannonAssault,
	(void*)Watch_Mission16_AssaultGeneral_IonCannonAssault,
	(void*)Init_Mission16_AssaultGeneral_MissileDestroyerAssault,
	(void*)Watch_Mission16_AssaultGeneral_MissileDestroyerAssault,
	(void*)Init_Mission16_AssaultGeneral_PrimaryDestroyerAssault,
	(void*)Watch_Mission16_AssaultGeneral_PrimaryDestroyerAssault,
	(void*)Init_Mission16_AssaultGeneral_SecondaryDestroyerAssault,
	(void*)Watch_Mission16_AssaultGeneral_SecondaryDestroyerAssault,
	(void*)Init_Mission16_AssaultGeneral_CruiserAssault,
	(void*)Watch_Mission16_AssaultGeneral_CruiserAssault,
	(void*)Init_Mission16_AssaultGeneral_AttackGeneral,
	(void*)Watch_Mission16_AssaultGeneral_AttackGeneral,
	(void*)Init_Mission16_AssaultGeneral_AttackPlayersMothership,
	(void*)Watch_Mission16_AssaultGeneral_AttackPlayersMothership,
	(void*)Init_Mission16_AssaultGeneral_CarrierAssault,
	(void*)Watch_Mission16_AssaultGeneral_CarrierAssault,
	(void*)Init_Mission16_AssaultGeneral_GuardMaster,
	(void*)Watch_Mission16_AssaultGeneral_GuardMaster,
	(void*)Init_Mission16_AssaultGeneral_NullState,
	(void*)Watch_Mission16_AssaultGeneral_NullState,
	(void*)Init_Mission16_AssaultTeam,
	(void*)Watch_Mission16_AssaultTeam,
	(void*)Init_Mission16_AssaultTeam_Guarding,
	(void*)Watch_Mission16_AssaultTeam_Guarding,
	(void*)Init_Mission16_AssaultTeam_HyperspaceOut,
	(void*)Watch_Mission16_AssaultTeam_HyperspaceOut,
	(void*)Init_Mission16_AssaultTeam_HyperspaceIntoPosition,
	(void*)Watch_Mission16_AssaultTeam_HyperspaceIntoPosition,
	(void*)Init_Mission16_AssaultTeam_Align,
	(void*)Watch_Mission16_AssaultTeam_Align,
	(void*)Init_Mission16_AssaultTeam_MoveToAssault,
	(void*)Watch_Mission16_AssaultTeam_MoveToAssault,
	(void*)Init_Mission16_AssaultTeam_Replenish,
	(void*)Watch_Mission16_AssaultTeam_Replenish,
	(void*)Init_Mission16_AssaultTeam_NullState,
	(void*)Watch_Mission16_AssaultTeam_NullState,
	(void*)Init_Mission16_ShadowPlayer,
	(void*)Watch_Mission16_ShadowPlayer,
	(void*)Init_Mission16_ShadowPlayer_Attack,
	(void*)Watch_Mission16_ShadowPlayer_Attack,
	(void*)Init_Mission16_ShadowPlayer_TakeoutOtherTargets,
	(void*)Watch_Mission16_ShadowPlayer_TakeoutOtherTargets,
	(void*)Init_Mission16_ShadowPlayer_NullState,
	(void*)Watch_Mission16_ShadowPlayer_NullState,
	(void*)Init_Mission16_AssaultStart,
	(void*)Watch_Mission16_AssaultStart,
	(void*)Init_Mission16_AssaultStart_Dock,
	(void*)Watch_Mission16_AssaultStart_Dock,
	(void*)Init_Mission16_AssaultStart_Delay,
	(void*)Watch_Mission16_AssaultStart_Delay,
	(void*)Init_Mission16_AssaultStart_HyperspaceOut,
	(void*)Watch_Mission16_AssaultStart_HyperspaceOut,
	(void*)Init_Mission16_AssaultStart_HyperspaceInDefector,
	(void*)Watch_Mission16_AssaultStart_HyperspaceInDefector,
	(void*)Init_Mission16_AssaultStart_SuperOverKillGiveOver,
	(void*)Watch_Mission16_AssaultStart_SuperOverKillGiveOver,
	(void*)Init_Mission16_AssaultStart_HyperspaceIn,
	(void*)Watch_Mission16_AssaultStart_HyperspaceIn,
	(void*)Init_Mission16_AssaultStart_ChooseTask,
	(void*)Watch_Mission16_AssaultStart_ChooseTask,
	(void*)Init_Mission16_AssaultStart_NullState,
	(void*)Watch_Mission16_AssaultStart_NullState,
	(void*)Init_Mission16_EliteGuard,
	(void*)Watch_Mission16_EliteGuard,
	(void*)Init_Mission16_EliteGuard_InitialDock,
	(void*)Watch_Mission16_EliteGuard_InitialDock,
	(void*)Init_Mission16_EliteGuard_Launch,
	(void*)Watch_Mission16_EliteGuard_Launch,
	(void*)Init_Mission16_EliteGuard_NullState,
	(void*)Watch_Mission16_EliteGuard_NullState,
	(void*)Init_Mission16_EliteGuardCarrier,
	(void*)Watch_Mission16_EliteGuardCarrier,
	(void*)Init_Mission16_EliteGuardCarrier_WaitForMessage,
	(void*)Watch_Mission16_EliteGuardCarrier_WaitForMessage,
	(void*)Init_Mission16_EliteGuardCarrier_HyperspaceOut,
	(void*)Watch_Mission16_EliteGuardCarrier_HyperspaceOut,
	(void*)Init_Mission16_EliteGuardCarrier_HyperspaceIntoPosition,
	(void*)Watch_Mission16_EliteGuardCarrier_HyperspaceIntoPosition,
	(void*)Init_Mission16_EliteGuardCarrier_HyperspaceToResourcers,
	(void*)Watch_Mission16_EliteGuardCarrier_HyperspaceToResourcers,
	(void*)Init_Mission16_EliteGuardCarrier_GuardResourcers,
	(void*)Watch_Mission16_EliteGuardCarrier_GuardResourcers,
	(void*)Init_Mission16_EliteGuardCarrier_SendMinions,
	(void*)Watch_Mission16_EliteGuardCarrier_SendMinions,
	(void*)Init_Mission16_EliteGuardCarrier_NullState,
	(void*)Watch_Mission16_EliteGuardCarrier_NullState,
	(void*)Init_Mission16_EliteHarrassCarrier,
	(void*)Watch_Mission16_EliteHarrassCarrier,
	(void*)Init_Mission16_EliteHarrassCarrier_Approach,
	(void*)Watch_Mission16_EliteHarrassCarrier_Approach,
	(void*)Init_Mission16_EliteHarrassCarrier_InitialAttack,
	(void*)Watch_Mission16_EliteHarrassCarrier_InitialAttack,
	(void*)Init_Mission16_EliteHarrassCarrier_WaitForReturn,
	(void*)Watch_Mission16_EliteHarrassCarrier_WaitForReturn,
	(void*)Init_Mission16_EliteHarrassCarrier_Patrol,
	(void*)Watch_Mission16_EliteHarrassCarrier_Patrol,
	(void*)Init_Mission16_EliteHarrassCarrier_HarrassControl,
	(void*)Watch_Mission16_EliteHarrassCarrier_HarrassControl,
	(void*)Init_Mission16_EliteHarrassCarrier_NullState,
	(void*)Watch_Mission16_EliteHarrassCarrier_NullState,
	(void*)Init_Mission16_Master,
	(void*)Watch_Mission16_Master,
	(void*)Init_Mission16_Master_Decreeing,
	(void*)Watch_Mission16_Master_Decreeing,
	(void*)Init_Mission16_Master_AnalyseBG1Baddies,
	(void*)Watch_Mission16_Master_AnalyseBG1Baddies,
	(void*)Init_Mission16_Master_AnalyseBG2Baddies,
	(void*)Watch_Mission16_Master_AnalyseBG2Baddies,
	(void*)Init_Mission16_Master_AnalyseAssaultBaddies,
	(void*)Watch_Mission16_Master_AnalyseAssaultBaddies,
	(void*)Init_Mission16_Master_AnalyseRearBaddies,
	(void*)Watch_Mission16_Master_AnalyseRearBaddies,
	(void*)Init_Mission16_Master_AnalyseSBDustBaddies,
	(void*)Watch_Mission16_Master_AnalyseSBDustBaddies,
	(void*)Init_Mission16_Master_AnalysePortDustBaddies,
	(void*)Watch_Mission16_Master_AnalysePortDustBaddies,
	(void*)Init_Mission16_Master_FormUpBG1,
	(void*)Watch_Mission16_Master_FormUpBG1,
	(void*)Init_Mission16_Master_FormUpBG2,
	(void*)Watch_Mission16_Master_FormUpBG2,
	(void*)Init_Mission16_Master_FormUpAssault,
	(void*)Watch_Mission16_Master_FormUpAssault,
	(void*)Init_Mission16_Master_NullState,
	(void*)Watch_Mission16_Master_NullState,
	(void*)Init_Mission16,
	(void*)Watch_Mission16,
};

// Number of FSM init/watch function pointers.
const unsigned int Mission16_FunctionPointerCount = 284;
