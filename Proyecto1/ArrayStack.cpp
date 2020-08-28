
#include "ArrayStack.h"

ArrayStack::ArrayStack() {
    this->capacity = 10000;
    this->arrayPila = new Object*[this->capacity];
    this->tope=0;

}

void ArrayStack::push(Object* x) {
    this->arrayPila[tope] = x;
    tope++;

}

Object* ArrayStack::pop() {
    if (isEmpty()) {
        return NULL;
    } else {
        Object* tmp = arrayPila[tope - 1];
        arrayPila[tope - 1] = NULL;
        tope--;
        return tmp;
    }

}

Object* ArrayStack::top() {
    if (!(isEmpty())) {
        return arrayPila[tope-1];
    } else {
        return NULL;
    }
}

bool ArrayStack::isEmpty() {
    return tope == 0;

}

void ArrayStack::print() {
    if (isEmpty()) {
        cout << "En estos momentos no hay elementos en la pila." << endl;
    } else {
        cout << "ELEMENTOS QUE CONTIENE LA PILA" << endl;
        for (int i = tope - 1; i >= 0; i--) {
            cout <<i+1<<". "<< arrayPila[i]->toString();
        }
    }

    cout << endl;

}

void ArrayStack::clear() {
    for (int i = 0; i < tope; i++) {
        delete arrayPila[i];
    }
    this->tope = 0;

}

 int ArrayStack:: getSize(){
     return this->tope;
    
}

ArrayStack::~ArrayStack() {
    for (int i = 0; i < this->tope; i++) {
        delete this->arrayPila[i];
        delete [] this->arrayPila;
    }
}

