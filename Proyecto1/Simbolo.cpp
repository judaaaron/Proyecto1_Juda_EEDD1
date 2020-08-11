

#include "Simbolo.h"

Simbolo::Simbolo() {
}

Simbolo::Simbolo(char symboll) {
    this->symbol = symboll;
}

char Simbolo::getChar() {
    return this->symbol;
}

void Simbolo::setChar(char st) {
    this->symbol = st;
}

string Simbolo::toString() {
    stringstream ss;
    ss << "         -> " << "|"<<this->symbol<<"|"<<endl;
    return ss.str();
}

 bool Simbolo:: equals(Object* x){
     
     return false;
 }

Simbolo::~Simbolo() {
}

