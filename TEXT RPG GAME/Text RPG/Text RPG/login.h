#ifdef LOGIN

#else
#define LOGIN

#include "index.h"
#include "struct.h"
#include "menu.h"

void User_Make();//회원가입
int Id_Load();//확인
void Login();// 로그인

char tmp_id[11], tmp_pw[15];

void Login() {
	int re = 0;
	while (re == 0) {
		system("cls");
		printf("┌───────────┐ ┌───────────┐ ┌───────────┐\n");
		printf("│  □    □ │─│   시청행  │─│  □    □ │\n");
		printf("└───────────┘ └───────────┘ └───────────┘\n");
		printf("  ●  ●  ●    ●  ●  ●    ●  ●  ●\n\n");
		
		printf("\t<LOGIN> \n\n");
		printf("아이디 : ");
		gets(tmp_id);
		printf("비밀번호 : ");
		gets(tmp_pw);

		re = Id_Load();
		if (re == 1)
			return;
	}
}

int Id_Load() {
	FILE *p;
	int num = 0;
	char id_check[10], pw_check[10];

	p = fopen("c:/textrpg/ID.txt", "r");

	while (!feof(p)) {
		fscanf(p, "%s %s\n", id_check, pw_check);
		if (!strcmp(tmp_id, id_check) && !strcmp(tmp_pw, pw_check)) {
			printf("로그인");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf("성공!\n");
			system("pause");
			return 1;
		}
	}

	printf("일치하지않는 id, pw 입니다.\n");
	printf("1. 재입력\n");
	printf("2. 회원가입\n");
	printf("입력 :");
	scanf("%d", &num);
	getchar();

	switch (num)
	{
	case 1:
		return 0;
	case 2:
		User_Make();
		return 0;
	default:
		printf("잘못입력하셨습니다.\n");
		printf("다시입력하세요.\n");
		system("pause");
		system("cls");
		break;
	}
}

void User_Make() {
	FILE *p;
	char yn = 'n';
	while (yn != 'y') {
		system("cls");
		printf("\t<회원가입>\n");
		printf("아이디 : ");
		gets(tmp_id);
		printf("비밀번호 : ");
		gets(tmp_pw);

		system("cls");
		printf("아이디 : %s\n", tmp_id);
		printf("비밀번호 : %s\n", tmp_pw);
		printf("입력하신 값이 맞습니까?\n");
		printf("(y/n) : ");
		scanf("%c", &yn);
		getchar();
		printf("회원가입이 완료되었습니다.\n");
		printf("가입된 아이디로 로그인 해주세요.");
		system("pause");


		if (yn == 'y') {
			p = fopen("c:/textrpg/ID.txt", "a+");
			fprintf(p, "%s %s\n", tmp_id, tmp_pw);
			fclose(p);
		}
	}

}

#endif