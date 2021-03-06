#define MOD_DATE 13.5.2.1546

#include "Gratis.h"
#define MOD_CONFIG Gratis
#define MOD_BUILD Testing
#define MOD_RELEASE 0
#define ECU_CALIBRATION_ID A8DH200Z
#define ECU_IDENTIFIER 4342594006
/////////////////////
// NonSpecific Rom Info and Routines
/////////////////////

#define dCalId (0x00002000)
#define dEcuId (0x000CD208)
#define dRomHoleStart (0x000E1000)
#define pRamHoleStart (0xFFFF8E00)
#define sPull2DFloat (0x0000209C)
#define sPull3DFloat (0x00002110)

/////////////////////
// Rev Limit Hack
/////////////////////

#define hRevLimDelete (0x000145AC)
#define sRevLimStart (0x0002C8A8)
#define sRevLimEnd (0x0002C8DE)
#define pFlagsRevLim ((char*)0xFFFF7008)
#define RevLimBitMask (0x80)

/////////////////////
// Speed Density Hack
/////////////////////

#define hMafCalc (0x000080F4)
#define sMafCalc (0x00008098)

/////////////////////
// Injector Hack
/////////////////////

#define dInjectorScaling ((float*)0x000C5EBC)

/////////////////////
// Cel Hacks
/////////////////////

#define sCelTrigger (0x00073048)
#define hCelSignal (0x00073160)
#define pCelSignalOem ((char*)0xFFFF89BA)

/////////////////////
// Boost Hacks
/////////////////////

#define tTargetBoost (0x0007A768)

/////////////////////
// WGDC Hacks
/////////////////////

#define hWgdc (0x000141E0)
#define sWgdc (0x00016948)
#define tWgdcInitial (0x0007A6C0)
#define tWgdcMax (0x0007A6F8)

/////////////////////
// Primary Open Loop Fueling Hacks
/////////////////////

#define pPolf4Byte (0xFFFF6E74)
#define tPolf (0x0007BC00)
#define pPolfEnrich (0xFFFF6E74)

/////////////////////
// Timing Hacks
/////////////////////

#define tBaseTiming (0x0007C3B0)
#define pBaseTiming (0xFFFF71A0)
#define pKcaIam (0xFFFF7320)

/////////////////////
// Spark Cut
/////////////////////


/////////////////////
// Flags-Signals
/////////////////////

#define pClutchFlags ((char*)0xFFFF67B5)
#define ClutchBitMask ((char)0x80)

/////////////////////
// NonSpecific Engine params
/////////////////////

#define pFbkc1 ((char*)0xFFFF6930)
#define pFbkc4 ((float*)0xFFFF72DC)
#define pIam1 ((char*)0xFFFF6935)
#define pIam4 ((float*)0xFFFF28F4)
#define pEngineSpeed ((float*)0xFFFF67DC)
#define pVehicleSpeed ((float*)0xFFFF67D4)
#define pCoolantTemp ((float*)0xFFFF5CAC)
#define pAtmoPress ((float*)0xFFFF5CD4)
#define pManifoldAbsolutePressure ((float*)0xFFFF6464)
#define pIntakeAirTemp ((float*)0xFFFF5C9C)
#define pMassAirFlow ((float*)0xFFFF5CD0)
#define pMafSensorVoltage ((short*)0xFFFF5BFE)
#define pEngineLoad ((float*)0xFFFF660C)
#define pReqTorque ((float*)0xFFFF75D0)
#define pThrottlePlate ((float*)0xFFFF6508)
#define pCurrentGear ((char*)0xFFFF68E5)
#define pAf1Res ((float*)0xFFFF5F08)

/////////////////////
// OBD Experimental stuff
/////////////////////

#define pObdVinDirect ((char*)0xFFFF2004)

/////////////////////
// New Definitions
/////////////////////

#define dLoadSmoothingA (0x000C0FF0)
#define dLoadSmoothingB (0x000C0FF4)
#define dLoadSmoothingFinal (0x000C1000)

/////////////////////
// Memory Reset
/////////////////////

#define sMemoryReset (0x0000FA8C)
#define hMemoryReset (0x0000D9A8)
#define pMemoryResetLimit (0xFFFFBFBB)
#define hMemoryResetLimit (0x00011E18)

