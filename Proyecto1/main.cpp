// main del proyecto
#include <cstdlib>
#include<iostream>
#include <string>
#include "Alumno.h"
#include "TDA_Cola.h"
#include "TDA_Lista.h"
#include "TDA_Pila.h"
#include "Object.h"
#include "ArrayList.h"
#include "ArrayStack.h"
#include "ArrayQueue.h"
#include "LinkedList.h"
#include "LinkedStack.h"
#include "LinkedQueue.h"
#include "Nodo.h"
#include "Simbolo.h"

using namespace std;

void mainFalso();
// menus respectivos para cada TDA incluyendo el menu principal
int menuPrincipal();
int menuListas();
int menuPilas();
int menuColas();

//  prototipos de las opciones para cada una de las TDA
int opcionesListas();
int opcionesPilas();
int opcionesColas();

//prototipos para las diferentes operaciones de los TDAs

void OpcionesArraylist();
void OpcionesLinkedlist();

void OpcionesArraystack();
void OpcionesLinkedstack();

void OpcionesArrayQueue();
void OpcionesLinkedQueue();

void validarEntrada(int);

// arreglos globales de tipo Object
Object* o [10000];
Object* pilas[10000];
Object* colas[10000];

// instancia de las diferentes clases
TDA_Lista* arrayList = new ArrayList();
TDA_Lista* linkedList = new LinkedList();
TDA_Pila* arrayStack = new ArrayStack();
TDA_Pila* linkedStack = new LinkedStack();
TDA_Cola* arrayQueue = new ArrayQueue();
TDA_Cola* linkedQueue = new LinkedQueue();

Alumno* alumno = NULL;
Simbolo* simbolo = NULL;

int main(int argc, char** argv) {
    mainFalso();
    //limpiar memoria
    delete arrayList;
    delete linkedList;
    delete arrayStack;
    delete linkedStack;
    delete arrayQueue;
    delete linkedQueue;
    return 0;
}

void mainFalso() {
    int option = 0;
    while (option != 4) {
        switch (option = menuPrincipal()) {
            case 1:
            {// mostrar submenu de listas
                int opcion = 0;
                switch (opcion = menuListas()) {
                    case 1:
                    {// opcion para trabajar con arraylist
                        OpcionesArraylist();
                        break;
                    }

                    case 2:
                    {// opcion para trabajar con arraylist
                        OpcionesLinkedlist();
                        break;
                    }

                }

                break;
            }

            case 2:
            {// mostrar submenu de pilas
                int opcion = 0;
                switch (opcion = menuPilas()) {
                    case 1:
                    {// opcion para trabajar con arrayStack
                        OpcionesArraystack();
                        break;
                    }

                    case 2:
                    {// opcion para trabajar con linked stack
                        OpcionesLinkedstack();
                        break;
                    }
                }

                break;
            }

            case 3:
            {// mostrar submenu de colas
                int opcion = 0;
                switch (opcion = menuColas()) {
                    case 1:
                    {// opcion para trabajar con arrayqueue
                        OpcionesArrayQueue();
                        break;
                    }

                    case 2:
                    {// opcion para trabajar con linkedqueue
                        OpcionesLinkedQueue();
                        break;
                    }
                }

                break;
            }


            case 4:
            {
                cout << "SALIENDO DEL PROGRAMA.";
                break;
            }


        }// fin del switch


    }// fin del while
}

int menuPrincipal() {// funcion del menu principal
    int opcion = 0;
    while (opcion < 1 || opcion > 4) {
        cout << "      MENU PRINCIPAL " << endl
                << "1. Trabajar con Listas " << endl
                << "2. Trabajar con Pilas" << endl
                << "3. Trabajar con Colas" << endl
                << "4. Salir" << endl
                << "Ingrese una opcion entre 1 y 4: ";
        cin>>opcion;
        // validarEntrada(opcion);
        while (!cin) {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Por favor ingrese una entrada valida: ";
            cin >> opcion;
        }
        cout << endl;
        if (opcion >= 1 && opcion <= 4)
            break;
        else
            cout << endl << "Opcion incorrecta, elija nuevamente " << endl;
    }//Fin del ciclo while


    return opcion;
}

