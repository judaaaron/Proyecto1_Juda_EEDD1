  
#ifndef TDA_PILA_H
#define TDA_PILA_H
#include "Object.h"
#include <iostream>
#include<string>

using namespace std;
class TDA_Pila{
    
public:
    TDA_Pila();
    virtual void push(Object*)=0;
    virtual Object* pop()=0;
    virtual Object* top()=0;
    virtual bool isEmpty()=0;
    virtual void print()=0;
    virtual void clear()=0;
    virtual int getSize()=0;
    
    virtual ~TDA_Pila();
private:

};

#endif /* TDA_PILA_H */

