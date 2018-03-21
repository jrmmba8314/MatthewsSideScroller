#include "stdafx.h"
#include "Headers.h"
#include "LocalDataFun.h"
#include "GameFunctions.h"

void LoadGameFile()
{
	
}

void Init_Level_1Function(GameNode *gn)
{
#ifdef ERROR_MESSAGES
	pConsole->Color(RGB(0,0,0));
#endif

	gn->WorldWidth(3620);
	gn->WorldHeight(480);

	gn->FPStoMS(60);
	gn->QuitOnEscape(true);
	gn->ShowScrollingBoundingBox(false);

	gn->viewPort.ViewPortScrollingBB(270,0,100,480);

	gn->viewPort.WorldXPos(0);
	gn->viewPort.WorldYPos(0);
	gn->viewPort.MaxInflateBBLeft(270);
	gn->viewPort.MaxInflateBBTop(0);
	gn->viewPort.MaxInflateBBRight(270);
	gn->viewPort.MaxInflateBBBottom(0);

	gn->viewPort.ViewPortWidth(640);
	gn->viewPort.ViewPortHeight(480);
	gn->AddMusic("BackgroundSFX","The Peanuts Theme.flv.WAV",true);
	gn->AddSFX("LaserSFX","laser-01.wav",false,0);
	gn->AddSFX("SpitSFX","spit.WAV",false,0);


	Map mSkyMap("SkyMap","skymap.bmp",Map::MASTERMAP,0,0,0);
	mSkyMap.SpeedX(0.00);
	mSkyMap.SpeedY(0.00);
	mSkyMap.UseTransparency(true);
	mSkyMap.TransparencyColor(RGB(0,255,0));
	mSkyMap.Visible(true);
	mSkyMap.Unused(false);
	mSkyMap.Pause(false);
	mSkyMap.SpacePartitionGridSize(128);
	mSkyMap.ShowMapCollision(false);
	mSkyMap.AddCollisionData(CollisionSegment(1,1,3618,3,1,0));
	mSkyMap.AddCollisionData(CollisionSegment(289,425,1,406,1,0));
	mSkyMap.AddCollisionData(CollisionSegment(3617,410,2900,453,1,0));
	mSkyMap.AddCollisionData(CollisionSegment(2653,432,1441,440,1,0));
	mSkyMap.AddCollisionData(CollisionSegment(2905,454,2644,432,1,0));
	mSkyMap.AddCollisionData(CollisionSegment(1448,440,1193,446,1,0));
	mSkyMap.AddCollisionData(CollisionSegment(1196,448,1193,448,1,0));
	mSkyMap.AddCollisionData(CollisionSegment(1193,448,276,424,1,0));
	mSkyMap.AddCollisionData(CollisionSegment(2901,451,2821,335,0,0));
	mSkyMap.AddCollisionData(CollisionSegment(2821,335,2732,336,0,0));
	mSkyMap.AddCollisionData(CollisionSegment(2732,336,2653,437,0,0));
	mSkyMap.AddCollisionData(CollisionSegment(1430,440,1308,124,0,0));
	mSkyMap.AddCollisionData(CollisionSegment(1308,124,1273,124,0,0));
	mSkyMap.AddCollisionData(CollisionSegment(1273,124,1204,444,0,0));
	mSkyMap.AddCollisionData(CollisionSegment(690,2,695,95,0,0));
	mSkyMap.AddCollisionData(CollisionSegment(695,95,703,94,0,0));
	mSkyMap.AddCollisionData(CollisionSegment(703,94,721,1,0,0));
	mSkyMap.AddCollisionData(CollisionSegment(729,423,705,363,0,0));
	mSkyMap.AddCollisionData(CollisionSegment(705,363,685,420,0,0));
	mSkyMap.AddCollisionData(CollisionSegment(685,420,685,420,0,0));
	gn->Add(mSkyMap);

	StreamedSoundPTR music("BackgroundSFX");
	music->Play();


	FunRect rectSkyWrap = {0,0,3300,480};
	Map mSkyWrap("SkyWrap","thesky.bmp",Map::STANDARDMAP,0,0,0,true,rectSkyWrap);
	mSkyWrap.SpeedX(0.00);
	mSkyWrap.SpeedY(0.00);
	mSkyWrap.ScrollRatioX(0.00);
	mSkyWrap.ScrollRatioY(0.00);
	mSkyWrap.UseTransparency(false);
	mSkyWrap.Visible(true);
	mSkyWrap.Unused(false);
	mSkyWrap.Pause(false);
	mSkyWrap.SpacePartitionGridSize(128);
	mSkyWrap.ShowMapCollision(false);
	gn->Add(mSkyWrap);

	Sprite sShip17473433741;
	sShip17473433741.Name("Ship");
	sShip17473433741.Visible(true);
	sShip17473433741.Unused(false);
	sShip17473433741.Pause(false);
	sShip17473433741.Reflection(true);
	sShip17473433741.MainCharacter(true);
	sShip17473433741.BelongToMap("SkyMap");
	sShip17473433741.ActorIndex(0);
	sShip17473433741.Animation(0);
	sShip17473433741.Frame(0);
	sShip17473433741.PegRegistered(false);
	sShip17473433741.ZOrder(0);
	sShip17473433741.MapPositionX(271);
	sShip17473433741.MapPositionY(200);
	sShip17473433741.CheckCollisionWithMap(true);
	sShip17473433741.GhostCollisionWithMap(false);
	sShip17473433741.DisplayListNumber(0);
	sShip17473433741.Friction(0);
	sShip17473433741.ActivateCollisionWithSprite(true);
	sShip17473433741.CheckCollisionWithSprite(true);
	sShip17473433741.CheckSameDisplayList(false);
	sShip17473433741.GhostCollisionWithSprite(false);
	sShip17473433741.AddLocalVariable(LD_SHIPLD);
	sShip17473433741.behavior.AddFunction(FN_SHIPANIMATIONFN);
	sShip17473433741.behavior.AddFunction(FN_SHIPMOVEFN);
	sShip17473433741.behavior.AddFunction(FN_SHIPFIREFN);
	sShip17473433741.behavior.AddFunction(FN_SHIPDAMAGEFN);
	sShip17473433741.behavior.AddTimer(TIMER_EAGLESPAWNFN,true);
	sShip17473433741.VectorDirection(0,0,0);
	sShip17473433741.ShowVectorOfTranslation(false);
	sShip17473433741.CollisionType(PRECISECOLLISION);
	sShip17473433741.Speed((float)5.00);
	sShip17473433741.VariableNumber(0);
	sShip17473433741.ShowSpriteBoundingBox(false);
	sShip17473433741.ShowSpriteCollision(false);
	sShip17473433741.Gravity(false);
	gn->Add(sShip17473433741);

	Sprite sMasterEagle17488481790;
	sMasterEagle17488481790.Name("MasterEagle");
	sMasterEagle17488481790.Visible(true);
	sMasterEagle17488481790.Unused(true);
	sMasterEagle17488481790.Pause(false);
	sMasterEagle17488481790.Reflection(true);
	sMasterEagle17488481790.MainCharacter(false);
	sMasterEagle17488481790.BelongToMap("SkyMap");
	sMasterEagle17488481790.ActorIndex(1);
	sMasterEagle17488481790.Animation(0);
	sMasterEagle17488481790.Frame(0);
	sMasterEagle17488481790.PegRegistered(true);
	sMasterEagle17488481790.ZOrder(0);
	sMasterEagle17488481790.MapPositionX(749);
	sMasterEagle17488481790.MapPositionY(279);
	sMasterEagle17488481790.CheckCollisionWithMap(true);
	sMasterEagle17488481790.GhostCollisionWithMap(false);
	sMasterEagle17488481790.DisplayListNumber(1);
	sMasterEagle17488481790.Friction(0);
	sMasterEagle17488481790.ActivateCollisionWithSprite(true);
	sMasterEagle17488481790.CheckCollisionWithSprite(true);
	sMasterEagle17488481790.CheckSameDisplayList(false);
	sMasterEagle17488481790.GhostCollisionWithSprite(false);
	sMasterEagle17488481790.AddLocalVariable(LD_EAGLELD);
	sMasterEagle17488481790.behavior.AddFunction(FN_EAGLEDAMAGEFN);
	sMasterEagle17488481790.behavior.AddFunction(FN_EAGLEDELETEFN);
	sMasterEagle17488481790.behavior.AddTimer(TIMER_BIRDSPITFN,true);
	sMasterEagle17488481790.VectorDirection(1,1,0);
	sMasterEagle17488481790.ShowVectorOfTranslation(false);
	sMasterEagle17488481790.CollisionType(PRECISECOLLISION);
	sMasterEagle17488481790.Speed((float)0.75);
	sMasterEagle17488481790.VariableNumber(0);
	sMasterEagle17488481790.ShowSpriteBoundingBox(false);
	sMasterEagle17488481790.ShowSpriteCollision(false);
	sMasterEagle17488481790.ApplyMovementPattern(MP_PROBEMV);
	sMasterEagle17488481790.StartMovementPattern(true,true);

	sMasterEagle17488481790.ShowMovementPattern(false);
	sMasterEagle17488481790.Gravity(false);
	gn->Add(sMasterEagle17488481790);

	Sprite sCloudOfDoom307101109523;
	sCloudOfDoom307101109523.Name("CloudOfDoom");
	sCloudOfDoom307101109523.Visible(true);
	sCloudOfDoom307101109523.Unused(false);
	sCloudOfDoom307101109523.Pause(false);
	sCloudOfDoom307101109523.Reflection(true);
	sCloudOfDoom307101109523.MainCharacter(false);
	sCloudOfDoom307101109523.BelongToMap("SkyMap");
	sCloudOfDoom307101109523.ActorIndex(2);
	sCloudOfDoom307101109523.Animation(0);
	sCloudOfDoom307101109523.Frame(0);
	sCloudOfDoom307101109523.PegRegistered(false);
	sCloudOfDoom307101109523.ZOrder(0);
	sCloudOfDoom307101109523.MapPositionX(1983);
	sCloudOfDoom307101109523.MapPositionY(161);
	sCloudOfDoom307101109523.CheckCollisionWithMap(true);
	sCloudOfDoom307101109523.GhostCollisionWithMap(false);
	sCloudOfDoom307101109523.DisplayListNumber(1);
	sCloudOfDoom307101109523.Friction(0);
	sCloudOfDoom307101109523.ActivateCollisionWithSprite(true);
	sCloudOfDoom307101109523.CheckCollisionWithSprite(true);
	sCloudOfDoom307101109523.CheckSameDisplayList(false);
	sCloudOfDoom307101109523.GhostCollisionWithSprite(true);
	sCloudOfDoom307101109523.VectorDirection(1,1,0);
	sCloudOfDoom307101109523.ShowVectorOfTranslation(false);
	sCloudOfDoom307101109523.CollisionType(PRECISECOLLISION);
	sCloudOfDoom307101109523.Speed((float)0.75);
	sCloudOfDoom307101109523.VariableNumber(0);
	sCloudOfDoom307101109523.ShowSpriteBoundingBox(false);
	sCloudOfDoom307101109523.ShowSpriteCollision(false);
	sCloudOfDoom307101109523.ApplyMovementPattern(MP_CLOUDMV);
	sCloudOfDoom307101109523.StartMovementPattern(true,true);

	sCloudOfDoom307101109523.ShowMovementPattern(false);
	sCloudOfDoom307101109523.Gravity(false);
	gn->Add(sCloudOfDoom307101109523);

	Sprite sMasterBullet146578894317;
	sMasterBullet146578894317.Name("MasterBullet");
	sMasterBullet146578894317.Visible(true);
	sMasterBullet146578894317.Unused(true);
	sMasterBullet146578894317.Pause(false);
	sMasterBullet146578894317.Reflection(false);
	sMasterBullet146578894317.MainCharacter(false);
	sMasterBullet146578894317.BelongToMap("SkyMap");
	sMasterBullet146578894317.ActorIndex(3);
	sMasterBullet146578894317.Animation(0);
	sMasterBullet146578894317.Frame(0);
	sMasterBullet146578894317.PegRegistered(false);
	sMasterBullet146578894317.ZOrder(0);
	sMasterBullet146578894317.MapPositionX(0);
	sMasterBullet146578894317.MapPositionY(0);
	sMasterBullet146578894317.CheckCollisionWithMap(true);
	sMasterBullet146578894317.GhostCollisionWithMap(false);
	sMasterBullet146578894317.DisplayListNumber(0);
	sMasterBullet146578894317.Friction(0);
	sMasterBullet146578894317.ActivateCollisionWithSprite(true);
	sMasterBullet146578894317.CheckCollisionWithSprite(true);
	sMasterBullet146578894317.CheckSameDisplayList(false);
	sMasterBullet146578894317.GhostCollisionWithSprite(false);
	sMasterBullet146578894317.behavior.AddFunction(FN_MAPCOLLISIONDELETEFN);
	sMasterBullet146578894317.behavior.AddFunction(FN_ONCOLLISIONDELETEFN);
	sMasterBullet146578894317.behavior.AddFunction(FN_VIEWPORTDELETEFN);
	sMasterBullet146578894317.VectorDirection(0,0,0);
	sMasterBullet146578894317.ShowVectorOfTranslation(false);
	sMasterBullet146578894317.CollisionType(PRECISECOLLISION);
	sMasterBullet146578894317.Speed((float)0.00);
	sMasterBullet146578894317.VariableNumber(0);
	sMasterBullet146578894317.ShowSpriteBoundingBox(false);
	sMasterBullet146578894317.ShowSpriteCollision(false);
	sMasterBullet146578894317.Gravity(false);
	gn->Add(sMasterBullet146578894317);

	Sprite sMasterSpit149192495169;
	sMasterSpit149192495169.Name("MasterSpit");
	sMasterSpit149192495169.Visible(true);
	sMasterSpit149192495169.Unused(true);
	sMasterSpit149192495169.Pause(false);
	sMasterSpit149192495169.Reflection(false);
	sMasterSpit149192495169.MainCharacter(false);
	sMasterSpit149192495169.BelongToMap("SkyMap");
	sMasterSpit149192495169.ActorIndex(4);
	sMasterSpit149192495169.Animation(0);
	sMasterSpit149192495169.Frame(0);
	sMasterSpit149192495169.PegRegistered(false);
	sMasterSpit149192495169.ZOrder(0);
	sMasterSpit149192495169.MapPositionX(0);
	sMasterSpit149192495169.MapPositionY(0);
	sMasterSpit149192495169.CheckCollisionWithMap(true);
	sMasterSpit149192495169.GhostCollisionWithMap(false);
	sMasterSpit149192495169.DisplayListNumber(0);
	sMasterSpit149192495169.Friction(0);
	sMasterSpit149192495169.ActivateCollisionWithSprite(true);
	sMasterSpit149192495169.CheckCollisionWithSprite(true);
	sMasterSpit149192495169.CheckSameDisplayList(false);
	sMasterSpit149192495169.GhostCollisionWithSprite(false);
	sMasterSpit149192495169.behavior.AddFunction(FN_MAPCOLLISIONDELETEFN);
	sMasterSpit149192495169.behavior.AddFunction(FN_ONCOLLISIONDELETEFN);
	sMasterSpit149192495169.behavior.AddFunction(FN_VIEWPORTDELETEFN);
	sMasterSpit149192495169.VectorDirection(0,0,0);
	sMasterSpit149192495169.ShowVectorOfTranslation(false);
	sMasterSpit149192495169.CollisionType(PRECISECOLLISION);
	sMasterSpit149192495169.Speed((float)0.00);
	sMasterSpit149192495169.VariableNumber(0);
	sMasterSpit149192495169.ShowSpriteBoundingBox(false);
	sMasterSpit149192495169.ShowSpriteCollision(false);
	sMasterSpit149192495169.Gravity(false);
	gn->Add(sMasterSpit149192495169);

	Variable tTimerTXT;
	tTimerTXT.Name("TimerTXT");
	tTimerTXT.Visible(true);
	tTimerTXT.Unused(false);
	tTimerTXT.Pause(false);
	tTimerTXT.FontName("Arial Black");
	tTimerTXT.Width(0);
	tTimerTXT.Height(18.00);
	tTimerTXT.Weight(700);
	tTimerTXT.Color(RGB(0,0,0));
	tTimerTXT.Italic(false);
	tTimerTXT.StrikeOut(false);
	tTimerTXT.Underline(false);

	FunRect rectTimerTXT = {450,0,640,480};
	tTimerTXT.Frame(rectTimerTXT);
	tTimerTXT.ShowFrame(false);
	tTimerTXT.InWorld(false);
	tTimerTXT.DisplayType(Variable::RespectingWords);
	tTimerTXT.TopMargin(0);
	tTimerTXT.LeftMargin(0);
	tTimerTXT.LineSpacing(0);
	tTimerTXT.LetterSpacing(0);
	tTimerTXT.LeadingSpaces(true);
	tTimerTXT.Effect(Variable::MummyEffect);
	tTimerTXT.Delay(0,0);
	tTimerTXT = "Time:";
	gn->Add(tTimerTXT);

	Variable tTimerNoTXT;
	tTimerNoTXT.Name("TimerNoTXT");
	tTimerNoTXT.Visible(true);
	tTimerNoTXT.Unused(false);
	tTimerNoTXT.Pause(false);
	tTimerNoTXT.FontName("Arial Black");
	tTimerNoTXT.Width(0);
	tTimerNoTXT.Height(18.00);
	tTimerNoTXT.Weight(700);
	tTimerNoTXT.Color(RGB(0,0,0));
	tTimerNoTXT.Italic(false);
	tTimerNoTXT.StrikeOut(false);
	tTimerNoTXT.Underline(false);

	FunRect rectTimerNoTXT = {550,0,640,480};
	tTimerNoTXT.Frame(rectTimerNoTXT);
	tTimerNoTXT.ShowFrame(false);
	tTimerNoTXT.InWorld(false);
	tTimerNoTXT.DisplayType(Variable::RespectingWords);
	tTimerNoTXT.TopMargin(0);
	tTimerNoTXT.LeftMargin(0);
	tTimerNoTXT.LineSpacing(0);
	tTimerNoTXT.LetterSpacing(0);
	tTimerNoTXT.LeadingSpaces(true);
	tTimerNoTXT.Effect(Variable::MummyEffect);
	tTimerNoTXT.Delay(0,0);
	tTimerNoTXT.OnlyIntegerPart(true);
	tTimerNoTXT = 0.000000;
	tTimerNoTXT.behavior.AddTimer(TIMER_HUDTIMERFN,true);
	gn->Add(tTimerNoTXT);

	Variable tScoreTXT;
	tScoreTXT.Name("ScoreTXT");
	tScoreTXT.Visible(true);
	tScoreTXT.Unused(false);
	tScoreTXT.Pause(false);
	tScoreTXT.FontName("Arial Black");
	tScoreTXT.Width(0);
	tScoreTXT.Height(18.00);
	tScoreTXT.Weight(700);
	tScoreTXT.Color(RGB(0,0,0));
	tScoreTXT.Italic(false);
	tScoreTXT.StrikeOut(false);
	tScoreTXT.Underline(false);

	FunRect rectScoreTXT = {250,0,640,480};
	tScoreTXT.Frame(rectScoreTXT);
	tScoreTXT.ShowFrame(false);
	tScoreTXT.InWorld(false);
	tScoreTXT.DisplayType(Variable::RespectingWords);
	tScoreTXT.TopMargin(0);
	tScoreTXT.LeftMargin(0);
	tScoreTXT.LineSpacing(0);
	tScoreTXT.LetterSpacing(0);
	tScoreTXT.LeadingSpaces(true);
	tScoreTXT.Effect(Variable::MummyEffect);
	tScoreTXT.Delay(0,0);
	tScoreTXT = "Score";
	gn->Add(tScoreTXT);

	Variable tScoreNoTXT;
	tScoreNoTXT.Name("ScoreNoTXT");
	tScoreNoTXT.Visible(true);
	tScoreNoTXT.Unused(false);
	tScoreNoTXT.Pause(false);
	tScoreNoTXT.FontName("Arial Black");
	tScoreNoTXT.Width(0);
	tScoreNoTXT.Height(18.00);
	tScoreNoTXT.Weight(700);
	tScoreNoTXT.Color(RGB(0,0,0));
	tScoreNoTXT.Italic(false);
	tScoreNoTXT.StrikeOut(false);
	tScoreNoTXT.Underline(false);

	FunRect rectScoreNoTXT = {350,0,640,480};
	tScoreNoTXT.Frame(rectScoreNoTXT);
	tScoreNoTXT.ShowFrame(false);
	tScoreNoTXT.InWorld(false);
	tScoreNoTXT.DisplayType(Variable::RespectingWords);
	tScoreNoTXT.TopMargin(0);
	tScoreNoTXT.LeftMargin(0);
	tScoreNoTXT.LineSpacing(0);
	tScoreNoTXT.LetterSpacing(0);
	tScoreNoTXT.LeadingSpaces(true);
	tScoreNoTXT.Effect(Variable::MummyEffect);
	tScoreNoTXT.Delay(0,0);
	tScoreNoTXT.OnlyIntegerPart(true);
	tScoreNoTXT = 0.000000;
	gn->Add(tScoreNoTXT);


};

void End_Level_1Function(GameNode *gn)
{
	

};

void Exit_Level_1Function(GameNode *gn)
{
};

