// main del proyecto
#include <cstdlib>
#include<iostream>

using namespace std;

int menuPrincipal();
int menuListas();
int menuPilas();
int menuColas();

int main(int argc, char** argv) {
    int option=0;
        while( option != 4 ) {
            switch( option = menuPrincipal()){
                case 1:{// mostrar submenu de listas
                    int opcion=0;
                    switch(opcion=menuListas()){
                        case 1:{// opcion para trabajar con arraylist
                            cout<<"arraylsit";
                            break;
                        }
                        
                        case 2:{// opcion para trabajar con arraylist
                            cout<<"linkedlist";
                            break;
                        }
                
                    }
                   
                    break;
		}
                
                case 2: {// mostrar submenu de pilas
                    int opcion=0;
                    switch(opcion=menuPilas()){
                        case 1:{// opcion para trabajar con arrayStack
                            cout<<"arraystack";
                            break;
                        }
                        
                        case 2:{// opcion para trabajar con linked stack
                            cout<<"linked stack";
                            break;
                        }
                    }
                    
                    break;
                }
                
                case 3: {// mostrar submenu de colas
                    int opcion=0;
                    switch(opcion=menuColas()){
                        case 1:{// opcion para trabajar con arrayqueue
                            cout<<"arrayqueue";
                            break;
                        }
                        
                        case 2:{// opcion para trabajar con linkedqueue
                            cout<<"linkedqueue";
                            
                            break;
                        }
                    }
                    
                    break;
                }
                
                
                case 4:{
                    cout<<"SALIENDO DEL PROGRAMA.";
                    break;
                }
                
					
            }// fin del switch
		
	
	}// fin del while

    return 0;
}

int menuPrincipal(){// funcion del menu principal
	int opcion=0;
	while(opcion < 1 || opcion > 4){
            cout<<"      MENU PRINCIPAL "<<endl
            <<"1. Trabajar con Listas "<<endl
            <<"2. Trabajar con Pilas"<<endl
            <<"3. Trabajar con Colas"<<endl
            <<"4. Salir"<<endl
            <<"Ingrese una opcion entre 1 y 3: ";
            cin>>opcion;
            cout<<endl;
            if(opcion >= 1 && opcion <= 4)
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
        <<"2. Trabajar con LinkedList"<<endl
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

int menuPilas(){
    int opcion=0;
    while(opcion < 1 || opcion > 3){
        cout<<"      MENU DE PILAS "<<endl
        <<"1. Trabajar con ArrayStack "<<endl
        <<"2. Trabajar con LinkedStack"<<endl
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

int menuColas(){
    int opcion=0;
    while(opcion < 1 || opcion > 3){
        cout<<"      MENU DE COLAS "<<endl
        <<"1. Trabajar con  ArrayQueue  "<<endl
        <<"2. Trabajar con LinkedQueue"<<endl
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