//
//  ../Generated/Mission15.c
//
//  Finite state machine routines for "Mission15" mission
//
//  Copyright (C) 1998 Relic Entertainment Inc.
//  All rights reserved
//
//  This code was autogenerated from Mission15.kp by KAS2C Version 2.05sdl
//


#include "../Generated/Mission15.h"  // prototypes and #includes for exposed game functions

extern AITeam *CurrentTeamP;
#define kasThisTeamPtr CurrentTeamP

//  for run-time scoping of symbols (variables, timers, etc.)
extern sdword CurrentMissionScope;
extern char CurrentMissionScopeName[];

//  for displaying localized strings
extern udword strCurLanguage;

static char *LSTRING_Location[] = {  // multilingual strings
	"CHAPEL PERILOUS",
	"Chapelle des P�rils",
	"Gefahr im Verzug",
	"CAPILLA DEL PELIGRO",
	"CHAPEL PERILOUS", };

static char *LSTRING_LevelName[] = {  // multilingual strings
	"15 - Chapel Perilous",
	"15 - Chapelle des P�rils",
	"15 - Gefahr im Verzug",
	"15 - Capilla del peligro",
	"15 - Chapel Perilous", };

static char *LSTRING_Objective1[] = {  // multilingual strings
	"Destroy the object",
	"Destruction de l'objet",
	"Das Objekt zerst�ren.",
	"Destruir el objeto",
	"Distruggi l'oggetto", };

static char *LSTRING_Hyperspace[] = {  // multilingual strings
	"                HYPERSPACE",
	"                HYPERESPACE",
	"        HYPERRAUMSPRUNG",
	"                HIPERESPACIO",
	" 				IPERSPAZIO", };

//
//  "initialize" code for Mission15 Dead FSM
//
void Init_Mission15_Dead(void)
{
	CurrentMissionScope = KAS_SCOPE_FSM;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	if ((sdword)kasfTeamCount() > 0)
	{
	(sdword)(kasfEnableAllAIFeatures(), 0);
	(sdword)(kasfTeamGiveToAI(), 0);
	}
	
}


//
//  "watch" code for Mission15 Dead FSM
//
void Watch_Mission15_Dead(void)
{
	CurrentMissionScope = KAS_SCOPE_FSM;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	
}


//
//  "initialize" code for Mission15 Events FSM
//
void Init_Mission15_Events(void)
{
	CurrentMissionScope = KAS_SCOPE_FSM;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	kasJump("PreNIS", Init_Mission15_Events_PreNIS, Watch_Mission15_Events_PreNIS);
	return;
	
}


//
//  "watch" code for Mission15 Events FSM
//
void Watch_Mission15_Events(void)
{
	CurrentMissionScope = KAS_SCOPE_FSM;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	if (!kasfVarValueGet("_VIFONCE001") && ((sdword)kasfShipsCount(kasGrowSelectionPtr("EnemyMShip")) == 0)) // "ifonce" #1
	{
	kasfVarCreateSet("_VIFONCE001", 1);
	kasJump("EvaluateWinner", Init_Mission15_Events_EvaluateWinner, Watch_Mission15_Events_EvaluateWinner);
	return;
	}
	if (!kasfVarValueGet("_VIFONCE002") && ((sdword)kasfMsgReceived("HeadShotDestroyed"))) // "ifonce" #2
	{
	kasfVarCreateSet("_VIFONCE002", 1);
	(sdword)(kasfObjectiveSet("DestroyObject", 1), 0);
	kasJump("EvaluateWinner", Init_Mission15_Events_EvaluateWinner, Watch_Mission15_Events_EvaluateWinner);
	return;
	}
	
}


//
//  "initialize" code for Mission15 Events PreNIS state
//
void Init_Mission15_Events_PreNIS(void)
{
	CurrentMissionScope = KAS_SCOPE_STATE;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	(sdword)(kasfTimerCreateSetStart("LocationTimer", 19), 0);
	
}


//
//  "watch" code for Mission15 Events PreNIS state
//
void Watch_Mission15_Events_PreNIS(void)
{
	CurrentMissionScope = KAS_SCOPE_STATE;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	if (!kasfVarValueGet("_VIFONCE003") && ((sdword)kasfTimerRemaining("LocationTimer") == 16)) // "ifonce" #3
	{
	kasfVarCreateSet("_VIFONCE003", 1);
	(sdword)(kasfLocationCard(5000, LSTRING_Location[strCurLanguage]), 0);
	}
	if (!kasfVarValueGet("_VIFONCE004") && ((sdword)kasfTimerRemaining("LocationTimer") == 13)) // "ifonce" #4
	{
	kasfVarCreateSet("_VIFONCE004", 1);
	(sdword)(kasfSpeechEvent((701 + 2048 + 268435456), 0), 0);
	}
	if (!kasfVarValueGet("_VIFONCE005") && ((sdword)kasfTimerRemaining("LocationTimer") == 6)) // "ifonce" #5
	{
	kasfVarCreateSet("_VIFONCE005", 1);
	(sdword)(kasfMusicStop(2), 0);
	}
	if (!kasfVarValueGet("_VIFONCE006") && ((sdword)kasfTimerRemaining("LocationTimer") == 4)) // "ifonce" #6
	{
	kasfVarCreateSet("_VIFONCE006", 1);
	(sdword)(kasfWideScreenIn(90), 0);
	}
	if (!kasfVarValueGet("_VIFONCE007") && ((sdword)kasfTimerExpiredDestroy("LocationTimer"))) // "ifonce" #7
	{
	kasfVarCreateSet("_VIFONCE007", 1);
	kasJump("PlayNIS", Init_Mission15_Events_PlayNIS, Watch_Mission15_Events_PlayNIS);
	return;
	}
	
}


