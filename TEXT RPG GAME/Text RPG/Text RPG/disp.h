#ifdef DISP

#else
#define DISP

#include "index.h"
#include "menu.h"
#include "struct.h"
#include "disp.h"
#include "ingame.h"

void disp_story();
void disp_bag();
void disp(stage);
void disp_c();

void disp(int stage) {
	switch (stage)
	{
	case 1:
		printf("[stage : %d]\n", stage);
		printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
		printf("¦¢\tÆÇ¾Ï¿ª        ¦¢\n");
		printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
		break;
	case 2:
		printf("[stage : %d]\n", stage);
		printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
		printf("¦¢\t´ëÀü¿ª        ¦¢\n");
		printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
		break;
	case 3:
		printf("[stage : %d]\n", stage);
		printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
		printf("¦¢    ¼­´ëÀü ³×°Å¸®¿ª  ¦¢\n");
		printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
		break;
	case 4:
		printf("[stage : %d]\n", stage);
		printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
		printf("¦¢\tÅº¹æ¿ª        ¦¢\n");
		printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
		break;
	case 5:
		system("cls");
		printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
		printf("¦¢\½ÃÃ»¿ª        ¦¢\n");
		printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
		printf("¹«»çÈ÷ ½ÃÃ»¿ª¿¡ µµÂøÇß´Ù.\n");
		printf("¸Õ¹ßÄ¡¿¡ ¼­ÀÖ´Â ±ºÀÎµéÀÌ º¸ÀÎ´Ù.\n");
		printf("¡ºÇÇ³­¹Î ´ëÇÇ¼Ò¿¡ ÇÕ·ùÇÏ¿´´Ù.¡»\n\n");
		system("pause");
		printf("°ÔÀÓÀ» ÇÃ·¹ÀÌ ÇØÁÖ¼Å¼­ °¨»çÇÕ´Ï´Ù.\n");
		system("pause");
	}
}
void disp_story() {
	system("cls");
	printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
	printf("  ¡°¼¼»óÀÌ Á»ºñÀÇ°ÍÀÌ µÈÁö ¹ú½á ÇÑ´Þ..¡± \n");
	printf("  ¡°¼¼»óÀÌ Á»ºñÀÇ°ÍÀÌ µÈÁö ¹ú½á ÇÑ´Þ..¡± \n");
	printf("  ¡°ÀÌÁ¨ À½½Äµµ ´Ù¶³¾îÁ®°£´Ù...¡±\n");
	printf("  ¡°ÁýÀÌ ¾ÈÀüÇÏ´ÙÁö¸¸ À½½ÄÀÌ¾ø¾î¼­¾ß ¾Æ»çÇÏ°í ¸»°ÍÀÌ´Ù.¡±\n");
	printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
	system("pause");

	system("cls");
	printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
	printf("  ¡°¶óµð¿À¿¡¼± ´ëÀü½ÃÃ»¿¡ ÇÇ³­¹ÎÄ·ÇÁ°¡ Çü¼ºÀÌµÈµíÇÏ´Ù.¡±\n");
	printf("  ¡°°Ô´Ù°¡ ±ºÀÎµéÀÌ Á¡°Å¸¦ÇÏ°íÀÖ¾î °¡Àå¾ÈÀüÇÑ°÷ÀÌ¶ó°í ÆÇ´ÜµÈ´Ù.¡±\n");
	printf("  ¡°ÀÌ´ë·Î ±¾¾îÁ×´À´Ï ¾î¶»°Ôµç ´ëÀü½ÃÃ»À¸·Î ¿òÁ÷¿©¾ßÇÑ´Ù!¡±\n");
	printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
	system("pause");

	system("cls");
	printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
	printf("  ¡°ÁöÇÏÃ¶À» ¹«ÀÎ½Ã½ºÅÛÀ¸·Î °è¼ÓÇØ¼­ ¿î¿µÇÏ°íÀÖ´Ù°íÇÏ´Ï¡±\n");
	printf("  ¡°¸¸¹ÝÀÇ ÁØºñ¸¦ ÇÏ¿© ÁöÇÏÃ¶À» Å¸°í ´ëÀü½ÃÃ»¿ªÀ¸·Î°¡ÀÚ!¡±\n");
	printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
	system("pause");

	system("cls");
	printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
	printf("  ¡º Æ°Æ°ÇÑ ³ª¹«¹èÆ®¸¦ È¹µæÇÏ¿´´Ù.¡»\n");
	printf("  ¡º µÎ²¨¿î ·ÕÆÐµùÀ» È¹µæÇÏ¿´´Ù.¡»\n");
	printf("  ¡º ±¸±Þ¾àÀ» È¹µæÇÏ¿´´Ù.¡»\n");
	printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
	system("pause");
}
void disp_bag() {
	system("cls");
	printf("\t¡¼³» °¡¹æ¡½\n");
	printf("¹«±â : Æ°Æ°ÇÑ ¹èÆ® + %d\n", c->item[0]->item_level);
	printf("       °ø°Ý·Â : %d\n", c->item[0]->attack);
	printf("¹æ¾î±¸ : µÎ²¨¿î ·ÕÆÐµù + %d\n", c->item[1]->item_level);
	printf("         ¹æ¾î·Â : %d\n", c->item[1]->ammor);
	printf("ÀÀ±Þ¾à °³¼ö : %d\n", c->item[2]->item_level);
	printf("¼ÒÁö°ñµå : %d\n", c->gold);
	system("pause");
}

void disp_c() {
	system("cls");
	printf("\t¡¼³» »óÅÂ¡½\n");
	printf("ÀÌ¸§ : %s\n", c->name);
	printf("·¹º§ : %d\n", c->level);
	printf("¼ºº° : %s\n", c->sex);
	printf("°ø°Ý·Â : %d\n", c->attack);
	printf("ÇöÀç Ã¼·Â : %d\n", c->HP);
	printf("ÃÖ´ë Ã¼·Â : %d\n", c->HP*c->level);
	system("pause");
}


#endif
