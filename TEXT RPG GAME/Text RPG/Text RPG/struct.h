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
	char item_name[100]; //������ �̸�
	int item_kind;      //������ ����
	int item_level; //������ ����
	int attack;      //���ݷ�
	int ammor;   //����
	int HP;      //�����, ���� ä���ִ� ��
}items;


typedef struct character
{
	char name[20];      //ĳ���� �̸�
	int level;   //����
	char sex[10];   //����
	int attack;  //���ݷ�
	int HP;   //�����
	int gold; // �������
	int stage; //�������� ���൵
	struct items *item[100];   //������
}ct;

typedef struct monster
{
	char name[20];      //�����̸�
	int level;   //����
	int m_str;   //���ݷ�
	int m_hp;   //ü��
	int m_money;      //�����ѵ�
}ms;

ct *c= NULL;
items **it[3];
ms **mon;
int stage = 1;

#endif