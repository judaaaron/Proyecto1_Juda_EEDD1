
#include "LinkedList.h"

LinkedList::LinkedList() {
    this->inicioLista = NULL;
    this->finLista = NULL;
    this->n = 0;
}

bool LinkedList::inserta(int p, Object* x) {

    if (p >= 1 && p <= n + 1) {
        Nodo* nuevo = new Nodo();
        nuevo->setData(x);
        if (this->inicioLista == NULL) {
            this->inicioLista = nuevo;
            this->inicioLista->setSiguiente(NULL);
            this->inicioLista->setAnterior(NULL);
            this->finLista = this->inicioLista;
            n++;
            return true;
        } else {
            this->finLista->setSiguiente(nuevo);
            nuevo->setSiguiente(NULL);
            nuevo->setAnterior(NULL);
            this->finLista = nuevo;
            n++;
            return true;
        }

    } else {
        return false;
    }

}

Object* LinkedList::suprime(int) {

}

void LinkedList::anula() {

}

Object* LinkedList::recupera(int) {

}

Object* LinkedList::siguiente(int) {

}

Object* LinkedList::anterior(int) {

}

bool LinkedList::vacia() {
    return n == 0;

}

void LinkedList::imprime() {
    if (vacia()) {
        cout << "En estos momentos la lista enlazada esta vacia" << endl;
    } else {
        cout << "ELEMENTOS DE LA LISTA" << endl;
        Nodo* actual = new Nodo();
        actual = this->inicioLista;
        while (actual != NULL) {
            cout << actual->getData()->toString() << endl;
            actual = actual->getSiguiente();

        }

    }

    cout << endl;

}

Object* LinkedList::primero() {

}

int LinkedList::localiza(Object*) {

}

int LinkedList::getSize() {
    return this->n;
}

LinkedList::~LinkedList() {
}

// int hops = p - 1;
//        Nodo* temp = inicioLista;
//        for (int i = 1; i < hops; i++) {
//            temp = temp->getSiguiente();
//        }
//        Nodo* newNode = new Nodo();
//        newNode->setData(x);
//        newNode->setAnterior(temp->getAnterior());
//        temp->getAnterior()->setSiguiente(newNode);
//        newNode->setSiguiente(temp);
//        temp->setAnterior(newNode);


//int hops = this->n - 1;
//        Nodo* temp = this->inicioLista;
//        for (int i = 1; i < hops; i++) {
//            cout << temp->getData()->toString() << endl;
//        }