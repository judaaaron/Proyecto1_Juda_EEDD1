
#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H
#include "TDA_Pila.h"
#include"Simbolo.h"

class ArrayStack : public TDA_Pila
{
    
public:
    ArrayStack();
    virtual void push(Object*);
    virtual Object* pop();
    virtual Object* top();
    virtual bool isEmpty();
    virtual void print();
    virtual void clear();
    virtual int getSize();
   
    virtual ~ArrayStack();
protected:
    int capacity,tope;
    Object** arrayPila;
    Simbolo* sim;

};

#endif /* ARRAYSTACK_H */