//
//  "initialize" code for Mission15 Events PlayNIS state
//
void Init_Mission15_Events_PlayNIS(void)
{
	CurrentMissionScope = KAS_SCOPE_STATE;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	(sdword)(kasfVarCreateSet("G_PlayNis", 9), 0);
	(sdword)(kasfTimerCreate("HoldForIntel"), 0);
	(sdword)(kasfVarCreateSet("FinishedNIS", 0), 0);
	
}


//
//  "watch" code for Mission15 Events PlayNIS state
//
void Watch_Mission15_Events_PlayNIS(void)
{
	CurrentMissionScope = KAS_SCOPE_STATE;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	if (!kasfVarValueGet("_VIFONCE008") && ((sdword)kasfVarValueGet("G_Nis9Complete"))) // "ifonce" #8
	{
	kasfVarCreateSet("_VIFONCE008", 1);
	(sdword)(kasfTimerSet("HoldForIntel", 7), 0);
	(sdword)(kasfTimerStart("HoldForIntel"), 0);
	(sdword)(kasfVarValueSet("FinishedNIS", 1), 0);
	}
	if ((sdword)kasfTimerExpired("HoldForIntel") && (sdword)kasfVarValueGet("FinishedNIS"))
	{
	(sdword)(kasfTimerDestroy("HoldForIntel"), 0);
	kasJump("FIIntro1", Init_Mission15_Events_FIIntro1, Watch_Mission15_Events_FIIntro1);
	return;
	}
	
}


//
//  "initialize" code for Mission15 Events FIIntro1 state
//
void Init_Mission15_Events_FIIntro1(void)
{
	CurrentMissionScope = KAS_SCOPE_STATE;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	if ((sdword)kasfRaceOfHuman() == 0)
	{
	(sdword)(kasfSpeechEvent((702 + 4096 + 268435456), 0), 0);
	}
	else
	{
	(sdword)(kasfSpeechEvent((703 + 4096 + 268435456), 0), 0);
	}
	(sdword)(kasfTimerCreate("HoldForSM"), 0);
	
}


//
//  "watch" code for Mission15 Events FIIntro1 state
//
void Watch_Mission15_Events_FIIntro1(void)
{
	CurrentMissionScope = KAS_SCOPE_STATE;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	(sdword)(kasfVarDestroy("IntelEvent"), 0);
	(sdword)(kasfVarCreateSet("IntelEvent", (sdword)kasfIntelEventEnded()), 0);
	if (!kasfVarValueGet("_VIFONCE009") && ((sdword)kasfVarValueGet("IntelEvent"))) // "ifonce" #9
	{
	kasfVarCreateSet("_VIFONCE009", 1);
	(sdword)(kasfTimerSet("HoldForSM", 5), 0);
	(sdword)(kasfTimerStart("HoldForSM"), 0);
	}
	if ((sdword)kasfTimerExpiredDestroy("HoldForSM"))
	{
	kasJump("FIIntroLBXIn", Init_Mission15_Events_FIIntroLBXIn, Watch_Mission15_Events_FIIntroLBXIn);
	return;
	}
	
}


//
//  "initialize" code for Mission15 Events FIIntroLBXIn state
//
void Init_Mission15_Events_FIIntroLBXIn(void)
{
	CurrentMissionScope = KAS_SCOPE_STATE;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	(sdword)(kasfOtherKASPause(), 0);
	(sdword)(kasfWideScreenIn(90), 0);
	(sdword)(kasfTimerCreateSetStart("LetterboxInTimer", 4), 0);
	
}


//
//  "watch" code for Mission15 Events FIIntroLBXIn state
//
void Watch_Mission15_Events_FIIntroLBXIn(void)
{
	CurrentMissionScope = KAS_SCOPE_STATE;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	if ((sdword)kasfTimerRemaining("LetterboxInTimer") == 2)
	{
	(sdword)(kasfOpenSensors(120000), 0);
	(sdword)(kasfUniversePause(), 0);
	}
	if ((sdword)kasfTimerExpiredDestroy("LetterboxInTimer"))
	{
	kasJump("FIIntro2", Init_Mission15_Events_FIIntro2, Watch_Mission15_Events_FIIntro2);
	return;
	}
	
}


