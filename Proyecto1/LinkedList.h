

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "TDA_Lista.h"
#include "Nodo.h"

class LinkedList : public TDA_Lista
{
    
public:
    LinkedList();
    virtual bool inserta(int, Object*);
    virtual ~LinkedList();
private:
    Nodo* inicioLista;
    int n;// cantidad de nodos en la lista
    
    

};

#endif /* LINKEDLIST_H */

