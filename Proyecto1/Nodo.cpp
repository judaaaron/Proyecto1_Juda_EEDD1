

#include "Nodo.h"

Nodo::Nodo() {
    this->siguiente = NULL;
    this->anterior = NULL;
    this->data = NULL;
}

void Nodo::setSiguiente(Nodo* next) {
    this->siguiente = next;

}

Nodo* Nodo::getSiguiente() {
    return this->siguiente;

}

void Nodo::setAnterior(Nodo* prev) {
    this->anterior = prev;

}

Nodo* Nodo::getAnterior() {
    return this->anterior;
}

void Nodo::setData(Object* pdata) {
    this->data = pdata;

}

Object* Nodo::getData() {
    return this->data;
}

Nodo::~Nodo() {
    if (this->siguiente)
        delete this->siguiente;

    if (this->data) {
        delete this->data;
    }
}