//
//  "initialize" code for Mission15 Events FIIntro2 state
//
void Init_Mission15_Events_FIIntro2(void)
{
	CurrentMissionScope = KAS_SCOPE_STATE;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	(sdword)(kasfSpeechEvent((704 + 4096 + 268435456), 0), 0);
	(sdword)(kasfTimerCreateSetStart("PingHeadshot", 1), 0);
	(sdword)(kasfVarCreateSet("PingedHeadshot", 0), 0);
	
}


//
//  "watch" code for Mission15 Events FIIntro2 state
//
void Watch_Mission15_Events_FIIntro2(void)
{
	CurrentMissionScope = KAS_SCOPE_STATE;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	(sdword)(kasfVarDestroy("IntelEvent"), 0);
	(sdword)(kasfVarCreateSet("IntelEvent", (sdword)kasfIntelEventEnded()), 0);
	if ((sdword)kasfVarValueGet("IntelEvent") == 2)
	{
	if ((sdword)kasfVarValueGet("PingedHeadshot") == 0)
	{
	(sdword)(kasfTimerDestroy("PingHeadshot"), 0);
	(sdword)(kasfPingAddShips(kasAITeamShipsPtr("Headshot"), "HeadshotAsteroidPing"), 0);
	}
	else
	{
	(sdword)(kasfTutRemovePointer("HeadshotPointer"), 0);
	}
	(sdword)(kasfObjectiveCreate("DestroyObject", LSTRING_Objective1[strCurLanguage], LSTRING_Objective1[strCurLanguage]), 0);
	kasJump("FIIntroLBXOut", Init_Mission15_Events_FIIntroLBXOut, Watch_Mission15_Events_FIIntroLBXOut);
	return;
	}
	else if ((sdword)kasfVarValueGet("IntelEvent"))
	{
	(sdword)(kasfTutRemovePointer("HeadshotPointer"), 0);
	(sdword)(kasfObjectiveCreate("DestroyObject", LSTRING_Objective1[strCurLanguage], LSTRING_Objective1[strCurLanguage]), 0);
	kasJump("FIIntroLBXOut", Init_Mission15_Events_FIIntroLBXOut, Watch_Mission15_Events_FIIntroLBXOut);
	return;
	}
	if (!kasfVarValueGet("_VIFONCE010") && ((sdword)kasfTimerExpiredDestroy("PingHeadshot"))) // "ifonce" #10
	{
	kasfVarCreateSet("_VIFONCE010", 1);
	(sdword)(kasfPingAddShips(kasAITeamShipsPtr("Headshot"), "HeadshotAsteroidPing"), 0);
	(sdword)(kasfTutSetPointerTargetShipSelection("HeadshotPointer", kasAITeamShipsPtr("Headshot")), 0);
	(sdword)(kasfVarValueSet("PingedHeadshot", 1), 0);
	}
	
}


//
//  "initialize" code for Mission15 Events FIIntroLBXOut state
//
void Init_Mission15_Events_FIIntroLBXOut(void)
{
	CurrentMissionScope = KAS_SCOPE_STATE;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	(sdword)(kasfTimerCreateSetStart("LetterboxOutTimer", 5), 0);
	
}


//
//  "watch" code for Mission15 Events FIIntroLBXOut state
//
void Watch_Mission15_Events_FIIntroLBXOut(void)
{
	CurrentMissionScope = KAS_SCOPE_STATE;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	if (!kasfVarValueGet("_VIFONCE011") && ((sdword)kasfTimerRemaining("LetterboxOutTimer") == 4)) // "ifonce" #11
	{
	kasfVarCreateSet("_VIFONCE011", 1);
	(sdword)(kasfUniverseUnpause(), 0);
	(sdword)(kasfCloseSensors(1), 0);
	(sdword)(kasfWideScreenOut(30), 0);
	(sdword)(kasfOtherKASUnpause(), 0);
	}
	if ((sdword)kasfTimerExpiredDestroy("LetterboxOutTimer"))
	{
	kasJump("Countdown", Init_Mission15_Events_Countdown, Watch_Mission15_Events_Countdown);
	return;
	}
	
}


//
//  "initialize" code for Mission15 Events Countdown state
//
void Init_Mission15_Events_Countdown(void)
{
	CurrentMissionScope = KAS_SCOPE_STATE;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	(sdword)(kasfTimerCreateSetStart("EndofLevel", (sdword)kasfVarValueGet("G_CountdownTime")), 0);
	(sdword)(kasfMsgSendAll("StartedCountdown"), 0);
	(sdword)(kasfVarValueSet("G_HeadshotDestroyed", 0), 0);
	
}


