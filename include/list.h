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
	List* L = (struct List*) calloc(20, sizeof(struct List));
	L->head = NULL;
	return L;
}

void listPush(List* list, unsigned int value){
	Element *e = (struct Element*) malloc(sizeof(struct Element));
	e->value = value;
	list->head->pSuccessor = e;
}

Element* listPop(List* list){
	Element* e;
	list->head = (Element*)e->pSuccessor;
	return list->head;
}

void listPrint(const List* list){
	Element* e = list->head;
	while (e != NULL) {
		printf("%i", e->value);
		printf("-->");
		e = (Element*)e->pSuccessor;
	}
	printf("liste leer!\n");

}

// Aufgabe 2
Element* listFindElement(List* list, unsigned int value){
	//element erstellen
	//listenkopf übergeben
	//mit while drüberitterieren
	//danach das element übergeben
	Element* e = (Element*) calloc(2,sizeof(Element));
	e = list->head;
	while (e != NULL) {
		if (e->value == value) {
			return e;
			break;
		}
		e = (Element*) e->pSuccessor;

	}
	return NULL;
	free(e);
}
int listGetIndexOfElement(List* list, unsigned int value){
	//element erstellen
	//listenkopf übergeben
	//mit while drüberitterieren
	//danach die Stelle übergeben

}

Element* listGetElementAtIndex(List* list, unsigned int index){
	Element* e = (Element*) calloc(2, sizeof(Element));
	e = &(list->head[index]);
	return e;	
	free(e);
}
// Aufgabe 3
boolean listSwapElements(List* list, unsigned int aIndex, unsigned int bIndex);
boolean listDeleteElement(List* list, unsigned int value);

#endif
