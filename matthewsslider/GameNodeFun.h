#ifndef _GAMENODEFUN_H_
#define _GAMENODEFUN_H_

#define SHIP	0
#define SHIP_RIGHT	0
#define SHIP_LEFT	1
#define SHIP_RIGHT_DOWN	2
#define SHIP_LEFT_DOWN	3
#define SHIP_RIGHT_UP	4
#define SHIP_LEFT_UP	5
#define SHIP_EXPLODE	6

#define EAGLE	1
#define EAGLE_BIRD00	0
#define EAGLE_BIRD01	1
#define EAGLE_BIRD02	2
#define EAGLE_EXPLODE	3

#define DOOMCLOUD	2
#define DOOMCLOUD_CLOUD	0

#define BULLET	3
#define BULLET_PLAYER	0

#define SPIT	4
#define SPIT_SPIT	0

void Init_Level_1Function(GameNode *gn);
void Exit_Level_1Function(GameNode *gn);
void End_Level_1Function(GameNode *gn);

#endif
