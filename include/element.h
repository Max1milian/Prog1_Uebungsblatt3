#ifndef ELEMENT_H
#define ELEMENT_H
#include <stdlib.h>
struct Element {
    unsigned int value;
    void* pSuccessor;
};

typedef struct Element Element;

Element* elementCreate(){
	//Element auf dem Heap erstellen
	Element* e = (struct Element*) malloc(sizeof(struct Element));
	e->value = 0;
	e->pSuccessor = NULL;
	return e;
}

#endif