//
//  "watch" code for Mission15 Events Countdown state
//
void Watch_Mission15_Events_Countdown(void)
{
	CurrentMissionScope = KAS_SCOPE_STATE;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	if ((sdword)kasfTimerRemaining("EndofLevel") == 1200 && (sdword)kasfVarValueGet("G_HeadshotDestroyed") == 0)
	{
	(sdword)(kasfSpeechEvent((705 + 4096 + 268435456), 0), 0);
	}
	if ((sdword)kasfTimerRemaining("EndofLevel") == 900 && (sdword)kasfVarValueGet("G_HeadshotDestroyed") == 0)
	{
	(sdword)(kasfSpeechEvent((706 + 4096 + 268435456), 0), 0);
	}
	if ((sdword)kasfTimerRemaining("EndofLevel") == 600 && (sdword)kasfVarValueGet("G_HeadshotDestroyed") == 0)
	{
	(sdword)(kasfSpeechEvent((707 + 4096 + 268435456), 0), 0);
	}
	if ((sdword)kasfTimerRemaining("EndofLevel") == 300 && (sdword)kasfVarValueGet("G_HeadshotDestroyed") == 0)
	{
	(sdword)(kasfSpeechEvent((708 + 4096 + 268435456), 0), 0);
	}
	if ((sdword)kasfTimerRemaining("EndofLevel") == 240 && (sdword)kasfVarValueGet("G_HeadshotDestroyed") == 0)
	{
	(sdword)(kasfSpeechEvent((709 + 4096 + 268435456), 0), 0);
	}
	if ((sdword)kasfTimerRemaining("EndofLevel") == 180 && (sdword)kasfVarValueGet("G_HeadshotDestroyed") == 0)
	{
	(sdword)(kasfSpeechEvent((710 + 4096 + 268435456), 0), 0);
	}
	if ((sdword)kasfTimerRemaining("EndofLevel") == 120 && (sdword)kasfVarValueGet("G_HeadshotDestroyed") == 0)
	{
	(sdword)(kasfSpeechEvent((711 + 4096 + 268435456), 0), 0);
	}
	if ((sdword)kasfTimerRemaining("EndofLevel") == 60 && (sdword)kasfVarValueGet("G_HeadshotDestroyed") == 0)
	{
	(sdword)(kasfSpeechEvent((712 + 4096 + 268435456), 0), 0);
	}
	if ((sdword)kasfTimerRemaining("EndofLevel") == 30 && (sdword)kasfVarValueGet("G_HeadshotDestroyed") == 0)
	{
	(sdword)(kasfSpeechEvent((735 + 4096 + 268435456), 0), 0);
	}
	if ((sdword)kasfTimerRemaining("EndofLevel") == 10 && (sdword)kasfVarValueGet("G_HeadshotDestroyed") == 0)
	{
	(sdword)(kasfSpeechEvent((736 + 4096 + 268435456), 0), 0);
	}
	if ((sdword)kasfTimerRemaining("EndofLevel") == 5 && (sdword)kasfVarValueGet("G_HeadshotDestroyed") == 0)
	{
	(sdword)(kasfSpeechEvent((713 + 2048 + 268435456), 0), 0);
	}
	if ((sdword)kasfTimerExpiredDestroy("EndofLevel"))
	{
	kasJump("EvaluateWinner", Init_Mission15_Events_EvaluateWinner, Watch_Mission15_Events_EvaluateWinner);
	return;
	}
	
}


//
//  "initialize" code for Mission15 Events EvaluateWinner state
//
void Init_Mission15_Events_EvaluateWinner(void)
{
	CurrentMissionScope = KAS_SCOPE_STATE;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	(sdword)(kasfTimerCreateSetStart("WonAndDone", 12), 0);
	
}


//
//  "watch" code for Mission15 Events EvaluateWinner state
//
void Watch_Mission15_Events_EvaluateWinner(void)
{
	CurrentMissionScope = KAS_SCOPE_STATE;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	if (!kasfVarValueGet("_VIFONCE012") && ((sdword)kasfVarValueGet("G_HeadshotDestroyed") == 1)) // "ifonce" #12
	{
	kasfVarCreateSet("_VIFONCE012", 1);
	(sdword)(kasfObjectiveSet("DestroyObject", 1), 0);
	}
	if ((sdword)kasfShipsCount(kasGrowSelectionPtr("EnemyMShip")) == 0)
	{
	(sdword)(kasfObjectiveDestroyAll(), 0);
	(sdword)(kasfMissionFailed(), 0);
	kasFSMCreate("Dead", Init_Mission15_Dead, Watch_Mission15_Dead, kasThisTeamPtr);
	}
	if (!kasfVarValueGet("_VIFONCE013") && ((sdword)kasfTimerExpiredDestroy("WonAndDone"))) // "ifonce" #13
	{
	kasfVarCreateSet("_VIFONCE013", 1);
	(sdword)(kasfObjectiveCreate("Hyperspace", LSTRING_Hyperspace[strCurLanguage], LSTRING_Hyperspace[strCurLanguage]), 0);
	(sdword)(kasfSpeechEvent((714 + 4096 + 268435456), 0), 0);
	}
	
}


//
//  "initialize" code for Mission15 HeadShot FSM
//
void Init_Mission15_HeadShot(void)
{
	CurrentMissionScope = KAS_SCOPE_FSM;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	
}