int menuListas() {
    int opcion = 0;
    while (opcion < 1 || opcion > 3) {
        cout << "      MENU DE LISTAS " << endl
                << "1. Trabajar con ArrayList " << endl
                << "2. Trabajar con LinkedList" << endl
                << "3. Regresar al menu principal" << endl
                << "Ingrese una opcion entre 1 y 3: ";
        cin>>opcion;
        while (!cin) {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Por favor ingrese una entrada valida: ";
            cin >> opcion;
        }
        cout << endl;
        if (opcion >= 1 && opcion <= 3)
            break;
        else
            cout << endl << "Opcion incorrecta, elija nuevamente " << endl;
    }//Fin del ciclo while


    return opcion;

}

int menuPilas() {
    int opcion = 0;
    while (opcion < 1 || opcion > 3) {
        cout << "      MENU DE PILAS " << endl
                << "1. Trabajar con ArrayStack " << endl
                << "2. Trabajar con LinkedStack" << endl
                << "3. Regresar al menu principal" << endl
                << "Ingrese una opcion entre 1 y 3: ";
        cin>>opcion;
        cout << endl;
        while (!cin) {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Por favor ingrese una entrada valida: ";
            cin >> opcion;
        }
        if (opcion >= 1 && opcion <= 3)
            break;
        else
            cout << endl << "Opcion incorrecta, elija nuevamente " << endl;
    }//Fin del ciclo while


    return opcion;

}

int menuColas() {
    int opcion = 0;
    while (opcion < 1 || opcion > 3) {
        cout << "      MENU DE COLAS " << endl
                << "1. Trabajar con  ArrayQueue  " << endl
                << "2. Trabajar con LinkedQueue" << endl
                << "3. Regresar al menu principal" << endl
                << "Ingrese una opcion entre 1 y 3: ";
        cin>>opcion;
        while (!cin) {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Por favor ingrese una entrada valida: ";
            cin >> opcion;
        }
        cout << endl;
        if (opcion >= 1 && opcion <= 3)
            break;
        else
            cout << endl << "Opcion incorrecta, elija nuevamente " << endl;
    }//Fin del ciclo while


    return opcion;

}

int opcionesListas() {
    int opcion = 0;
    while (opcion < 1 || opcion > 10) {
        cout << "      OPCIONES PARA LISTAS " << endl
                << "1. Insertar elemento  " << endl
                << "2. Imprimir elementos" << endl
                << "3. Buscar elemento" << endl
                << "4. Borrar elemento" << endl
                << "5. Ver si está vacía" << endl
                << "6. Obtener elemento por posición" << endl
                << "7. Obtener siguiente " << endl
                << "8. Obtener anterior " << endl
                << "9. Borrar todos los elementos" << endl
                << "10. Regresar al menu principal" << endl
                << "Ingrese una opcion entre 1 y 10: ";
        cin>>opcion;
        cout << endl;
        while (!cin) {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Por favor ingrese una entrada valida: ";
            cin >> opcion;
        }
        if (opcion >= 1 && opcion <= 10)
            break;
        else
            cout << endl << "Opcion incorrecta, elija nuevamente " << endl;
    }//Fin del ciclo while


    return opcion;

}

