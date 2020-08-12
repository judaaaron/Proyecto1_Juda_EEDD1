

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "TDA_Lista.h"
#include "Nodo.h"

class LinkedList : public TDA_Lista {
public:
    LinkedList();
    virtual bool inserta(int, Object*);
    virtual Object* suprime(int);
    virtual void anula();
    virtual Object* recupera(int);
    virtual Object* siguiente(int);
    virtual Object* anterior(int);
    virtual bool vacia();
    virtual void imprime();
    virtual Object* primero();
    virtual int localiza(Object*);
    virtual int getSize();
    virtual ~LinkedList();
private:
    Nodo* inicioLista;
    Nodo* finLista;
    int n; // cantidad de nodos en la lista



};

#endif /* LINKEDLIST_H */

