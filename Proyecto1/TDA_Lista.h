
#ifndef TDA_LISTA_H
#define TDA_LISTA_H
#include "Object.h"

class TDA_Lista {
    
public:
    TDA_Lista();
    virtual bool inserta(int, Object*)=0;
    virtual Object* suprime(int)=0;
    virtual void anula()=0;
    virtual Object* recupera(int)=0;
    virtual Object* siguiente(int)=0;
    virtual Object* anterior(int)=0;
    virtual bool vacia()=0;
    virtual void imprime()=0;
    virtual Object* primero()=0;
    virtual int localiza(Object*)=0;
    virtual ~TDA_Lista();
private:

};

#endif /* TDA_LISTA_H */