void OpcionesArraylist() {

    int opc = 0, p;
    string nombre, cuenta;
    while (opc != 10) {
        switch (opc = opcionesListas()) {
            case 1:
            {// insertar elemento 

                char resp = 's';
                while (resp == 's' || resp == 'S') {

                    cout << "Ingrese la posicion a insertar alumno: ";
                    cin >> p;
                    cout << "Ingrese nombre del alumno: ";
                    cin>>nombre;
                    cout << "Ingrese # de cuenta: ";
                    cin>>cuenta;
                    alumno = new Alumno(nombre, cuenta);
                    bool valido = arrayList->inserta(p, alumno);
                    if (valido == true) {
                        cout << "Alumno " << nombre << " agregado con exito a la lista.\n" << endl;
                    } else {
                        cout << "Posicion incorrecta, lo posicion que ha ingresado esta fuera del limite de elementos en la lista" << endl;
                    }

                    cout << "Desea insertar otro elemento? [S/N]: ";
                    cin>>resp;
                }
                break;
            }


            case 2:
            {// imprimir elementos
                arrayList->imprime();
                cout << endl;
                break;
            }

            case 3:
            {// buscar elemento
                string cuenta;
                if (arrayList->vacia()) {
                    cout << "En estos momentos la lista esta vacia." << endl;
                    cout << endl;
                } else {
                    cout << "Ingrese # de cuenta: ";
                    cin>>cuenta;
                    alumno = new Alumno(cuenta);
                    int ubicacion = arrayList->localiza(alumno);
                    Object* temp = arrayList->recupera(ubicacion);
                    if (ubicacion == -1) {
                        cout << "No se encontró ningun elemento con esos datos." << endl;
                    } else {
                        cout << "El numero de lista para: " << temp->toString() << " es: " << ubicacion << endl;
                    }
                }

                cout << endl;

                break;
            }

            case 4:
            {// borrar elemento
                int p;
                if (arrayList->vacia()) {
                    cout << "En estos momentos la lista esta vacia." << endl;
                    cout << endl;
                } else {
                    arrayList->imprime();
                    cout << "Ingrese posicion para eliminar: ";
                    cin>>p;
                    Object* val = arrayList->suprime(p);
                    if (val == NULL) {
                        cout << "Error, la posicion ingresada es incorrecta." << endl;
                        cout << endl;
                    } else {
                        cout << "El elemento " << val->toString() << " ha sido eliminado exitosamente." << endl;
                        cout << endl;
                    }
                }

                break;
            }

            case 5:
            {// ver si esta vacia           
                if (arrayList->vacia()) {
                    cout << "En estos momentos la lista esta vacia" << endl;
                    cout << endl;
                } else {
                    int elementos = arrayList->getSize();
                    if (elementos == 1) {
                        cout << "Solo hay un elemento en la lista." << endl;
                    } else {
                        cout << "Hay: " << elementos << " elementos en la lista" << endl;
                    }

                    cout << endl;
                }
                cout << endl;
                break;
            }

            case 6:
            {// obtener elemento por posicion

                int pp;
                if (arrayList->vacia()) {
                    cout << "En estos momentos la lista esta vacia" << endl;
                    cout << endl;
                } else {
                    cout << "Ingrese un posicion: ";
                    cin>>pp;
                    Object* temp = arrayList->recupera(pp);
                    if (temp == NULL) {
                        cout << "No hay ningun alumno registrado en esa posicion." << endl;
                    } else {
                        cout << "El alumno que se encuentra en esa posicion es: " << endl;
                        cout << temp->toString() << endl;
                    }
                }


                cout << endl;

                break;
            }

            case 7:
            {// obtener siguiente
                int ps;
                if (arrayList->vacia()) {
                    cout << "En estos momentos la lista esta vacia." << endl;
                    cout << endl;
                } else {
                    cout << "Ingrese una posicion: ";
                    cin>>ps;
                    if (arrayList->siguiente(ps) == NULL) {
                        cout << "No hay un elemento siguiente" << endl;
                        cout << endl;
                    } else {
                        cout << "El alumno que se encuentra en la posicion siguiente es: " << endl;
                        cout << arrayList->siguiente(ps)->toString();
                        cout << endl;
                    }
                }
                cout << endl;

                break;
            }

            case 8:
            { // obtener anterior
                int ps;
                if (arrayList->vacia()) {
                    cout << "En estos momentos la lista esta vacia." << endl;
                    cout << endl;
                } else {
                    cout << "Ingrese una posicion: ";
                    cin>>ps;
                    if (arrayList->anterior(ps) == NULL) {
                        cout << "No hay un elemento anterior" << endl;
                        cout << endl;
                    } else {
                        cout << "El alumno que se encuentra en la posicion anterior es: " << endl;
                        cout << arrayList->anterior(ps)->toString();
                        cout << endl;
                    }
                }

                cout << endl;
                break;
            }

            case 9:
            {// borrar todos los elementos(anula)
                if (arrayList->vacia()) {
                    cout << "En este momento la lista esta vacia" << endl;
                    cout << endl;
                } else {
                    char resp;
                    cout << "¿Deseas eliminar todos el elementos de la lista?[S/N]: ";
                    cin>>resp;
                    if (resp == 's' || resp == 'S') {
                        cout << "¿Estas seguro? [S/N]: ";
                        cin>>resp;
                        if (resp == 's' || resp == 'S') {
                            arrayList->anula();
                            cout << "Los elementos han sido borrados exitosamente!" << endl;
                            cout << endl;
                        } else {
                            cout << "Hubo un error al borrar los elementos de la lista." << endl;
                            cout << endl;
                        }
                    } else {
                        cout << "Volviendo al menú..." << endl;
                        cout << endl;
                    }

                }

                break;
            }

            case 10:
            {

                break;
            }

        }
    }

}

