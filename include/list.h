#ifndef LIST_H
#define LIST_H

#include "element.h"
#include "myboolean.h"
#include <stdio.h>
#include <stdlib.h>

struct List {
    struct Element* head; // Zeiger auf Kopf der jeweiligen Liste
};

typedef struct List List;
// Aufgabe 1
List* listCreate(){
	List* L = (struct List*) malloc(200 * sizeof(struct List));
	L->head = NULL;
	return L;
}

void listPush(List* list, unsigned int value){
	Element *e = (struct Element*) malloc(sizeof(struct Element));
	e->value = value;
	list->head = e;
}

Element* listPop(List* list){
		list->head++; //WTF!?
		return list->head;
}

void listPrint(List* list){
	
	if(list->head == NULL){
		printf("List ist leer!");
		return;
	}
	else {
		while (list->head != NULL) {
			printf("");	
		}
		printf("\n");
	}

}

// Aufgabe 2
Element* listFindElement(List* list, unsigned int value);
int listGetIndexOfElement(List* list, unsigned int value);
Element* listGetElementAtIndex(List* list, unsigned int index);
// Aufgabe 3
boolean listSwapElements(List* list, unsigned int aIndex, unsigned int bIndex);
boolean listDeleteElement(List* list, unsigned int value);

#endif
