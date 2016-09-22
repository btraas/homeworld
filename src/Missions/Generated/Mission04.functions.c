//
//  ../Generated/Mission04.functions.c
//
//  Finite state machine function pointers for "Mission04" mission
//
//  This code was autogenerated from Mission04.kp by KAS2C Version 2.05sdl
//


#include "../Generated/Mission04.h"  // prototypes and #includes for exposed game functions

// FSM init/watch function pointers.
const void* Mission04_FunctionPointers[] =
{
	(void*)Init_Mission04_Traders,
	(void*)Watch_Mission04_Traders,
	(void*)Init_Mission04_Traders_Wait,
	(void*)Watch_Mission04_Traders_Wait,
	(void*)Init_Mission04_Traders_Attack1,
	(void*)Watch_Mission04_Traders_Attack1,
	(void*)Init_Mission04_Traders_Attack2,
	(void*)Watch_Mission04_Traders_Attack2,
	(void*)Init_Mission04_Traders_TradersHyperspaceIn,
	(void*)Watch_Mission04_Traders_TradersHyperspaceIn,
	(void*)Init_Mission04_Traders_BentusiFleetIntelIN,
	(void*)Watch_Mission04_Traders_BentusiFleetIntelIN,
	(void*)Init_Mission04_Traders_BentusiFIOpenSensors,
	(void*)Watch_Mission04_Traders_BentusiFIOpenSensors,
	(void*)Init_Mission04_Traders_BentusiFIpointer,
	(void*)Watch_Mission04_Traders_BentusiFIpointer,
	(void*)Init_Mission04_Traders_TradersFCFeelie,
	(void*)Watch_Mission04_Traders_TradersFCFeelie,
	(void*)Init_Mission04_Traders_TraderNIS,
	(void*)Watch_Mission04_Traders_TraderNIS,
	(void*)Init_Mission04_Traders_TimeToTrade,
	(void*)Watch_Mission04_Traders_TimeToTrade,
	(void*)Init_Mission04_Traders_TipClickToTrade,
	(void*)Watch_Mission04_Traders_TipClickToTrade,
	(void*)Init_Mission04_Traders_TaiidanAgentsArrive,
	(void*)Watch_Mission04_Traders_TaiidanAgentsArrive,
	(void*)Init_Mission04_Traders_TradersLeave,
	(void*)Watch_Mission04_Traders_TradersLeave,
	(void*)Init_Mission04_Traders_AlmostDone,
	(void*)Watch_Mission04_Traders_AlmostDone,
	(void*)Init_Mission04_Traders_Done,
	(void*)Watch_Mission04_Traders_Done,
	(void*)Init_Mission04_MissionBriefing,
	(void*)Watch_Mission04_MissionBriefing,
	(void*)Init_Mission04_MissionBriefing_ResourceVeinsIntro,
	(void*)Watch_Mission04_MissionBriefing_ResourceVeinsIntro,
	(void*)Init_Mission04_MissionBriefing_ResourceVeinsTransIn,
	(void*)Watch_Mission04_MissionBriefing_ResourceVeinsTransIn,
	(void*)Init_Mission04_MissionBriefing_ResourceVeinsOpenSensors,
	(void*)Watch_Mission04_MissionBriefing_ResourceVeinsOpenSensors,
	(void*)Init_Mission04_MissionBriefing_FIResourceVeins,
	(void*)Watch_Mission04_MissionBriefing_FIResourceVeins,
	(void*)Init_Mission04_MissionBriefing_FIResourceVeinsPING,
	(void*)Watch_Mission04_MissionBriefing_FIResourceVeinsPING,
	(void*)Init_Mission04_MissionBriefing_ResourceVeinsTransOut,
	(void*)Watch_Mission04_MissionBriefing_ResourceVeinsTransOut,
	(void*)Init_Mission04_MissionBriefing_HasTech,
	(void*)Watch_Mission04_MissionBriefing_HasTech,
	(void*)Init_Mission04_MissionBriefing_HasShip,
	(void*)Watch_Mission04_MissionBriefing_HasShip,
	(void*)Init_Mission04_MissionBriefing_FrigatesFITransIn,
	(void*)Watch_Mission04_MissionBriefing_FrigatesFITransIn,
	(void*)Init_Mission04_MissionBriefing_FrigatesFIOpenSensors,
	(void*)Watch_Mission04_MissionBriefing_FrigatesFIOpenSensors,
	(void*)Init_Mission04_MissionBriefing_FrigateFI,
	(void*)Watch_Mission04_MissionBriefing_FrigateFI,
	(void*)Init_Mission04_MissionBriefing_FrigatesFIPingAndPointer,
	(void*)Watch_Mission04_MissionBriefing_FrigatesFIPingAndPointer,
	(void*)Init_Mission04_MissionBriefing_FrigatesFITransOut,
	(void*)Watch_Mission04_MissionBriefing_FrigatesFITransOut,
	(void*)Init_Mission04_MissionBriefing_PTFTransIn,
	(void*)Watch_Mission04_MissionBriefing_PTFTransIn,
	(void*)Init_Mission04_MissionBriefing_PTFOpenSensors,
	(void*)Watch_Mission04_MissionBriefing_PTFOpenSensors,
	(void*)Init_Mission04_MissionBriefing_ProtectFI,
	(void*)Watch_Mission04_MissionBriefing_ProtectFI,
	(void*)Init_Mission04_MissionBriefing_PTFPingAndPointer,
	(void*)Watch_Mission04_MissionBriefing_PTFPingAndPointer,
	(void*)Init_Mission04_MissionBriefing_PTFTransOut,
	(void*)Watch_Mission04_MissionBriefing_PTFTransOut,
	(void*)Init_Mission04_MissionBriefing_DP1TransIn,
	(void*)Watch_Mission04_MissionBriefing_DP1TransIn,
	(void*)Init_Mission04_MissionBriefing_DP1OpenSensors,
	(void*)Watch_Mission04_MissionBriefing_DP1OpenSensors,
	(void*)Init_Mission04_MissionBriefing_DP1CFI,
	(void*)Watch_Mission04_MissionBriefing_DP1CFI,
	(void*)Init_Mission04_MissionBriefing_DP1PingAndPointer,
	(void*)Watch_Mission04_MissionBriefing_DP1PingAndPointer,
	(void*)Init_Mission04_MissionBriefing_DP1TransOut,
	(void*)Watch_Mission04_MissionBriefing_DP1TransOut,
	(void*)Init_Mission04_MissionBriefing_FirstWarning,
	(void*)Watch_Mission04_MissionBriefing_FirstWarning,
	(void*)Init_Mission04_MissionBriefing_RUCrazy,
	(void*)Watch_Mission04_MissionBriefing_RUCrazy,
	(void*)Init_Mission04_MissionBriefing_YoureMeat,
	(void*)Watch_Mission04_MissionBriefing_YoureMeat,
	(void*)Init_Mission04_MissionBriefing_CarrierTransIn,
	(void*)Watch_Mission04_MissionBriefing_CarrierTransIn,
	(void*)Init_Mission04_MissionBriefing_RenderedCarrier,
	(void*)Watch_Mission04_MissionBriefing_RenderedCarrier,
	(void*)Init_Mission04_MissionBriefing_Done,
	(void*)Watch_Mission04_MissionBriefing_Done,
	(void*)Init_Mission04_TuranicFighters,
	(void*)Watch_Mission04_TuranicFighters,
	(void*)Init_Mission04_TuranicFighters_DefendMothership,
	(void*)Watch_Mission04_TuranicFighters_DefendMothership,
	(void*)Init_Mission04_TuranicFighters_AttackTimer,
	(void*)Watch_Mission04_TuranicFighters_AttackTimer,
	(void*)Init_Mission04_TuranicFighters_DefendYourSelf,
	(void*)Watch_Mission04_TuranicFighters_DefendYourSelf,
	(void*)Init_Mission04_TuranicFighters_AssaultMothership,
	(void*)Watch_Mission04_TuranicFighters_AssaultMothership,
	(void*)Init_Mission04_TuranicFighters_Dead,
	(void*)Watch_Mission04_TuranicFighters_Dead,
	(void*)Init_Mission04_TuranicHarrassFighters,
	(void*)Watch_Mission04_TuranicHarrassFighters,
	(void*)Init_Mission04_TuranicHarrassFighters_NeverNeverLand,
	(void*)Watch_Mission04_TuranicHarrassFighters_NeverNeverLand,
	(void*)Init_Mission04_TuranicHarrassFighters_DefendSelf,
	(void*)Watch_Mission04_TuranicHarrassFighters_DefendSelf,
	(void*)Init_Mission04_TuranicHarrassFighters_Prowling,
	(void*)Watch_Mission04_TuranicHarrassFighters_Prowling,
	(void*)Init_Mission04_TuranicHarrassFighters_AssaultEnemy,
	(void*)Watch_Mission04_TuranicHarrassFighters_AssaultEnemy,
	(void*)Init_Mission04_TuranicHarrassFighters_Dead,
	(void*)Watch_Mission04_TuranicHarrassFighters_Dead,
	(void*)Init_Mission04_IonFrig1,
	(void*)Watch_Mission04_IonFrig1,
	(void*)Init_Mission04_IonFrig1_Waiting,
	(void*)Watch_Mission04_IonFrig1_Waiting,
	(void*)Init_Mission04_IonFrig1_LovingMe,
	(void*)Watch_Mission04_IonFrig1_LovingMe,
	(void*)Init_Mission04_IonFrig1_TimerToLeave,
	(void*)Watch_Mission04_IonFrig1_TimerToLeave,
	(void*)Init_Mission04_IonFrig1_AssaultMothership,
	(void*)Watch_Mission04_IonFrig1_AssaultMothership,
	(void*)Init_Mission04_IonFrig1_CircleAttackMothership,
	(void*)Watch_Mission04_IonFrig1_CircleAttackMothership,
	(void*)Init_Mission04_IonFrig2,
	(void*)Watch_Mission04_IonFrig2,
	(void*)Init_Mission04_IonFrig2_LovingMe,
	(void*)Watch_Mission04_IonFrig2_LovingMe,
	(void*)Init_Mission04_IonFrig2_Waiting,
	(void*)Watch_Mission04_IonFrig2_Waiting,
	(void*)Init_Mission04_IonFrig2_TimerToLeave,
	(void*)Watch_Mission04_IonFrig2_TimerToLeave,
	(void*)Init_Mission04_IonFrig2_AssaultMothership,
	(void*)Watch_Mission04_IonFrig2_AssaultMothership,
	(void*)Init_Mission04_IonFrig2_CircleAttackMothership,
	(void*)Watch_Mission04_IonFrig2_CircleAttackMothership,
	(void*)Init_Mission04_IonFrig3,
	(void*)Watch_Mission04_IonFrig3,
	(void*)Init_Mission04_IonFrig3_Waiting,
	(void*)Watch_Mission04_IonFrig3_Waiting,
	(void*)Init_Mission04_IonFrig3_LovingMe,
	(void*)Watch_Mission04_IonFrig3_LovingMe,
	(void*)Init_Mission04_IonFrig3_TimerToLeave,
	(void*)Watch_Mission04_IonFrig3_TimerToLeave,
	(void*)Init_Mission04_IonFrig3_AssaultMothership,
	(void*)Watch_Mission04_IonFrig3_AssaultMothership,
	(void*)Init_Mission04_IonFrig3_CircleAttackMothership,
	(void*)Watch_Mission04_IonFrig3_CircleAttackMothership,
	(void*)Init_Mission04_StdCorvette1,
	(void*)Watch_Mission04_StdCorvette1,
	(void*)Init_Mission04_StdCorvette1_DefendMothership,
	(void*)Watch_Mission04_StdCorvette1_DefendMothership,
	(void*)Init_Mission04_StdCorvette1_Waiting,
	(void*)Watch_Mission04_StdCorvette1_Waiting,
	(void*)Init_Mission04_StdCorvette1_AssaultTimer,
	(void*)Watch_Mission04_StdCorvette1_AssaultTimer,
	(void*)Init_Mission04_StdCorvette1_AssaultMothership,
	(void*)Watch_Mission04_StdCorvette1_AssaultMothership,
	(void*)Init_Mission04_StdCorvette1_DefendYourSelf,
	(void*)Watch_Mission04_StdCorvette1_DefendYourSelf,
	(void*)Init_Mission04_StdCorvette1_Dead,
	(void*)Watch_Mission04_StdCorvette1_Dead,
	(void*)Init_Mission04_StdCorvette2,
	(void*)Watch_Mission04_StdCorvette2,
	(void*)Init_Mission04_StdCorvette2_DefendMothership,
	(void*)Watch_Mission04_StdCorvette2_DefendMothership,
	(void*)Init_Mission04_StdCorvette2_Waiting,
	(void*)Watch_Mission04_StdCorvette2_Waiting,
	(void*)Init_Mission04_StdCorvette2_AssaultTimer,
	(void*)Watch_Mission04_StdCorvette2_AssaultTimer,
	(void*)Init_Mission04_StdCorvette2_AssaultMothership,
	(void*)Watch_Mission04_StdCorvette2_AssaultMothership,
	(void*)Init_Mission04_StdCorvette2_DefendYourSelf,
	(void*)Watch_Mission04_StdCorvette2_DefendYourSelf,
	(void*)Init_Mission04_StdCorvette2_Dead,
	(void*)Watch_Mission04_StdCorvette2_Dead,
	(void*)Init_Mission04_MissileCorvette1,
	(void*)Watch_Mission04_MissileCorvette1,
	(void*)Init_Mission04_MissileCorvette1_Waiting,
	(void*)Watch_Mission04_MissileCorvette1_Waiting,
	(void*)Init_Mission04_MissileCorvette1_AssaultTimer,
	(void*)Watch_Mission04_MissileCorvette1_AssaultTimer,
	(void*)Init_Mission04_MissileCorvette1_AssaultMothership,
	(void*)Watch_Mission04_MissileCorvette1_AssaultMothership,
	(void*)Init_Mission04_MissileCorvette1_DefendYourSelf,
	(void*)Watch_Mission04_MissileCorvette1_DefendYourSelf,
	(void*)Init_Mission04_MissileCorvette1_DefendMothership,
	(void*)Watch_Mission04_MissileCorvette1_DefendMothership,
	(void*)Init_Mission04_MissileCorvette1_Dead,
	(void*)Watch_Mission04_MissileCorvette1_Dead,
	(void*)Init_Mission04_P1Mothership,
	(void*)Watch_Mission04_P1Mothership,
	(void*)Init_Mission04_P1Mothership_LovingMe,
	(void*)Watch_Mission04_P1Mothership_LovingMe,
	(void*)Init_Mission04_P1Mothership_Waiting,
	(void*)Watch_Mission04_P1Mothership_Waiting,
	(void*)Init_Mission04_P1Mothership_AssaultTimer,
	(void*)Watch_Mission04_P1Mothership_AssaultTimer,
	(void*)Init_Mission04_P1Mothership_AssaultMothership,
	(void*)Watch_Mission04_P1Mothership_AssaultMothership,
	(void*)Init_Mission04_P1Mothership_SpewDeath,
	(void*)Watch_Mission04_P1Mothership_SpewDeath,
	(void*)Init_Mission04_P1Mothership_Kamikaze,
	(void*)Watch_Mission04_P1Mothership_Kamikaze,
	(void*)Init_Mission04_P1Mothership_RetreatMothership,
	(void*)Watch_Mission04_P1Mothership_RetreatMothership,
	(void*)Init_Mission04_P1Mothership_Dead,
	(void*)Watch_Mission04_P1Mothership_Dead,
	(void*)Init_Mission04_ProtectFrigs,
	(void*)Watch_Mission04_ProtectFrigs,
	(void*)Init_Mission04_ProtectFrigs_Wait,
	(void*)Watch_Mission04_ProtectFrigs_Wait,
	(void*)Init_Mission04_ProtectFrigs_Guard,
	(void*)Watch_Mission04_ProtectFrigs_Guard,
	(void*)Init_Mission04_ProtectFrigs_Attack,
	(void*)Watch_Mission04_ProtectFrigs_Attack,
	(void*)Init_Mission04_ProtectFrigs_Done,
	(void*)Watch_Mission04_ProtectFrigs_Done,
	(void*)Init_Mission04,
	(void*)Watch_Mission04,
};

// Number of FSM init/watch function pointers.
const unsigned int Mission04_FunctionPointerCount = 224;
