

#include "LinkedStack.h"

LinkedStack::LinkedStack() {
    this->tope = NULL;
    n=0;
}

void LinkedStack::push(Object* x) {
    Nodo* newNodo = new Nodo();
    newNodo->setData(x);
    newNodo->setSiguiente(tope);
   // tope->setAnterior(newNodo);
    tope = newNodo;
    n++;

}

Object* LinkedStack::pop() {
    if (isEmpty()) {
        return NULL;
    } else {
        Nodo* temp = this->tope;
        Object* retval = NULL;
        this->tope = tope->getSiguiente();
        tope->setAnterior(NULL);
        temp->setSiguiente(NULL);
        retval = temp->getData();
        temp->setData(NULL);
        delete temp;
        n--;
        return retval;
    }

}

Object* LinkedStack::top() {
    if (isEmpty()) {
        return NULL;
    } else {
        return this->tope->getData();
    }
}

bool LinkedStack::isEmpty() {
    return tope == NULL;
}

void LinkedStack::print() {
    if (isEmpty()) {
        cout << "En este momento la pila esta vacia." << endl;
        cout << endl;
    } else {
        Nodo* temp = this->tope;
        int cont=getSize();
        cout << "ELEMENTOS DENTRO DE LA PILA." << endl;
        while (temp != NULL) {
            cout <<cont<<". "<< temp->getData()->toString();
            temp = temp->getSiguiente();
            cont--;
        }

    }
}

void LinkedStack::clear() {

}

int LinkedStack::getSize() {
    return n;
}

LinkedStack::~LinkedStack() {
    delete tope;
}

