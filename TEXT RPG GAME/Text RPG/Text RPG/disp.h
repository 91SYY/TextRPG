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
		printf("忙式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛\tっ懍羲        弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式戎\n");
		break;
	case 2:
		printf("[stage : %d]\n", stage);
		printf("忙式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛\t渠瞪羲        弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式戎\n");
		break;
	case 3:
		printf("[stage : %d]\n", stage);
		printf("忙式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛    憮渠瞪 啻剪葬羲  弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式戎\n");
		break;
	case 4:
		printf("[stage : %d]\n", stage);
		printf("忙式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛\t驕寞羲        弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式戎\n");
		break;
	case 5:
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛\衛羶羲        弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式戎\n");
		printf("鼠餌�� 衛羶羲縑 紫雜ц棻.\n");
		printf("試嫦纂縑 憮氈朝 捱檣菟檜 爾檣棻.\n");
		printf("◇Я陪團 渠Я模縑 м盟ж艘棻.◆\n\n");
		system("pause");
		printf("啪歜擊 Ы溯檜 п輿敷憮 馬餌м棲棻.\n");
		system("pause");
	}
}
void disp_story() {
	system("cls");
	printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("  ※撮鼻檜 覬綠曖匙檜 脹雖 弊賦 и殖..§ \n");
	printf("  ※撮鼻檜 覬綠曖匙檜 脹雖 弊賦 и殖..§ \n");
	printf("  ※檜薇 擠衝紫 棻雲橫螳除棻...§\n");
	printf("  ※餵檜 寰瞪ж棻雖虜 擠衝檜橈橫憮撿 嬴餌ж堅 蜓匙檜棻.§\n");
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
	system("pause");

	system("cls");
	printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("  ※塭蛤螃縑摹 渠瞪衛羶縑 Я陪團譟Щ陛 ⑽撩檜脹蛭ж棻.§\n");
	printf("  ※啪棻陛 捱檣菟檜 薄剪蒂ж堅氈橫 陛濰寰瞪и夠檜塭堅 っ欽脹棻.§\n");
	printf("  ※檜渠煎 掛橫避替棲 橫飩啪萇 渠瞪衛羶戲煎 遺霜罹撿и棻!§\n");
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
	system("pause");

	system("cls");
	printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("  ※雖ж繹擊 鼠檣衛蝶蠱戲煎 啗樓п憮 遴艙ж堅氈棻堅ж棲§\n");
	printf("  ※虜奩曖 遽綠蒂 ж罹 雖ж繹擊 顫堅 渠瞪衛羶羲戲煎陛濠!§\n");
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
	system("pause");

	system("cls");
	printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("  ◇ ががи 釭鼠寡お蒂 �僱磈狤斐�.◆\n");
	printf("  ◇ 舒疏遴 煬ぬ註擊 �僱磈狤斐�.◆\n");
	printf("  ◇ 掘晝擒擊 �僱磈狤斐�.◆\n");
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
	system("pause");
}
void disp_bag() {
	system("cls");
	printf("\t□頂 陛寞■\n");
	printf("鼠晦 : ががи 寡お + %d\n", c->item[0]->item_level);
	printf("       奢問溘 : %d\n", c->item[0]->attack);
	printf("寞橫掘 : 舒疏遴 煬ぬ註 + %d\n", c->item[1]->item_level);
	printf("         寞橫溘 : %d\n", c->item[1]->ammor);
	printf("擬晝擒 偃熱 : %d\n", c->item[2]->item_level);
	printf("模雖埤萄 : %d\n", c->gold);
	system("pause");
}

void disp_c() {
	system("cls");
	printf("\t□頂 鼻鷓■\n");
	printf("檜葷 : %s\n", c->name);
	printf("溯漣 : %d\n", c->level);
	printf("撩滌 : %s\n", c->sex);
	printf("奢問溘 : %d\n", c->attack);
	printf("⑷營 羹溘 : %d\n", c->HP);
	printf("譆渠 羹溘 : %d\n", c->HP*c->level);
	system("pause");
}


#endif
