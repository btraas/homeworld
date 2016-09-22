//
//  ../Generated/Mission16.h
//
//  Finite state machine for "Mission16" mission
//
//  Copyright (C) 1998 Relic Entertainment Inc.
//  All rights reserved
//
//  This code was autogenerated from Mission16.kp by KAS2C Version 2.05sdl
//


#ifndef __Mission16_H
#define __Mission16_H


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
extern const void* Mission16_FunctionPointers[];
extern const unsigned int Mission16_FunctionPointerCount;


//
//  FSM prototypes
//
void Init_Mission16_Events(void);
void Watch_Mission16_Events(void);
void Init_Mission16_Events_LocationCard(void);
void Watch_Mission16_Events_LocationCard(void);
void Init_Mission16_Events_Wait1(void);
void Watch_Mission16_Events_Wait1(void);
void Init_Mission16_Events_LBXIn1(void);
void Watch_Mission16_Events_LBXIn1(void);
void Init_Mission16_Events_KaranMindControlled(void);
void Watch_Mission16_Events_KaranMindControlled(void);
void Init_Mission16_Events_OhBoyHereWeGo(void);
void Watch_Mission16_Events_OhBoyHereWeGo(void);
void Init_Mission16_Events_EmperorsShip(void);
void Watch_Mission16_Events_EmperorsShip(void);
void Init_Mission16_Events_LBXIn3(void);
void Watch_Mission16_Events_LBXIn3(void);
void Init_Mission16_Events_Reinforcements(void);
void Watch_Mission16_Events_Reinforcements(void);
void Init_Mission16_Events_Overwhelmed(void);
void Watch_Mission16_Events_Overwhelmed(void);
void Init_Mission16_Events_YayImHereButHurt(void);
void Watch_Mission16_Events_YayImHereButHurt(void);
void Init_Mission16_Events_HeresTheEmperor(void);
void Watch_Mission16_Events_HeresTheEmperor(void);
void Init_Mission16_Events_LBXIn4(void);
void Watch_Mission16_Events_LBXIn4(void);
void Init_Mission16_Events_HereIsMothership(void);
void Watch_Mission16_Events_HereIsMothership(void);
void Init_Mission16_Events_LBXIn2(void);
void Watch_Mission16_Events_LBXIn2(void);
void Init_Mission16_Events_HoneyImHome(void);
void Watch_Mission16_Events_HoneyImHome(void);
void Init_Mission16_Events_CouncilHere(void);
void Watch_Mission16_Events_CouncilHere(void);
void Init_Mission16_Events_NullState(void);
void Watch_Mission16_Events_NullState(void);
void Init_Mission16_GiveToAI(void);
void Watch_Mission16_GiveToAI(void);
void Init_Mission16_GiveToAI_Give(void);
void Watch_Mission16_GiveToAI_Give(void);
void Init_Mission16_GiveToAI_Given(void);
void Watch_Mission16_GiveToAI_Given(void);
void Init_Mission16_Council(void);
void Watch_Mission16_Council(void);
void Init_Mission16_Council_HyperspaceOut(void);
void Watch_Mission16_Council_HyperspaceOut(void);
void Init_Mission16_Council_SetDelays(void);
void Watch_Mission16_Council_SetDelays(void);
void Init_Mission16_Council_HyperspaceIn(void);
void Watch_Mission16_Council_HyperspaceIn(void);
void Init_Mission16_Council_NullState(void);
void Watch_Mission16_Council_NullState(void);
void Init_Mission16_Resource(void);
void Watch_Mission16_Resource(void);
void Init_Mission16_Resource_MoveToResourcePoint(void);
void Watch_Mission16_Resource_MoveToResourcePoint(void);
void Init_Mission16_Resource_Resource(void);
void Watch_Mission16_Resource_Resource(void);
void Init_Mission16_Resource_Replenish(void);
void Watch_Mission16_Resource_Replenish(void);
void Init_Mission16_Support(void);
void Watch_Mission16_Support(void);
void Init_Mission16_Support_SupportHCs(void);
void Watch_Mission16_Support_SupportHCs(void);
void Init_Mission16_Support_SupportMothership(void);
void Watch_Mission16_Support_SupportMothership(void);
void Init_Mission16_Support_NullState(void);
void Watch_Mission16_Support_NullState(void);
void Init_Mission16_Mining(void);
void Watch_Mission16_Mining(void);
void Init_Mission16_Mining_Wait(void);
void Watch_Mission16_Mining_Wait(void);
void Init_Mission16_Mining_MinePoints(void);
void Watch_Mission16_Mining_MinePoints(void);
void Init_Mission16_Mining_MinePort(void);
void Watch_Mission16_Mining_MinePort(void);
void Init_Mission16_Mining_MineSB(void);
void Watch_Mission16_Mining_MineSB(void);
void Init_Mission16_Mining_MineField1(void);
void Watch_Mission16_Mining_MineField1(void);
void Init_Mission16_Mining_MineField2(void);
void Watch_Mission16_Mining_MineField2(void);
void Init_Mission16_Mining_WaitForMove(void);
void Watch_Mission16_Mining_WaitForMove(void);
void Init_Mission16_Mining_Align(void);
void Watch_Mission16_Mining_Align(void);
void Init_Mission16_Mining_LayMines(void);
void Watch_Mission16_Mining_LayMines(void);
void Init_Mission16_Mining_NullState(void);
void Watch_Mission16_Mining_NullState(void);
void Init_Mission16_ProximityRoving(void);
void Watch_Mission16_ProximityRoving(void);
void Init_Mission16_ProximityRoving_StartRoving(void);
void Watch_Mission16_ProximityRoving_StartRoving(void);
void Init_Mission16_ProximityRoving_Roam(void);
void Watch_Mission16_ProximityRoving_Roam(void);
void Init_Mission16_ProximityRoving_ShadowIntruder(void);
void Watch_Mission16_ProximityRoving_ShadowIntruder(void);
void Init_Mission16_ProximityRoving_NullState(void);
void Watch_Mission16_ProximityRoving_NullState(void);
void Init_Mission16_TakeoutTarget(void);
void Watch_Mission16_TakeoutTarget(void);
void Init_Mission16_TakeoutTarget_Dock(void);
void Watch_Mission16_TakeoutTarget_Dock(void);
void Init_Mission16_TakeoutTarget_Wait(void);
void Watch_Mission16_TakeoutTarget_Wait(void);
void Init_Mission16_TakeoutTarget_ChooseType(void);
void Watch_Mission16_TakeoutTarget_ChooseType(void);
void Init_Mission16_TakeoutTarget_InterceptTarget(void);
void Watch_Mission16_TakeoutTarget_InterceptTarget(void);
void Init_Mission16_TakeoutTarget_GravWellDistCheck(void);
void Watch_Mission16_TakeoutTarget_GravWellDistCheck(void);
void Init_Mission16_TakeoutTarget_CloakGenDistCheck(void);
void Watch_Mission16_TakeoutTarget_CloakGenDistCheck(void);
void Init_Mission16_TakeoutTarget_ReturnToMothership(void);
void Watch_Mission16_TakeoutTarget_ReturnToMothership(void);
void Init_Mission16_TakeoutTarget_AttackYummies(void);
void Watch_Mission16_TakeoutTarget_AttackYummies(void);
void Init_Mission16_TakeoutTarget_KillSelf(void);
void Watch_Mission16_TakeoutTarget_KillSelf(void);
void Init_Mission16_TakeoutTarget_NullState(void);
void Watch_Mission16_TakeoutTarget_NullState(void);
void Init_Mission16_StrikeCraftAssault(void);
void Watch_Mission16_StrikeCraftAssault(void);
void Init_Mission16_StrikeCraftAssault_MoveToTarget(void);
void Watch_Mission16_StrikeCraftAssault_MoveToTarget(void);
void Init_Mission16_StrikeCraftAssault_PrioritizeAttack(void);
void Watch_Mission16_StrikeCraftAssault_PrioritizeAttack(void);
void Init_Mission16_StrikeCraftAssault_SurgicalAssault(void);
void Watch_Mission16_StrikeCraftAssault_SurgicalAssault(void);
void Init_Mission16_StrikeCraftAssault_FighterAnnihilation(void);
void Watch_Mission16_StrikeCraftAssault_FighterAnnihilation(void);
void Init_Mission16_StrikeCraftAssault_AntiFighterSupport(void);
void Watch_Mission16_StrikeCraftAssault_AntiFighterSupport(void);
void Init_Mission16_StrikeCraftAssault_FighterStrike(void);
void Watch_Mission16_StrikeCraftAssault_FighterStrike(void);
void Init_Mission16_StrikeCraftAssault_AttackGeneral(void);
void Watch_Mission16_StrikeCraftAssault_AttackGeneral(void);
void Init_Mission16_StrikeCraftAssault_Dock(void);
void Watch_Mission16_StrikeCraftAssault_Dock(void);
void Init_Mission16_StrikeCraftAssault_Wait(void);
void Watch_Mission16_StrikeCraftAssault_Wait(void);
void Init_Mission16_StrikeCraftAssault_Launch(void);
void Watch_Mission16_StrikeCraftAssault_Launch(void);
void Init_Mission16_StrikeCraftAssault_NullState(void);
void Watch_Mission16_StrikeCraftAssault_NullState(void);
void Init_Mission16_AssaultGeneral(void);
void Watch_Mission16_AssaultGeneral(void);
void Init_Mission16_AssaultGeneral_MoveToMothership(void);
void Watch_Mission16_AssaultGeneral_MoveToMothership(void);
void Init_Mission16_AssaultGeneral_PrioritizeAttack(void);
void Watch_Mission16_AssaultGeneral_PrioritizeAttack(void);
void Init_Mission16_AssaultGeneral_FrigateAssault(void);
void Watch_Mission16_AssaultGeneral_FrigateAssault(void);
void Init_Mission16_AssaultGeneral_SurgicalStrikeGravWells(void);
void Watch_Mission16_AssaultGeneral_SurgicalStrikeGravWells(void);
void Init_Mission16_AssaultGeneral_SurgicalStrike(void);
void Watch_Mission16_AssaultGeneral_SurgicalStrike(void);
void Init_Mission16_AssaultGeneral_IonCannonAssault(void);
void Watch_Mission16_AssaultGeneral_IonCannonAssault(void);
void Init_Mission16_AssaultGeneral_MissileDestroyerAssault(void);
void Watch_Mission16_AssaultGeneral_MissileDestroyerAssault(void);
void Init_Mission16_AssaultGeneral_PrimaryDestroyerAssault(void);
void Watch_Mission16_AssaultGeneral_PrimaryDestroyerAssault(void);
void Init_Mission16_AssaultGeneral_SecondaryDestroyerAssault(void);
void Watch_Mission16_AssaultGeneral_SecondaryDestroyerAssault(void);
void Init_Mission16_AssaultGeneral_CruiserAssault(void);
void Watch_Mission16_AssaultGeneral_CruiserAssault(void);
void Init_Mission16_AssaultGeneral_AttackGeneral(void);
void Watch_Mission16_AssaultGeneral_AttackGeneral(void);
void Init_Mission16_AssaultGeneral_AttackPlayersMothership(void);
void Watch_Mission16_AssaultGeneral_AttackPlayersMothership(void);
void Init_Mission16_AssaultGeneral_CarrierAssault(void);
void Watch_Mission16_AssaultGeneral_CarrierAssault(void);
void Init_Mission16_AssaultGeneral_GuardMaster(void);
void Watch_Mission16_AssaultGeneral_GuardMaster(void);
void Init_Mission16_AssaultGeneral_NullState(void);
void Watch_Mission16_AssaultGeneral_NullState(void);
void Init_Mission16_AssaultTeam(void);
void Watch_Mission16_AssaultTeam(void);
void Init_Mission16_AssaultTeam_Guarding(void);
void Watch_Mission16_AssaultTeam_Guarding(void);
void Init_Mission16_AssaultTeam_HyperspaceOut(void);
void Watch_Mission16_AssaultTeam_HyperspaceOut(void);
void Init_Mission16_AssaultTeam_HyperspaceIntoPosition(void);
void Watch_Mission16_AssaultTeam_HyperspaceIntoPosition(void);
void Init_Mission16_AssaultTeam_Align(void);
void Watch_Mission16_AssaultTeam_Align(void);
void Init_Mission16_AssaultTeam_MoveToAssault(void);
void Watch_Mission16_AssaultTeam_MoveToAssault(void);
void Init_Mission16_AssaultTeam_Replenish(void);
void Watch_Mission16_AssaultTeam_Replenish(void);
void Init_Mission16_AssaultTeam_NullState(void);
void Watch_Mission16_AssaultTeam_NullState(void);
void Init_Mission16_ShadowPlayer(void);
void Watch_Mission16_ShadowPlayer(void);
void Init_Mission16_ShadowPlayer_Attack(void);
void Watch_Mission16_ShadowPlayer_Attack(void);
void Init_Mission16_ShadowPlayer_TakeoutOtherTargets(void);
void Watch_Mission16_ShadowPlayer_TakeoutOtherTargets(void);
void Init_Mission16_ShadowPlayer_NullState(void);
void Watch_Mission16_ShadowPlayer_NullState(void);
void Init_Mission16_AssaultStart(void);
void Watch_Mission16_AssaultStart(void);
void Init_Mission16_AssaultStart_Dock(void);
void Watch_Mission16_AssaultStart_Dock(void);
void Init_Mission16_AssaultStart_Delay(void);
void Watch_Mission16_AssaultStart_Delay(void);
void Init_Mission16_AssaultStart_HyperspaceOut(void);
void Watch_Mission16_AssaultStart_HyperspaceOut(void);
void Init_Mission16_AssaultStart_HyperspaceInDefector(void);
void Watch_Mission16_AssaultStart_HyperspaceInDefector(void);
void Init_Mission16_AssaultStart_SuperOverKillGiveOver(void);
void Watch_Mission16_AssaultStart_SuperOverKillGiveOver(void);
void Init_Mission16_AssaultStart_HyperspaceIn(void);
void Watch_Mission16_AssaultStart_HyperspaceIn(void);
void Init_Mission16_AssaultStart_ChooseTask(void);
void Watch_Mission16_AssaultStart_ChooseTask(void);
void Init_Mission16_AssaultStart_NullState(void);
void Watch_Mission16_AssaultStart_NullState(void);
void Init_Mission16_EliteGuard(void);
void Watch_Mission16_EliteGuard(void);
void Init_Mission16_EliteGuard_InitialDock(void);
void Watch_Mission16_EliteGuard_InitialDock(void);
void Init_Mission16_EliteGuard_Launch(void);
void Watch_Mission16_EliteGuard_Launch(void);
void Init_Mission16_EliteGuard_NullState(void);
void Watch_Mission16_EliteGuard_NullState(void);
void Init_Mission16_EliteGuardCarrier(void);
void Watch_Mission16_EliteGuardCarrier(void);
void Init_Mission16_EliteGuardCarrier_WaitForMessage(void);
void Watch_Mission16_EliteGuardCarrier_WaitForMessage(void);
void Init_Mission16_EliteGuardCarrier_HyperspaceOut(void);
void Watch_Mission16_EliteGuardCarrier_HyperspaceOut(void);
void Init_Mission16_EliteGuardCarrier_HyperspaceIntoPosition(void);
void Watch_Mission16_EliteGuardCarrier_HyperspaceIntoPosition(void);
void Init_Mission16_EliteGuardCarrier_HyperspaceToResourcers(void);
void Watch_Mission16_EliteGuardCarrier_HyperspaceToResourcers(void);
void Init_Mission16_EliteGuardCarrier_GuardResourcers(void);
void Watch_Mission16_EliteGuardCarrier_GuardResourcers(void);
void Init_Mission16_EliteGuardCarrier_SendMinions(void);
void Watch_Mission16_EliteGuardCarrier_SendMinions(void);
void Init_Mission16_EliteGuardCarrier_NullState(void);
void Watch_Mission16_EliteGuardCarrier_NullState(void);
void Init_Mission16_EliteHarrassCarrier(void);
void Watch_Mission16_EliteHarrassCarrier(void);
void Init_Mission16_EliteHarrassCarrier_Approach(void);
void Watch_Mission16_EliteHarrassCarrier_Approach(void);
void Init_Mission16_EliteHarrassCarrier_InitialAttack(void);
void Watch_Mission16_EliteHarrassCarrier_InitialAttack(void);
void Init_Mission16_EliteHarrassCarrier_WaitForReturn(void);
void Watch_Mission16_EliteHarrassCarrier_WaitForReturn(void);
void Init_Mission16_EliteHarrassCarrier_Patrol(void);
void Watch_Mission16_EliteHarrassCarrier_Patrol(void);
void Init_Mission16_EliteHarrassCarrier_HarrassControl(void);
void Watch_Mission16_EliteHarrassCarrier_HarrassControl(void);
void Init_Mission16_EliteHarrassCarrier_NullState(void);
void Watch_Mission16_EliteHarrassCarrier_NullState(void);
void Init_Mission16_Master(void);
void Watch_Mission16_Master(void);
void Init_Mission16_Master_Decreeing(void);
void Watch_Mission16_Master_Decreeing(void);
void Init_Mission16_Master_AnalyseBG1Baddies(void);
void Watch_Mission16_Master_AnalyseBG1Baddies(void);
void Init_Mission16_Master_AnalyseBG2Baddies(void);
void Watch_Mission16_Master_AnalyseBG2Baddies(void);
void Init_Mission16_Master_AnalyseAssaultBaddies(void);
void Watch_Mission16_Master_AnalyseAssaultBaddies(void);
void Init_Mission16_Master_AnalyseRearBaddies(void);
void Watch_Mission16_Master_AnalyseRearBaddies(void);
void Init_Mission16_Master_AnalyseSBDustBaddies(void);
void Watch_Mission16_Master_AnalyseSBDustBaddies(void);
void Init_Mission16_Master_AnalysePortDustBaddies(void);
void Watch_Mission16_Master_AnalysePortDustBaddies(void);
void Init_Mission16_Master_FormUpBG1(void);
void Watch_Mission16_Master_FormUpBG1(void);
void Init_Mission16_Master_FormUpBG2(void);
void Watch_Mission16_Master_FormUpBG2(void);
void Init_Mission16_Master_FormUpAssault(void);
void Watch_Mission16_Master_FormUpAssault(void);
void Init_Mission16_Master_NullState(void);
void Watch_Mission16_Master_NullState(void);
void Init_Mission16(void);
void Watch_Mission16(void);


#endif
