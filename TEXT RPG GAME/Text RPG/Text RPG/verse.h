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
	printf("���񿡰� ���ִ�!!\n");

	while (1) {
		printf("cls");
		printf("[%sHP : %d]\t[%sHP :   %d]\n", c->name, c->HP, mon[mon_num]->name, mon[mon_num]->m_hp);
		printf("1. �����ݡ� 2. �����޾� ��롽 3. ������ ġ�⡽\n");
		printf("�����á� : ");
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
			printf("��%s���� �����ƴ�.",c->name);
			system("pause");
			return;
		default:
			printf("�߸��� �Է°��Դϴ�.");
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
	printf("[��%s��HP : %d]\t[��%s��HP :   %d]\n", c->name, c->HP, mon[mon_num]->name, mon[mon_num]->m_hp);
	printf("��%s���� ����!\n", c->name);
	printf("��%s��", c->name);
	for (i = 0; i < 5; i++) {
		Sleep(200);
		printf("-");
	}
	printf(">");
	printf("��%s��\n", mon[mon_num]->name);
	Sleep(1000);
	
	mon[mon_num]->m_hp -= (c->item[0]->attack + c->attack);//������ ü�¿��� ���ݷ¸�ŭ ü�°���
	printf("\t��%d���� ������!\n", c->item[0]->attack + c->attack);
	printf("\t%s�� ü�� ��-%d��\n", mon[mon_num]->name, c->item[0]->attack + c->attack);
	system("pause");

	if (mon[mon_num]->m_hp <= 0) {
		printf("��%s���� ��������.\n", mon[mon_num]->name);
		printf("��%s���� �¸�.\n", c->name);
		system("pause");
		c->gold += mon[mon_num]->m_money;
		c->level++;
		printf("��%d GOLDȹ�桻\n", mon[mon_num]->m_money);
		printf("��%s��������!.\n", c->name);
		c->attack+= 5;
		printf("���ݷ� ����! : %d\n",c->attack);
		printf("�ִ� ü������! : %d\n", 50 * c->level);
		system("pause");
		stage++;
		return 1;
	}

	system("cls");
	printf("[%sHP : %d]\t[%sHP :   %d]\n", c->name, c->HP, mon[mon_num]->name, mon[mon_num]->m_hp);
	printf("��%s���� �ݰ�!\n", mon[mon_num]->name);
	printf("��%s��", mon[mon_num]->name);
	for (i = 0; i < 5; i++) {
		Sleep(200);
		printf("-");
	}
	printf(">");
	printf("��%s��\n", c->name);
	Sleep(500);

	c->HP -= (mon[mon_num]->m_str - c->item[1]->ammor);
	printf("\t��%d���� ������!\n", mon[mon_num]->m_str - c->item[1]->ammor);
	printf("\t��%s���� ü�� ��-%d��\n", c->name, mon[mon_num]->m_str - c->item[1]->ammor);
	system("pause");

	if (c->HP <= 0) {
		printf("��%s���� ��������.\n", c->name);
		printf("����߿����� �����̼۵˴ϴ�.��\n");
		system("pause");
		c->HP = 1;
		return 1;
	}
}

void use_posion() {
	int num;
	printf("������ ���޾� ������ : %d\n", c->item[2]->item_level);
	printf("�����޾�ȸ���� : %d(ĳ���ͷ��� X 10)��\n", c->level * c->item[2]->HP);
	printf("1.����롽 2.����ҡ�\n");
	printf("�����á�:");
	scanf("%d", &num);

	switch (num)
	{
	case 1:
		if (c->HP == (50 * c->level)) {
			printf("�̹� HP�� �ִ�ġ�Դϴ�.\n");
			system("pause");
			system("cls");
			break;
		}
		c->HP += (c->level * c->item[2]->HP);
		if (c->HP > (50 * c->level))
			c->HP = (50 * c->level);
		c->item[2]->item_level -= 1;
		printf("������ ��롻\n");
		printf("��%s���� ü�� : %d",c->name ,c->HP);
		system("pause");
		system("cls");
		break;
	case 2: 
		return;
	default:
		printf("�߸��� �Է°��Դϴ�.");
		break;
	}
		
}


#endif 