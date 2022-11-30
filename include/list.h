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
	List* L = (struct List*) malloc(sizeof(struct List));
	L->head = NULL;
	return L;
}

void listPush(List* list, unsigned int value){
	Element *e = (struct Element*) malloc(sizeof(struct Element));
	e->value = value;
	e->pSuccessor = list->head;
	list->head = e;
}

Element* listPop(List* list){
	Element* e = list->head;
	list->head = (Element*)list->head->pSuccessor;
	return e;
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
	Element* e = elementCreate();
	e = list->head;
	while (e != NULL) {
		if (e->value == value) {
			return e;
		}
		e = (Element*)e->pSuccessor;
	}
	return NULL;
}
int listGetIndexOfElement(List* list, unsigned int value){
	//element erstellen
	//listenkopf übergeben
	//mit while drüberitterieren
	//danach die Stelle übergeben
	Element* e = list->head;
	int index = 0;
	while (e != NULL)
	{
		if (e->value == value)
		{
			return index;
		}
		index++;
	}
	return FALSE; //xoxoxoxoxoxoxoxo
}

Element* listGetElementAtIndex(List* list, unsigned int index){
	Element* e = list->head;
	boolean found = TRUE;

	for (unsigned int i = 0; i < index; i++) {
		if (e == NULL)
		{
			found = FALSE;
			break;
		}
		e = (Element*)e->pSuccessor;
	}

	if (found)
	{
		return e;
	}
	
	return NULL;
	
}
// Aufgabe 3
//boolean listSwapElements(List* list, unsigned int aIndex, unsigned int bIndex);
// nope

boolean listDeleteElement(List* list, unsigned int value){
	Element* spElement = listFindElement(list, value);
	Element* preElement = NULL;
	int index = 0;
	if (spElement == NULL)
	{
		return FALSE;
	}
	index = listGetIndexOfElement(list, value);

	if (index == 0 || spElement->pSuccessor == NULL)
	{
		list->head = (Element*) spElement->pSuccessor;
		free(spElement);
		return TRUE;
	}
		
		return FALSE;
}

#endif
