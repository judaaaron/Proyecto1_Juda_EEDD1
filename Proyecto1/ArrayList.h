

#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include "TDA_Lista.h"
class ArrayList : public TDA_Lista
{
    
public:
    ArrayList();
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
    virtual ~ArrayList();
protected:
    Object** array;
    int capacity, size; 

};

#endif /* ARRAYLIST_H */

