#ifdef NEW_GAME

#else
#define NEW_GAME

#include "index.h"
#include "struct.h"
#include "login.h"
#include "items_load.h"
#include "ingame.h"

void new_game();


void new_game() {
	FILE *f;
	char str[100] = { "c:/textrpg/" };
	char c_name[100], c_sex[100];
	char yn = 'a';
	strcat(str, tmp_id);
	strcat(str, ".txt");

	f = fopen(str, "r");
	if (f == NULL) {
		printf("������ ĳ���Ͱ� �����ϴ�.\n");
		printf("ĳ���͸� ����� �ּ���.\n");
	}
	else if (f != NULL) {
		int check=0;
		while (check != 1) {
			getchar();
			printf("�̹� ������ ĳ���Ͱ� �ֽ��ϴ�.\n");
			printf("���� ĳ���͸� �����ϸ� ������ ĳ������ �����ʹ� �������ϴ�.\n");
			printf("ĳ���͸� ���� ����ڽ��ϱ�?(y/n) : ");
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
	system("cls");
	printf("ĳ���� �̸� : ");
	scanf("%s", c_name);
	printf("���� : ");
	scanf("%s", c_sex);

	f = fopen(str, "w");

	fprintf(f, "%s 1 %s 10 50 50 1\n", c_name, c_sex);

	fclose(f);

	f = fopen(str, "r");
	
	fscanf(f, "%s %d %s %d %d %d %d\n", c->name, &c->level, c->sex, &c->attack, &c->HP, &c->gold, &c->stage);

	fclose(f);

	system("cls");
	printf("��ĳ���� �����Ϸ᡻\n");
	printf("�г��� : %s\n", c->name);
	printf("���� : %d\n", c->level);
	printf("���� : %s\n", c->sex);
	printf("���ݷ� : %d\n", c->attack);
	printf("ü�� : %d\n", c->HP);
	printf("������� : %d\n", c->gold);
	system("pause");

	items_load();

	system("cls");
	main_stage(1);
}

#endif