void OpcionesLinkedlist() {
    string nombre, cuenta;
    int opc = 0, p;
    while (opc != 10) {
        switch (opc = opcionesListas()) {
            case 1:
            {// insertar elemento
                char resp = 's';
                while (resp == 's' || resp == 'S') {

                    cout << "Ingrese la posicion a insertar alumno: ";
                    cin >> p;
                    cout << "Ingrese nombre del alumno: ";
                    cin>>nombre;
                    cout << "Ingrese # de cuenta: ";
                    cin>>cuenta;
                    while (!cin) {
                        cin.clear();
                        cin.ignore(100, '\n');
                        cout << "Por favor ingrese una entrada valida: ";
                        cin >> nombre;
                    }
                    alumno = new Alumno(nombre, cuenta);
                    bool valido = linkedList->inserta(p, alumno);
                    if (valido == true) {
                        cout << "Alumno " << nombre << " agregado con exito a la lista.\n" << endl;
                        int size = linkedList->getSize();
                    } else {
                        cout << "Posicion incorrecta, lo posicion que ha ingresado esta fuera del limite de elementos en la lista" << endl;
                    }

                    cout << "Desea insertar otro elemento? [S/N]: ";
                    cin>>resp;
                }
                break;
            }

            case 2:
            {// imprimir elementos
                linkedList->imprime();
                break;
            }

            case 3:
            {// buscar elemento
                string cuenta;
                if (linkedList->vacia()) {
                    cout << "En este momento la lista esta vacia." << endl;
                    cout << endl;
                } else {
                    cout << "Ingrese # de cuenta: ";
                    cin>>cuenta;
                    alumno = new Alumno(cuenta);

                    int ubicacion = linkedList->localiza(alumno);
                    Object* temp = linkedList->recupera(ubicacion);

                    if (ubicacion == -1) {
                        cout << "No se encontró ningun elemento con esos datos." << endl;
                    } else {
                        cout << "El numero de lista para: " << temp->toString() << " es: " << ubicacion << endl;
                    }
                }

                cout << endl;


                break;
            }

            case 4:
            {// borrar elemento
                int po;

                if (linkedList->vacia()) {
                    cout << "En este momento la lista esta vacia." << endl;
                    cout << endl;
                } else {
                    linkedList->imprime();
                    cout << "Ingrese posicion para eliminar el nodo: ";
                    cin>>po;
                    Object* val = linkedList->suprime(po);
                    if (val == NULL) {
                        cout << "Error la posicion ingresada es incorrecta." << endl;
                        cout << endl;
                    } else {
                        cout << "El nodo ha sido eliminado" << endl;
                        cout << "El elemento " << val->toString() << " ha sido eliminado exitosamente" << endl;
                        cout << endl;
                    }
                }


                break;
            }

            case 5:
            {// ver si esta vacia
                int elements = linkedList->getSize();
                if (linkedList->vacia()) {
                    cout << "En estos momentos la lista esta vacia" << endl;
                } else if (elements == 1) {
                    cout << "Solo hay 1 nodo en este momento." << endl;
                } else {
                    cout << "Hay " << elements << " nodos en este momento." << endl;
                }
                cout << endl;
                break;
            }

            case 6:
            {// obtener elemento por posicion
                int p;
                if (linkedList->vacia()) {
                    cout << "En este momento la lista esta vacia." << endl;
                    cout << endl;
                } else {
                    cout << "Ingrese posicion: ";
                    cin>>p;
                    Object* temp = linkedList->recupera(p);
                    if (temp == NULL) {
                        cout << "Error, la posicion ingresada es incorrecta." << endl;
                    } else {
                        cout << linkedList->recupera(p)->toString() << endl;
                        cout << endl;
                    }
                }


                break;
            }

            case 7:
            {// obtener siguiente
                int p;
                if (linkedList->vacia()) {
                    cout << "En este momento la lista esta vacia." << endl;
                    cout << endl;
                } else {
                    cout << "Ingrese una posicion: ";
                    cin>>p;
                    if (linkedList->siguiente(p) == NULL) {
                        cout << "No hay elemento siguiente" << endl;
                        cout << endl;
                    } else {
                        cout << "El nodo siguiente es: " << linkedList->siguiente(p)->toString() << endl;
                        cout << endl;
                    }
                }


                break;
            }

            case 8:
            {// obtener anterior
                int p;
                if (linkedList->vacia()) {
                    cout << "En este momento la lista esta vacia." << endl;
                    cout << endl;
                } else {
                    cout << "Ingrese una posicion: ";
                    cin>>p;
                    if (linkedList->anterior(p) == NULL) {
                        cout << "No hay elemento anterior" << endl;
                        cout << endl;
                    } else {
                        cout << "El nodo anterior es: " << linkedList->anterior(p)->toString() << endl;
                        cout << endl;
                    }
                }


                break;
            }

            case 9:
            {// borrar todos los elementos(anula)
                if (linkedList->vacia()) {
                    cout << "En estos momentos la lista esta vacia." << endl;
                    cout << endl;
                } else {
                    char resp;
                    cout << "¿Deseas eliminar todos el elementos de la lista?[S/N]: ";
                    cin>>resp;
                    if (resp == 's' || resp == 'S') {
                        cout << "¿Estas seguro? [S/N]: ";
                        cin>>resp;
                        if (resp == 's' || resp == 'S') {
                            linkedList->anula();
                            cout << "Los elementos han sido borrados exitosamente!" << endl;
                            cout << endl;
                        } else {
                            cout << "Hubo un error al borrar los elementos de la lista." << endl;
                            cout << endl;
                        }
                    } else {
                        cout << "Volviendo al menu de listas..." << endl;
                        cout << endl;
                    }
                }


                break;
            }

            case 10:
            {

                break;
            }
        }
    }

}

