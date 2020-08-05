// main del proyecto
#include <cstdlib>
#include<iostream>

using namespace std;

int menu();
int main(int argc, char** argv) {
    int option=0;
	
	while( option != 3 ) {
            switch( option = menu()){
	
                case 1:{// mostrar submenu de listas
                    int opcion=0;
                   
                    break;
		}
                
                case 2: {// mostrar submenu de pilas
                    
                    break;
                }
                
                case 3: {// mostrar submenu de colas
                    
                    break;
                }
                
					
            }// fin del switch
		
	
	}// fin del while

    return 0;
}

int menu(){// funcion del menu principal
	int opcion=0;
	while(opcion < 1 || opcion > 3){
            cout<<"      MENU PRINCIPAL "<<endl
            <<"1. Trabajar con Listas "<<endl
            <<"2. Trabajar con Pilas"<<endl
            <<"3. Trabajar con Colas"<<endl
            <<"4. Salir"<<endl
            <<"Ingrese una opcion entre 1 y 3: ";
            cin>>opcion;
            cout<<endl;
            if(opcion >= 1 && opcion <= 3)
		break;
            else
                cout<<endl<<"Opcion incorrecta, elija nuevamente "<<endl;			
	}//Fin del ciclo while
	
	
	return opcion;
}

int menuListas(){
    int opcion=0;
    while(opcion < 1 || opcion > 3){
        cout<<"      MENU DE LISTAS "<<endl
        <<"1. Trabajar con ArrayList "<<endl
        <<"2. Trabajar con Linked List"<<endl
        <<"3. Regresar al menu principal"<<endl
        <<"Ingrese una opcion entre 1 y 3: ";
        cin>>opcion;
        cout<<endl;
        if(opcion >= 1 && opcion <= 3)
            break;
        else
            cout<<endl<<"Opcion incorrecta, elija nuevamente "<<endl;			
	}//Fin del ciclo while
	
	
	return opcion; 	 

}



