
#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H

#include "TDA_Cola.h"

class ArrayQueue : public TDA_Cola {
public:
    ArrayQueue();
    virtual Object* frente();
    virtual void poneEnCola(Object*);
    virtual Object* quitaDeCola();
    virtual bool vacia();
    virtual void anula();
    virtual void imprimir();

    virtual ~ArrayQueue();
protected:
    Object** arrayCola;
    int capacity, front, fin, auxiliar;
    int n;

};

#endif /* ARRAYQUEUE_H */

