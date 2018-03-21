#include "stdafx.h"
#include "Headers.h"
#include "LocalDataFun.h"
#include "GameFunctions.h"

int NoOfEaglesGD = 0;
void ShipMoveFN(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"ShipMoveFN");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	  //Please note that the code relating to repositioning the viewport is coded in two places in the file.
	  //This is to address a flickering problem I was running into.  Needs further investigation.
	
	int x = 0;
	int y = 0;
	
	if (!GetShipLD(This)->LostControl)
	{
	  if(pKeyboard->IsPressed(DIK_UP))
	  {
		  y -= 1;
		
	  }
	
	  if(pKeyboard->IsPressed(DIK_DOWN))
	  {
		  y += 1;
		
	  }
	
	  if(pKeyboard->IsPressed(DIK_LEFT))
	  {
		  x -= 1;
	      GetShipLD(This)->IsRight=false;
	
	      if (This->WorldPositionX() < 320)
	      {
	          myGame->ViewPortPosition(3000, This->WorldPositionY(), true);
	      }
	  }
	
	  if(pKeyboard->IsPressed(DIK_RIGHT))
	  {
	  	  x += 1;
	      GetShipLD(This)->IsRight=true;
	
	      if (This->WorldPositionX() > 3220)
	      {
	          myGame->ViewPortPosition(1, This->WorldPositionY(), true);
	      }
	  }
	}
	else
	{
	  if (GetShipLD(This)->IsRight)
	  {
	  	  x += 1;
	
	      // if nearing end of map, start over
	      if (This->WorldPositionX() > 3220)
	      {
	          myGame->ViewPortPosition(1, This->WorldPositionY(), true);
	      }
	
	  }
	  else
	  {
		  x -= 1;
	      if (This->WorldPositionX() < 320)
	      {
	          myGame->ViewPortPosition(3000, This->WorldPositionY(), true);
	      }
	  }
	
	}
	
	
	This->VectorDirection(x,y);
	
	
};

void ShipAnimationFN(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"ShipAnimationFN");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	  // This function changes the ship's animation based on its direction
	
	   //If the player is moving up and left
	if((This->DirectionY() < 0) && (!GetShipLD(This)->IsRight))
	{
	   This->Animation(SHIP_LEFT_UP);
	}
	
	  //If the player is moving down and left
	else if((This->DirectionY() > 0) && (!GetShipLD(This)->IsRight))
	{
	   This->Animation(SHIP_LEFT_DOWN);
	}
	
	  //If the player is moving just left
	else if((This->DirectionY() == 0) && (!GetShipLD(This)->IsRight))
	{
	   This->Animation(SHIP_LEFT);
	}
	
	  //If the player is moving up and right
	else if((This->DirectionY() < 0) && (GetShipLD(This)->IsRight))
	{
	   This->Animation(SHIP_RIGHT_UP);
	}
	
	  //If the player is moving down and right
	else if((This->DirectionY() > 0) && (GetShipLD(This)->IsRight))
	{
	   This->Animation(SHIP_RIGHT_DOWN);
	}
	
	  //If the player is moving just right
	else {
	   This->Animation(SHIP_RIGHT);
	}
	
};

void ViewportDeleteFN(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"ViewportDeleteFN");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	 // This function can be used by any Sprite.
	 // If this Sprite leaves the viewport it will
	 //   be deleted.
	
	if ( This->InViewport() == false )
	{
	  This->DeleteFlag( true );
	}
};

void MapCollisionDeleteFN(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"MapCollisionDeleteFN");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	 // This function can be used by any Sprite.
	 // If this Sprite collides with any map 
	 //   it will be deleted.
	
	if ( This->CollisionWithMap() == true )
	{
	  This->DeleteFlag( true );
	}
};

void OnCollisionDeleteFN(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"OnCollisionDeleteFN");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	 // This function can be used by any Sprite.
	 // If this Sprite collides with any Sprite,
	 //   then it will delete.
	
	if ( This->CollisionWithSprite() == true )
	{
	  This->DeleteFlag( true );
	}
};

void ShipFireFN(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"ShipFireFN");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	if ( pKeyboard->IsTriggered( DIK_SPACE ) )
	{
	  int myAngle;
	  if (GetShipLD(This)->IsRight)
	  {
	     myAngle = 0;
	  }
	  else
	  {
	     myAngle = 180;
	  }
	
	
	
	  SpriteCopyMF( 
	    "MasterBullet", // Original Sprite's name
	    "Bullet",       // Copied Sprite's name
	    This->WorldPositionX() + This->HotSpotX( 0 ),// X pos 
	    This->WorldPositionY() + This->HotSpotY( 0 ),// Y pos
	    myAngle,					// Vector Angle
	    10 				// Speed
	    );
	
	  SoundPTR sound("LaserSFX");
	  sound->Play();
	}
};

void BirdSpitFN(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"BirdSpitFN");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	SpriteCopyMF( 
	  "MasterSpit", // Original Sprite's name
	  "Spit",       // Copied Sprite's name
	  This->WorldPositionX() + This->HotSpotX( 0 ),// X pos 
	  This->WorldPositionY() + This->HotSpotY( 0 ),// Y pos
	  180,					// Vector Angle
	  10 				// Speed
	);
	
	SoundPTR sound("SpitSFX");
	sound->Play();
	
};

void ShipDamageFN(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"ShipDamageFN");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	if (This->CollisionWithSprite("CloudOfDoom"))
	{
	   if (!GetShipLD(This)->LostControl)
	   {
	      GetShipLD(This)->LostControl = true;
	      GetShipLD(This)->LostControlCnt = 60 * 3; //3 seconds
	   }
	}
	
	if (GetShipLD(This)->LostControl)
	{
	    GetShipLD(This)->LostControlCnt--;
	    if (GetShipLD(This)->LostControlCnt<=0)
	    {
	       GetShipLD(This)->LostControl = false;
	    }     
	}
	
};

void EagleDamageFN(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"EagleDamageFN");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	if (This->CollisionWithSprite("Bullet"))
	{
		GetEagleLD(This)->Hits += 1;
	    This->Animation(GetEagleLD(This)->Hits);
	    
	    TextPTR pScore("ScoreNoTXT");
	    pScore->Value++;
	}
	
};

void EagleDeleteFN(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"EagleDeleteFN");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	if (This->EndOfAnimation(EAGLE_EXPLODE))
	{
	   GetEagleLD(This)->Hits = 0;
	   This->DeleteFlag(true);
	   NoOfEaglesGD--;
	}
	
	
	
};

void EagleSpawnFN(Sprite* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"EagleSpawnFN");
	strcpy(_UE.objectType,"Sprite");
	strcpy(_UE.objectName,This->Name());
#endif

	if (NoOfEaglesGD < 5)
	{
	   SpriteCopyMF( 
	      "MasterEagle", // Original Sprite's name
	      "Eagle",       // Copied Sprite's name
	      750,           // X pos 
	      280,           // Y pos
	      0,             // Vector Angle
	      0.75 		   // Speed
	   );
	
	   NoOfEaglesGD++;
	}
	
};

void HUDTimerFN(Text* This)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"HUDTimerFN");
	strcpy(_UE.objectType,"Text");
	strcpy(_UE.objectName,This->Name());
#endif

	This->Value++;
};