//
//  "watch" code for Mission15 HeadShot FSM
//
void Watch_Mission15_HeadShot(void)
{
	CurrentMissionScope = KAS_SCOPE_FSM;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	if ((sdword)kasfMsgReceived("StartedCountdown"))
	{
	kasJump("Moving", Init_Mission15_HeadShot_Moving, Watch_Mission15_HeadShot_Moving);
	return;
	}
	if (!kasfVarValueGet("_VIFONCE014") && ((sdword)kasfTeamCount() == 0)) // "ifonce" #14
	{
	kasfVarCreateSet("_VIFONCE014", 1);
	(sdword)(kasfMsgSendAll("HeadShotDestroyed"), 0);
	(sdword)(kasfVarValueSet("G_HeadshotDestroyed", 1), 0);
	(sdword)(kasfStop(), 0);
	(sdword)(kasfMusicStop(2), 0);
	kasFSMCreate("Dead", Init_Mission15_Dead, Watch_Mission15_Dead, kasThisTeamPtr);
	}
	
}


//
//  "initialize" code for Mission15 HeadShot Moving state
//
void Init_Mission15_HeadShot_Moving(void)
{
	CurrentMissionScope = KAS_SCOPE_STATE;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	(sdword)(kasfGrowSelectionClear(kasGrowSelectionPtr("Mothership")), 0);
	if ((sdword)kasfFindEnemyShipsOfType(kasGrowSelectionPtr("Mothership"), "Mothership") == 0)
	{
	(sdword)(kasfMissionFailed(), 0);
	kasFSMCreate("Dead", Init_Mission15_Dead, Watch_Mission15_Dead, kasThisTeamPtr);
	}
	(sdword)(kasfVarValueSet("G_Dist2MShip", (sdword)kasfFindDistance(kasThisTeamsVectorPtr(), kasShipsVectorPtr("Mothership")) - 1500), 0);
	(sdword)(kasfTeamSetMaxVelocity((sdword)kasfVarValueGet("G_Dist2MShip") / (sdword)kasfVarValueGet("G_CountdownTime")), 0);
	(sdword)(kasfMoveTo(kasVectorPtr("TowardsPoint")), 0);
	
}


//
//  "watch" code for Mission15 HeadShot Moving state
//
void Watch_Mission15_HeadShot_Moving(void)
{
	CurrentMissionScope = KAS_SCOPE_STATE;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	if (!kasfVarValueGet("_VIFONCE015") && ((sdword)kasfUnderAttack(kasGrowSelectionPtr("FirstAttackingShips")) > 0)) // "ifonce" #15
	{
	kasfVarCreateSet("_VIFONCE015", 1);
	(sdword)(kasfMusicStop(0), 0);
	(sdword)(kasfMusicPlay(13), 0);
	}
	
}


//
//  "initialize" code for Mission15 Protection FSM
//
void Init_Mission15_Protection(void)
{
	CurrentMissionScope = KAS_SCOPE_FSM;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	kasJump("Guarding", Init_Mission15_Protection_Guarding, Watch_Mission15_Protection_Guarding);
	return;
	
}


//
//  "watch" code for Mission15 Protection FSM
//
void Watch_Mission15_Protection(void)
{
	CurrentMissionScope = KAS_SCOPE_FSM;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	if (!kasfVarValueGet("_VIFONCE016") && ((sdword)kasfMsgReceived("HeadShotDestroyed"))) // "ifonce" #16
	{
	kasfVarCreateSet("_VIFONCE016", 1);
	kasJump("KillMShip", Init_Mission15_Protection_KillMShip, Watch_Mission15_Protection_KillMShip);
	return;
	}
	if (!kasfVarValueGet("_VIFONCE017") && ((sdword)kasfTeamCount() == 0)) // "ifonce" #17
	{
	kasfVarCreateSet("_VIFONCE017", 1);
	kasFSMCreate("Dead", Init_Mission15_Dead, Watch_Mission15_Dead, kasThisTeamPtr);
	}
	
}


//
//  "initialize" code for Mission15 Protection Guarding state
//
void Init_Mission15_Protection_Guarding(void)
{
	CurrentMissionScope = KAS_SCOPE_STATE;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	if ((sdword)kasfThisTeamIs(kasAITeamPtr("DefendersGuard")))
	{
	(sdword)(kasfFormationWall(), 0);
	}
	else
	{
	(sdword)(kasfFormationBroad(), 0);
	}
	(sdword)(kasfTacticsNeutral(), 0);
	(sdword)(kasfGuardShips(kasAITeamShipsPtr("HeadShot")), 0);
	
}


//
//  "watch" code for Mission15 Protection Guarding state
//
void Watch_Mission15_Protection_Guarding(void)
{
	CurrentMissionScope = KAS_SCOPE_STATE;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	(sdword)(kasfGrowSelectionClear(kasGrowSelectionPtr("Evaluate")), 0);
	if ((sdword)kasfUnderAttack(kasGrowSelectionPtr("Evaluate")) > 0 || (sdword)kasfUnderAttackElsewhere(kasAITeamPtr("Headshot"), kasGrowSelectionPtr("Evaluate")) > 0 || (sdword)kasfFindEnemiesNearby(kasGrowSelectionPtr("Evaluate"), 20000) > 0 || (sdword)kasfFindEnemiesInside(kasVolumePtr("HeadshotPathArea"), kasGrowSelectionPtr("Evaluate"), 5000) > 0)
	{
	(sdword)(kasfAttack(kasGrowSelectionPtr("Evaluate")), 0);
	kasJump("Retaliate", Init_Mission15_Protection_Retaliate, Watch_Mission15_Protection_Retaliate);
	return;
	}
	
}


