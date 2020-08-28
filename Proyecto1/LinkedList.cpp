
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

Object* LinkedList::suprime(int pos) {

    if (pos >= 1 && pos <= n) {
        //validar si sÃ³lo hay un elemento
        if (n == 1) {
            Nodo* temp = this->inicioLista;
            Object* tempData = temp->getData();
            temp->setData(NULL);
            delete temp;
            this->inicioLista = NULL;
            n--;
            return tempData;

        }
        //posicion inicial y la lista tiene mas de 1 elemento
        if (pos == 1) {
            Nodo* temp = this->inicioLista;
            Object* retval = temp->getData();
            this->inicioLista = temp->getSiguiente();
            temp->setSiguiente(NULL);
            //validar inicio/head != null
            this->inicioLista->setAnterior(NULL);
            n--;
            return retval;
        }
        //borrar posicion final
        if (pos == n) {
            Nodo* temp = this->inicioLista;
            for (int i = 0; i < pos - 2; i++)
                temp = temp->getSiguiente();
            Nodo* temp2 = temp->getSiguiente();
            Object* retval = temp2->getData();
            temp2->setData(NULL);
            temp->setSiguiente(NULL);
            temp2->setAnterior(NULL);
            delete temp2;
            n--;
            return retval;
        }//borrar entre elementos
        else {
            Nodo* temp = this->inicioLista;
            for (int i = 0; i < pos - 2; i++)
                temp = temp->getSiguiente();
            Nodo* temp2 = temp->getSiguiente();
            Object* retval = temp2->getData();
            temp->setSiguiente(temp2->getSiguiente());
            temp2->getSiguiente()->setAnterior(temp);
            temp2->setData(NULL);
            temp2->setSiguiente(NULL);
            temp2->setAnterior(NULL);
            delete temp2;
            n--;
            return retval;
        }
    } else {
        return NULL;
    }


}

void LinkedList::anula() {
    if (inicioLista) {
        delete inicioLista;
        n = 0;
        inicioLista = NULL;
    }

}

Object* LinkedList::recupera(int p) {
    int hops = p - 1;
    if (p >= 1 && p <= n) {
        Nodo* temp = this->inicioLista;
        for (int i = 1; i <= hops; i++)
            temp = temp->getSiguiente();
        return temp->getData();

    } else {
        return NULL;
    }

}

Object* LinkedList::siguiente(int p) {
    return recupera(p + 1);

}

Object* LinkedList::anterior(int p) {
    return recupera(p - 1);
}

bool LinkedList::vacia() {
    return n == 0;

}

void LinkedList::imprime() {
    if (vacia()) {
        cout << "En estos momentos la lista enlazada esta vacia" << endl;
    } else {
        int cont=1;
        cout << "ELEMENTOS DE LA LISTA" << endl;
        Nodo* actual = new Nodo();
        actual = this->inicioLista;
        while (actual != NULL) {
            cout <<cont<<". "<< actual->getData()->toString() << endl;
            actual = actual->getSiguiente();
            cont++;
        }
    }
    cout << endl;
}

Object* LinkedList::primero() {
    return NULL;

}

int LinkedList::localiza(Object* x) {
    int hops = n - 1;
    Nodo* temp = inicioLista;
    for (int i = 1; i <= n; i++) {

        if (x->equals(temp->getData())) {
            return i;
        }
        temp = temp->getSiguiente();
    }
    return -1;


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



// if (p >= 1 && p <= this->n + 1) {
//        int hops = p - 1;
//        Nodo* temp = this->inicioLista;
//        Object* retval = NULL;
//        for (int i = 0; i < p; i++) {
//            temp = temp->getSiguiente();
//            temp->getAnterior()->setSiguiente(temp->getSiguiente());
//            temp->getSiguiente()->setAnterior(temp->getAnterior());
//            temp->setAnterior(NULL);
//            temp->setSiguiente(NULL);
//            this->n--;
//            retval = temp->getData();
//            temp->setData(NULL);
//        }
//
//
//        delete temp;
//        return retval;
//
//    } else {
//        return NULL;
//    }