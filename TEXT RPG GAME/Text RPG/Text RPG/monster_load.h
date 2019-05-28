#ifdef MONSTER_LOAD

#else
#define MONSTER_LOAD

#include "index.h"
#include "struct.h"


void monster_load() {
	FILE *f;
	
	int i = 1, j;

	mon = (ms**)malloc(sizeof(ms*));
	mon[i - 1] = (ms*)malloc(sizeof(ms));

	f = fopen("c:/textrpg/monster.txt", "r");

	while (!feof(f)) {
		fscanf(f, "%s %d %d %d %d\n", mon[i - 1]->name, &mon[i - 1]->level, &mon[i - 1]->m_str, &mon[i - 1]->m_hp, &mon[i - 1]->m_money);
		i++;
		mon = (ms**)realloc(mon, i * sizeof(ms*));
		mon[i - 1] = (ms*)malloc(sizeof(ms));
	}

	fclose(f);
}

#endif