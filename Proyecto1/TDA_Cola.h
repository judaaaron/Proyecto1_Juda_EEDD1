

#ifndef TDA_COLA_H
#define TDA_COLA_H
#include "Object.h"

class TDA_Cola{
    
public:
    TDA_Cola();
    virtual Object* frente()=0;
    virtual void poneEnCola(Object*)=0;
    virtual Object* quitaDeCola()=0;
    virtual bool vacia()=0;
    
    virtual ~TDA_Cola();
private:

};

#endif /* TDA_COLA_H */

