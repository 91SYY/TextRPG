#ifdef MENU

#else
#define MENU

#include "index.h"
#include "struct.h"
#include "login.h"

int menu();

int menu() {
	int num;
	system("cls");
	printf("�������������������������� �������������������������� ��������������������������\n");
	printf("��  ��    �� ������   ��û��  ������  ��    �� ��\n");
	printf("�������������������������� �������������������������� ��������������������������\n");
	printf("  ��  ��  ��    ��  ��  ��    ��  ��  ��\n");

	printf("1. ��New Game��\n");
	printf("2. ��Continue Game��\n");
	printf("3. ��Exit��\n");
	printf("�����á� : ");
	scanf("%d", &num);
	return num;
}


#endif