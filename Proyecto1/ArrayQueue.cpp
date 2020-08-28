

#include "ArrayQueue.h"

ArrayQueue::ArrayQueue() {
    capacity = 10000;
    arrayCola = new Object*[capacity];
    front =0;
    fin = 0;
}

Object* ArrayQueue::frente() {
    //si no está vacía
    //recuperar el valor de frente 
    //retornar el valor
    //else retornar nulo

    if (!vacia()) {
        Object* retval = arrayCola[this->front];
        return retval;
    } else {
        return NULL;
    }
}

void ArrayQueue::poneEnCola(Object* x) {
    //validar si no está llena
    //insertar x en la posición final 
    //incrementar final (calcular desbordamiento si existe)
    //incrementar auxiliar
    //else
    //no hacer nada/mostar mensaje
    if (fin != capacity) {
        this->arrayCola[this->fin] = x;
        this->fin++;
        // this->auxiliar++;
    } else {
        cout << "Error al registrar alumno" << endl;
    }
}

Object* ArrayQueue::quitaDeCola() {
    //si no está vacía
    //recuperar el valor de la casilla frente
    //frente ++ 
    //decrementar auxiliar
    //retornar el valor recuperado

    //else return null

    if (!vacia()) {
        Object* retval = this->arrayCola[this->front];
        this->front++;
        return retval;
    } else {
        return NULL;
    }
}

void ArrayQueue::anula() {
    //iterar las casillas desde frente hasta final y  borrar los datos (delete)
    //while no está vacía
    // temp = quitaDeCola()
    //delete temp
    //frente = final = 0
    for (int i = this->front; i < this->fin; i++) {
        while (!vacia()) {
            Object* temp = quitaDeCola();
            delete temp;
            this->front = this->fin = 0;
        }
    }

}

bool ArrayQueue::vacia() {
    return front == fin;
}

void ArrayQueue::imprimir() {
    //iterar las casillas desde frente hasta final e imprimir en pantalla 
    //cada elemento
    if (!vacia()) {
        int cont=1;
        cout<<"ELEMENTOS EN LA COLA"<<endl;
        for (int i = front; i < fin; i++) {
            cout <<cont<<". "<< this->arrayCola[i]->toString() << endl;
            cont++;
        }
    } else {
        cout << "En este momento no hay elementos en la cola." << endl;
    }

    cout << endl;
}



ArrayQueue::~ArrayQueue() {
    anula();
    delete[] arrayCola;

}

