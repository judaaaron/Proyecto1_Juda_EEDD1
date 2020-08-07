
#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H
#include "TDA_Pila.h"

class ArrayStack : public TDA_Pila
{
    
public:
    ArrayStack();
    virtual ~ArrayStack();
protected:
    int capacity,tope;
    Object** arrayPila;

};

#endif /* ARRAYSTACK_H */

