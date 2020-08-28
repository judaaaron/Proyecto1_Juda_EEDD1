#ifndef LINKEDQUEUE_H
#define LINKEDQUEUE_H
#include "TDA_Cola.h"
#include "Object.h"
#include "Nodo.h"

class LinkedQueue : public TDA_Cola {
public:
    LinkedQueue();
    virtual Object* frente();
    virtual void poneEnCola(Object*);
    virtual Object* quitaDeCola();
    virtual bool vacia();
    virtual void anula();
    virtual void imprimir();

    virtual ~LinkedQueue();
protected:
    Nodo* inicio;
    Nodo* fin;
    int n;

};

#endif /* LINKEDQUEUE_H */