//
//  "initialize" code for Mission15 Protection Retaliate state
//
void Init_Mission15_Protection_Retaliate(void)
{
	CurrentMissionScope = KAS_SCOPE_STATE;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	
}


//
//  "watch" code for Mission15 Protection Retaliate state
//
void Watch_Mission15_Protection_Retaliate(void)
{
	CurrentMissionScope = KAS_SCOPE_STATE;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	(sdword)(kasfGrowSelectionClear(kasGrowSelectionPtr("Evaluate")), 0);
	if ((sdword)kasfShipsOrder((&kasThisTeamPtr->shipList)) != 2)
	{
	if ((sdword)kasfUnderAttack(kasGrowSelectionPtr("Evaluate")) > 0 || (sdword)kasfUnderAttackElsewhere(kasAITeamPtr("HeadShot"), kasGrowSelectionPtr("Evaluate")) > 0 || (sdword)kasfFindEnemiesNearby(kasGrowSelectionPtr("Evaluate"), 20000) > 0 || (sdword)kasfFindEnemiesInside(kasVolumePtr("HeadshotPathArea"), kasGrowSelectionPtr("Evaluate"), 5000) > 0)
	{
	(sdword)kasfShipsSelectIndex(kasGrowSelectionPtr("Evaluate"), kasGrowSelectionPtr("Evaluate"), 0);
	(sdword)(kasfAttack(kasGrowSelectionPtr("Evaluate")), 0);
	}
	else
	{
	kasJump("Guarding", Init_Mission15_Protection_Guarding, Watch_Mission15_Protection_Guarding);
	return;
	}
	}
	if ((sdword)kasfTeamHealthAverage() < 40)
	{
	(sdword)(kasfTacticsEvasive(), 0);
	}
	else if ((sdword)kasfTeamHealthAverage() < 75)
	{
	(sdword)(kasfTacticsNeutral(), 0);
	}
	else
	{
	(sdword)(kasfTacticsAggressive(), 0);
	}
	
}


//
//  "initialize" code for Mission15 Protection KillMShip state
//
void Init_Mission15_Protection_KillMShip(void)
{
	CurrentMissionScope = KAS_SCOPE_STATE;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	if ((sdword)kasfShipsCount(kasGrowSelectionPtr("EnemyMShip")) == 0)
	{
	kasFSMCreate("Dead", Init_Mission15_Dead, Watch_Mission15_Dead, kasThisTeamPtr);
	}
	
}


//
//  "watch" code for Mission15 Protection KillMShip state
//
void Watch_Mission15_Protection_KillMShip(void)
{
	CurrentMissionScope = KAS_SCOPE_STATE;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	if ((sdword)kasfShipsOrder((&kasThisTeamPtr->shipList)) != 2)
	{
	(sdword)(kasfTacticsAggressive(), 0);
	if ((sdword)kasfShipsSelectNonCapital(kasGrowSelectionPtr("Evaluate"), (&kasThisTeamPtr->shipList)) > 0)
	{
	(sdword)(kasfKamikazeEveryone(kasGrowSelectionPtr("EnemyMShip")), 0);
	}
	else
	{
	(sdword)(kasfAttack(kasGrowSelectionPtr("EnemyMShip")), 0);
	}
	}
	else if ((sdword)kasfShipsSelectCapital(kasGrowSelectionPtr("Evaluate"), (&kasThisTeamPtr->shipList)) > 0)
	{
	(sdword)(kasfMoveAttack(kasGrowSelectionPtr("EnemyMShip")), 0);
	}
	
}


//
//  "initialize" code for Mission15 Harrass FSM
//
void Init_Mission15_Harrass(void)
{
	CurrentMissionScope = KAS_SCOPE_FSM;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	(sdword)(kasfTacticsEvasive(), 0);
	kasJump("Bother", Init_Mission15_Harrass_Bother, Watch_Mission15_Harrass_Bother);
	return;
	
}


//
//  "watch" code for Mission15 Harrass FSM
//
void Watch_Mission15_Harrass(void)
{
	CurrentMissionScope = KAS_SCOPE_FSM;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	if (!kasfVarValueGet("_VIFONCE018") && ((sdword)kasfMsgReceived("HeadShotDestroyed"))) // "ifonce" #18
	{
	kasfVarCreateSet("_VIFONCE018", 1);
	kasJump("KillMShip", Init_Mission15_Harrass_KillMShip, Watch_Mission15_Harrass_KillMShip);
	return;
	}
	if (!kasfVarValueGet("_VIFONCE019") && ((sdword)kasfTeamCount() == 0)) // "ifonce" #19
	{
	kasfVarCreateSet("_VIFONCE019", 1);
	kasFSMCreate("Dead", Init_Mission15_Dead, Watch_Mission15_Dead, kasThisTeamPtr);
	}
	
}


