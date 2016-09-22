//
//  ../Generated/Mission08.func.c
//
//  Finite state machine function pointers for "Mission08" mission
//
//  This code was autogenerated from Mission08.kp by KAS2C Version 2.05sdl
//


#include "../Generated/Mission08.h"  // prototypes and #includes for exposed game functions

// FSM init/watch function pointers.
const void* Mission08_FunctionPointers[] =
{
	(void*)Init_Mission08_HonourGuardSwarm,
	(void*)Watch_Mission08_HonourGuardSwarm,
	(void*)Init_Mission08_HonourGuardSwarm_Waiting,
	(void*)Watch_Mission08_HonourGuardSwarm_Waiting,
	(void*)Init_Mission08_HonourGuardSwarm_WaitingLeader,
	(void*)Watch_Mission08_HonourGuardSwarm_WaitingLeader,
	(void*)Init_Mission08_HonourGuardSwarm_Attack,
	(void*)Watch_Mission08_HonourGuardSwarm_Attack,
	(void*)Init_Mission08_HonourGuardSwarm_Dock,
	(void*)Watch_Mission08_HonourGuardSwarm_Dock,
	(void*)Init_Mission08_HonourGuardSwarm_NullState,
	(void*)Watch_Mission08_HonourGuardSwarm_NullState,
	(void*)Init_Mission08_GenericSwarmAttack,
	(void*)Watch_Mission08_GenericSwarmAttack,
	(void*)Init_Mission08_GenericSwarmAttack_NullState,
	(void*)Watch_Mission08_GenericSwarmAttack_NullState,
	(void*)Init_Mission08_GenericMothershipSwarm,
	(void*)Watch_Mission08_GenericMothershipSwarm,
	(void*)Init_Mission08_GenericMothershipSwarm_NullState,
	(void*)Watch_Mission08_GenericMothershipSwarm_NullState,
	(void*)Init_Mission08_GenericResourcerSwarm,
	(void*)Watch_Mission08_GenericResourcerSwarm,
	(void*)Init_Mission08_GenericResourcerSwarm_MoveToTarget,
	(void*)Watch_Mission08_GenericResourcerSwarm_MoveToTarget,
	(void*)Init_Mission08_GenericResourcerSwarm_NullState,
	(void*)Watch_Mission08_GenericResourcerSwarm_NullState,
	(void*)Init_Mission08_ResourceDefenderSwarm,
	(void*)Watch_Mission08_ResourceDefenderSwarm,
	(void*)Init_Mission08_ResourceDefenderSwarm_MoveToTarget,
	(void*)Watch_Mission08_ResourceDefenderSwarm_MoveToTarget,
	(void*)Init_Mission08_ResourceDefenderSwarm_NullState,
	(void*)Watch_Mission08_ResourceDefenderSwarm_NullState,
	(void*)Init_Mission08_DefendMothership,
	(void*)Watch_Mission08_DefendMothership,
	(void*)Init_Mission08_DefendMothership_NullState,
	(void*)Watch_Mission08_DefendMothership_NullState,
	(void*)Init_Mission08_IntroAttack,
	(void*)Watch_Mission08_IntroAttack,
	(void*)Init_Mission08_IntroAttack_GetStarted,
	(void*)Watch_Mission08_IntroAttack_GetStarted,
	(void*)Init_Mission08_IntroAttack_WaitForAttack,
	(void*)Watch_Mission08_IntroAttack_WaitForAttack,
	(void*)Init_Mission08_IntroAttack_NullState,
	(void*)Watch_Mission08_IntroAttack_NullState,
	(void*)Init_Mission08_PreAttackPod,
	(void*)Watch_Mission08_PreAttackPod,
	(void*)Init_Mission08_PreAttackPod_Dock,
	(void*)Watch_Mission08_PreAttackPod_Dock,
	(void*)Init_Mission08_PreAttackPod_WaitToLaunch,
	(void*)Watch_Mission08_PreAttackPod_WaitToLaunch,
	(void*)Init_Mission08_PreAttackPod_Launch,
	(void*)Watch_Mission08_PreAttackPod_Launch,
	(void*)Init_Mission08_PreAttackPod_GetOrders,
	(void*)Watch_Mission08_PreAttackPod_GetOrders,
	(void*)Init_Mission08_PreAttackPod_NullState,
	(void*)Watch_Mission08_PreAttackPod_NullState,
	(void*)Init_Mission08_PreAttackSwarm,
	(void*)Watch_Mission08_PreAttackSwarm,
	(void*)Init_Mission08_PreAttackSwarm_Dock,
	(void*)Watch_Mission08_PreAttackSwarm_Dock,
	(void*)Init_Mission08_PreAttackSwarm_WaitToLaunch,
	(void*)Watch_Mission08_PreAttackSwarm_WaitToLaunch,
	(void*)Init_Mission08_PreAttackSwarm_Launch,
	(void*)Watch_Mission08_PreAttackSwarm_Launch,
	(void*)Init_Mission08_PreAttackSwarm_DockAgain,
	(void*)Watch_Mission08_PreAttackSwarm_DockAgain,
	(void*)Init_Mission08_PreAttackSwarm_GetOrders,
	(void*)Watch_Mission08_PreAttackSwarm_GetOrders,
	(void*)Init_Mission08_PreAttackSwarm_NullState,
	(void*)Watch_Mission08_PreAttackSwarm_NullState,
	(void*)Init_Mission08_Events,
	(void*)Watch_Mission08_Events,
	(void*)Init_Mission08_Events_LocationCard,
	(void*)Watch_Mission08_Events_LocationCard,
	(void*)Init_Mission08_Events_Wait1,
	(void*)Watch_Mission08_Events_Wait1,
	(void*)Init_Mission08_Events_LBXIn0,
	(void*)Watch_Mission08_Events_LBXIn0,
	(void*)Init_Mission08_Events_ImLost,
	(void*)Watch_Mission08_Events_ImLost,
	(void*)Init_Mission08_Events_ItsATrap,
	(void*)Watch_Mission08_Events_ItsATrap,
	(void*)Init_Mission08_Events_Inhibitors,
	(void*)Watch_Mission08_Events_Inhibitors,
	(void*)Init_Mission08_Events_Indeed,
	(void*)Watch_Mission08_Events_Indeed,
	(void*)Init_Mission08_Events_WaitForStopped,
	(void*)Watch_Mission08_Events_WaitForStopped,
	(void*)Init_Mission08_Events_LBXIn0a,
	(void*)Watch_Mission08_Events_LBXIn0a,
	(void*)Init_Mission08_Events_LastChance,
	(void*)Watch_Mission08_Events_LastChance,
	(void*)Init_Mission08_Events_WereTheSame,
	(void*)Watch_Mission08_Events_WereTheSame,
	(void*)Init_Mission08_Events_YoullFail,
	(void*)Watch_Mission08_Events_YoullFail,
	(void*)Init_Mission08_Events_AttackBegunDelay,
	(void*)Watch_Mission08_Events_AttackBegunDelay,
	(void*)Init_Mission08_Events_AttackBegun,
	(void*)Watch_Mission08_Events_AttackBegun,
	(void*)Init_Mission08_Events_AddedResearch,
	(void*)Watch_Mission08_Events_AddedResearch,
	(void*)Init_Mission08_Events_LBXIn1,
	(void*)Watch_Mission08_Events_LBXIn1,
	(void*)Init_Mission08_Events_EnemyGoingHere,
	(void*)Watch_Mission08_Events_EnemyGoingHere,
	(void*)Init_Mission08_Events_LBXIn2,
	(void*)Watch_Mission08_Events_LBXIn2,
	(void*)Init_Mission08_Events_JustLikeKharToba,
	(void*)Watch_Mission08_Events_JustLikeKharToba,
	(void*)Init_Mission08_Events_YeahYoureRight,
	(void*)Watch_Mission08_Events_YeahYoureRight,
	(void*)Init_Mission08_Events_WeCanLeave,
	(void*)Watch_Mission08_Events_WeCanLeave,
	(void*)Init_Mission08_Events_NullState,
	(void*)Watch_Mission08_Events_NullState,
	(void*)Init_Mission08_MBTeam,
	(void*)Watch_Mission08_MBTeam,
	(void*)Init_Mission08_MBTeam_WaitForAttack,
	(void*)Watch_Mission08_MBTeam_WaitForAttack,
	(void*)Init_Mission08_MBTeam_AttackDelay,
	(void*)Watch_Mission08_MBTeam_AttackDelay,
	(void*)Init_Mission08_MBTeam_PriorityAttack,
	(void*)Watch_Mission08_MBTeam_PriorityAttack,
	(void*)Init_Mission08_MBTeam_Attack,
	(void*)Watch_Mission08_MBTeam_Attack,
	(void*)Init_Mission08_MBTeam_NullState,
	(void*)Watch_Mission08_MBTeam_NullState,
	(void*)Init_Mission08_HonourGuardMB,
	(void*)Watch_Mission08_HonourGuardMB,
	(void*)Init_Mission08_HonourGuardMB_Waiting,
	(void*)Watch_Mission08_HonourGuardMB_Waiting,
	(void*)Init_Mission08_HonourGuardMB_Attack,
	(void*)Watch_Mission08_HonourGuardMB_Attack,
	(void*)Init_Mission08_HonourGuardMB_NullState,
	(void*)Watch_Mission08_HonourGuardMB_NullState,
	(void*)Init_Mission08_Master,
	(void*)Watch_Mission08_Master,
	(void*)Init_Mission08_Master_InitialAttack,
	(void*)Watch_Mission08_Master_InitialAttack,
	(void*)Init_Mission08_Master_PreMBBattle,
	(void*)Watch_Mission08_Master_PreMBBattle,
	(void*)Init_Mission08_Master_NullState,
	(void*)Watch_Mission08_Master_NullState,
	(void*)Init_Mission08_Mothership,
	(void*)Watch_Mission08_Mothership,
	(void*)Init_Mission08_Mothership_GotSwarmers,
	(void*)Watch_Mission08_Mothership_GotSwarmers,
	(void*)Init_Mission08_Mothership_DefendSelf,
	(void*)Watch_Mission08_Mothership_DefendSelf,
	(void*)Init_Mission08_Mothership_SendSwarm1,
	(void*)Watch_Mission08_Mothership_SendSwarm1,
	(void*)Init_Mission08_Mothership_SendSwarm2,
	(void*)Watch_Mission08_Mothership_SendSwarm2,
	(void*)Init_Mission08_Mothership_SendSwarm3,
	(void*)Watch_Mission08_Mothership_SendSwarm3,
	(void*)Init_Mission08_Mothership_DefendSelf1,
	(void*)Watch_Mission08_Mothership_DefendSelf1,
	(void*)Init_Mission08_Mothership_DefendSelf2,
	(void*)Watch_Mission08_Mothership_DefendSelf2,
	(void*)Init_Mission08_Mothership_DefendSelf3,
	(void*)Watch_Mission08_Mothership_DefendSelf3,
	(void*)Init_Mission08_Mothership_ReturnToState,
	(void*)Watch_Mission08_Mothership_ReturnToState,
	(void*)Init_Mission08_Mothership_AttackMothership,
	(void*)Watch_Mission08_Mothership_AttackMothership,
	(void*)Init_Mission08_Mothership_OuttaHere,
	(void*)Watch_Mission08_Mothership_OuttaHere,
	(void*)Init_Mission08_Mothership_Standoff,
	(void*)Watch_Mission08_Mothership_Standoff,
	(void*)Init_Mission08_Mothership_FendOffBaddies,
	(void*)Watch_Mission08_Mothership_FendOffBaddies,
	(void*)Init_Mission08_Mothership_NullState,
	(void*)Watch_Mission08_Mothership_NullState,
	(void*)Init_Mission08,
	(void*)Watch_Mission08,
};

// Number of FSM init/watch function pointers.
const unsigned int Mission08_FunctionPointerCount = 176;
