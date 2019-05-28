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
		printf("불러올 캐릭터가 없습니다.\n");
		system("pause");
		return;
	}

	else {
		while (check != 1) {
		getchar();
		printf("저장된 캐릭터를 불러오시겠습니까?(y/n) : ");
		scanf("%c", &yn);

		
			switch (yn)
			{
			case 'n':
				return;
			case 'y':
				check = 1;
				break;
			default:
				printf("잘못입력하셨습니다.\n");
				printf("다시입력하세요.\n");
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
	printf("『불러오기 완료』\n");
	printf("【캐릭터 정보】\n");
	printf("닉네임 : %s\n", c->name);
	printf("레벨 : %d\n", c->level);
	printf("성별 : %s\n", c->sex);
	printf("공격력 : %d\n", c->attack);
	printf("체력 : %d\n", c->HP);
	printf("소지골드 : %d\n", c->gold);
	system("pause");

	items_load();

	system("cls");
	main_stage(0);

}


#endif