//
//  "initialize" code for Mission15 Harrass Bother state
//
void Init_Mission15_Harrass_Bother(void)
{
	CurrentMissionScope = KAS_SCOPE_STATE;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	if ((sdword)kasfShipsSelectCapital(kasGrowSelectionPtr("Evaluate"), (&kasThisTeamPtr->shipList)) > 0)
	{
	(sdword)(kasfFormationWall(), 0);
	}
	else
	{
	(sdword)(kasfFormationClaw(), 0);
	}
	(sdword)(kasfAttackHarass(), 0);
	
}


//
//  "watch" code for Mission15 Harrass Bother state
//
void Watch_Mission15_Harrass_Bother(void)
{
	CurrentMissionScope = KAS_SCOPE_STATE;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	(sdword)(kasfGrowSelectionClear(kasGrowSelectionPtr("HEval")), 0);
	if ((sdword)kasfShipsOrder((&kasThisTeamPtr->shipList)) != 2)
	{
	(sdword)(kasfGrowSelectionClear(kasGrowSelectionPtr("HEval")), 0);
	if ((sdword)kasfUnderAttack(kasGrowSelectionPtr("HEval")) > 0 || (sdword)kasfUnderAttackElsewhere(kasAITeamPtr("HeadShot"), kasGrowSelectionPtr("HEval")) > 0 || (sdword)kasfFindEnemiesNearTeam(kasGrowSelectionPtr("HEval"), 20000) > 0 || (sdword)kasfFindEnemiesInside(kasVolumePtr("HeadshotPathArea"), kasGrowSelectionPtr("HEval"), 5000) > 0)
	{
	(sdword)kasfShipsSelectIndex(kasGrowSelectionPtr("HEval"), kasGrowSelectionPtr("HEval"), 0);
	(sdword)(kasfAttack(kasGrowSelectionPtr("HEval")), 0);
	}
	else
	{
	kasJump("Guard", Init_Mission15_Harrass_Guard, Watch_Mission15_Harrass_Guard);
	return;
	}
	}
	
}


//
//  "initialize" code for Mission15 Harrass Guard state
//
void Init_Mission15_Harrass_Guard(void)
{
	CurrentMissionScope = KAS_SCOPE_STATE;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	(sdword)(kasfGuardShips(kasAITeamShipsPtr("HeadShot")), 0);
	
}


//
//  "watch" code for Mission15 Harrass Guard state
//
void Watch_Mission15_Harrass_Guard(void)
{
	CurrentMissionScope = KAS_SCOPE_STATE;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	(sdword)(kasfGrowSelectionClear(kasGrowSelectionPtr("HEval")), 0);
	if ((sdword)kasfUnderAttack(kasGrowSelectionPtr("HEval")) > 0 || (sdword)kasfUnderAttackElsewhere(kasAITeamPtr("HeadShot"), kasGrowSelectionPtr("HEval")) > 0 || (sdword)kasfFindEnemiesNearTeam(kasGrowSelectionPtr("HEval"), 20000) > 0 || (sdword)kasfFindEnemiesInside(kasVolumePtr("HeadshotPathArea"), kasGrowSelectionPtr("HEval"), 5000) > 0)
	{
	(sdword)kasfShipsSelectIndex(kasGrowSelectionPtr("HEval"), kasGrowSelectionPtr("HEval"), 0);
	(sdword)(kasfAttack(kasGrowSelectionPtr("HEval")), 0);
	;
	kasJump("Bother", Init_Mission15_Harrass_Bother, Watch_Mission15_Harrass_Bother);
	return;
	}
	
}


//
//  "initialize" code for Mission15 Harrass KillMShip state
//
void Init_Mission15_Harrass_KillMShip(void)
{
	CurrentMissionScope = KAS_SCOPE_STATE;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	if ((sdword)kasfShipsCount(kasGrowSelectionPtr("EnemyMShip")) == 0)
	{
	kasFSMCreate("Dead", Init_Mission15_Dead, Watch_Mission15_Dead, kasThisTeamPtr);
	}
	
}


//
//  "watch" code for Mission15 Harrass KillMShip state
//
void Watch_Mission15_Harrass_KillMShip(void)
{
	CurrentMissionScope = KAS_SCOPE_STATE;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	if ((sdword)kasfShipsOrder((&kasThisTeamPtr->shipList)) != 2)
	{
	(sdword)(kasfTacticsAggressive(), 0);
	if ((sdword)kasfShipsSelectNonCapital(kasGrowSelectionPtr("Evaluate"), (&kasThisTeamPtr->shipList)) > 0)
	{
	(sdword)(kasfKamikazeEveryone(kasGrowSelectionPtr("EnemyMShip")), 0);
	}
	else
	{
	(sdword)(kasfAttack(kasGrowSelectionPtr("EnemyMShip")), 0);
	}
	}
	else if ((sdword)kasfShipsSelectCapital(kasGrowSelectionPtr("Evaluate"), (&kasThisTeamPtr->shipList)) > 0)
	{
	(sdword)(kasfMoveAttack(kasGrowSelectionPtr("EnemyMShip")), 0);
	}
	
}


//
//  "initialize" code for Mission15 WaitForCountDown FSM
//
void Init_Mission15_WaitForCountDown(void)
{
	CurrentMissionScope = KAS_SCOPE_FSM;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	
}


