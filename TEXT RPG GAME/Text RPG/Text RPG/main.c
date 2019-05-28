
#include "index.h"
#include "struct.h"
#include "monster_load.h"
#include "items_load.h"
#include "login.h"
#include "menu.h"
#include "new_game.h"
#include "continue_game.h"

void main() {

	monster_load();
	
	Login();

	while (1) {
		system("cls");
		switch (menu()) {
		case 1:
			new_game();
			break;
		case 2:
			continue_game();
			break;
		case 3:
			return;
		default:
			printf("잘못된 입력값잆니다."); 
			system("pause");
			break;
		}
		
	}
}


