

#include "ArrayStack.h"

ArrayStack::ArrayStack() {
}



ArrayStack::~ArrayStack() {
      for(int i =0 ; i < this->tope ; i++){
        delete this->arrayPila[i];
        delete [] this->arrayPila;
    }
}

