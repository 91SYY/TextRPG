#ifdef ITEMS_LOAD

#else
#define ITEMS_LOAD

#include "index.h"
#include "struct.h"



void items_load() {
	FILE *f;
	int i = 0, j;
	char str_item[100] = { "c:/textrpg/" };
	strcat(str_item, tmp_id);
	strcat(str_item, "_items.txt");

	for (i = 0; i < 3; i++) {
		it[i] = (items*)malloc(sizeof(items));
		c->item[i] = it[i];
	}
	f = fopen(str_item, "r");
	if (f != NULL) {
		for (i = 0; i < 3; i++) {
			fscanf(f, "%s %d %d %d %d %d\n", c->item[i]->item_name, &c->item[i]->item_kind, &c->item[i]->item_level, &c->item[i]->attack, &c->item[i]->ammor, &c->item[i]->HP);
		}
		fclose(f);
	}
	else {
		f = fopen("c:/textrpg/items.txt", "r");
		for (i = 0; i < 3; i++) {
			fscanf(f, "%s %d %d %d %d %d\n", c->item[i]->item_name, &c->item[i]->item_kind, &c->item[i]->item_level, &c->item[i]->attack, &c->item[i]->ammor, &c->item[i]->HP);
		}
	fclose(f);
	}
}

#endif