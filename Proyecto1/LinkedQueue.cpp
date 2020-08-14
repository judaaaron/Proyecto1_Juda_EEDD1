
#include "LinkedQueue.h"

LinkedQueue::LinkedQueue() {
    this->inicio = NULL;
    this->fin = NULL;
}

Object* LinkedQueue::frente() {
    if (vacia()) {
        return NULL;
    } else {
        return inicio->getData();
    }


}

void LinkedQueue::poneEnCola(Object* x) {
    //crear newNode que contenga x 
    //if(vacia)
    //inicio = final = newNode
    //else
    //final.sig = newNode 
    //newNode.ant = final //final = NewNode
    Nodo* nuevo = new Nodo();
    nuevo->setData(x);
    if (vacia()) {
        this->inicio = this->fin = nuevo;
    } else {
        fin->setSiguiente(nuevo);
        nuevo->setAnterior(fin);
        fin = nuevo;
    }

}

Object * LinkedQueue::quitaDeCola() {
    Nodo* actual = new Nodo();
    actual = inicio;
    Nodo* anterior = new Nodo();
    anterior = NULL;
 
    if (inicio != NULL) {
        if (actual == inicio) {
            inicio = inicio ->getSiguiente();
        } else if (actual == fin) {
            anterior->setSiguiente(NULL);
            fin = anterior;
        } else {

            anterior->setSiguiente(actual->getSiguiente());
        }
        
        anterior = actual;
        actual = actual->getSiguiente();

    } else {
        return NULL;
    }


}

bool LinkedQueue::vacia() {
    return inicio == NULL;

}

void LinkedQueue::anula() {
    //validar si no esta vacio 
    //while( vacia() ){ 
    // temp = inicio; // inicio = inicio.siguiente(); 
    // inicio.anterior() = NULL; 
    // temp.siguiente = NULL;
    // delete temp; //} 
    //inicio = final = NULL; // }
}

void LinkedQueue::imprimir() {
    Nodo* actual = new Nodo();
    actual = inicio;
    if (!vacia()) {
        while (actual != NULL) {
            cout << actual->getData()->toString() << endl;
            actual = actual->getSiguiente();
        }
    } else {
        cout << "En este momento la cola esta vacia. " << endl;
    }
}

LinkedQueue::~LinkedQueue() {
}

