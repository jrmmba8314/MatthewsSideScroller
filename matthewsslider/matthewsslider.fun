                                                                        0c:\users\jrmmba\documents\matthewsslider\fun.ico                    Matthews Slider              +C:\Users\Public\Borland\BCC55\Bin\bcc32.exe                          Level_1SHIP   RIGHT                      IC:\Users\jrmmba\Documents\matthewsslider\Art Assets\Actors\ship_right.bmp
ship_right           P                                      )                      �          Q                           P                                  �     P      !                                  �     !                                        �                                             �                             LEFT                      HC:\Users\jrmmba\Documents\matthewsslider\Art Assets\Actors\ship_left.bmp	ship_left                                                 )                      �          Q                           P                                  �     P      I                                  �     I      ,                                  �     ,                                        �                             
RIGHT_DOWN                      NC:\Users\jrmmba\Documents\matthewsslider\Art Assets\Actors\ship_right_down.bmpship_right_down           I   ;                                   +                       �          V   ?                  L   =   @   2                               �     @   2   -                                  �     -                                        �           
                                  �     
                                        �           L   =                               �                             	LEFT_DOWN                      MC:\Users\jrmmba\Documents\matthewsslider\Art Assets\Actors\ship_left_down.bmpship_left_down              <                                   )   !                   �          R   B                  	   ?   L                                  �     L      J                                  �     J      8                                  �     8      	   ?                               �                             RIGHT_UP                      LC:\Users\jrmmba\Documents\matthewsslider\Art Assets\Actors\ship_right_up.bmpship_right_up           R                                      *   !                   �          T   B                     <   ;   "                               �     ;   "   S                                  �     S         #                               �        #      <                               �                             LEFT_UP                      KC:\Users\jrmmba\Documents\matthewsslider\Art Assets\Actors\ship_left_up.bmpship_left_up                                                 *                       �          S   ?                   B   :   I   .                               �     I   .   @   "                               �     @   "   0                                  �     0                                        �                                             �                                             �           @   ;                               �                             EXPLODE                      Jc:\users\jrmmba\documents\matthewsslider\Art Assets\Actors\Explosion01.bmpExplosion01           <   2                                   <   2                   �          w   c                       Jc:\users\jrmmba\documents\matthewsslider\Art Assets\Actors\Explosion02.bmpExplosion02           <   2                                   <   2                   �          w   c                       Jc:\users\jrmmba\documents\matthewsslider\Art Assets\Actors\Explosion03.bmpExplosion03           <   2                                   <   2                  �          w   c                       EAGLE   BIRD00                      DC:\Users\jrmmba\Documents\matthewsslider\Art Assets\Actors\eagle.bmpeagle              %                                   2   A                   �          c   �                  6   w   ,   j                               �     ,   j   +   H                               �     +   H   D   6                               �     D   6   `   8                               �     `   8   _   '                                     _   '   T                                       T      _   
                                    _   
   X                                       X      @                                       @                                                                                                     "                                       "      ?                                       ?   %   F                               	     %   F   %   j                               
     %   j      {                                       {   6   w                                                            BIRD01                      FC:\Users\jrmmba\Documents\matthewsslider\Art Assets\Actors\eagle01.bmpeagle01              %                                   2   A                   �          c   �                  6   w   ,   j                                    ,   j   +   H                                    +   H   D   6                                    D   6   `   8                                    `   8   _   '                                    _   '   T                                       T      _   
                                    _   
   X                                       X      @                                       @                                                                                                     "                                       "      ?                                       ?   %   F                                    %   F   %   j                                    %   j      {                                       {   6   w                                                            BIRD02                      FC:\Users\jrmmba\Documents\matthewsslider\Art Assets\Actors\eagle02.bmpeagle02              %                                   2   A                   �          c   �                  6   w   ,   j                                    ,   j   +   H                                    +   H   D   6                                     D   6   `   8                               !     `   8   _   '                               "     _   '   T                                  #     T      _   
                               $     _   
   X                                  %     X      @                                  &     @                                         '                                              (              "                               )        "      ?                               *        ?   %   F                               +     %   F   %   j                               ,     %   j      {                               -        {   6   w                               .                             EXPLODE                      Jc:\users\jrmmba\documents\matthewsslider\Art Assets\Actors\Explosion01.bmpExplosion01           <   2                                   <   2                   �          w   c                       Jc:\users\jrmmba\documents\matthewsslider\Art Assets\Actors\Explosion02.bmpExplosion02           <   2                                   <   2                   �          w   c                       Jc:\users\jrmmba\documents\matthewsslider\Art Assets\Actors\Explosion03.bmpExplosion03           <   2                                   <   2                  �          w   c                       	DOOMCLOUD   CLOUD                      JC:\Users\jrmmba\Documents\matthewsslider\Art Assets\Actors\CloudOfDoom.bmpCloudOfDoom           ]   K                                   ]   K                   �          �   �                     �   �   �                               /     �   �   �                                  0     �                                        1              �                               2                             BULLET   PLAYER                      Ic:\users\jrmmba\documents\matthewsslider\Art Assets\Actors\projPlasma.bmp
projPlasma           
                                      
                      �                                               3                  SPIT   SPIT                      CC:\Users\jrmmba\Documents\matthewsslider\Art Assets\Actors\spit.bmpspit           
                                      
                      �                                                                       4                                             5                                             6                                             7                             ProbeMV          >   �   �      �   �      8     =   CloudMV             ?   �      �  G   �   �   
ShipMoveFN�!  //Please note that the code relating to repositioning the viewport is coded in two places in the file.
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

                 ShipAnimationFN��  // This function changes the ship's animation based on its direction

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
                 ViewportDeleteFN� // This function can be used by any Sprite.
 // If this Sprite leaves the viewport it will
 //   be deleted.

if ( This->InViewport() == false )
{
  This->DeleteFlag( true );
}                 MapCollisionDeleteFN� // This function can be used by any Sprite.
 // If this Sprite collides with any map 
 //   it will be deleted.

if ( This->CollisionWithMap() == true )
{
  This->DeleteFlag( true );
}                 OnCollisionDeleteFN� // This function can be used by any Sprite.
 // If this Sprite collides with any Sprite,
 //   then it will delete.

if ( This->CollisionWithSprite() == true )
{
  This->DeleteFlag( true );
}                 
ShipFireFN�if ( pKeyboard->IsTriggered( DIK_SPACE ) )
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
}                 
BirdSpitFN�8SpriteCopyMF( 
  "MasterSpit", // Original Sprite's name
  "Spit",       // Copied Sprite's name
  This->WorldPositionX() + This->HotSpotX( 0 ),// X pos 
  This->WorldPositionY() + This->HotSpotY( 0 ),// Y pos
  180,					// Vector Angle
  10 				// Speed
);

SoundPTR sound("SpitSFX");
sound->Play();
      d          ShipDamageFN��if (This->CollisionWithSprite("CloudOfDoom"))
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
                 EagleDamageFN�if (This->CollisionWithSprite("Bullet"))
{
	GetEagleLD(This)->Hits += 1;
    This->Animation(GetEagleLD(This)->Hits);
    
    TextPTR pScore("ScoreNoTXT");
    pScore->Value++;
}
                 EagleDeleteFN�if (This->EndOfAnimation(EAGLE_EXPLODE))
{
   GetEagleLD(This)->Hits = 0;
   This->DeleteFlag(true);
   NoOfEaglesGD--;
}


                 EagleSpawnFN�*if (NoOfEaglesGD < 5)
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
      �          
HUDTimerFNThis->Value++;      <          
SpriteCopy�* // This function will make a copy of any sprite.
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
return pNewSprite;jSprite* SpriteCopyMF(const char* masterName, const char*  newName, int x, int y, float angle, float speed)NoOfEaglesGD    int                          0    �                    r  �  <       $                         2        2       ���  2       ���      2        2       ���  2       ���                 ����                            Cc:\users\jrmmba\documents\matthewsslider\Art Assets\Maps\skymap.bmpSkyMap                                            �  �       BackgroundSFX                          "                                �                          !  �     �                             �                          !  �  T  �                             �                          ]
  �  �  �                             �                          Y  �  T
  �                             �                          �  �  �  �                             �                          �  �  �  �                             �                          �  �    �                             �                          U  �    O                              �       O  �
  P                              �     �
  P  ]
  �                              �                          �  �    |                               �       |   �  |                               �     �  |   �  �                              �                          �     �  _                               �     �  _   �  ^                               �     �  ^   �                                 �                          �  �  �  k                              �     �  k  �  �                              �     �  �  �  �                              �                                                 Cc:\users\jrmmba\documents\matthewsslider\Art Assets\Maps\thesky.bmpSkyWrap               �  �                     ��� �                                       ShipShip17473433741                           �                                      �A       (F) ShipAnimationFN(F) ShipMoveFN(F) ShipFireFN(F) ShipDamageFN(T) EagleSpawnFN                                                              �@                                                     ShipLD                  MasterEagleMasterEagle17488481790                         �                                      �A       (F) EagleDamageFN(F) EagleDeleteFN(T) BirdSpitFN                                                          @?                                ProbeMV                  EagleLD                  CloudOfDoomCloudOfDoom307101109523                          �  �                                    �A                                                                   @?                �               CloudMV                                     MasterBulletMasterBullet146578894317                                                                     �A       (F) MapCollisionDeleteFN(F) OnCollisionDeleteFN(F) ViewportDeleteFN                                                                                                                                      
MasterSpitMasterSpit149192495169                                                                     �A       (F) MapCollisionDeleteFN(F) OnCollisionDeleteFN(F) ViewportDeleteFN                                                                                                                           ZC:\Users\jrmmba\Documents\matthewsslider\Art Assets\Sounds\Music\The Peanuts Theme.flv.WAVBackgroundSFX          Kc:\users\jrmmba\documents\matthewsslider\Art Assets\Sounds\SFX\laser-01.wavLaserSFX            Gc:\users\jrmmba\documents\matthewsslider\Art Assets\Sounds\SFX\spit.WAVSpitSFX            Arial BlackTimerTXT    Time:�                            2@         Arial Black����     "  �       �  �      ����           ���                               ����        ,40,            �              Arial Black
TimerNoTXT    0&                          2@   (T) HUDTimerFN     Arial Black����     "  �       �  �      ����           ���                               ����        ,40,            �              Arial BlackScoreTXT    Score�                             2@         Arial Black����     "  �       �  �      ����           ���                               ����        ,40,            �              Arial Black
ScoreNoTXT    0^                          2@         Arial Black����     "  �       �  �      ����           ���                               ����       ,40,          �           ShipLD   IsRightT boolT d^�                    true LostControl\� bool\� ���                    false LostControlCntB  intB  \վ                    0 EagleLD   Hits	 int	 p%�                    0 HowMany�3 int�3 $׾                    0 