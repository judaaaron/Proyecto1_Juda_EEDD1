

#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include "TDA_Lista.h"
class ArrayList : public TDA_Lista
{
    
public:
    ArrayList();
    virtual ~ArrayList();
protected:
    Object** array;
    int capacity, n; 

};

#endif /* ARRAYLIST_H */

