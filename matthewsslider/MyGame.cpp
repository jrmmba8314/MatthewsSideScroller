#include "stdafx.h"
#include "Headers.h"
#include "LocalDataFun.h"
#include "GameFunctions.h"

void Mode()
{
	SetMode(640,480,32);
	_IsWindowed = true;
}

void SetDataPath()
{
	ArtAssetsPath = "";
	RTDPath = "";
};

void BuildLogic()
{
	MPArray = NewMovementPatterns(2);
	FArray = NewVoidPointers(12);
	FArray[FN_SHIPMOVEFN] = (void*)ShipMoveFN;
	FArray[FN_SHIPANIMATIONFN] = (void*)ShipAnimationFN;
	FArray[FN_VIEWPORTDELETEFN] = (void*)ViewportDeleteFN;
	FArray[FN_MAPCOLLISIONDELETEFN] = (void*)MapCollisionDeleteFN;
	FArray[FN_ONCOLLISIONDELETEFN] = (void*)OnCollisionDeleteFN;
	FArray[FN_SHIPFIREFN] = (void*)ShipFireFN;
	FArray[FN_BIRDSPITFN] = (void*)BirdSpitFN;
	FArray[FN_SHIPDAMAGEFN] = (void*)ShipDamageFN;
	FArray[FN_EAGLEDAMAGEFN] = (void*)EagleDamageFN;
	FArray[FN_EAGLEDELETEFN] = (void*)EagleDeleteFN;
	FArray[FN_EAGLESPAWNFN] = (void*)EagleSpawnFN;
	FArray[FN_HUDTIMERFN] = (void*)HUDTimerFN;

	maxFIndex = 11;
	maxMPIndex = 1;

	TMArray = NewTimers(3);
	TMArray[TIMER_BIRDSPITFN] = Timer(GetTimerFunction(FN_BIRDSPITFN),100,TU_GameLoops,true,TM_Infinite);
	TMArray[TIMER_EAGLESPAWNFN] = Timer(GetTimerFunction(FN_EAGLESPAWNFN),170,TU_GameLoops,true,TM_Infinite);
	TMArray[TIMER_HUDTIMERFN] = Timer(GetTimerFunction(FN_HUDTIMERFN),60,TU_GameLoops,true,TM_Infinite);

	maxTMIndex = 2;

	NArray = NewNodePointers(2);
	static ShipLD ld_shipld;
	NArray[LD_SHIPLD] = (ShipLD*)&ld_shipld;
	static EagleLD ld_eagleld;
	NArray[LD_EAGLELD] = (EagleLD*)&ld_eagleld;
	maxNIndex = 1;

	MovementPattern mpProbeMV;
	mpProbeMV.Name("ProbeMV");
	mpProbeMV.NumberOfVectors(5);
	mpProbeMV.CalculateVectorPattern(0,78,-192);
	mpProbeMV.CalculateVectorPattern(1,65,188);
	mpProbeMV.CalculateVectorPattern(2,-192,-136);
	mpProbeMV.CalculateVectorPattern(3,258,5);
	mpProbeMV.CalculateVectorPattern(4,-209,135);

	MPArray[MP_PROBEMV] = mpProbeMV;

	MovementPattern mpCloudMV;
	mpCloudMV.Name("CloudMV");
	mpCloudMV.NumberOfVectors(4);
	mpCloudMV.CalculateVectorPattern(0,182,-61);
	mpCloudMV.CalculateVectorPattern(1,186,69);
	mpCloudMV.CalculateVectorPattern(2,-194,95);
	mpCloudMV.CalculateVectorPattern(3,-174,-103);

	MPArray[MP_CLOUDMV] = mpCloudMV;

};

void OnGameStart()
{
};

void OnGameEnd(){
};

void OnSave(File& file)
{
	file.Write(NoOfEaglesGD);
	
};

void OnLoad(File& file)
{
	file.Read(NoOfEaglesGD);
	
};

void Fun()
{
	GameNode *g1;
	g1=NewGameNode();
	g1->Id(1);
	g1->Name("Level_1");
	g1->gameNodeActorsFunction = LoadAnimation_Level_1;
	g1->gameNodeLevelFunction = Init_Level_1Function;
	g1->transitionFunction = Exit_Level_1Function;
	g1->endLevelFunction = End_Level_1Function;
	myGame->Add(g1);


	myGame->Title("Matthews Slider");
}
