#ifdef CONTINUE_GAME

#else
#define CONTINUE_GAME

#include "index.h"
#include "struct.h"
#include "login.h"
#include "items_load.h"
#include "ingame.h"


void continue_game() {
	FILE *f;
	
	int i, check = 0;
	char str[100] = { "c:/textrpg/" };
	char yn;
	strcat(str, tmp_id);
	strcat(str, ".txt");

	f = fopen(str, "r");
	if (f == NULL) {
		printf("�ҷ��� ĳ���Ͱ� �����ϴ�.\n");
		system("pause");
		return;
	}

	else {
		while (check != 1) {
		getchar();
		printf("����� ĳ���͸� �ҷ����ðڽ��ϱ�?(y/n) : ");
		scanf("%c", &yn);

		
			switch (yn)
			{
			case 'n':
				return;
			case 'y':
				check = 1;
				break;
			default:
				printf("�߸��Է��ϼ̽��ϴ�.\n");
				printf("�ٽ��Է��ϼ���.\n");
				system("pause");
				system("cls");
				break;
			}
		}

	}

	c = (ct*)malloc(sizeof(ct));

	fscanf(f, "%s %d %s %d %d %d %d\n", c->name, &c->level, c->sex, &c->attack, &c->HP, &c->gold, &c->stage);

	fclose(f);
	system("cls");
	printf("Load.");
	for (i = 0; i < 5; i++) {
		Sleep(500);
		printf(".");
	}
	printf("\n");
	printf("���ҷ����� �Ϸ᡻\n");
	printf("��ĳ���� ������\n");
	printf("�г��� : %s\n", c->name);
	printf("���� : %d\n", c->level);
	printf("���� : %s\n", c->sex);
	printf("���ݷ� : %d\n", c->attack);
	printf("ü�� : %d\n", c->HP);
	printf("������� : %d\n", c->gold);
	system("pause");

	items_load();

	system("cls");
	main_stage(0);

}


#endif
