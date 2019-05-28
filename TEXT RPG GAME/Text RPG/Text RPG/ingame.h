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
		printf("1. ���� ž�� ");
		printf("2. ���� ");
		printf("3. �ǹ��� ");
		printf("4. ���� ");
		printf("5. ����\n");
		printf("�����á�: ");
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
			printf("�߸��� ���� �Է��Ͽ����ϴ�.\n");
			printf("�ٽ��Է����ּ���.\n");
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
		printf("\t���� ���桽\n");
		printf("���� : ưư�� ��Ʈ + %d\n", c->item[0]->item_level);
		printf("       ���ݷ� : %d\n", c->item[0]->attack);
		printf("�� : �β��� ���е� + %d\n", c->item[1]->item_level);
		printf("         ���� : %d\n" , c->item[1]->ammor);
		printf("���޾� ���� : %d\n", c->item[2]->item_level);
		printf("������� : %d\n", c->gold);
		printf("===============================================\n");
		printf("�������ް� ������ �Ĵ� ������ �������ִ�.��\n");
		printf("1. ���� ��ȭ\n");
		printf("2. �� ��ȭ\n");
		printf("3. ���޾� ���� \n");
		printf("4. ���ư��� \n");
		printf("�����á� : ");
		scanf("%d", &num);
	
		switch (num) {
		case 1:attackUp(); break;
		case 2:armorUp(); break;
		case 3:buyPotion(); break;
		case 4:return;
		default:
			printf("�߸��Է��ϼ̽��ϴ�.");
			printf("�ٽ��Է��ϼ���.");
			system("pause");
			system("cls");
			break;
		}
	}
}

void attackUp() {
	char yn; //Yes NO
	int i = 0, gold = 10; //gold�� ��ȭ�� �ʿ��� �ּұݾ�

	while (1) {
		getchar();
		printf("���⸦ ��ȭ�ϰڽ��ϱ�?\n");
		printf("���Ⱝȭ ��� : %d(������ ���� X 10��)\n", c->item[0]->item_level * 10);
		printf("��Y(y) / N(n)�� : ");
		scanf("%c", &yn);

		if ((yn == 'N' || yn == 'n')) {//N(n)�����ٸ� N=78 ,n=121
			return;
		}
		else if (yn == 'y' || yn == 'Y') { //Y(y)������ ��尡 10�̻��̸�
			if (c->gold < c->item[0]->item_level * 10) {
				printf("���� �����Ͽ� ��ȭ�� �� �� ����.\n");
				system("pause");
				return;
			}
			else {
				c->item[0]->attack += 5; //���ݷ� +5
				printf("��� %d ����.\n", c->item[0]->item_level * 10);
				c->item[0]->item_level += 1;
				c->gold -= c->item[0]->item_level * 10; //��� - 10
				printf("��Ʈ�� �������Ͽ� ���ݷ��� ��ȭ���״�!!\n");
				printf("������ ���ݷ� +5!��\n");
				printf("������ ���� ���ݷ� %d��\n", c->item[0]->attack);
				printf("������ ��� : %d��\n", c->gold);
				system("pause");
				return;
			}
		}
		else {
			printf("�߸��Է��ϼ̽��ϴ�.\n");
			printf("�ٽ��Է��ϼ���.\n");
			system("pause");
		}
	}
}

void armorUp() {
	char yn; //Yes NO
	int i = 0, gold = 10; //gold�� ��ȭ�� �ʿ��� �ּұݾ�

	while (1) {
		getchar();
		printf("���� ��ȭ�ϰڽ��ϱ�?\n");
		printf("����ȭ ��� : %d(������ ���� X 10��)\n", c->item[1]->item_level * 10);
		printf("Y(y) / N(n) : ");
		scanf("%c", &yn);


		if (yn == 'N' || yn == 'n') {
			return;
		}
		else if (yn == 'Y' || yn == 'y') { 
			if (c->gold < c->item[1]->item_level * 10) {
				printf("���� �����Ͽ� ��ȭ�� �� �� ����.\n");
				system("pause");
				return;
			}
			else {
				c->item[1]->ammor += 2;
				printf("��� %d ����.\n", c->item[1]->item_level * 10);
				c->item[1]->item_level += 1;
				c->gold -= c->item[1]->item_level * 10; 
				printf("���е��� �������� �ѷ� ������ ��ȭ���״�!!\n");
				printf("���е� ���� +2!��\n");
				printf("������ �е� ���� %d��\n", c->item[1]->ammor);
				printf("������ ��� : %d��\n", c->gold);
				system("pause");
				return;
			}
		}
		else {
			printf("�߸��Է�. �ٽ��Է��ϼ���.");
		}
	}
}

void buyPotion() {
	char yn; //Yes NO
	int i = 0, gold = 10;
	while (1) {
		getchar();
		printf("���޾� ����\n");
		printf("Y(y) / N(n) : ");
		scanf("%c", &yn);
		
		if ((yn == 'N' || yn == 'n')) {
			return;
		}
		else if (yn == 'Y' || yn == 'y') { 
			if (c->gold < 10) {
				printf("������ �����Ͽ� ���� �� �� ����.��\n");
				system("pause");
				return;
			}
			c->item[2]->item_level += 1;
			c->gold -= 10; //��� - 10
			printf("��� 10 ����.\n");
			printf("���޾��� �����Ͽ���!\n");
			system("pause");
			return;
		}
		else {
			printf("�߸��Է��ϼ̽��ϴ�.\n");
			printf("�ٽ��Է��ϼ���.\n");
			system("pause");
		}
	}
}

void medical() {
	int num;
	while (1) {
		system("cls");
		printf("����ó�� ġ���Ҽ� �ִ� ������ �Ƿ�ǰ���� ���δ�.��\n");
		printf("�������� �� �� ���� ���� ħ�뵵 ���δ�.��\n");
		printf("===============================================\n");
		printf("1. ��ó ġ��\n");
		printf("2. ����\n");
		printf("3. ���� ����\n");
		printf("�����á� : ");
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
			printf("�߸��� ���� �Է� �ϼ̽��ϴ�.\n");
			system("pause");
			system("cls");
			break;
		}
	}
}

void heal() {

	c->HP = 50 * c->level;
	printf("���ǹ����� ��ǰ�� ����Ͽ� ��ó�� ġ���߽��ϴ�.��\n");
	printf("��ü���� ��� ȸ���Ǿ����ϴ١�\n");
	printf("������ ü�� : %d��\n", c->HP);
	system("pause");
}

void train() {
	int r, i;
	system("cls");
	printf("���������� ����Ǵ� ������ ž���Ͽ���.��\n");
	printf("�������� �����ִ� ���񿡰� �߰������ʰ� ��������.��\n");
	for (i = 0; i < 10; i++) {
		printf("����");
		Sleep(200);
	}
	printf("\n");
	srand((int)time(NULL));
		
	switch (stage)
	{
	case 1:
		r = rand() % 2;//���Ϳ� ����� ��ĥ Ȯ�� 1/3
		break;
	case 2:
		r = rand() % 2;//���Ϳ� ����� ��ĥ Ȯ�� 1/2
		break;
	case 3:
		r = rand() % 2;//���Ϳ� ����� ��ĥ Ȯ�� 1/2
		break;
	case 4:
		r = rand() % 1;//���Ϳ� ����� ��ĥ Ȯ�� 1
		break;
	}

	if (r == 0)
		verse();
	else {
		printf("�����񿡰� ��Ű�� �ʰ� �������� �����ߴ�.��\n");
		printf("������ ����ö�� ����Ÿ��.��\n");
		system("pause");
		stage++;
	}

}



#endif
