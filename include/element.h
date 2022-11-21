#ifndef ELEMENT_H
#define ELEMENT_H

struct Element {
    unsigned int value;
    void* pSuccessor;
};
typedef struct Element Element;
Element* elementCreate();

#endif
