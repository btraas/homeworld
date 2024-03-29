//
//  ../Generated/Mission13.functions.c
//
//  Finite state machine function pointers for "Mission13" mission
//
//  This code was autogenerated from Mission13.kp by KAS2C Version 2.05sdl
//


#include "../Generated/Mission13.h"  // prototypes and #includes for exposed game functions

// FSM init/watch function pointers.
const void* Mission13_FunctionPointers[] =
{
	(void*)Init_Mission13_MissionFlow,
	(void*)Watch_Mission13_MissionFlow,
	(void*)Init_Mission13_MissionFlow_Intro,
	(void*)Watch_Mission13_MissionFlow_Intro,
	(void*)Init_Mission13_MissionFlow_ComTransIn,
	(void*)Watch_Mission13_MissionFlow_ComTransIn,
	(void*)Init_Mission13_MissionFlow_ComOpenSensors,
	(void*)Watch_Mission13_MissionFlow_ComOpenSensors,
	(void*)Init_Mission13_MissionFlow_ComFocus,
	(void*)Watch_Mission13_MissionFlow_ComFocus,
	(void*)Init_Mission13_MissionFlow_FICom,
	(void*)Watch_Mission13_MissionFlow_FICom,
	(void*)Init_Mission13_MissionFlow_FIComPING,
	(void*)Watch_Mission13_MissionFlow_FIComPING,
	(void*)Init_Mission13_MissionFlow_FIComPointer,
	(void*)Watch_Mission13_MissionFlow_FIComPointer,
	(void*)Init_Mission13_MissionFlow_ComTransOut,
	(void*)Watch_Mission13_MissionFlow_ComTransOut,
	(void*)Init_Mission13_MissionFlow_LostTransIn,
	(void*)Watch_Mission13_MissionFlow_LostTransIn,
	(void*)Init_Mission13_MissionFlow_LostOpenSensors,
	(void*)Watch_Mission13_MissionFlow_LostOpenSensors,
	(void*)Init_Mission13_MissionFlow_FILost,
	(void*)Watch_Mission13_MissionFlow_FILost,
	(void*)Init_Mission13_MissionFlow_FILostPointer,
	(void*)Watch_Mission13_MissionFlow_FILostPointer,
	(void*)Init_Mission13_MissionFlow_LostTransOut,
	(void*)Watch_Mission13_MissionFlow_LostTransOut,
	(void*)Init_Mission13_MissionFlow_TeleporterTransIn,
	(void*)Watch_Mission13_MissionFlow_TeleporterTransIn,
	(void*)Init_Mission13_MissionFlow_TeleporterOpenSensors,
	(void*)Watch_Mission13_MissionFlow_TeleporterOpenSensors,
	(void*)Init_Mission13_MissionFlow_FITeleporter,
	(void*)Watch_Mission13_MissionFlow_FITeleporter,
	(void*)Init_Mission13_MissionFlow_FITeleporterPointer,
	(void*)Watch_Mission13_MissionFlow_FITeleporterPointer,
	(void*)Init_Mission13_MissionFlow_TeleporterTransOut,
	(void*)Watch_Mission13_MissionFlow_TeleporterTransOut,
	(void*)Init_Mission13_MissionFlow_FindMissing,
	(void*)Watch_Mission13_MissionFlow_FindMissing,
	(void*)Init_Mission13_MissionFlow_MissingTransIn,
	(void*)Watch_Mission13_MissionFlow_MissingTransIn,
	(void*)Init_Mission13_MissionFlow_FIMissing,
	(void*)Watch_Mission13_MissionFlow_FIMissing,
	(void*)Init_Mission13_MissionFlow_ImInTransIn,
	(void*)Watch_Mission13_MissionFlow_ImInTransIn,
	(void*)Init_Mission13_MissionFlow_ImIn,
	(void*)Watch_Mission13_MissionFlow_ImIn,
	(void*)Init_Mission13_MissionFlow_Farewell,
	(void*)Watch_Mission13_MissionFlow_Farewell,
	(void*)Init_Mission13_MissionFlow_TimeToGo,
	(void*)Watch_Mission13_MissionFlow_TimeToGo,
	(void*)Init_Mission13_MissionFlow_BigGuns,
	(void*)Watch_Mission13_MissionFlow_BigGuns,
	(void*)Init_Mission13_MissionFlow_CloakingTech,
	(void*)Watch_Mission13_MissionFlow_CloakingTech,
	(void*)Init_Mission13_MissionFlow_Autoguns,
	(void*)Watch_Mission13_MissionFlow_Autoguns,
	(void*)Init_Mission13_MissionFlow_AlmostDone,
	(void*)Watch_Mission13_MissionFlow_AlmostDone,
	(void*)Init_Mission13_MissionFlow_Done,
	(void*)Watch_Mission13_MissionFlow_Done,
	(void*)Init_Mission13_Defector,
	(void*)Watch_Mission13_Defector,
	(void*)Init_Mission13_Defector_PreWait,
	(void*)Watch_Mission13_Defector_PreWait,
	(void*)Init_Mission13_Defector_Waiting,
	(void*)Watch_Mission13_Defector_Waiting,
	(void*)Init_Mission13_Defector_Leaving,
	(void*)Watch_Mission13_Defector_Leaving,
	(void*)Init_Mission13_JydHq,
	(void*)Watch_Mission13_JydHq,
	(void*)Init_Mission13_JydHq_Waiting,
	(void*)Watch_Mission13_JydHq_Waiting,
	(void*)Init_Mission13_JydHq_Attack,
	(void*)Watch_Mission13_JydHq_Attack,
	(void*)Init_Mission13_JYDTeam,
	(void*)Watch_Mission13_JYDTeam,
	(void*)Init_Mission13_JYDTeam_Waiting,
	(void*)Watch_Mission13_JYDTeam_Waiting,
	(void*)Init_Mission13_JYDTeam_Wants2Snatch,
	(void*)Watch_Mission13_JYDTeam_Wants2Snatch,
	(void*)Init_Mission13_JYDTeam_ChooseWho,
	(void*)Watch_Mission13_JYDTeam_ChooseWho,
	(void*)Init_Mission13_JYDTeam_UseGate1,
	(void*)Watch_Mission13_JYDTeam_UseGate1,
	(void*)Init_Mission13_JYDTeam_UseGate2,
	(void*)Watch_Mission13_JYDTeam_UseGate2,
	(void*)Init_Mission13_JYDTeam_UseGate3,
	(void*)Watch_Mission13_JYDTeam_UseGate3,
	(void*)Init_Mission13_JYDTeam_UseGate4,
	(void*)Watch_Mission13_JYDTeam_UseGate4,
	(void*)Init_Mission13_JYDTeam_UseGate5,
	(void*)Watch_Mission13_JYDTeam_UseGate5,
	(void*)Init_Mission13_JYDTeam_UseGate6,
	(void*)Watch_Mission13_JYDTeam_UseGate6,
	(void*)Init_Mission13_JYDTeam_UseGate7,
	(void*)Watch_Mission13_JYDTeam_UseGate7,
	(void*)Init_Mission13_JYDTeam_UseGate8,
	(void*)Watch_Mission13_JYDTeam_UseGate8,
	(void*)Init_Mission13_JYDTeam_UseGate0,
	(void*)Watch_Mission13_JYDTeam_UseGate0,
	(void*)Init_Mission13_JYDTeam_Snatching,
	(void*)Watch_Mission13_JYDTeam_Snatching,
	(void*)Init_Mission13_JYDTeam_Snatched,
	(void*)Watch_Mission13_JYDTeam_Snatched,
	(void*)Init_Mission13_JYDTeam_HyperspaceDelay,
	(void*)Watch_Mission13_JYDTeam_HyperspaceDelay,
	(void*)Init_Mission13_JYDTeam_ChooseDump,
	(void*)Watch_Mission13_JYDTeam_ChooseDump,
	(void*)Init_Mission13_JYDTeam_DumpGate1,
	(void*)Watch_Mission13_JYDTeam_DumpGate1,
	(void*)Init_Mission13_JYDTeam_DumpGate2,
	(void*)Watch_Mission13_JYDTeam_DumpGate2,
	(void*)Init_Mission13_JYDTeam_DumpGate3,
	(void*)Watch_Mission13_JYDTeam_DumpGate3,
	(void*)Init_Mission13_JYDTeam_DumpGate4,
	(void*)Watch_Mission13_JYDTeam_DumpGate4,
	(void*)Init_Mission13_JYDTeam_DumpGate5,
	(void*)Watch_Mission13_JYDTeam_DumpGate5,
	(void*)Init_Mission13_JYDTeam_DumpGate6,
	(void*)Watch_Mission13_JYDTeam_DumpGate6,
	(void*)Init_Mission13_JYDTeam_DumpGate7,
	(void*)Watch_Mission13_JYDTeam_DumpGate7,
	(void*)Init_Mission13_JYDTeam_DumpGate8,
	(void*)Watch_Mission13_JYDTeam_DumpGate8,
	(void*)Init_Mission13_LGuns,
	(void*)Watch_Mission13_LGuns,
	(void*)Init_Mission13_LGuns_Waiting,
	(void*)Watch_Mission13_LGuns_Waiting,
	(void*)Init_Mission13_LGuns_Dead,
	(void*)Watch_Mission13_LGuns_Dead,
	(void*)Init_Mission13_LGuns_Attack,
	(void*)Watch_Mission13_LGuns_Attack,
	(void*)Init_Mission13_SGuns,
	(void*)Watch_Mission13_SGuns,
	(void*)Init_Mission13_SGuns_Waiting,
	(void*)Watch_Mission13_SGuns_Waiting,
	(void*)Init_Mission13_SGuns_Attack,
	(void*)Watch_Mission13_SGuns_Attack,
	(void*)Init_Mission13_SGuns_Dead,
	(void*)Watch_Mission13_SGuns_Dead,
	(void*)Init_Mission13_Prox,
	(void*)Watch_Mission13_Prox,
	(void*)Init_Mission13_Prox_Wait,
	(void*)Watch_Mission13_Prox_Wait,
	(void*)Init_Mission13,
	(void*)Watch_Mission13,
};

// Number of FSM init/watch function pointers.
const unsigned int Mission13_FunctionPointerCount = 148;
