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
	printf("“현재상태를 저장하시겠습니까?”\n");
	printf("“한번 저장하면 이전의 진행내용은 되돌릴수 없습니다.”\n");
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

		printf("저장중.");
		Sleep(1000);
		printf(".");
		Sleep(1000);
		printf(".\n");
		Sleep(1000);
		printf("저장 완료\n");

		printf("<캐릭터 저장내용>\n");
		printf("닉네임 : %s\n", c->name);
		printf("레벨 : %d\n", c->level);
		printf("성별 : %s\n", c->sex);
		printf("공격력 : %d\n", c->attack);
		printf("체력 : %d\n", c->HP);
		printf("소지골드 : %d\n", c->gold);
		system("pause");
	}
}







#endif