int opcionesPilas() {
    int opcion = 0;
    while (opcion < 1 || opcion > 6) {
        cout << "      OPCIONES PARA PILAS " << endl
                << "1. Empujar(push)  " << endl
                << "2. Sacar(pop)" << endl
                << "3. Ver tope(top)" << endl
                << "4. Verificar si esta vacia" << endl
                << "5. Imprimir elementos" << endl
                << "6. Regresar al menu principal" << endl
                << "Ingrese una opcion entre 1 y 6: ";
        cin>>opcion;
        cout << endl;
        while (!cin) {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Por favor ingrese una entrada valida: ";
            cin >> opcion;
        }
        if (opcion >= 1 && opcion <= 6)
            break;
        else
            cout << endl << "Opcion incorrecta, elija nuevamente " << endl;
    }//Fin del ciclo while


    return opcion;

}

void OpcionesArraystack() {

    char caracter;
    int opc = 0;
    while (opc != 6) {
        switch (opc = opcionesPilas()) {
            case 1:
            {// empujar
                cout << "Ingrese un simbolo: ";
                cin>>caracter;
                while (!cin) {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "Por favor ingrese una entrada valida: ";
                    cin >> caracter;
                }
                simbolo = new Simbolo(caracter);
                arrayStack->push(simbolo);
                cout << "Simbolo ha sido ingresado exitosamente." << endl;
                cout << endl;

                break;
            }

            case 2:
            {// sacar
                if (arrayStack->isEmpty()) {
                    cout << "En estos momentos no hay elementos en la pila." << endl;
                    cout << endl;
                } else {
                    Object* val = arrayStack->pop();
                    cout << "Simbolo" << val->toString() << " ha sido sacado exitosamente." << endl;
                    cout << endl;
                }

                break;
            }

            case 3:
            {// ver tope
                if (arrayStack->top() == NULL) {
                    cout << "En estos momentos no hay elementos en la pila." << endl;
                    cout << endl;
                } else {
                    int topi = arrayStack->getSize();
                    cout << "El tope de la pila es: " << endl;
                    pilas[topi] = arrayStack->top();
                    cout << pilas[topi]->toString();
                    cout << endl;
                }

                break;
            }

            case 4:
            {//verificar si esta vacia
                if (arrayStack->isEmpty()) {
                    cout << "En estos momentos la pila esta vacia." << endl;
                    cout << endl;
                } else {
                    cout << "Hay elementos en la pila." << endl;
                    cout << endl;
                }

                break;
            }

            case 5:
            {// imprimir elementos
                arrayStack->print();
                break;
            }

            case 6:
            {//
                cout << "Regresando al menu principal..." << endl;
                cout << endl;

                break;
            }


        }
    }
}

