#include "stdafx.h"
#include "Headers.h"
#include "LocalDataFun.h"
#include "GameFunctions.h"

Sprite* SpriteCopyMF(const char* masterName, const char*  newName, int x, int y, float angle, float speed)
{
#ifdef ERROR_MESSAGES
	ZeroMemory(&_UE,sizeof(_UE));
	strcpy(_UE.functionName,"SpriteCopy");
#endif

	 // This function will make a copy of any sprite.
	 // If a bad name for masterName is passed in, then
	 //   this function will make a dummy sprite that 
	 //   does not show up and does nothing.
	
	SpritePTR pMasterSprite = Sprite::Search( masterName );
	SpritePTR pNewSprite = pMasterSprite->CreateSprite();
	pNewSprite->Name( newName );
	pNewSprite->WorldPositionX( x );
	pNewSprite->WorldPositionY( y );
	pNewSprite->VectorAngle( angle,0 );
	pNewSprite->Speed( speed );
	pNewSprite->Unused( false );
	pNewSprite->Visible( true );
	return pNewSprite;
};

