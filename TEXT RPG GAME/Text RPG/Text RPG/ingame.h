#ifdef INGAME

#else
#define INGAME

#include "index.h"
#include "menu.h"
#include "struct.h"
#include "disp.h"
#include "items_load.h"
#include "monster_load.h"
#include "save.h"
#include "verse.h"



void main_stage(int first);
void medical();
void heal();
void store();
void attackUp();
void armorUp();
void buyPotion();
void train();



void main_stage(int first) {
	int num;
	stage = c->stage;

	if (first == 1)
		disp_story();

	while (stage <= 4) {
		system("cls");
		disp(stage);
		printf("1. 열차 탑승 ");
		printf("2. 상인 ");
		printf("3. 의무실 ");
		printf("4. 가방 ");
		printf("5. 상태\n");
		printf("【선택】: ");
		scanf("%d", &num);


		switch (num)
		{
		case 1:
			train();
			break;
		case 2:
			store();
			break;
		case 3:
			medical();
			break;
		case 4:
			disp_bag();
			break;
		case 5:
			disp_c();
			break;
		default:
			printf("잘못된 값을 입력하였습니다.\n");
			printf("다시입력해주세요.\n");
			system("pause");
			system("cls");
			break;
		}
	}

	disp(stage);
}

void store() {
	int num, i;
	while (1) {
		system("cls");
		printf("\t【내 가방】\n");
		printf("무기 : 튼튼한 배트 + %d\n", c->item[0]->item_level);
		printf("       공격력 : %d\n", c->item[0]->attack);
		printf("방어구 : 두꺼운 롱패딩 + %d\n", c->item[1]->item_level);
		printf("         방어력 : %d\n" , c->item[1]->ammor);
		printf("응급약 개수 : %d\n", c->item[2]->item_level);
		printf("소지골드 : %d\n", c->gold);
		printf("===============================================\n");
		printf("『돈을받고 뭐든지 파는 보따리 상인이있다.』\n");
		printf("1. 무기 강화\n");
		printf("2. 방어구 강화\n");
		printf("3. 응급약 구입 \n");
		printf("4. 돌아가기 \n");
		printf("【선택】 : ");
		scanf("%d", &num);
	
		switch (num) {
		case 1:attackUp(); break;
		case 2:armorUp(); break;
		case 3:buyPotion(); break;
		case 4:return;
		default:
			printf("잘못입력하셨습니다.");
			printf("다시입력하세요.");
			system("pause");
			system("cls");
			break;
		}
	}
}

void attackUp() {
	char yn; //Yes NO
	int i = 0, gold = 10; //gold는 강화시 필요한 최소금액

	while (1) {
		getchar();
		printf("무기를 강화하겠습니까?\n");
		printf("무기강화 비용 : %d(아이템 레벨 X 10원)\n", c->item[0]->item_level * 10);
		printf("《Y(y) / N(n)》 : ");
		scanf("%c", &yn);

		if ((yn == 'N' || yn == 'n')) {//N(n)눌렀다면 N=78 ,n=121
			return;
		}
		else if (yn == 'y' || yn == 'Y') { //Y(y)눌렀고 골드가 10이상이면
			if (c->gold < c->item[0]->item_level * 10) {
				printf("돈이 부족하여 강화를 할 수 없다.\n");
				system("pause");
				return;
			}
			else {
				c->item[0]->attack += 5; //공격력 +5
				printf("골드 %d 차감.\n", c->item[0]->item_level * 10);
				c->item[0]->item_level += 1;
				c->gold -= c->item[0]->item_level * 10; //골드 - 10
				printf("배트에 못질을하여 공격력을 강화시켰다!!\n");
				printf("『무기 공격력 +5!』\n");
				printf("『현재 무기 공격력 %d』\n", c->item[0]->attack);
				printf("『현재 골드 : %d』\n", c->gold);
				system("pause");
				return;
			}
		}
		else {
			printf("잘못입력하셨습니다.\n");
			printf("다시입력하세요.\n");
			system("pause");
		}
	}
}