//
//  "watch" code for Mission15 WaitForCountDown FSM
//
void Watch_Mission15_WaitForCountDown(void)
{
	CurrentMissionScope = KAS_SCOPE_FSM;
	strcpy(CurrentMissionScopeName, kasThisTeamPtr->kasLabel);
	if ((sdword)kasfMsgReceived("StartedCountdown"))
	{
	if ((sdword)kasfThisTeamIs(kasAITeamPtr("Destroyers")) || (sdword)kasfThisTeamIs(kasAITeamPtr("FrigatesGuard")) || (sdword)kasfThisTeamIs(kasAITeamPtr("DefendersGuard")) || (sdword)kasfThisTeamIs(kasAITeamPtr("CorvetteGuard")))
	{
	kasFSMCreate("Protection", Init_Mission15_Protection, Watch_Mission15_Protection, kasThisTeamPtr);
	}
	else if ((sdword)kasfThisTeamIs(kasAITeamPtr("FrgHarrass")) || (sdword)kasfThisTeamIs(kasAITeamPtr("InterceptorsHarrass")) || (sdword)kasfThisTeamIs(kasAITeamPtr("CorvetteHarass")))
	{
	kasFSMCreate("Harrass", Init_Mission15_Harrass, Watch_Mission15_Harrass, kasThisTeamPtr);
	}
	}
	
}


//
//  "initialize" code for Mission15 mission
//
void Init_Mission15(void)
{
	CurrentMissionScope = KAS_SCOPE_MISSION;
	strcpy(CurrentMissionScopeName, "Mission15");
	(sdword)(kasfVarCreateSet("G_HeadshotDestroyed", 0), 0);
	(sdword)(kasfVarCreateSet("G_CountdownTime", 390), 0);
	(sdword)(kasfVarCreateSet("G_Dist2MShip", 0), 0);
	kasFSMCreate("Events", Init_Mission15_Events, Watch_Mission15_Events, kasAITeamPtr("Events"));
	kasFSMCreate("HeadShot", Init_Mission15_HeadShot, Watch_Mission15_HeadShot, kasAITeamPtr("HeadShot"));
	kasFSMCreate("WaitForCountDown", Init_Mission15_WaitForCountDown, Watch_Mission15_WaitForCountDown, kasAITeamPtr("Destroyers"));
	kasFSMCreate("WaitForCountDown", Init_Mission15_WaitForCountDown, Watch_Mission15_WaitForCountDown, kasAITeamPtr("FrigatesGuard"));
	kasFSMCreate("WaitForCountDown", Init_Mission15_WaitForCountDown, Watch_Mission15_WaitForCountDown, kasAITeamPtr("DefendersGuard"));
	kasFSMCreate("WaitForCountDown", Init_Mission15_WaitForCountDown, Watch_Mission15_WaitForCountDown, kasAITeamPtr("FrgHarrass"));
	kasFSMCreate("WaitForCountDown", Init_Mission15_WaitForCountDown, Watch_Mission15_WaitForCountDown, kasAITeamPtr("InterceptorsHarrass"));
	kasFSMCreate("WaitForCountDown", Init_Mission15_WaitForCountDown, Watch_Mission15_WaitForCountDown, kasAITeamPtr("CorvetteGuard"));
	kasFSMCreate("WaitForCountDown", Init_Mission15_WaitForCountDown, Watch_Mission15_WaitForCountDown, kasAITeamPtr("CorvetteHarass"));
	(sdword)(kasfGrowSelectionClear(kasGrowSelectionPtr("EnemyMShip")), 0);
	(sdword)kasfFindEnemyShipsOfType(kasGrowSelectionPtr("EnemyMShip"), "Mothership");
	(sdword)(kasfSaveLevel(15, LSTRING_LevelName[strCurLanguage]), 0);
	
}


//
//  "watch" code for Mission15 mission
//
void Watch_Mission15(void)
{
	CurrentMissionScope = KAS_SCOPE_MISSION;
	strcpy(CurrentMissionScopeName, "Mission15");
	if (!kasfVarValueGet("_VIFONCE020") && ((sdword)kasfDoesPlayerHave("MassDrive10Kt"))) // "ifonce" #20
	{
	kasfVarCreateSet("_VIFONCE020", 1);
	(sdword)(kasfAllowPlayerToResearch("Chassis2"), 0);
	}
	if (((sdword)kasfDoesPlayerHave("Chassis2")) && ((sdword)kasfVarValueGet("SetMediumGuns") == 0))
	{
	(sdword)(kasfAllowPlayerToResearch("MediumGuns"), 0);
	(sdword)(kasfVarCreateSet("SetMediumGuns", 1), 0);
	}
	if (!kasfVarValueGet("_VIFONCE021") && ((sdword)kasfDoesPlayerHave("Chassis1"))) // "ifonce" #21
	{
	kasfVarCreateSet("_VIFONCE021", 1);
	(sdword)(kasfAllowPlayerToResearch("MassDrive10Kt"), 0);
	}
	
}


