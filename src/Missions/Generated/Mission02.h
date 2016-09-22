//
//  ../Generated/Mission02.h
//
//  Finite state machine for "Mission02" mission
//
//  Copyright (C) 1998 Relic Entertainment Inc.
//  All rights reserved
//
//  This code was autogenerated from Mission02.kp by KAS2C Version 2.05sdl
//


#ifndef __Mission02_H
#define __Mission02_H


//
//  types and exposed game functions
//
#include <string.h>
#include "AIMoves.h"
#include "AITeam.h"
#include "Attributes.h"
#include "CommandWrap.h"
#include "KASFunc.h"
#include "Objectives.h"
#include "Timer.h"
#include "TradeMgr.h"
#include "Types.h"
#include "Vector.h"
#include "Volume.h"


//
//  level function pointer list
//
extern const void* Mission02_FunctionPointers[];
extern const unsigned int Mission02_FunctionPointerCount;


//
//  FSM prototypes
//
void Init_Mission02_FleetIntel(void);
void Watch_Mission02_FleetIntel(void);
void Init_Mission02_FleetIntel_FCIntro(void);
void Watch_Mission02_FleetIntel_FCIntro(void);
void Init_Mission02_FleetIntel_FIIntro(void);
void Watch_Mission02_FleetIntel_FIIntro(void);
void Init_Mission02_FleetIntel_FCSignalling(void);
void Watch_Mission02_FleetIntel_FCSignalling(void);
void Init_Mission02_FleetIntel_FCSignalling2(void);
void Watch_Mission02_FleetIntel_FCSignalling2(void);
void Init_Mission02_FleetIntel_FISendProbeLBXIn(void);
void Watch_Mission02_FleetIntel_FISendProbeLBXIn(void);
void Init_Mission02_FleetIntel_FISendProbeLBXIn2(void);
void Watch_Mission02_FleetIntel_FISendProbeLBXIn2(void);
void Init_Mission02_FleetIntel_FISendProbeOpenSensors(void);
void Watch_Mission02_FleetIntel_FISendProbeOpenSensors(void);
void Init_Mission02_FleetIntel_FISendProbe(void);
void Watch_Mission02_FleetIntel_FISendProbe(void);
void Init_Mission02_FleetIntel_FISendProbe2(void);
void Watch_Mission02_FleetIntel_FISendProbe2(void);
void Init_Mission02_FleetIntel_FISendProbePING(void);
void Watch_Mission02_FleetIntel_FISendProbePING(void);
void Init_Mission02_FleetIntel_FISendProbeLBXOut(void);
void Watch_Mission02_FleetIntel_FISendProbeLBXOut(void);
void Init_Mission02_FleetIntel_FISendProbeWAITEND(void);
void Watch_Mission02_FleetIntel_FISendProbeWAITEND(void);
void Init_Mission02_FleetIntel_FISendProbeEND(void);
void Watch_Mission02_FleetIntel_FISendProbeEND(void);
void Init_Mission02_FleetIntel_FCUnderAttack(void);
void Watch_Mission02_FleetIntel_FCUnderAttack(void);
void Init_Mission02_FleetIntel_FISalvageVessel(void);
void Watch_Mission02_FleetIntel_FISalvageVessel(void);
void Init_Mission02_FleetIntel_FISalvageKSLBXIn(void);
void Watch_Mission02_FleetIntel_FISalvageKSLBXIn(void);
void Init_Mission02_FleetIntel_FISalvageKSLBXIn2(void);
void Watch_Mission02_FleetIntel_FISalvageKSLBXIn2(void);
void Init_Mission02_FleetIntel_FISalvageKSOpenSensors(void);
void Watch_Mission02_FleetIntel_FISalvageKSOpenSensors(void);
void Init_Mission02_FleetIntel_FISalvageKS(void);
void Watch_Mission02_FleetIntel_FISalvageKS(void);
void Init_Mission02_FleetIntel_FISalvageKS2(void);
void Watch_Mission02_FleetIntel_FISalvageKS2(void);
void Init_Mission02_FleetIntel_FISalvageKSWAITEND(void);
void Watch_Mission02_FleetIntel_FISalvageKSWAITEND(void);
void Init_Mission02_FleetIntel_FISalvageKSEND(void);
void Watch_Mission02_FleetIntel_FISalvageKSEND(void);
void Init_Mission02_FleetIntel_FISCDiedStillNeedData(void);
void Watch_Mission02_FleetIntel_FISCDiedStillNeedData(void);
void Init_Mission02_FleetIntel_FIKilledNISTeam(void);
void Watch_Mission02_FleetIntel_FIKilledNISTeam(void);
void Init_Mission02_FleetIntel_FCMothershipIsOK(void);
void Watch_Mission02_FleetIntel_FCMothershipIsOK(void);
void Init_Mission02_FleetIntel_FIDefendSalvageTeam(void);
void Watch_Mission02_FleetIntel_FIDefendSalvageTeam(void);
void Init_Mission02_FleetIntel_FIDefendSalvageTeam2(void);
void Watch_Mission02_FleetIntel_FIDefendSalvageTeam2(void);
void Init_Mission02_FleetIntel_FISCDockedSafely(void);
void Watch_Mission02_FleetIntel_FISCDockedSafely(void);
void Init_Mission02_FleetIntel_FocusOnKharSelim(void);
void Watch_Mission02_FleetIntel_FocusOnKharSelim(void);
void Init_Mission02_FleetIntel_WaitOnKharSelim(void);
void Watch_Mission02_FleetIntel_WaitOnKharSelim(void);
void Init_Mission02_FleetIntel_AllShipsRecording(void);
void Watch_Mission02_FleetIntel_AllShipsRecording(void);
void Init_Mission02_FleetIntel_FIAllShipsRecordingLBXOut(void);
void Watch_Mission02_FleetIntel_FIAllShipsRecordingLBXOut(void);
void Init_Mission02_FleetIntel_FIDefendMothershipLBXIn(void);
void Watch_Mission02_FleetIntel_FIDefendMothershipLBXIn(void);
void Init_Mission02_FleetIntel_FIDefendMothershipLBXIn2(void);
void Watch_Mission02_FleetIntel_FIDefendMothershipLBXIn2(void);
void Init_Mission02_FleetIntel_FIDefendMothershipOpenSensors(void);
void Watch_Mission02_FleetIntel_FIDefendMothershipOpenSensors(void);
void Init_Mission02_FleetIntel_FIDefendMothership(void);
void Watch_Mission02_FleetIntel_FIDefendMothership(void);
void Init_Mission02_FleetIntel_FIDefendMothershipPING(void);
void Watch_Mission02_FleetIntel_FIDefendMothershipPING(void);
void Init_Mission02_FleetIntel_FIDefendMothershipLBXOut(void);
void Watch_Mission02_FleetIntel_FIDefendMothershipLBXOut(void);
void Init_Mission02_FleetIntel_FIDefendMothershipWAITEND(void);
void Watch_Mission02_FleetIntel_FIDefendMothershipWAITEND(void);
void Init_Mission02_FleetIntel_FIDefendMothershipEND(void);
void Watch_Mission02_FleetIntel_FIDefendMothershipEND(void);
void Init_Mission02_FleetIntel_FIInvestigateP1Mothership(void);
void Watch_Mission02_FleetIntel_FIInvestigateP1Mothership(void);
void Init_Mission02_FleetIntel_FISeenP1Mothership(void);
void Watch_Mission02_FleetIntel_FISeenP1Mothership(void);
void Init_Mission02_FleetIntel_FIDestroyAllP1(void);
void Watch_Mission02_FleetIntel_FIDestroyAllP1(void);
void Init_Mission02_FleetIntel_FIDestroyAllP12(void);
void Watch_Mission02_FleetIntel_FIDestroyAllP12(void);
void Init_Mission02_FleetIntel_FIObjectivesComplete(void);
void Watch_Mission02_FleetIntel_FIObjectivesComplete(void);
void Init_Mission02_FleetIntel_FIObjectivesComplete2(void);
void Watch_Mission02_FleetIntel_FIObjectivesComplete2(void);
void Init_Mission02_FleetIntel_FIDone(void);
void Watch_Mission02_FleetIntel_FIDone(void);
void Init_Mission02_FleetIntel_FIIdle(void);
void Watch_Mission02_FleetIntel_FIIdle(void);
void Init_Mission02_NISTeamFighter(void);
void Watch_Mission02_NISTeamFighter(void);
void Init_Mission02_NISTeamFighter_AttackMothership(void);
void Watch_Mission02_NISTeamFighter_AttackMothership(void);
void Init_Mission02_NISTeamFighter_Attack(void);
void Watch_Mission02_NISTeamFighter_Attack(void);
void Init_Mission02_NISTeamFighter_WatchAttack(void);
void Watch_Mission02_NISTeamFighter_WatchAttack(void);
void Init_Mission02_NISTeamFighter_DockForGood(void);
void Watch_Mission02_NISTeamFighter_DockForGood(void);
void Init_Mission02_NISTeamFighter_BugginOut(void);
void Watch_Mission02_NISTeamFighter_BugginOut(void);
void Init_Mission02_NISTeamFighter_NullState(void);
void Watch_Mission02_NISTeamFighter_NullState(void);
void Init_Mission02_NISTeamCorvette(void);
void Watch_Mission02_NISTeamCorvette(void);
void Init_Mission02_NISTeamCorvette_Attack(void);
void Watch_Mission02_NISTeamCorvette_Attack(void);
void Init_Mission02_NISTeamCorvette_WatchAttack(void);
void Watch_Mission02_NISTeamCorvette_WatchAttack(void);
void Init_Mission02_NISTeamCorvette_DockForGood(void);
void Watch_Mission02_NISTeamCorvette_DockForGood(void);
void Init_Mission02_NISTeamCorvette_BugginOut(void);
void Watch_Mission02_NISTeamCorvette_BugginOut(void);
void Init_Mission02_NISTeamCorvette_NullState(void);
void Watch_Mission02_NISTeamCorvette_NullState(void);
void Init_Mission02_DoggedFighter(void);
void Watch_Mission02_DoggedFighter(void);
void Init_Mission02_DoggedFighter_AllDeadWaitForShips(void);
void Watch_Mission02_DoggedFighter_AllDeadWaitForShips(void);
void Init_Mission02_DoggedFighter_DockInstant(void);
void Watch_Mission02_DoggedFighter_DockInstant(void);
void Init_Mission02_DoggedFighter_WatchingForSC(void);
void Watch_Mission02_DoggedFighter_WatchingForSC(void);
void Init_Mission02_DoggedFighter_Launch(void);
void Watch_Mission02_DoggedFighter_Launch(void);
void Init_Mission02_DoggedFighter_AttackSC(void);
void Watch_Mission02_DoggedFighter_AttackSC(void);
void Init_Mission02_DoggedFighter_AttackSCsReturning(void);
void Watch_Mission02_DoggedFighter_AttackSCsReturning(void);
void Init_Mission02_DoggedFighter_IHaveNoTarget(void);
void Watch_Mission02_DoggedFighter_IHaveNoTarget(void);
void Init_Mission02_DoggedFighter_Defend(void);
void Watch_Mission02_DoggedFighter_Defend(void);
void Init_Mission02_DoggedFighter_AttacknisVolume(void);
void Watch_Mission02_DoggedFighter_AttacknisVolume(void);
void Init_Mission02_DoggedFighter_DockWithMothership(void);
void Watch_Mission02_DoggedFighter_DockWithMothership(void);
void Init_Mission02_DoggedFighter_Docked(void);
void Watch_Mission02_DoggedFighter_Docked(void);
void Init_Mission02_DoggedFighter_Launch2(void);
void Watch_Mission02_DoggedFighter_Launch2(void);
void Init_Mission02_DoggedFighter_WatchingForSC2(void);
void Watch_Mission02_DoggedFighter_WatchingForSC2(void);
void Init_Mission02_DoggedFighter_DockForGood(void);
void Watch_Mission02_DoggedFighter_DockForGood(void);
void Init_Mission02_DoggedFighter_BugginOutForGood(void);
void Watch_Mission02_DoggedFighter_BugginOutForGood(void);
void Init_Mission02_DoggedFighter_BugginOut(void);
void Watch_Mission02_DoggedFighter_BugginOut(void);
void Init_Mission02_DoggedFighter_NullState(void);
void Watch_Mission02_DoggedFighter_NullState(void);
void Init_Mission02_SCFighters(void);
void Watch_Mission02_SCFighters(void);
void Init_Mission02_SCFighters_AllDeadWaitForShips(void);
void Watch_Mission02_SCFighters_AllDeadWaitForShips(void);
void Init_Mission02_SCFighters_DockInstant(void);
void Watch_Mission02_SCFighters_DockInstant(void);
void Init_Mission02_SCFighters_WatchingForSC(void);
void Watch_Mission02_SCFighters_WatchingForSC(void);
void Init_Mission02_SCFighters_Launch(void);
void Watch_Mission02_SCFighters_Launch(void);
void Init_Mission02_SCFighters_AttackSC(void);
void Watch_Mission02_SCFighters_AttackSC(void);
void Init_Mission02_SCFighters_AttackSCsReturning(void);
void Watch_Mission02_SCFighters_AttackSCsReturning(void);
void Init_Mission02_SCFighters_Defend(void);
void Watch_Mission02_SCFighters_Defend(void);
void Init_Mission02_SCFighters_IHaveNoTarget(void);
void Watch_Mission02_SCFighters_IHaveNoTarget(void);
void Init_Mission02_SCFighters_Defend2(void);
void Watch_Mission02_SCFighters_Defend2(void);
void Init_Mission02_SCFighters_AttacknisVolume(void);
void Watch_Mission02_SCFighters_AttacknisVolume(void);
void Init_Mission02_SCFighters_DockWithMothership(void);
void Watch_Mission02_SCFighters_DockWithMothership(void);
void Init_Mission02_SCFighters_Docked(void);
void Watch_Mission02_SCFighters_Docked(void);
void Init_Mission02_SCFighters_Launch2(void);
void Watch_Mission02_SCFighters_Launch2(void);
void Init_Mission02_SCFighters_WatchingForSC2(void);
void Watch_Mission02_SCFighters_WatchingForSC2(void);
void Init_Mission02_SCFighters_DockForGood(void);
void Watch_Mission02_SCFighters_DockForGood(void);
void Init_Mission02_SCFighters_BugginOutForGood(void);
void Watch_Mission02_SCFighters_BugginOutForGood(void);
void Init_Mission02_SCFighters_BugginOut(void);
void Watch_Mission02_SCFighters_BugginOut(void);
void Init_Mission02_SCFighters_NullState(void);
void Watch_Mission02_SCFighters_NullState(void);
void Init_Mission02_ACT3Fighters(void);
void Watch_Mission02_ACT3Fighters(void);
void Init_Mission02_ACT3Fighters_AllDeadWaitForShips(void);
void Watch_Mission02_ACT3Fighters_AllDeadWaitForShips(void);
void Init_Mission02_ACT3Fighters_DockInstant(void);
void Watch_Mission02_ACT3Fighters_DockInstant(void);
void Init_Mission02_ACT3Fighters_Launch(void);
void Watch_Mission02_ACT3Fighters_Launch(void);
void Init_Mission02_ACT3Fighters_MASTERLooking(void);
void Watch_Mission02_ACT3Fighters_MASTERLooking(void);
void Init_Mission02_ACT3Fighters_AttackMothershipSphere(void);
void Watch_Mission02_ACT3Fighters_AttackMothershipSphere(void);
void Init_Mission02_ACT3Fighters_AttackEntireWorld(void);
void Watch_Mission02_ACT3Fighters_AttackEntireWorld(void);
void Init_Mission02_ACT3Fighters_AttackMothership(void);
void Watch_Mission02_ACT3Fighters_AttackMothership(void);
void Init_Mission02_ACT3Fighters_Defend(void);
void Watch_Mission02_ACT3Fighters_Defend(void);
void Init_Mission02_ACT3Fighters_GoHelpP1Mothership(void);
void Watch_Mission02_ACT3Fighters_GoHelpP1Mothership(void);
void Init_Mission02_ACT3Fighters_DockForGood(void);
void Watch_Mission02_ACT3Fighters_DockForGood(void);
void Init_Mission02_ACT3Fighters_BugginOut(void);
void Watch_Mission02_ACT3Fighters_BugginOut(void);
void Init_Mission02_ACT3Fighters_NullState(void);
void Watch_Mission02_ACT3Fighters_NullState(void);
void Init_Mission02_ACT3Corvettes1(void);
void Watch_Mission02_ACT3Corvettes1(void);
void Init_Mission02_ACT3Corvettes1_AllDeadWaitForShips(void);
void Watch_Mission02_ACT3Corvettes1_AllDeadWaitForShips(void);
void Init_Mission02_ACT3Corvettes1_DockInstant(void);
void Watch_Mission02_ACT3Corvettes1_DockInstant(void);
void Init_Mission02_ACT3Corvettes1_Launch(void);
void Watch_Mission02_ACT3Corvettes1_Launch(void);
void Init_Mission02_ACT3Corvettes1_MASTERLooking(void);
void Watch_Mission02_ACT3Corvettes1_MASTERLooking(void);
void Init_Mission02_ACT3Corvettes1_AttackMothershipSphere(void);
void Watch_Mission02_ACT3Corvettes1_AttackMothershipSphere(void);
void Init_Mission02_ACT3Corvettes1_AttackEntireWorld(void);
void Watch_Mission02_ACT3Corvettes1_AttackEntireWorld(void);
void Init_Mission02_ACT3Corvettes1_AttackMothership(void);
void Watch_Mission02_ACT3Corvettes1_AttackMothership(void);
void Init_Mission02_ACT3Corvettes1_Defend(void);
void Watch_Mission02_ACT3Corvettes1_Defend(void);
void Init_Mission02_ACT3Corvettes1_GoHelpP1Mothership(void);
void Watch_Mission02_ACT3Corvettes1_GoHelpP1Mothership(void);
void Init_Mission02_ACT3Corvettes1_DockForGood(void);
void Watch_Mission02_ACT3Corvettes1_DockForGood(void);
void Init_Mission02_ACT3Corvettes1_BugginOut(void);
void Watch_Mission02_ACT3Corvettes1_BugginOut(void);
void Init_Mission02_ACT3Corvettes1_NullState(void);
void Watch_Mission02_ACT3Corvettes1_NullState(void);
void Init_Mission02_ACT3Corvettes2(void);
void Watch_Mission02_ACT3Corvettes2(void);
void Init_Mission02_ACT3Corvettes2_AllDeadWaitForShips(void);
void Watch_Mission02_ACT3Corvettes2_AllDeadWaitForShips(void);
void Init_Mission02_ACT3Corvettes2_DockInstant(void);
void Watch_Mission02_ACT3Corvettes2_DockInstant(void);
void Init_Mission02_ACT3Corvettes2_Launch(void);
void Watch_Mission02_ACT3Corvettes2_Launch(void);
void Init_Mission02_ACT3Corvettes2_MASTERLooking(void);
void Watch_Mission02_ACT3Corvettes2_MASTERLooking(void);
void Init_Mission02_ACT3Corvettes2_AttackMothershipSphere(void);
void Watch_Mission02_ACT3Corvettes2_AttackMothershipSphere(void);
void Init_Mission02_ACT3Corvettes2_AttackEntireWorld(void);
void Watch_Mission02_ACT3Corvettes2_AttackEntireWorld(void);
void Init_Mission02_ACT3Corvettes2_AttackMothership(void);
void Watch_Mission02_ACT3Corvettes2_AttackMothership(void);
void Init_Mission02_ACT3Corvettes2_Defend(void);
void Watch_Mission02_ACT3Corvettes2_Defend(void);
void Init_Mission02_ACT3Corvettes2_GoHelpP1Mothership(void);
void Watch_Mission02_ACT3Corvettes2_GoHelpP1Mothership(void);
void Init_Mission02_ACT3Corvettes2_DockForGood(void);
void Watch_Mission02_ACT3Corvettes2_DockForGood(void);
void Init_Mission02_ACT3Corvettes2_BugginOut(void);
void Watch_Mission02_ACT3Corvettes2_BugginOut(void);
void Init_Mission02_ACT3Corvettes2_NullState(void);
void Watch_Mission02_ACT3Corvettes2_NullState(void);
void Init_Mission02_P1Mothership(void);
void Watch_Mission02_P1Mothership(void);
void Init_Mission02_P1Mothership_Hide(void);
void Watch_Mission02_P1Mothership_Hide(void);
void Init_Mission02_P1Mothership_Amble(void);
void Watch_Mission02_P1Mothership_Amble(void);
void Init_Mission02_P1Mothership_Retreat(void);
void Watch_Mission02_P1Mothership_Retreat(void);
void Init_Mission02_P1Mothership_GetIntoPosition(void);
void Watch_Mission02_P1Mothership_GetIntoPosition(void);
void Init_Mission02_P1Mothership_InPosition(void);
void Watch_Mission02_P1Mothership_InPosition(void);
void Init_Mission02_P1Mothership_DefendYourself(void);
void Watch_Mission02_P1Mothership_DefendYourself(void);
void Init_Mission02_P1Mothership_BackInPosition(void);
void Watch_Mission02_P1Mothership_BackInPosition(void);
void Init_Mission02_P1Mothership_PatrolPlayerFleet(void);
void Watch_Mission02_P1Mothership_PatrolPlayerFleet(void);
void Init_Mission02_P1Mothership_Retreat2(void);
void Watch_Mission02_P1Mothership_Retreat2(void);
void Init_Mission02_P1Mothership_OuttaHereLikeVladimir(void);
void Watch_Mission02_P1Mothership_OuttaHereLikeVladimir(void);
void Init_Mission02_P1Mothership_HyperspaceOut(void);
void Watch_Mission02_P1Mothership_HyperspaceOut(void);
void Init_Mission02_P1Mothership_NullState(void);
void Watch_Mission02_P1Mothership_NullState(void);
void Init_Mission02(void);
void Watch_Mission02(void);


#endif