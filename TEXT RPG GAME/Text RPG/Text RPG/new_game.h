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
		printf("생성된 캐릭터가 없습니다.\n");
		printf("캐릭터를 만들어 주세요.\n");
	}
	else if (f != NULL) {
		int check=0;
		while (check != 1) {
			getchar();
			printf("이미 생성된 캐릭터가 있습니다.\n");
			printf("새로 캐릭터를 생성하면 기존의 캐릭터의 데이터는 지워집니다.\n");
			printf("캐릭터를 새로 만들겠습니까?(y/n) : ");
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
	system("cls");
	printf("캐릭터 이름 : ");
	scanf("%s", c_name);
	printf("성별 : ");
	scanf("%s", c_sex);

	f = fopen(str, "w");

	fprintf(f, "%s 1 %s 10 50 50 1\n", c_name, c_sex);

	fclose(f);

	f = fopen(str, "r");
	
	fscanf(f, "%s %d %s %d %d %d %d\n", c->name, &c->level, c->sex, &c->attack, &c->HP, &c->gold, &c->stage);

	fclose(f);

	system("cls");
	printf("『캐릭터 생성완료』\n");
	printf("닉네임 : %s\n", c->name);
	printf("레벨 : %d\n", c->level);
	printf("성별 : %s\n", c->sex);
	printf("공격력 : %d\n", c->attack);
	printf("체력 : %d\n", c->HP);
	printf("소지골드 : %d\n", c->gold);
	system("pause");

	items_load();

	system("cls");
	main_stage(1);
}

#endif