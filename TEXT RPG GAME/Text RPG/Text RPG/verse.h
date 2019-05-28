#ifdef VERSE

#else
#define VERSE

#include "index.h"
#include "struct.h"
#include "ingame.h"



void verse();
int mon_load();
int fight(int mon_num);
void use_posion();


void verse() {
	int mon_num, result=0;
	int num;

	mon_num = mon_load();
	printf("좀비에게 들켯다!!\n");

	while (1) {
		printf("cls");
		printf("[%sHP : %d]\t[%sHP :   %d]\n", c->name, c->HP, mon[mon_num]->name, mon[mon_num]->m_hp);
		printf("1. 【공격】 2. 【응급약 사용】 3. 【도망 치기】\n");
		printf("【선택】 : ");
		scanf("%d", &num);

		switch (num)
		{
		case 1:
			result = fight(mon_num);
			system("cls");
			if (result == 1)
				return;
			break;
		case 2:
			use_posion();
			break;
		case 3:
			printf("《%s》는 도망쳤다.",c->name);
			system("pause");
			return;
		default:
			printf("잘못된 입력값입니다.");
			break;
		}
	}
}

int mon_load() {
	int i, mon_num;
	for (i = 0; i < 5; i++)
		if (c->level == mon[i]->level) {
			mon_num = i;
			return mon_num;
		}
}

int fight(int mon_num) {
	int i;
	system("cls");
	printf("[《%s》HP : %d]\t[《%s》HP :   %d]\n", c->name, c->HP, mon[mon_num]->name, mon[mon_num]->m_hp);
	printf("《%s》의 공격!\n", c->name);
	printf("《%s》", c->name);
	for (i = 0; i < 5; i++) {
		Sleep(200);
		printf("-");
	}
	printf(">");
	printf("《%s》\n", mon[mon_num]->name);
	Sleep(1000);
	
	mon[mon_num]->m_hp -= (c->item[0]->attack + c->attack);//몬스터의 체력에서 공격력만큼 체력감소
	printf("\t「%d」의 데미지!\n", c->item[0]->attack + c->attack);
	printf("\t%s의 체력 「-%d」\n", mon[mon_num]->name, c->item[0]->attack + c->attack);
	system("pause");

	if (mon[mon_num]->m_hp <= 0) {
		printf("《%s》가 쓰러졌다.\n", mon[mon_num]->name);
		printf("《%s》의 승리.\n", c->name);
		system("pause");
		c->gold += mon[mon_num]->m_money;
		c->level++;
		printf("『%d GOLD획득』\n", mon[mon_num]->m_money);
		printf("《%s》레벨업!.\n", c->name);
		c->attack+= 5;
		printf("공격력 증가! : %d\n",c->attack);
		printf("최대 체력증가! : %d\n", 50 * c->level);
		system("pause");
		stage++;
		return 1;
	}

	system("cls");
	printf("[%sHP : %d]\t[%sHP :   %d]\n", c->name, c->HP, mon[mon_num]->name, mon[mon_num]->m_hp);
	printf("《%s》의 반격!\n", mon[mon_num]->name);
	printf("《%s》", mon[mon_num]->name);
	for (i = 0; i < 5; i++) {
		Sleep(200);
		printf("-");
	}
	printf(">");
	printf("《%s》\n", c->name);
	Sleep(500);

	c->HP -= (mon[mon_num]->m_str - c->item[1]->ammor);
	printf("\t「%d」의 데미지!\n", mon[mon_num]->m_str - c->item[1]->ammor);
	printf("\t《%s》의 체력 「-%d」\n", c->name, mon[mon_num]->m_str - c->item[1]->ammor);
	system("pause");

	if (c->HP <= 0) {
		printf("《%s》가 쓰러졌다.\n", c->name);
		printf("『출발역으로 강제이송됩니다.』\n");
		system("pause");
		c->HP = 1;
		return 1;
	}
}

void use_posion() {
	int num;
	printf("【보유 응급약 개수】 : %d\n", c->item[2]->item_level);
	printf("“응급약회복량 : %d(캐릭터레벨 X 10)”\n", c->level * c->item[2]->HP);
	printf("1.【사용】 2.【취소】\n");
	printf("【선택】:");
	scanf("%d", &num);

	switch (num)
	{
	case 1:
		if (c->HP == (50 * c->level)) {
			printf("이미 HP가 최대치입니다.\n");
			system("pause");
			system("cls");
			break;
		}
		c->HP += (c->level * c->item[2]->HP);
		if (c->HP > (50 * c->level))
			c->HP = (50 * c->level);
		c->item[2]->item_level -= 1;
		printf("『포션 사용』\n");
		printf("《%s》의 체력 : %d",c->name ,c->HP);
		system("pause");
		system("cls");
		break;
	case 2: 
		return;
	default:
		printf("잘못된 입력값입니다.");
		break;
	}
		
}


#endif 