

#include "ArrayList.h"

ArrayList::ArrayList() {
    this->capacity = 10000;
    this->n = 0;
    this->array = new Object*[this->capacity];
}

bool ArrayList::inserta(int p, Object* x) {

    if (p >= 0 && p < n + 1) {
        // if (size == capacity) {//revisar si hay capacidad para el elemento
        //   resize();
        //  }
        //insertar al inicio
        // bool empty=vacia();
        //        if(p>1 && empty){
        //            cout<<"La lista esta vacia, se registrara en la primera posicion"<<endl;
        //            for (int i = n; i > 0; i--) {
        //                array[i] = array[i - 1];
        //            }
        //            array[0] = x;
        //           
        //        }
        if (p == 0) {
            //hacer corrimiento
            for (int i = n; i > 0; i--) {
                array[i] = array[i - 1];
            }
            array[0] = x;
        }//insertar al final
        else if (p == n - 1) {
            array[n - 1] = x;
        } else {
            //hacer corrimiento
            for (int i = n - 1; i >= p; i--)
                array[i + 1] = array[i];
            array[p] = x;
        }
        this->n++; // incremento para poder insertar mas elementos

        return true;


    } else {
        return false;
    }

}

bool ArrayList::vacia() {
    return n == 0;
}

Object* ArrayList::primero() {
    if (!vacia())
        return array[0];
    else
        return NULL;
}

void ArrayList::anula() {
    for (int i = 0; i < n; i++)
        delete array[i];

    n = 0;
}

Object* ArrayList::recupera(int p) {
    if (p >= 0 && p < n + 1) {
        return array[p];
    }else{
        return NULL;
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
    for (int i = 0; i < this->n; i++) {
        cout << "->" << this->array[i];
    }
    cout << endl;
}

ArrayList::~ArrayList() {
    for (int i = 0; i < n; i++) {
        delete this->array[i];
        delete [] this->array;
    }
}

