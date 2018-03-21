#ifndef _GAMEFUNCTIONS_H_
#define _GAMEFUNCTIONS_H_

#include "GameNodeFun.h"
#include "LoadActorsFun.h"
#include "StateMachineFun.h"

#define FN_SHIPMOVEFN	0
#define FN_SHIPANIMATIONFN	1
#define FN_VIEWPORTDELETEFN	2
#define FN_MAPCOLLISIONDELETEFN	3
#define FN_ONCOLLISIONDELETEFN	4
#define FN_SHIPFIREFN	5
#define FN_BIRDSPITFN	6
#define TIMER_BIRDSPITFN	0
#define FN_SHIPDAMAGEFN	7
#define FN_EAGLEDAMAGEFN	8
#define FN_EAGLEDELETEFN	9
#define FN_EAGLESPAWNFN	10
#define TIMER_EAGLESPAWNFN	1
#define FN_HUDTIMERFN	11
#define TIMER_HUDTIMERFN	2


#define MP_PROBEMV	0
#define MP_CLOUDMV	1

extern int NoOfEaglesGD;

#define LD_SHIPLD 0
#define LD_EAGLELD 1

#include "MyFunctions.h"
extern void ShipMoveFN(Sprite* This);
extern void ShipAnimationFN(Sprite* This);
extern void ViewportDeleteFN(Sprite* This);
extern void MapCollisionDeleteFN(Sprite* This);
extern void OnCollisionDeleteFN(Sprite* This);
extern void ShipFireFN(Sprite* This);
extern void BirdSpitFN(Sprite* This);
extern void ShipDamageFN(Sprite* This);
extern void EagleDamageFN(Sprite* This);
extern void EagleDeleteFN(Sprite* This);
extern void EagleSpawnFN(Sprite* This);
extern void HUDTimerFN(Text* This);

#endif
