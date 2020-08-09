

#ifndef ALUMNO_H
#define ALUMNO_H

#include "Object.h"

#include <iostream>
#include<string>
#include <sstream>

using namespace std;

class Alumno:  public Object
{
    
public:
    Alumno();
    Alumno(string,string);
    string getNombre();
    string getCuenta();
    void setNombre(string);
    void setCuenta(string);
    virtual string toString();
    virtual bool equals(Object*);
    virtual ~Alumno();
protected:
    string nombre,cuenta;

};

#endif /* ALUMNO_H */

