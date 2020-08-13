

#ifndef LINKEDSTACK_H
#define LINKEDSTACK_H

#include "TDA_Pila.h"
#include "Nodo.h"
#include "Object.h"

class LinkedStack : public TDA_Pila {
public:
    LinkedStack();
    virtual void push(Object*);
    virtual Object* pop();
    virtual Object* top();
    virtual bool isEmpty();
    virtual void print();
    virtual void clear();
    virtual int getSize();
    virtual ~LinkedStack();
protected:
    Nodo* tope;

};

#endif /* LINKEDSTACK_H */

