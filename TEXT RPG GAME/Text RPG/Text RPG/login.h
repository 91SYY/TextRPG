#ifdef LOGIN

#else
#define LOGIN

#include "index.h"
#include "struct.h"
#include "menu.h"

void User_Make();//ȸ������
int Id_Load();//Ȯ��
void Login();// �α���

char tmp_id[11], tmp_pw[15];

void Login() {
	int re = 0;
	while (re == 0) {
		system("cls");
		printf("�������������������������� �������������������������� ��������������������������\n");
		printf("��  ��    �� ������   ��û��  ������  ��    �� ��\n");
		printf("�������������������������� �������������������������� ��������������������������\n");
		printf("  ��  ��  ��    ��  ��  ��    ��  ��  ��\n\n");
		
		printf("\t<LOGIN> \n\n");
		printf("���̵� : ");
		gets(tmp_id);
		printf("��й�ȣ : ");
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
			printf("�α���");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf("����!\n");
			system("pause");
			return 1;
		}
	}

	printf("��ġ�����ʴ� id, pw �Դϴ�.\n");
	printf("1. ���Է�\n");
	printf("2. ȸ������\n");
	printf("�Է� :");
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
		printf("�߸��Է��ϼ̽��ϴ�.\n");
		printf("�ٽ��Է��ϼ���.\n");
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
		printf("\t<ȸ������>\n");
		printf("���̵� : ");
		gets(tmp_id);
		printf("��й�ȣ : ");
		gets(tmp_pw);

		system("cls");
		printf("���̵� : %s\n", tmp_id);
		printf("��й�ȣ : %s\n", tmp_pw);
		printf("�Է��Ͻ� ���� �½��ϱ�?\n");
		printf("(y/n) : ");
		scanf("%c", &yn);
		getchar();
		printf("ȸ�������� �Ϸ�Ǿ����ϴ�.\n");
		printf("���Ե� ���̵�� �α��� ���ּ���.");
		system("pause");


		if (yn == 'y') {
			p = fopen("c:/textrpg/ID.txt", "a+");
			fprintf(p, "%s %s\n", tmp_id, tmp_pw);
			fclose(p);
		}
	}

}

#endif