#ifdef SAVE

#else
#define SAVE

#include "index.h"
#include "ingame.h"
#include "struct.h"

void save() {
	FILE *f;
	int i;
	char yn, yn2;
	char str[100] = { "c:/textrpg/" };
	char str_item[100] = { "c:/textrpg/" };
	strcat(str, tmp_id);
	strcat(str, ".txt");
	strcat(str_item, tmp_id);
	strcat(str_item, "_items.txt");

	getchar();
	printf("��������¸� �����Ͻðڽ��ϱ�?��\n");
	printf("���ѹ� �����ϸ� ������ ���೻���� �ǵ����� �����ϴ�.��\n");
	printf("y/n : ");
	scanf("%c", &yn);
	if (yn == 'n')
		return;
	else if (yn == 'y') {
		f = fopen(str, "w");

		fprintf(f, "%s %d %s %d %d %d %d \n", c->name, c->level, c->sex, c->attack, c->HP, c->gold, c->stage);

		fclose(f);

	
		f = fopen(str_item, "w");
		for (i = 0; i < 3; i++)
			fprintf(f, "%s %d %d %d %d %d\n", c->item[i]->item_name, c->item[i]->item_kind, c->item[i]->item_level, c->item[i]->attack, c->item[i]->ammor, c->item[i]->HP);

		fclose(f);

		printf("������.");
		Sleep(1000);
		printf(".");
		Sleep(1000);
		printf(".\n");
		Sleep(1000);
		printf("���� �Ϸ�\n");

		printf("<ĳ���� ���峻��>\n");
		printf("�г��� : %s\n", c->name);
		printf("���� : %d\n", c->level);
		printf("���� : %s\n", c->sex);
		printf("���ݷ� : %d\n", c->attack);
		printf("ü�� : %d\n", c->HP);
		printf("������� : %d\n", c->gold);
		system("pause");
	}
}







#endif