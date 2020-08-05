

#include "ArrayList.h"

ArrayList::ArrayList() {
    this->capacity=10000;
    this->n=0;
    this->array = new Object*[this->capacity];
}



ArrayList::~ArrayList() {
    for(int i =0 ; i < n ; i++){
        delete this->array[i];
        delete [] this->array;
    }
}

