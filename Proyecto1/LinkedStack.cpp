

#include "LinkedStack.h"

LinkedStack::LinkedStack() {
    this->tope = NULL;
}

void LinkedStack::push(Object* x) {
    Nodo* newNodo = new Nodo();
    newNodo->setData(x);
    newNodo->setSiguiente(tope);
   // tope->setAnterior(newNodo);
    tope = newNodo;

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
        cout << "ELEMENTOS DENTRO DE LA PILA." << endl;
        while (temp != NULL) {
            cout << temp->getData()->toString();
            temp = temp->getSiguiente();
        }

    }
}

void LinkedStack::clear() {

}

int LinkedStack::getSize() {
    return 0;
}

LinkedStack::~LinkedStack() {
    delete tope;
}

