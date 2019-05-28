#ifdef STRUCT

#else
#define STRUCT

#include "index.h"
#include "menu.h"
#include "login.h"
//#include "disp.h"
//#include "ingame.h"
//#include "verse.h"


typedef struct items
{
	char item_name[100]; //아이템 이름
	int item_kind;      //아이템 종류
	int item_level; //아이템 레벨
	int attack;      //공격력
	int ammor;   //방어력
	int HP;      //생명력, 마나 채워주는 양
}items;


typedef struct character
{
	char name[20];      //캐릭터 이름
	int level;   //레벨
	char sex[10];   //직업
	int attack;  //공격력
	int HP;   //생명력
	int gold; // 소지골드
	int stage; //스테이지 진행도
	struct items *item[100];   //아이템
}ct;

typedef struct monster
{
	char name[20];      //몬스터이름
	int level;   //레벨
	int m_str;   //공격력
	int m_hp;   //체력
	int m_money;      //소지한돈
}ms;

ct *c= NULL;
items **it[3];
ms **mon;
int stage = 1;

#endif