

#ifndef ALUMNO_H
#define ALUMNO_H
#include "Object.h"

class Alumno : public Object
{
    
public:
    Alumno();
    Alumno(string,string);
    string getNombre();
    string getCuenta();
    void setNombre(string);
    void setCuenta(string);
    virtual ~Alumno();
protected:
    string nombre,cuenta;

};

#endif /* ALUMNO_H */

