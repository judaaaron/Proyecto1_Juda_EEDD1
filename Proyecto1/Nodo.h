

#ifndef NODO_H
#define NODO_H
#include "Object.h"

class Nodo {
public:
    Nodo();
    void setSiguiente(Nodo*);
    Nodo* getSiguiente();
    void setAnterior(Nodo*);
    Nodo* getAnterior();
    void setData(Object*);
    Object* getData();
    virtual ~Nodo();
protected:
    Nodo* siguiente;
    Nodo* anterior;
    Object* data;

};

#endif /* NODO_H */

