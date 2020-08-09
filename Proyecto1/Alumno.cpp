
#include "Alumno.h"

Alumno::Alumno() {
}
Alumno::Alumno(string name ,string account){
    this->nombre=name;
    this->cuenta=account;
    
}
string Alumno:: getNombre(){
    return this->nombre;
}
string Alumno:: getCuenta(){
    return this->cuenta;
}
void Alumno:: setNombre(string name){
    this->nombre=name;
}
void Alumno:: setCuenta(string cuenta){
    this->cuenta=cuenta;
}

 string Alumno:: toString(){
    stringstream ss;
    ss << "Nombre: "<< nombre <<" "<< "Cuenta #: "<< cuenta;
    return ss.str();
}

Alumno::~Alumno() {
}

