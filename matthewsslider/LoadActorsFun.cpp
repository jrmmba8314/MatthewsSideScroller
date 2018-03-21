#include "stdafx.h"
#include "Headers.h"
#include "GameFunctions.h"

void LoadAnimation_Level_1(GameNode* gn)
{
	SpriteList[0].TotalAnimations = 7;
	SpriteList[0].Animations = new AnimationElem[7];

	SpriteList[0].Animations[0].TotalFrames=1;
	SpriteList[0].Animations[0].ConnectTo = 0;
	SpriteList[0].Animations[0].Frames = new FrameElem[1];

	SpriteList[0].Animations[0].Frames[0].BitmapName = "ship_right.bmp";
	SpriteList[0].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[0].Frames[0].Delay = 1;
	SpriteList[0].Animations[0].Frames[0].Width = 82;
	SpriteList[0].Animations[0].Frames[0].Height = 25;
	SpriteList[0].Animations[0].Frames[0].Transparency = RGB(0,255,0);
	SpriteList[0].Animations[0].Frames[0].hFlip = false;
	SpriteList[0].Animations[0].Frames[0].vFlip = false;
	SpriteList[0].Animations[0].Frames[0].zRotation = 0;
	SpriteList[0].Animations[0].Frames[0].HotSpot[0].x = 80;
	SpriteList[0].Animations[0].Frames[0].HotSpot[0].y = 22;
	::SetRect( &SpriteList[0].Animations[0].Frames[0].BBox, 0, 0, 81,24);
	SpriteList[0].Animations[0].Frames[0].centerX = 41;
	SpriteList[0].Animations[0].Frames[0].centerY = 12;
	SpriteList[0].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[0].Frames[0].useTransparency = true;
	SpriteList[0].Animations[0].Frames[0].AddCollisionData(CollisionSegment(1,23,80,23,0,0));
	SpriteList[0].Animations[0].Frames[0].AddCollisionData(CollisionSegment(80,23,33,4,0,0));
	SpriteList[0].Animations[0].Frames[0].AddCollisionData(CollisionSegment(33,4,7,6,0,0));
	SpriteList[0].Animations[0].Frames[0].AddCollisionData(CollisionSegment(7,6,1,23,0,0));


	SpriteList[0].Animations[1].TotalFrames=1;
	SpriteList[0].Animations[1].ConnectTo = 0;
	SpriteList[0].Animations[1].Frames = new FrameElem[1];

	SpriteList[0].Animations[1].Frames[0].BitmapName = "ship_left.bmp";
	SpriteList[0].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[1].Frames[0].Delay = 1;
	SpriteList[0].Animations[1].Frames[0].Width = 82;
	SpriteList[0].Animations[1].Frames[0].Height = 25;
	SpriteList[0].Animations[1].Frames[0].Transparency = RGB(0,255,0);
	SpriteList[0].Animations[1].Frames[0].hFlip = false;
	SpriteList[0].Animations[1].Frames[0].vFlip = false;
	SpriteList[0].Animations[1].Frames[0].zRotation = 0;
	SpriteList[0].Animations[1].Frames[0].HotSpot[0].x = 1;
	SpriteList[0].Animations[1].Frames[0].HotSpot[0].y = 22;
	::SetRect( &SpriteList[0].Animations[1].Frames[0].BBox, 0, 0, 81,24);
	SpriteList[0].Animations[1].Frames[0].centerX = 41;
	SpriteList[0].Animations[1].Frames[0].centerY = 12;
	SpriteList[0].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[1].Frames[0].useTransparency = true;
	SpriteList[0].Animations[1].Frames[0].AddCollisionData(CollisionSegment(1,23,80,23,0,0));
	SpriteList[0].Animations[1].Frames[0].AddCollisionData(CollisionSegment(80,23,73,5,0,0));
	SpriteList[0].Animations[1].Frames[0].AddCollisionData(CollisionSegment(73,5,44,5,0,0));
	SpriteList[0].Animations[1].Frames[0].AddCollisionData(CollisionSegment(44,5,1,23,0,0));


	SpriteList[0].Animations[2].TotalFrames=1;
	SpriteList[0].Animations[2].ConnectTo = 0;
	SpriteList[0].Animations[2].Frames = new FrameElem[1];

	SpriteList[0].Animations[2].Frames[0].BitmapName = "ship_right_down.bmp";
	SpriteList[0].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[2].Frames[0].Delay = 1;
	SpriteList[0].Animations[2].Frames[0].Width = 87;
	SpriteList[0].Animations[2].Frames[0].Height = 64;
	SpriteList[0].Animations[2].Frames[0].Transparency = RGB(0,255,0);
	SpriteList[0].Animations[2].Frames[0].hFlip = false;
	SpriteList[0].Animations[2].Frames[0].vFlip = false;
	SpriteList[0].Animations[2].Frames[0].zRotation = 0;
	SpriteList[0].Animations[2].Frames[0].HotSpot[0].x = 73;
	SpriteList[0].Animations[2].Frames[0].HotSpot[0].y = 59;
	::SetRect( &SpriteList[0].Animations[2].Frames[0].BBox, 0, 0, 86,63);
	SpriteList[0].Animations[2].Frames[0].centerX = 43;
	SpriteList[0].Animations[2].Frames[0].centerY = 32;
	SpriteList[0].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[2].Frames[0].useTransparency = true;
	SpriteList[0].Animations[2].Frames[0].AddCollisionData(CollisionSegment(76,61,64,50,0,0));
	SpriteList[0].Animations[2].Frames[0].AddCollisionData(CollisionSegment(64,50,45,23,0,0));
	SpriteList[0].Animations[2].Frames[0].AddCollisionData(CollisionSegment(45,23,30,11,0,0));
	SpriteList[0].Animations[2].Frames[0].AddCollisionData(CollisionSegment(30,11,10,15,0,0));
	SpriteList[0].Animations[2].Frames[0].AddCollisionData(CollisionSegment(10,15,16,27,0,0));
	SpriteList[0].Animations[2].Frames[0].AddCollisionData(CollisionSegment(16,27,76,61,0,0));


	SpriteList[0].Animations[3].TotalFrames=1;
	SpriteList[0].Animations[3].ConnectTo = 0;
	SpriteList[0].Animations[3].Frames = new FrameElem[1];

	SpriteList[0].Animations[3].Frames[0].BitmapName = "ship_left_down.bmp";
	SpriteList[0].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[3].Frames[0].Delay = 1;
	SpriteList[0].Animations[3].Frames[0].Width = 83;
	SpriteList[0].Animations[3].Frames[0].Height = 67;
	SpriteList[0].Animations[3].Frames[0].Transparency = RGB(0,255,0);
	SpriteList[0].Animations[3].Frames[0].hFlip = false;
	SpriteList[0].Animations[3].Frames[0].vFlip = false;
	SpriteList[0].Animations[3].Frames[0].zRotation = 0;
	SpriteList[0].Animations[3].Frames[0].HotSpot[0].x = 12;
	SpriteList[0].Animations[3].Frames[0].HotSpot[0].y = 60;
	::SetRect( &SpriteList[0].Animations[3].Frames[0].BBox, 0, 0, 82,66);
	SpriteList[0].Animations[3].Frames[0].centerX = 41;
	SpriteList[0].Animations[3].Frames[0].centerY = 33;
	SpriteList[0].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[3].Frames[0].useTransparency = true;
	SpriteList[0].Animations[3].Frames[0].AddCollisionData(CollisionSegment(9,63,76,24,0,0));
	SpriteList[0].Animations[3].Frames[0].AddCollisionData(CollisionSegment(76,24,74,11,0,0));
	SpriteList[0].Animations[3].Frames[0].AddCollisionData(CollisionSegment(74,11,56,12,0,0));
	SpriteList[0].Animations[3].Frames[0].AddCollisionData(CollisionSegment(56,12,9,63,0,0));


	SpriteList[0].Animations[4].TotalFrames=1;
	SpriteList[0].Animations[4].ConnectTo = 0;
	SpriteList[0].Animations[4].Frames = new FrameElem[1];

	SpriteList[0].Animations[4].Frames[0].BitmapName = "ship_right_up.bmp";
	SpriteList[0].Animations[4].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[4].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[4].Frames[0].Delay = 1;
	SpriteList[0].Animations[4].Frames[0].Width = 85;
	SpriteList[0].Animations[4].Frames[0].Height = 67;
	SpriteList[0].Animations[4].Frames[0].Transparency = RGB(0,255,0);
	SpriteList[0].Animations[4].Frames[0].hFlip = false;
	SpriteList[0].Animations[4].Frames[0].vFlip = false;
	SpriteList[0].Animations[4].Frames[0].zRotation = 0;
	SpriteList[0].Animations[4].Frames[0].HotSpot[0].x = 82;
	SpriteList[0].Animations[4].Frames[0].HotSpot[0].y = 21;
	::SetRect( &SpriteList[0].Animations[4].Frames[0].BBox, 0, 0, 84,66);
	SpriteList[0].Animations[4].Frames[0].centerX = 42;
	SpriteList[0].Animations[4].Frames[0].centerY = 33;
	SpriteList[0].Animations[4].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[4].Frames[0].useTransparency = true;
	SpriteList[0].Animations[4].Frames[0].AddCollisionData(CollisionSegment(12,60,59,34,0,0));
	SpriteList[0].Animations[4].Frames[0].AddCollisionData(CollisionSegment(59,34,83,21,0,0));
	SpriteList[0].Animations[4].Frames[0].AddCollisionData(CollisionSegment(83,21,19,35,0,0));
	SpriteList[0].Animations[4].Frames[0].AddCollisionData(CollisionSegment(19,35,12,60,0,0));


	SpriteList[0].Animations[5].TotalFrames=1;
	SpriteList[0].Animations[5].ConnectTo = 0;
	SpriteList[0].Animations[5].Frames = new FrameElem[1];

	SpriteList[0].Animations[5].Frames[0].BitmapName = "ship_left_up.bmp";
	SpriteList[0].Animations[5].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[5].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[5].Frames[0].Delay = 1;
	SpriteList[0].Animations[5].Frames[0].Width = 84;
	SpriteList[0].Animations[5].Frames[0].Height = 64;
	SpriteList[0].Animations[5].Frames[0].Transparency = RGB(0,255,0);
	SpriteList[0].Animations[5].Frames[0].hFlip = false;
	SpriteList[0].Animations[5].Frames[0].vFlip = false;
	SpriteList[0].Animations[5].Frames[0].zRotation = 0;
	SpriteList[0].Animations[5].Frames[0].HotSpot[0].x = 2;
	SpriteList[0].Animations[5].Frames[0].HotSpot[0].y = 19;
	::SetRect( &SpriteList[0].Animations[5].Frames[0].BBox, 0, 0, 83,63);
	SpriteList[0].Animations[5].Frames[0].centerX = 42;
	SpriteList[0].Animations[5].Frames[0].centerY = 32;
	SpriteList[0].Animations[5].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[5].Frames[0].useTransparency = true;
	SpriteList[0].Animations[5].Frames[0].AddCollisionData(CollisionSegment(66,58,73,46,0,0));
	SpriteList[0].Animations[5].Frames[0].AddCollisionData(CollisionSegment(73,46,64,34,0,0));
	SpriteList[0].Animations[5].Frames[0].AddCollisionData(CollisionSegment(64,34,48,27,0,0));
	SpriteList[0].Animations[5].Frames[0].AddCollisionData(CollisionSegment(48,27,18,26,0,0));
	SpriteList[0].Animations[5].Frames[0].AddCollisionData(CollisionSegment(18,26,2,18,0,0));
	SpriteList[0].Animations[5].Frames[0].AddCollisionData(CollisionSegment(2,18,2,21,0,0));
	SpriteList[0].Animations[5].Frames[0].AddCollisionData(CollisionSegment(2,21,64,59,0,0));


	SpriteList[0].Animations[6].TotalFrames=3;
	SpriteList[0].Animations[6].ConnectTo = 0;
	SpriteList[0].Animations[6].Frames = new FrameElem[3];

	SpriteList[0].Animations[6].Frames[0].BitmapName = "Explosion01.bmp";
	SpriteList[0].Animations[6].Frames[0].TranslateX = 0.000;
	SpriteList[0].Animations[6].Frames[0].TranslateY = 0.000;
	SpriteList[0].Animations[6].Frames[0].Delay = 1;
	SpriteList[0].Animations[6].Frames[0].Width = 120;
	SpriteList[0].Animations[6].Frames[0].Height = 100;
	SpriteList[0].Animations[6].Frames[0].Transparency = RGB(0,255,0);
	SpriteList[0].Animations[6].Frames[0].hFlip = false;
	SpriteList[0].Animations[6].Frames[0].vFlip = false;
	SpriteList[0].Animations[6].Frames[0].zRotation = 0;
	SpriteList[0].Animations[6].Frames[0].HotSpot[0].x = 60;
	SpriteList[0].Animations[6].Frames[0].HotSpot[0].y = 50;
	::SetRect( &SpriteList[0].Animations[6].Frames[0].BBox, 0, 0, 119,99);
	SpriteList[0].Animations[6].Frames[0].centerX = 60;
	SpriteList[0].Animations[6].Frames[0].centerY = 50;
	SpriteList[0].Animations[6].Frames[0].PegRegistered = false;
	SpriteList[0].Animations[6].Frames[0].useTransparency = true;

	SpriteList[0].Animations[6].Frames[1].BitmapName = "Explosion02.bmp";
	SpriteList[0].Animations[6].Frames[1].TranslateX = 0.000;
	SpriteList[0].Animations[6].Frames[1].TranslateY = 0.000;
	SpriteList[0].Animations[6].Frames[1].Delay = 1;
	SpriteList[0].Animations[6].Frames[1].Width = 120;
	SpriteList[0].Animations[6].Frames[1].Height = 100;
	SpriteList[0].Animations[6].Frames[1].Transparency = RGB(0,255,0);
	SpriteList[0].Animations[6].Frames[1].hFlip = false;
	SpriteList[0].Animations[6].Frames[1].vFlip = false;
	SpriteList[0].Animations[6].Frames[1].zRotation = 0;
	SpriteList[0].Animations[6].Frames[1].HotSpot[0].x = 60;
	SpriteList[0].Animations[6].Frames[1].HotSpot[0].y = 50;
	::SetRect( &SpriteList[0].Animations[6].Frames[1].BBox, 0, 0, 119,99);
	SpriteList[0].Animations[6].Frames[1].centerX = 60;
	SpriteList[0].Animations[6].Frames[1].centerY = 50;
	SpriteList[0].Animations[6].Frames[1].PegRegistered = false;
	SpriteList[0].Animations[6].Frames[1].useTransparency = true;

	SpriteList[0].Animations[6].Frames[2].BitmapName = "Explosion03.bmp";
	SpriteList[0].Animations[6].Frames[2].TranslateX = 0.000;
	SpriteList[0].Animations[6].Frames[2].TranslateY = 0.000;
	SpriteList[0].Animations[6].Frames[2].Delay = 1;
	SpriteList[0].Animations[6].Frames[2].Width = 120;
	SpriteList[0].Animations[6].Frames[2].Height = 100;
	SpriteList[0].Animations[6].Frames[2].Transparency = RGB(0,255,0);
	SpriteList[0].Animations[6].Frames[2].hFlip = false;
	SpriteList[0].Animations[6].Frames[2].vFlip = false;
	SpriteList[0].Animations[6].Frames[2].zRotation = 0;
	SpriteList[0].Animations[6].Frames[2].HotSpot[0].x = 60;
	SpriteList[0].Animations[6].Frames[2].HotSpot[0].y = 50;
	::SetRect( &SpriteList[0].Animations[6].Frames[2].BBox, 0, 0, 119,99);
	SpriteList[0].Animations[6].Frames[2].centerX = 60;
	SpriteList[0].Animations[6].Frames[2].centerY = 50;
	SpriteList[0].Animations[6].Frames[2].PegRegistered = true;
	SpriteList[0].Animations[6].Frames[2].useTransparency = true;



	SpriteList[1].TotalAnimations = 4;
	SpriteList[1].Animations = new AnimationElem[4];

	SpriteList[1].Animations[0].TotalFrames=1;
	SpriteList[1].Animations[0].ConnectTo = 0;
	SpriteList[1].Animations[0].Frames = new FrameElem[1];

	SpriteList[1].Animations[0].Frames[0].BitmapName = "eagle.bmp";
	SpriteList[1].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[0].Frames[0].Delay = 1;
	SpriteList[1].Animations[0].Frames[0].Width = 100;
	SpriteList[1].Animations[0].Frames[0].Height = 130;
	SpriteList[1].Animations[0].Frames[0].Transparency = RGB(0,255,0);
	SpriteList[1].Animations[0].Frames[0].hFlip = false;
	SpriteList[1].Animations[0].Frames[0].vFlip = false;
	SpriteList[1].Animations[0].Frames[0].zRotation = 0;
	SpriteList[1].Animations[0].Frames[0].HotSpot[0].x = 2;
	SpriteList[1].Animations[0].Frames[0].HotSpot[0].y = 37;
	::SetRect( &SpriteList[1].Animations[0].Frames[0].BBox, 0, 0, 99,129);
	SpriteList[1].Animations[0].Frames[0].centerX = 50;
	SpriteList[1].Animations[0].Frames[0].centerY = 65;
	SpriteList[1].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[0].Frames[0].useTransparency = true;
	SpriteList[1].Animations[0].Frames[0].AddCollisionData(CollisionSegment(54,119,44,106,0,0));
	SpriteList[1].Animations[0].Frames[0].AddCollisionData(CollisionSegment(44,106,43,72,0,0));
	SpriteList[1].Animations[0].Frames[0].AddCollisionData(CollisionSegment(43,72,68,54,0,0));
	SpriteList[1].Animations[0].Frames[0].AddCollisionData(CollisionSegment(68,54,96,56,0,0));
	SpriteList[1].Animations[0].Frames[0].AddCollisionData(CollisionSegment(96,56,95,39,0,0));
	SpriteList[1].Animations[0].Frames[0].AddCollisionData(CollisionSegment(95,39,84,31,0,0));
	SpriteList[1].Animations[0].Frames[0].AddCollisionData(CollisionSegment(84,31,95,10,0,0));
	SpriteList[1].Animations[0].Frames[0].AddCollisionData(CollisionSegment(95,10,88,4,0,0));
	SpriteList[1].Animations[0].Frames[0].AddCollisionData(CollisionSegment(88,4,64,12,0,0));
	SpriteList[1].Animations[0].Frames[0].AddCollisionData(CollisionSegment(64,12,32,4,0,0));
	SpriteList[1].Animations[0].Frames[0].AddCollisionData(CollisionSegment(32,4,5,22,0,0));
	SpriteList[1].Animations[0].Frames[0].AddCollisionData(CollisionSegment(5,22,25,34,0,0));
	SpriteList[1].Animations[0].Frames[0].AddCollisionData(CollisionSegment(25,34,8,63,0,0));
	SpriteList[1].Animations[0].Frames[0].AddCollisionData(CollisionSegment(8,63,37,70,0,0));
	SpriteList[1].Animations[0].Frames[0].AddCollisionData(CollisionSegment(37,70,37,106,0,0));
	SpriteList[1].Animations[0].Frames[0].AddCollisionData(CollisionSegment(37,106,29,123,0,0));
	SpriteList[1].Animations[0].Frames[0].AddCollisionData(CollisionSegment(29,123,54,119,0,0));


	SpriteList[1].Animations[1].TotalFrames=1;
	SpriteList[1].Animations[1].ConnectTo = 0;
	SpriteList[1].Animations[1].Frames = new FrameElem[1];

	SpriteList[1].Animations[1].Frames[0].BitmapName = "eagle01.bmp";
	SpriteList[1].Animations[1].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[1].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[1].Frames[0].Delay = 1;
	SpriteList[1].Animations[1].Frames[0].Width = 100;
	SpriteList[1].Animations[1].Frames[0].Height = 130;
	SpriteList[1].Animations[1].Frames[0].Transparency = RGB(0,255,0);
	SpriteList[1].Animations[1].Frames[0].hFlip = false;
	SpriteList[1].Animations[1].Frames[0].vFlip = false;
	SpriteList[1].Animations[1].Frames[0].zRotation = 0;
	SpriteList[1].Animations[1].Frames[0].HotSpot[0].x = 2;
	SpriteList[1].Animations[1].Frames[0].HotSpot[0].y = 37;
	::SetRect( &SpriteList[1].Animations[1].Frames[0].BBox, 0, 0, 99,129);
	SpriteList[1].Animations[1].Frames[0].centerX = 50;
	SpriteList[1].Animations[1].Frames[0].centerY = 65;
	SpriteList[1].Animations[1].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[1].Frames[0].useTransparency = true;
	SpriteList[1].Animations[1].Frames[0].AddCollisionData(CollisionSegment(54,119,44,106,0,0));
	SpriteList[1].Animations[1].Frames[0].AddCollisionData(CollisionSegment(44,106,43,72,0,0));
	SpriteList[1].Animations[1].Frames[0].AddCollisionData(CollisionSegment(43,72,68,54,0,0));
	SpriteList[1].Animations[1].Frames[0].AddCollisionData(CollisionSegment(68,54,96,56,0,0));
	SpriteList[1].Animations[1].Frames[0].AddCollisionData(CollisionSegment(96,56,95,39,0,0));
	SpriteList[1].Animations[1].Frames[0].AddCollisionData(CollisionSegment(95,39,84,31,0,0));
	SpriteList[1].Animations[1].Frames[0].AddCollisionData(CollisionSegment(84,31,95,10,0,0));
	SpriteList[1].Animations[1].Frames[0].AddCollisionData(CollisionSegment(95,10,88,4,0,0));
	SpriteList[1].Animations[1].Frames[0].AddCollisionData(CollisionSegment(88,4,64,12,0,0));
	SpriteList[1].Animations[1].Frames[0].AddCollisionData(CollisionSegment(64,12,32,4,0,0));
	SpriteList[1].Animations[1].Frames[0].AddCollisionData(CollisionSegment(32,4,5,22,0,0));
	SpriteList[1].Animations[1].Frames[0].AddCollisionData(CollisionSegment(5,22,25,34,0,0));
	SpriteList[1].Animations[1].Frames[0].AddCollisionData(CollisionSegment(25,34,8,63,0,0));
	SpriteList[1].Animations[1].Frames[0].AddCollisionData(CollisionSegment(8,63,37,70,0,0));
	SpriteList[1].Animations[1].Frames[0].AddCollisionData(CollisionSegment(37,70,37,106,0,0));
	SpriteList[1].Animations[1].Frames[0].AddCollisionData(CollisionSegment(37,106,29,123,0,0));
	SpriteList[1].Animations[1].Frames[0].AddCollisionData(CollisionSegment(29,123,54,119,0,0));


	SpriteList[1].Animations[2].TotalFrames=1;
	SpriteList[1].Animations[2].ConnectTo = 0;
	SpriteList[1].Animations[2].Frames = new FrameElem[1];

	SpriteList[1].Animations[2].Frames[0].BitmapName = "eagle02.bmp";
	SpriteList[1].Animations[2].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[2].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[2].Frames[0].Delay = 1;
	SpriteList[1].Animations[2].Frames[0].Width = 100;
	SpriteList[1].Animations[2].Frames[0].Height = 130;
	SpriteList[1].Animations[2].Frames[0].Transparency = RGB(0,255,0);
	SpriteList[1].Animations[2].Frames[0].hFlip = false;
	SpriteList[1].Animations[2].Frames[0].vFlip = false;
	SpriteList[1].Animations[2].Frames[0].zRotation = 0;
	SpriteList[1].Animations[2].Frames[0].HotSpot[0].x = 2;
	SpriteList[1].Animations[2].Frames[0].HotSpot[0].y = 37;
	::SetRect( &SpriteList[1].Animations[2].Frames[0].BBox, 0, 0, 99,129);
	SpriteList[1].Animations[2].Frames[0].centerX = 50;
	SpriteList[1].Animations[2].Frames[0].centerY = 65;
	SpriteList[1].Animations[2].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[2].Frames[0].useTransparency = true;
	SpriteList[1].Animations[2].Frames[0].AddCollisionData(CollisionSegment(54,119,44,106,0,0));
	SpriteList[1].Animations[2].Frames[0].AddCollisionData(CollisionSegment(44,106,43,72,0,0));
	SpriteList[1].Animations[2].Frames[0].AddCollisionData(CollisionSegment(43,72,68,54,0,0));
	SpriteList[1].Animations[2].Frames[0].AddCollisionData(CollisionSegment(68,54,96,56,0,0));
	SpriteList[1].Animations[2].Frames[0].AddCollisionData(CollisionSegment(96,56,95,39,0,0));
	SpriteList[1].Animations[2].Frames[0].AddCollisionData(CollisionSegment(95,39,84,31,0,0));
	SpriteList[1].Animations[2].Frames[0].AddCollisionData(CollisionSegment(84,31,95,10,0,0));
	SpriteList[1].Animations[2].Frames[0].AddCollisionData(CollisionSegment(95,10,88,4,0,0));
	SpriteList[1].Animations[2].Frames[0].AddCollisionData(CollisionSegment(88,4,64,12,0,0));
	SpriteList[1].Animations[2].Frames[0].AddCollisionData(CollisionSegment(64,12,32,4,0,0));
	SpriteList[1].Animations[2].Frames[0].AddCollisionData(CollisionSegment(32,4,5,22,0,0));
	SpriteList[1].Animations[2].Frames[0].AddCollisionData(CollisionSegment(5,22,25,34,0,0));
	SpriteList[1].Animations[2].Frames[0].AddCollisionData(CollisionSegment(25,34,8,63,0,0));
	SpriteList[1].Animations[2].Frames[0].AddCollisionData(CollisionSegment(8,63,37,70,0,0));
	SpriteList[1].Animations[2].Frames[0].AddCollisionData(CollisionSegment(37,70,37,106,0,0));
	SpriteList[1].Animations[2].Frames[0].AddCollisionData(CollisionSegment(37,106,29,123,0,0));
	SpriteList[1].Animations[2].Frames[0].AddCollisionData(CollisionSegment(29,123,54,119,0,0));


	SpriteList[1].Animations[3].TotalFrames=3;
	SpriteList[1].Animations[3].ConnectTo = 0;
	SpriteList[1].Animations[3].Frames = new FrameElem[3];

	SpriteList[1].Animations[3].Frames[0].BitmapName = "Explosion01.bmp";
	SpriteList[1].Animations[3].Frames[0].TranslateX = 0.000;
	SpriteList[1].Animations[3].Frames[0].TranslateY = 0.000;
	SpriteList[1].Animations[3].Frames[0].Delay = 1;
	SpriteList[1].Animations[3].Frames[0].Width = 120;
	SpriteList[1].Animations[3].Frames[0].Height = 100;
	SpriteList[1].Animations[3].Frames[0].Transparency = RGB(0,255,0);
	SpriteList[1].Animations[3].Frames[0].hFlip = false;
	SpriteList[1].Animations[3].Frames[0].vFlip = false;
	SpriteList[1].Animations[3].Frames[0].zRotation = 0;
	SpriteList[1].Animations[3].Frames[0].HotSpot[0].x = 60;
	SpriteList[1].Animations[3].Frames[0].HotSpot[0].y = 50;
	::SetRect( &SpriteList[1].Animations[3].Frames[0].BBox, 0, 0, 119,99);
	SpriteList[1].Animations[3].Frames[0].centerX = 60;
	SpriteList[1].Animations[3].Frames[0].centerY = 50;
	SpriteList[1].Animations[3].Frames[0].PegRegistered = false;
	SpriteList[1].Animations[3].Frames[0].useTransparency = true;

	SpriteList[1].Animations[3].Frames[1].BitmapName = "Explosion02.bmp";
	SpriteList[1].Animations[3].Frames[1].TranslateX = 0.000;
	SpriteList[1].Animations[3].Frames[1].TranslateY = 0.000;
	SpriteList[1].Animations[3].Frames[1].Delay = 1;
	SpriteList[1].Animations[3].Frames[1].Width = 120;
	SpriteList[1].Animations[3].Frames[1].Height = 100;
	SpriteList[1].Animations[3].Frames[1].Transparency = RGB(0,255,0);
	SpriteList[1].Animations[3].Frames[1].hFlip = false;
	SpriteList[1].Animations[3].Frames[1].vFlip = false;
	SpriteList[1].Animations[3].Frames[1].zRotation = 0;
	SpriteList[1].Animations[3].Frames[1].HotSpot[0].x = 60;
	SpriteList[1].Animations[3].Frames[1].HotSpot[0].y = 50;
	::SetRect( &SpriteList[1].Animations[3].Frames[1].BBox, 0, 0, 119,99);
	SpriteList[1].Animations[3].Frames[1].centerX = 60;
	SpriteList[1].Animations[3].Frames[1].centerY = 50;
	SpriteList[1].Animations[3].Frames[1].PegRegistered = false;
	SpriteList[1].Animations[3].Frames[1].useTransparency = true;

	SpriteList[1].Animations[3].Frames[2].BitmapName = "Explosion03.bmp";
	SpriteList[1].Animations[3].Frames[2].TranslateX = 0.000;
	SpriteList[1].Animations[3].Frames[2].TranslateY = 0.000;
	SpriteList[1].Animations[3].Frames[2].Delay = 1;
	SpriteList[1].Animations[3].Frames[2].Width = 120;
	SpriteList[1].Animations[3].Frames[2].Height = 100;
	SpriteList[1].Animations[3].Frames[2].Transparency = RGB(0,255,0);
	SpriteList[1].Animations[3].Frames[2].hFlip = false;
	SpriteList[1].Animations[3].Frames[2].vFlip = false;
	SpriteList[1].Animations[3].Frames[2].zRotation = 0;
	SpriteList[1].Animations[3].Frames[2].HotSpot[0].x = 60;
	SpriteList[1].Animations[3].Frames[2].HotSpot[0].y = 50;
	::SetRect( &SpriteList[1].Animations[3].Frames[2].BBox, 0, 0, 119,99);
	SpriteList[1].Animations[3].Frames[2].centerX = 60;
	SpriteList[1].Animations[3].Frames[2].centerY = 50;
	SpriteList[1].Animations[3].Frames[2].PegRegistered = true;
	SpriteList[1].Animations[3].Frames[2].useTransparency = true;



	SpriteList[2].TotalAnimations = 1;
	SpriteList[2].Animations = new AnimationElem[1];

	SpriteList[2].Animations[0].TotalFrames=1;
	SpriteList[2].Animations[0].ConnectTo = 0;
	SpriteList[2].Animations[0].Frames = new FrameElem[1];

	SpriteList[2].Animations[0].Frames[0].BitmapName = "CloudOfDoom.bmp";
	SpriteList[2].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[2].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[2].Animations[0].Frames[0].Delay = 1;
	SpriteList[2].Animations[0].Frames[0].Width = 186;
	SpriteList[2].Animations[0].Frames[0].Height = 150;
	SpriteList[2].Animations[0].Frames[0].Transparency = RGB(0,255,0);
	SpriteList[2].Animations[0].Frames[0].hFlip = false;
	SpriteList[2].Animations[0].Frames[0].vFlip = false;
	SpriteList[2].Animations[0].Frames[0].zRotation = 0;
	SpriteList[2].Animations[0].Frames[0].HotSpot[0].x = 93;
	SpriteList[2].Animations[0].Frames[0].HotSpot[0].y = 75;
	::SetRect( &SpriteList[2].Animations[0].Frames[0].BBox, 0, 0, 185,149);
	SpriteList[2].Animations[0].Frames[0].centerX = 93;
	SpriteList[2].Animations[0].Frames[0].centerY = 75;
	SpriteList[2].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[2].Animations[0].Frames[0].useTransparency = true;
	SpriteList[2].Animations[0].Frames[0].AddCollisionData(CollisionSegment(19,139,165,132,0,0));
	SpriteList[2].Animations[0].Frames[0].AddCollisionData(CollisionSegment(165,132,160,27,0,0));
	SpriteList[2].Animations[0].Frames[0].AddCollisionData(CollisionSegment(160,27,23,26,0,0));
	SpriteList[2].Animations[0].Frames[0].AddCollisionData(CollisionSegment(23,26,19,139,0,0));



	SpriteList[3].TotalAnimations = 1;
	SpriteList[3].Animations = new AnimationElem[1];

	SpriteList[3].Animations[0].TotalFrames=1;
	SpriteList[3].Animations[0].ConnectTo = 0;
	SpriteList[3].Animations[0].Frames = new FrameElem[1];

	SpriteList[3].Animations[0].Frames[0].BitmapName = "projPlasma.bmp";
	SpriteList[3].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[3].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[3].Animations[0].Frames[0].Delay = 1;
	SpriteList[3].Animations[0].Frames[0].Width = 20;
	SpriteList[3].Animations[0].Frames[0].Height = 8;
	SpriteList[3].Animations[0].Frames[0].Transparency = RGB(0,255,0);
	SpriteList[3].Animations[0].Frames[0].hFlip = false;
	SpriteList[3].Animations[0].Frames[0].vFlip = false;
	SpriteList[3].Animations[0].Frames[0].zRotation = 0;
	SpriteList[3].Animations[0].Frames[0].HotSpot[0].x = 10;
	SpriteList[3].Animations[0].Frames[0].HotSpot[0].y = 4;
	::SetRect( &SpriteList[3].Animations[0].Frames[0].BBox, 0, 0, 19,7);
	SpriteList[3].Animations[0].Frames[0].centerX = 10;
	SpriteList[3].Animations[0].Frames[0].centerY = 4;
	SpriteList[3].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[3].Animations[0].Frames[0].useTransparency = true;
	SpriteList[3].Animations[0].Frames[0].AddCollisionData(CollisionCircle(15,5,3,0,0));



	SpriteList[4].TotalAnimations = 1;
	SpriteList[4].Animations = new AnimationElem[1];

	SpriteList[4].Animations[0].TotalFrames=1;
	SpriteList[4].Animations[0].ConnectTo = 0;
	SpriteList[4].Animations[0].Frames = new FrameElem[1];

	SpriteList[4].Animations[0].Frames[0].BitmapName = "spit.bmp";
	SpriteList[4].Animations[0].Frames[0].TranslateX = 0.000;
	SpriteList[4].Animations[0].Frames[0].TranslateY = 0.000;
	SpriteList[4].Animations[0].Frames[0].Delay = 1;
	SpriteList[4].Animations[0].Frames[0].Width = 20;
	SpriteList[4].Animations[0].Frames[0].Height = 8;
	SpriteList[4].Animations[0].Frames[0].Transparency = RGB(0,255,0);
	SpriteList[4].Animations[0].Frames[0].hFlip = false;
	SpriteList[4].Animations[0].Frames[0].vFlip = false;
	SpriteList[4].Animations[0].Frames[0].zRotation = 0;
	SpriteList[4].Animations[0].Frames[0].HotSpot[0].x = 10;
	SpriteList[4].Animations[0].Frames[0].HotSpot[0].y = 4;
	::SetRect( &SpriteList[4].Animations[0].Frames[0].BBox, 0, 0, 19,7);
	SpriteList[4].Animations[0].Frames[0].centerX = 10;
	SpriteList[4].Animations[0].Frames[0].centerY = 4;
	SpriteList[4].Animations[0].Frames[0].PegRegistered = false;
	SpriteList[4].Animations[0].Frames[0].useTransparency = true;
	SpriteList[4].Animations[0].Frames[0].AddCollisionData(CollisionSegment(3,6,18,6,0,0));
	SpriteList[4].Animations[0].Frames[0].AddCollisionData(CollisionSegment(18,6,18,2,0,0));
	SpriteList[4].Animations[0].Frames[0].AddCollisionData(CollisionSegment(18,2,3,2,0,0));
	SpriteList[4].Animations[0].Frames[0].AddCollisionData(CollisionSegment(3,2,3,6,0,0));



}

