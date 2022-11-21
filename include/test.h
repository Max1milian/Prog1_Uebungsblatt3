#ifndef TEST_H
#define TEST_H

#include "list.h"
void listFillRandom(List* list, int seed, int anzahlWerte, int min, int max);
void testListFindElement(void);
void testListGetElementAtIndex(void);
unsigned testListGetIndexOf(void);
#endif