void OpcionesLinkedstack() {
    int opc = 0;

    char caracter;
    while (opc != 6) {
        switch (opc = opcionesPilas()) {
            case 1:
            {// empujar
                cout << "Ingrese un simbolo: ";
                cin>>caracter;
                simbolo = new Simbolo(caracter);
                linkedStack->push(simbolo);
                cout << "Simbolo ha sido ingresado exitosamente." << endl;
                cout << endl;
                break;
            }

            case 2:
            {// sacar

                if (linkedStack->isEmpty()) {
                    cout << "En este momento la pila se encuentra vacia." << endl;
                } else {
                    Object* temp = linkedStack->pop();
                    cout << "El simbolo: " << temp->toString() << "ha sido sacado de la pila exitosamente." << endl;
                }
                cout << endl;
                break;
            }

            case 3:
            {// ver tope
                Object* temp = linkedStack->top();
                if (temp == NULL) {
                    cout << "No hay nodo tope en estos momentos." << endl;
                } else {
                    cout << "El tope de la pila es: " << endl;
                    cout << temp->toString();
                }
                cout << endl;
                break;
            }

            case 4:
            {//verificar si esta vacia
                if (linkedStack->isEmpty()) {
                    cout << "En estos momentos la pila esta vacia." << endl;

                } else {
                    cout << "Hay 1 o mas elementos en la pila." << endl;
                }
                cout << endl;
                break;
            }

            case 5:
            {// imprimir elementos
                linkedStack->print();

                break;
            }

            case 6:
            {// 
                cout << "Regresando al menu principal..." << endl;
                cout << endl;
                break;
            }


        }
    }
}

int opcionesColas() {
    int opcion = 0;
    while (opcion < 1 || opcion > 6) {
        cout << "      OPCIONES PARA COLAS " << endl
                << "1. Encolar(queue)  " << endl
                << "2. Desencolar(dequeue)" << endl
                << "3. Ver tope(peek)" << endl
                << "4. Verificar si esta vacia" << endl
                << "5. Imprimir elementos" << endl
                << "6. Regresar al menu principal" << endl
                << "Ingrese una opcion entre 1 y 6: ";
        cin>>opcion;
        while (!cin) {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Por favor ingrese una entrada valida: ";
            cin >> opcion;
        }
        cout << endl;
        if (opcion >= 1 && opcion <= 6)
            break;
        else
            cout << endl << "Opcion incorrecta, elija nuevamente " << endl;
    }//Fin del ciclo while


    return opcion;

}

