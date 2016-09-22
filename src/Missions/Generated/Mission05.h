//
//  ../Generated/Mission05.h
//
//  Finite state machine for "Mission05" mission
//
//  Copyright (C) 1998 Relic Entertainment Inc.
//  All rights reserved
//
//  This code was autogenerated from Mission05.kp by KAS2C Version 2.05sdl
//


#ifndef __Mission05_H
#define __Mission05_H


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
extern const void* Mission05_FunctionPointers[];
extern const unsigned int Mission05_FunctionPointerCount;


//
//  FSM prototypes
//
void Init_Mission05_FleetIntel(void);
void Watch_Mission05_FleetIntel(void);
void Init_Mission05_FleetIntel_FCIntro(void);
void Watch_Mission05_FleetIntel_FCIntro(void);
void Init_Mission05_FleetIntel_FISendProbeLBXIn(void);
void Watch_Mission05_FleetIntel_FISendProbeLBXIn(void);
void Init_Mission05_FleetIntel_FISendProbeOpenSensors(void);
void Watch_Mission05_FleetIntel_FISendProbeOpenSensors(void);
void Init_Mission05_FleetIntel_FISendProbe(void);
void Watch_Mission05_FleetIntel_FISendProbe(void);
void Init_Mission05_FleetIntel_FISendProbe2(void);
void Watch_Mission05_FleetIntel_FISendProbe2(void);
void Init_Mission05_FleetIntel_FISendProbePING(void);
void Watch_Mission05_FleetIntel_FISendProbePING(void);
void Init_Mission05_FleetIntel_FISendProbe3(void);
void Watch_Mission05_FleetIntel_FISendProbe3(void);
void Init_Mission05_FleetIntel_FISendProbeLBXOut(void);
void Watch_Mission05_FleetIntel_FISendProbeLBXOut(void);
void Init_Mission05_FleetIntel_FISendProbeWAITEND(void);
void Watch_Mission05_FleetIntel_FISendProbeWAITEND(void);
void Init_Mission05_FleetIntel_FISendProbeEND(void);
void Watch_Mission05_FleetIntel_FISendProbeEND(void);
void Init_Mission05_FleetIntel_FIEradicateEnemiesLBXIn(void);
void Watch_Mission05_FleetIntel_FIEradicateEnemiesLBXIn(void);
void Init_Mission05_FleetIntel_FIEradicateEnemiesOpenSensors(void);
void Watch_Mission05_FleetIntel_FIEradicateEnemiesOpenSensors(void);
void Init_Mission05_FleetIntel_FIEradicateEnemies(void);
void Watch_Mission05_FleetIntel_FIEradicateEnemies(void);
void Init_Mission05_FleetIntel_FIEradicateEnemies2(void);
void Watch_Mission05_FleetIntel_FIEradicateEnemies2(void);
void Init_Mission05_FleetIntel_FIEradicateEnemiesPING(void);
void Watch_Mission05_FleetIntel_FIEradicateEnemiesPING(void);
void Init_Mission05_FleetIntel_FIEradicateEnemiesLBXOut(void);
void Watch_Mission05_FleetIntel_FIEradicateEnemiesLBXOut(void);
void Init_Mission05_FleetIntel_FIEradicateEnemiesWAITEND(void);
void Watch_Mission05_FleetIntel_FIEradicateEnemiesWAITEND(void);
void Init_Mission05_FleetIntel_FIEradicateEnemiesEND(void);
void Watch_Mission05_FleetIntel_FIEradicateEnemiesEND(void);
void Init_Mission05_FleetIntel_FIDestroyResourcer(void);
void Watch_Mission05_FleetIntel_FIDestroyResourcer(void);
void Init_Mission05_FleetIntel_FITeachMoveAttack(void);
void Watch_Mission05_FleetIntel_FITeachMoveAttack(void);
void Init_Mission05_FleetIntel_FITeachDefenders(void);
void Watch_Mission05_FleetIntel_FITeachDefenders(void);
void Init_Mission05_FleetIntel_FIPlasmaTech(void);
void Watch_Mission05_FleetIntel_FIPlasmaTech(void);
void Init_Mission05_FleetIntel_FIIonTech(void);
void Watch_Mission05_FleetIntel_FIIonTech(void);
void Init_Mission05_FleetIntel_FIObjectivesComplete(void);
void Watch_Mission05_FleetIntel_FIObjectivesComplete(void);
void Init_Mission05_FleetIntel_FIIdle(void);
void Watch_Mission05_FleetIntel_FIIdle(void);
void Init_Mission05_Collector(void);
void Watch_Mission05_Collector(void);
void Init_Mission05_Collector_WaitingToCollect(void);
void Watch_Mission05_Collector_WaitingToCollect(void);
void Init_Mission05_Collector_MoveToHarvestArea(void);
void Watch_Mission05_Collector_MoveToHarvestArea(void);
void Init_Mission05_Collector_Harvest(void);
void Watch_Mission05_Collector_Harvest(void);
void Init_Mission05_Collector_Docking(void);
void Watch_Mission05_Collector_Docking(void);
void Init_Mission05_Collector_DockForGood(void);
void Watch_Mission05_Collector_DockForGood(void);
void Init_Mission05_Collector_NullState(void);
void Watch_Mission05_Collector_NullState(void);
void Init_Mission05_Interceptors(void);
void Watch_Mission05_Interceptors(void);
void Init_Mission05_Interceptors_AllDeadWaitForShips(void);
void Watch_Mission05_Interceptors_AllDeadWaitForShips(void);
void Init_Mission05_Interceptors_DockInstant(void);
void Watch_Mission05_Interceptors_DockInstant(void);
void Init_Mission05_Interceptors_WaitingToPatrol(void);
void Watch_Mission05_Interceptors_WaitingToPatrol(void);
void Init_Mission05_Interceptors_Launch(void);
void Watch_Mission05_Interceptors_Launch(void);
void Init_Mission05_Interceptors_Patrol(void);
void Watch_Mission05_Interceptors_Patrol(void);
void Init_Mission05_Interceptors_AttackNearby(void);
void Watch_Mission05_Interceptors_AttackNearby(void);
void Init_Mission05_Interceptors_AttackCarrierVol(void);
void Watch_Mission05_Interceptors_AttackCarrierVol(void);
void Init_Mission05_Interceptors_AttackFrigateVol(void);
void Watch_Mission05_Interceptors_AttackFrigateVol(void);
void Init_Mission05_Interceptors_GuardCollector(void);
void Watch_Mission05_Interceptors_GuardCollector(void);
void Init_Mission05_Interceptors_DockWithSupportFrigate(void);
void Watch_Mission05_Interceptors_DockWithSupportFrigate(void);
void Init_Mission05_Interceptors_BeingServiced(void);
void Watch_Mission05_Interceptors_BeingServiced(void);
void Init_Mission05_Interceptors_AttackCollector(void);
void Watch_Mission05_Interceptors_AttackCollector(void);
void Init_Mission05_Interceptors_ACT3Guard(void);
void Watch_Mission05_Interceptors_ACT3Guard(void);
void Init_Mission05_Interceptors_ACT3AttackWorld(void);
void Watch_Mission05_Interceptors_ACT3AttackWorld(void);
void Init_Mission05_Interceptors_NullState(void);
void Watch_Mission05_Interceptors_NullState(void);
void Init_Mission05_Frigates(void);
void Watch_Mission05_Frigates(void);
void Init_Mission05_Frigates_AllDeadWaitForShips(void);
void Watch_Mission05_Frigates_AllDeadWaitForShips(void);
void Init_Mission05_Frigates_WaitingToPatrol(void);
void Watch_Mission05_Frigates_WaitingToPatrol(void);
void Init_Mission05_Frigates_Patrol(void);
void Watch_Mission05_Frigates_Patrol(void);
void Init_Mission05_Frigates_DefendYourself(void);
void Watch_Mission05_Frigates_DefendYourself(void);
void Init_Mission05_Frigates_AttackLeftBox(void);
void Watch_Mission05_Frigates_AttackLeftBox(void);
void Init_Mission05_Frigates_AttackRightBox(void);
void Watch_Mission05_Frigates_AttackRightBox(void);
void Init_Mission05_Frigates_AttackCentreBox(void);
void Watch_Mission05_Frigates_AttackCentreBox(void);
void Init_Mission05_Frigates_AttackBottomBox(void);
void Watch_Mission05_Frigates_AttackBottomBox(void);
void Init_Mission05_Frigates_AttackTopBox(void);
void Watch_Mission05_Frigates_AttackTopBox(void);
void Init_Mission05_Frigates_ACT3AttackMothership(void);
void Watch_Mission05_Frigates_ACT3AttackMothership(void);
void Init_Mission05_Frigates_ACT3DefendYourself(void);
void Watch_Mission05_Frigates_ACT3DefendYourself(void);
void Init_Mission05_Frigates_NullState(void);
void Watch_Mission05_Frigates_NullState(void);
void Init_Mission05_Destroyers(void);
void Watch_Mission05_Destroyers(void);
void Init_Mission05_Destroyers_AllDeadWaitForShips(void);
void Watch_Mission05_Destroyers_AllDeadWaitForShips(void);
void Init_Mission05_Destroyers_WaitingToPatrol(void);
void Watch_Mission05_Destroyers_WaitingToPatrol(void);
void Init_Mission05_Destroyers_Patrol(void);
void Watch_Mission05_Destroyers_Patrol(void);
void Init_Mission05_Destroyers_AttackCarrierVol(void);
void Watch_Mission05_Destroyers_AttackCarrierVol(void);
void Init_Mission05_Destroyers_ACT3AttackMothership(void);
void Watch_Mission05_Destroyers_ACT3AttackMothership(void);
void Init_Mission05_Destroyers_ACT3DefendYourself(void);
void Watch_Mission05_Destroyers_ACT3DefendYourself(void);
void Init_Mission05_Destroyers_NullState(void);
void Watch_Mission05_Destroyers_NullState(void);
void Init_Mission05_SupportFrigate(void);
void Watch_Mission05_SupportFrigate(void);
void Init_Mission05_SupportFrigate_Wait(void);
void Watch_Mission05_SupportFrigate_Wait(void);
void Init_Mission05_SupportFrigate_GuardCarrier(void);
void Watch_Mission05_SupportFrigate_GuardCarrier(void);
void Init_Mission05_SupportFrigate_ACT3AttackMothership(void);
void Watch_Mission05_SupportFrigate_ACT3AttackMothership(void);
void Init_Mission05_SupportFrigate_ACT3DefendYourself(void);
void Watch_Mission05_SupportFrigate_ACT3DefendYourself(void);
void Init_Mission05_SupportFrigate_NullState(void);
void Watch_Mission05_SupportFrigate_NullState(void);
void Init_Mission05_Carrier(void);
void Watch_Mission05_Carrier(void);
void Init_Mission05_Carrier_Wait(void);
void Watch_Mission05_Carrier_Wait(void);
void Init_Mission05_Carrier_Patrol(void);
void Watch_Mission05_Carrier_Patrol(void);
void Init_Mission05_Carrier_UnderAttack(void);
void Watch_Mission05_Carrier_UnderAttack(void);
void Init_Mission05_Carrier_ACT3AttackMothership(void);
void Watch_Mission05_Carrier_ACT3AttackMothership(void);
void Init_Mission05_Carrier_ACT3DefendYourself(void);
void Watch_Mission05_Carrier_ACT3DefendYourself(void);
void Init_Mission05_Probes(void);
void Watch_Mission05_Probes(void);
void Init_Mission05_Probes_Wait(void);
void Watch_Mission05_Probes_Wait(void);
void Init_Mission05_Probes_RequestShips(void);
void Watch_Mission05_Probes_RequestShips(void);
void Init_Mission05_Probes_Move(void);
void Watch_Mission05_Probes_Move(void);
void Init_Mission05_Probes_NullState(void);
void Watch_Mission05_Probes_NullState(void);
void Init_Mission05_Defenders(void);
void Watch_Mission05_Defenders(void);
void Init_Mission05_Defenders_DockInstant(void);
void Watch_Mission05_Defenders_DockInstant(void);
void Init_Mission05_Defenders_Wait(void);
void Watch_Mission05_Defenders_Wait(void);
void Init_Mission05_Defenders_Launch(void);
void Watch_Mission05_Defenders_Launch(void);
void Init_Mission05_Defenders_Guard(void);
void Watch_Mission05_Defenders_Guard(void);
void Init_Mission05_Defenders_NullState(void);
void Watch_Mission05_Defenders_NullState(void);
void Init_Mission05_Kamikaze(void);
void Watch_Mission05_Kamikaze(void);
void Init_Mission05_Kamikaze_Dock(void);
void Watch_Mission05_Kamikaze_Dock(void);
void Init_Mission05_Kamikaze_Launch(void);
void Watch_Mission05_Kamikaze_Launch(void);
void Init_Mission05_Kamikaze_Kamikaze(void);
void Watch_Mission05_Kamikaze_Kamikaze(void);
void Init_Mission05_Kamikaze_NullState(void);
void Watch_Mission05_Kamikaze_NullState(void);
void Init_Mission05_Kamikaze2(void);
void Watch_Mission05_Kamikaze2(void);
void Init_Mission05_Kamikaze2_Dock(void);
void Watch_Mission05_Kamikaze2_Dock(void);
void Init_Mission05_Kamikaze2_Launch(void);
void Watch_Mission05_Kamikaze2_Launch(void);
void Init_Mission05_Kamikaze2_Kamikaze(void);
void Watch_Mission05_Kamikaze2_Kamikaze(void);
void Init_Mission05_Kamikaze2_NullState(void);
void Watch_Mission05_Kamikaze2_NullState(void);
void Init_Mission05(void);
void Watch_Mission05(void);


#endif
