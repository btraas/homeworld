//
//  ../Generated/Mission14.h
//
//  Finite state machine for "Mission14" mission
//
//  Copyright (C) 1998 Relic Entertainment Inc.
//  All rights reserved
//
//  This code was autogenerated from Mission14.kp by KAS2C Version 2.05sdl
//


#ifndef __Mission14_H
#define __Mission14_H


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
extern const void* Mission14_FunctionPointers[];
extern const unsigned int Mission14_FunctionPointerCount;


//
//  FSM prototypes
//
void Init_Mission14_FleetIntel(void);
void Watch_Mission14_FleetIntel(void);
void Init_Mission14_FleetIntel_FCIntro(void);
void Watch_Mission14_FleetIntel_FCIntro(void);
void Init_Mission14_FleetIntel_FIDestroyGennyLBXIn(void);
void Watch_Mission14_FleetIntel_FIDestroyGennyLBXIn(void);
void Init_Mission14_FleetIntel_FIDestroyGennyOpenSensors(void);
void Watch_Mission14_FleetIntel_FIDestroyGennyOpenSensors(void);
void Init_Mission14_FleetIntel_FIDestroyGenny(void);
void Watch_Mission14_FleetIntel_FIDestroyGenny(void);
void Init_Mission14_FleetIntel_FIDestroyGennyPING(void);
void Watch_Mission14_FleetIntel_FIDestroyGennyPING(void);
void Init_Mission14_FleetIntel_FIDestroyGennyWAITEND(void);
void Watch_Mission14_FleetIntel_FIDestroyGennyWAITEND(void);
void Init_Mission14_FleetIntel_FIDestroyGennyEND(void);
void Watch_Mission14_FleetIntel_FIDestroyGennyEND(void);
void Init_Mission14_FleetIntel_FISensorTech(void);
void Watch_Mission14_FleetIntel_FISensorTech(void);
void Init_Mission14_FleetIntel_FIDestroyGatesLBXIn(void);
void Watch_Mission14_FleetIntel_FIDestroyGatesLBXIn(void);
void Init_Mission14_FleetIntel_FIDestroyGatesOpenSensors(void);
void Watch_Mission14_FleetIntel_FIDestroyGatesOpenSensors(void);
void Init_Mission14_FleetIntel_FIDestroyGates(void);
void Watch_Mission14_FleetIntel_FIDestroyGates(void);
void Init_Mission14_FleetIntel_FIDestroyGatesPING(void);
void Watch_Mission14_FleetIntel_FIDestroyGatesPING(void);
void Init_Mission14_FleetIntel_FIDestroyGatesWAITEND(void);
void Watch_Mission14_FleetIntel_FIDestroyGatesWAITEND(void);
void Init_Mission14_FleetIntel_FIDestroyGatesEND(void);
void Watch_Mission14_FleetIntel_FIDestroyGatesEND(void);
void Init_Mission14_FleetIntel_FIHyperdriveOnline(void);
void Watch_Mission14_FleetIntel_FIHyperdriveOnline(void);
void Init_Mission14_FleetIntel_FCTakeUsHome(void);
void Watch_Mission14_FleetIntel_FCTakeUsHome(void);
void Init_Mission14_FleetIntel_FIIdle(void);
void Watch_Mission14_FleetIntel_FIIdle(void);
void Init_Mission14_MiningBase(void);
void Watch_Mission14_MiningBase(void);
void Init_Mission14_MiningBase_Rotate(void);
void Watch_Mission14_MiningBase_Rotate(void);
void Init_Mission14_AIShips(void);
void Watch_Mission14_AIShips(void);
void Init_Mission14_AIShips_GiveToAI(void);
void Watch_Mission14_AIShips_GiveToAI(void);
void Init_Mission14_IonSphere(void);
void Watch_Mission14_IonSphere(void);
void Init_Mission14_IonSphere_WatchForEnemies(void);
void Watch_Mission14_IonSphere_WatchForEnemies(void);
void Init_Mission14_IonSphere_Loop(void);
void Watch_Mission14_IonSphere_Loop(void);
void Init_Mission14_IonSphere_BackInFormation(void);
void Watch_Mission14_IonSphere_BackInFormation(void);
void Init_Mission14_IonSphere_NullState(void);
void Watch_Mission14_IonSphere_NullState(void);
void Init_Mission14_HiddenDummy(void);
void Watch_Mission14_HiddenDummy(void);
void Init_Mission14_HiddenDummy_NullState(void);
void Watch_Mission14_HiddenDummy_NullState(void);
void Init_Mission14_RoamingMG(void);
void Watch_Mission14_RoamingMG(void);
void Init_Mission14_RoamingMG_Patrol(void);
void Watch_Mission14_RoamingMG_Patrol(void);
void Init_Mission14_RoamingMG_Dock(void);
void Watch_Mission14_RoamingMG_Dock(void);
void Init_Mission14_RoamingMG_Launch(void);
void Watch_Mission14_RoamingMG_Launch(void);
void Init_Mission14_RoamingMG_Decide(void);
void Watch_Mission14_RoamingMG_Decide(void);
void Init_Mission14_RoamingMG_CheckIonAttackers(void);
void Watch_Mission14_RoamingMG_CheckIonAttackers(void);
void Init_Mission14_RoamingMG_ProtectIons(void);
void Watch_Mission14_RoamingMG_ProtectIons(void);
void Init_Mission14_RoamingMG_AttackLayer2Vol(void);
void Watch_Mission14_RoamingMG_AttackLayer2Vol(void);
void Init_Mission14_RoamingMG_NullState(void);
void Watch_Mission14_RoamingMG_NullState(void);
void Init_Mission14_ProxDeath(void);
void Watch_Mission14_ProxDeath(void);
void Init_Mission14_ProxDeath_Decide(void);
void Watch_Mission14_ProxDeath_Decide(void);
void Init_Mission14_ProxDeath_Dock(void);
void Watch_Mission14_ProxDeath_Dock(void);
void Init_Mission14_ProxDeath_Launch(void);
void Watch_Mission14_ProxDeath_Launch(void);
void Init_Mission14_ProxDeath_CheckProx(void);
void Watch_Mission14_ProxDeath_CheckProx(void);
void Init_Mission14_ProxDeath_DIEProxDIE(void);
void Watch_Mission14_ProxDeath_DIEProxDIE(void);
void Init_Mission14_ProxDeath_ScoutSpeedBurst(void);
void Watch_Mission14_ProxDeath_ScoutSpeedBurst(void);
void Init_Mission14_ProxDeath_GuardMiningBase(void);
void Watch_Mission14_ProxDeath_GuardMiningBase(void);
void Init_Mission14_ProxDeath_NullState(void);
void Watch_Mission14_ProxDeath_NullState(void);
void Init_Mission14_InnerDefenseTeam(void);
void Watch_Mission14_InnerDefenseTeam(void);
void Init_Mission14_InnerDefenseTeam_Decide(void);
void Watch_Mission14_InnerDefenseTeam_Decide(void);
void Init_Mission14_InnerDefenseTeam_Patrol(void);
void Watch_Mission14_InnerDefenseTeam_Patrol(void);
void Init_Mission14_InnerDefenseTeam_Attack(void);
void Watch_Mission14_InnerDefenseTeam_Attack(void);
void Init_Mission14_InnerDefenseTeam_ProtectMiningBase(void);
void Watch_Mission14_InnerDefenseTeam_ProtectMiningBase(void);
void Init_Mission14_InnerDefenseTeam_NullState(void);
void Watch_Mission14_InnerDefenseTeam_NullState(void);
void Init_Mission14_InnerCloakingTeam(void);
void Watch_Mission14_InnerCloakingTeam(void);
void Init_Mission14_InnerCloakingTeam_Guard(void);
void Watch_Mission14_InnerCloakingTeam_Guard(void);
void Init_Mission14_InnerCloakingTeam_GuardCloakityOn(void);
void Watch_Mission14_InnerCloakingTeam_GuardCloakityOn(void);
void Init_Mission14_InnerCloakingTeam_GuardCloakityOff(void);
void Watch_Mission14_InnerCloakingTeam_GuardCloakityOff(void);
void Init_Mission14_InnerCloakingTeam_NullState(void);
void Watch_Mission14_InnerCloakingTeam_NullState(void);
void Init_Mission14_HyperspaceGateTeam(void);
void Watch_Mission14_HyperspaceGateTeam(void);
void Init_Mission14_HyperspaceGateTeam_HyperspaceOut(void);
void Watch_Mission14_HyperspaceGateTeam_HyperspaceOut(void);
void Init_Mission14_HyperspaceGateTeam_HyperspaceIn(void);
void Watch_Mission14_HyperspaceGateTeam_HyperspaceIn(void);
void Init_Mission14_HyperspaceGateTeam_Decide(void);
void Watch_Mission14_HyperspaceGateTeam_Decide(void);
void Init_Mission14_HyperspaceGateTeam_Patrol(void);
void Watch_Mission14_HyperspaceGateTeam_Patrol(void);
void Init_Mission14_HyperspaceGateTeam_AttackBox(void);
void Watch_Mission14_HyperspaceGateTeam_AttackBox(void);
void Init_Mission14_HyperspaceGateTeam_AttackSphere(void);
void Watch_Mission14_HyperspaceGateTeam_AttackSphere(void);
void Init_Mission14_HyperspaceGateTeam_Dock(void);
void Watch_Mission14_HyperspaceGateTeam_Dock(void);
void Init_Mission14_HyperspaceGateTeam_Launch(void);
void Watch_Mission14_HyperspaceGateTeam_Launch(void);
void Init_Mission14_HyperspaceGateTeam_NullState(void);
void Watch_Mission14_HyperspaceGateTeam_NullState(void);
void Init_Mission14_DummyController(void);
void Watch_Mission14_DummyController(void);
void Init_Mission14_DummyController_Null(void);
void Watch_Mission14_DummyController_Null(void);
void Init_Mission14(void);
void Watch_Mission14(void);


#endif