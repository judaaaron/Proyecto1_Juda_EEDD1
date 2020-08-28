

#include "ArrayList.h"

ArrayList::ArrayList() {
    this->capacity = 10000;
    this->size = 0;
    this->array = new Object*[this->capacity];
}

bool ArrayList::inserta(int p, Object* x) {

    if (p >= 1 && p <= size + 1) {

        if (p == 1) {// insertar al inicio
            //hacer corrimiento
            for (int i = size; i > 0; i--) {
                array[i] = array[i - 1];
            }
            array[0] = x;
        }//insertar al final
        else if (p == size) {
            array[size] = x;
        } else {
            //hacer corrimiento
            for (int i = size; i >= p - 1; i--)
                array[i + 1] = array[i];
            array[p - 1] = x;
        }
        this->size++; // incremento para poder insertar mas elementos

        return true;


    } else {
        return false;
    }

}

bool ArrayList::vacia() {
    return size == 0;
}

Object* ArrayList::primero() {
    if (!vacia())
        return array[0];
    else
        return NULL;
}

void ArrayList::anula() {
    if (vacia()) {
        cout << "En estos momentos no hay elementos en la lista!" << endl;
    } else {
        for (int i = 0; i < size; i++)
            delete array[i];

        this->size = 0;
    }

}

Object* ArrayList::recupera(int p) {
    Object* retval = NULL;
    if (p >= 1 && p <= size) {
        retval = array[p - 1];
        return retval;
    } else {
        return retval;
    }
    //retornar el valor del objeto que corresponde a p en el array	
}

Object* ArrayList::siguiente(int p) {
    return recupera(p + 1);
}

Object* ArrayList::anterior(int p) {
    return recupera(p - 1);
}

void ArrayList::imprime() {
    if (vacia()) {
        cout << "En estos momentos la lista esta vacia. " << endl;
    } else {
        cout << "LISTA DE ALUMNOS REGISTRADOS" << endl;
        for (int i = 0; i < this->size; i++) {
            cout << i + 1<<". " << this->array[i]->toString() << endl;
        }
        cout << endl;
    }

}

Object* ArrayList::suprime(int p) {
    //validar p en el rango ( 1 hasta n )
    //determinar los corrimientos necesarios y realizarlos
    //decrementar n
    //retornar lo que estaba en la casilla p
    //else
    //return null
    //imprime();
    if (p >= 1 && p <= size + 1) {
        if (p == size) {
            Object* retval = array[p - 1];
            array[size - 1] = NULL;
            this->size--;
            return retval;

        } else {
            Object* retval = array[p - 1];
            for (int i = p - 1; i < size; i++) {
                array[i] = array[i + 1];

            }
            array[size - 1] = NULL;
            this->size--;
            return retval;
        }
    } else {
        return NULL;
    }
}

int ArrayList::localiza(Object* x) {
    for (int i = 0; i< this->size; i++) {
        if (array[i]->equals(x))
            return i + 1;
    }

    return -1;
    //en un ciclo de i=1 a n
    //si la casilla del arreglo es igual (equals) a x entonces
    //return i

    //si sale del ciclo y no retornó
    //return -1;

}

int ArrayList::getSize() {
    return this->size;
}

ArrayList::~ArrayList() {
    for (int i = 0; i < size; i++) {
        delete this->array[i];
        delete [] this->array;
    }
}

