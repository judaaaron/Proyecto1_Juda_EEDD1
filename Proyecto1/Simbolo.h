
#ifndef SIMBOLO_H
#define SIMBOLO_H
#include "Object.h"
#include <iostream>
#include<string>
#include <sstream>

using namespace std;

class Simbolo : public Object {
public:
    Simbolo();
    Simbolo(char);
    char getChar();
    void setChar(char);

    virtual string toString();
    virtual bool equals(Object*);

    virtual ~Simbolo();
protected:
    char symbol;

};

#endif /* SIMBOLO_H */