void OpcionesArrayQueue() {
    int opc = 0;
    string nombre, cuenta;
    while (opc != 6) {
        switch (opc = opcionesColas()) {
            case 1:
            {// encolar
                cout << "Ingrese nombre del alumno: ";
                cin>>nombre;
                cout << "Ingrese # de cuenta: ";
                cin>>cuenta;
                alumno = new Alumno(nombre, cuenta);
                arrayQueue->poneEnCola(alumno);
                cout << "Datos en cola exitosamente" << endl;
                cout << endl;
                break;
            }

            case 2:
            {// desencolar
                if (arrayQueue->vacia()) {
                    cout << "En estos momentos la cola esta vacia" << endl;
                    cout << endl;
                } else {
                    Object* temp = arrayQueue->quitaDeCola();
                    cout << "Elemento " << temp->toString() << " ha sido quitado de la cola exitosamente" << endl;
                    cout << endl;
                }
                break;
            }

            case 3:
            {// ver tope
                if (arrayQueue->frente() == NULL) {
                    cout << "En este momento la cola esta vacia." << endl;
                    cout << endl;
                } else {
                    Object* temp = arrayQueue->frente();
                    colas[0] = arrayQueue->frente();
                    cout << "El elemento al frente de la cola es: " << temp->toString() << endl;
                    cout << endl;
                }


                break;
            }

            case 4:
            {//verificar si esta vacia
                bool vacio = arrayQueue->vacia();
                if (vacio) {
                    cout << "En este momento la cola esta vacia." << endl;
                } else {
                    cout << "Hay elementos en la cola" << endl;
                }
                cout << endl;
                break;
            }

            case 5:
            {// imprimir elementos
                arrayQueue->imprimir();

                break;
            }

            case 6:
            {// 
                cout << "Regresando al menu principal..." << endl;
                cout << endl;
                break;
            }


        }
    }


}

void OpcionesLinkedQueue() {
    int opc = 0;
    string nombre, cuenta;
    while (opc != 6) {
        switch (opc = opcionesColas()) {
            case 1:
            {// encolar
                cout << "Ingrese nombre del alumno: ";
                cin>>nombre;
                cout << "Ingrese # de cuenta: ";
                cin>>cuenta;
                alumno = new Alumno(nombre, cuenta);
                linkedQueue->poneEnCola(alumno);
                cout << "Datos en cola exitosamente" << endl;
                cout << endl;

                break;
            }

            case 2:
            {// desencolar

                if (linkedQueue->vacia()) {
                    cout << "En este momento la cola esta vacia." << endl;
                    cout << endl;
                } else {
                    Object* temp = linkedQueue->quitaDeCola();
                    cout << "Elemento: " << temp->toString() << " ha sido eliminado exitosamente." << endl;
                }
                cout << endl;
                break;
            }

            case 3:
            {// ver tope

                if (linkedQueue->vacia()) {
                    cout << "En este momento no hay elemento frente en la cola." << endl;
                    cout<<endl;
                } else {
                    Object* temp = linkedQueue->frente();
                    cout << "El frente de la cola es: " << temp->toString() << endl;
                    cout<<endl;
                }

                break;
            }

            case 4:
            {//verificar si esta vacia
                if (linkedQueue->vacia()) {
                    cout << "En este momento la cola esta vacia." << endl;
                } else {
                    cout << "La cola tiene 1 o mas elementos." << endl;
                }
                cout << endl;
                break;
            }

            case 5:
            {// imprimir elementos
                linkedQueue->imprimir();
                cout << endl;
                break;
            }

            case 6:
            {// 
                cout << "Regresando al menu principal..." << endl;
                cout << endl;
                break;
            }

        }
    }

}