void armorUp() {
	char yn; //Yes NO
	int i = 0, gold = 10; //gold는 강화시 필요한 최소금액

	while (1) {
		getchar();
		printf("방어구를 강화하겠습니까?\n");
		printf("방어구강화 비용 : %d(아이템 레벨 X 10원)\n", c->item[1]->item_level * 10);
		printf("Y(y) / N(n) : ");
		scanf("%c", &yn);


		if (yn == 'N' || yn == 'n') {
			return;
		}
		else if (yn == 'Y' || yn == 'y') { 
			if (c->gold < c->item[1]->item_level * 10) {
				printf("돈이 부족하여 강화를 할 수 없다.\n");
				system("pause");
				return;
			}
			else {
				c->item[1]->ammor += 2;
				printf("골드 %d 차감.\n", c->item[1]->item_level * 10);
				c->item[1]->item_level += 1;
				c->gold -= c->item[1]->item_level * 10; 
				printf("롱패딩에 테이프를 둘러 방어력을 강화시켰다!!\n");
				printf("『패딩 방어력 +2!』\n");
				printf("『현재 패딩 방어력 %d』\n", c->item[1]->ammor);
				printf("『현재 골드 : %d』\n", c->gold);
				system("pause");
				return;
			}
		}
		else {
			printf("잘못입력. 다시입력하세요.");
		}
	}
}

void buyPotion() {
	char yn; //Yes NO
	int i = 0, gold = 10;
	while (1) {
		getchar();
		printf("응급약 구입\n");
		printf("Y(y) / N(n) : ");
		scanf("%c", &yn);
		
		if ((yn == 'N' || yn == 'n')) {
			return;
		}
		else if (yn == 'Y' || yn == 'y') { 
			if (c->gold < 10) {
				printf("“돈이 부족하여 구입 할 수 없다.”\n");
				system("pause");
				return;
			}
			c->item[2]->item_level += 1;
			c->gold -= 10; //골드 - 10
			printf("골드 10 차감.\n");
			printf("응급약을 구입하였다!\n");
			system("pause");
			return;
		}
		else {
			printf("잘못입력하셨습니다.\n");
			printf("다시입력하세요.\n");
			system("pause");
		}
	}
}

void medical() {
	int num;
	while (1) {
		system("cls");
		printf("“상처를 치료할수 있는 쓸만한 의료품들이 보인다.”\n");
		printf("“쉬었다 갈 수 있을 만한 침대도 보인다.”\n");
		printf("===============================================\n");
		printf("1. 상처 치료\n");
		printf("2. 저장\n");
		printf("3. 돌아 가기\n");
		printf("【선택】 : ");
		scanf("%d", &num);

		switch (num)
		{
		case 1:
			heal();
			break;
		case 2:
			save();
			break;
		case 3:
			return;
		default:
			printf("잘못된 값을 입력 하셨습니다.\n");
			system("pause");
			system("cls");
			break;
		}
	}
}

void heal() {

	c->HP = 50 * c->level;
	printf("“의무실의 비품을 사용하여 상처를 치료했습니다.”\n");
	printf("“체력이 모두 회복되었습니다”\n");
	printf("『현재 체력 : %d』\n", c->HP);
	system("pause");
}

void train() {
	int r, i;
	system("cls");
	printf("“무인으로 운행되는 열차에 탑승하였다.”\n");
	printf("“열차에 숨어있는 좀비에게 발각되지않게 조심하자.”\n");
	for (i = 0; i < 10; i++) {
		printf("……");
		Sleep(200);
	}
	printf("\n");
	srand((int)time(NULL));
		
	switch (stage)
	{
	case 1:
		r = rand() % 2;//몬스터와 대결을 펼칠 확률 1/3
		break;
	case 2:
		r = rand() % 2;//몬스터와 대결을 펼칠 확률 1/2
		break;
	case 3:
		r = rand() % 2;//몬스터와 대결을 펼칠 확률 1/2
		break;
	case 4:
		r = rand() % 1;//몬스터와 대결을 펼칠 확률 1
		break;
	}

	if (r == 0)
		verse();
	else {
		printf("“좀비에게 들키지 않고 다음역에 도착했다.”\n");
		printf("“다음 지하철로 갈아타자.”\n");
		system("pause");
		stage++;
	}

}



#endif
