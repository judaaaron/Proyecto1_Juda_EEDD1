
#include "LinkedQueue.h"

LinkedQueue::LinkedQueue() {
    this->inicio = NULL;
    this->fin = NULL;
    n=0;
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
        n++;
    } else {
        fin->setSiguiente(nuevo);
        nuevo->setAnterior(fin);
        fin = nuevo;
        n++;
    }

}

Object * LinkedQueue::quitaDeCola() {
    Nodo* actual = new Nodo();
    actual = inicio;
    Nodo* anterior = new Nodo();
    anterior = NULL;
    Object* temp = inicio->getData();

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
        return temp;

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
        int cont =1;
        cout<<"ELEMENTOS DE LA COLA."<<endl;
        while (actual != NULL) {
            cout <<cont<<". "<<actual->getData()->toString() << endl;
            actual = actual->getSiguiente();
            cont++;
        }
    } else {
        cout << "En este momento la cola esta vacia. " << endl;
    }
}

LinkedQueue::~LinkedQueue() {
    if(fin)
        delete fin;
}

