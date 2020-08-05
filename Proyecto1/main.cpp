// main del proyecto
#include <cstdlib>
#include<iostream>

using namespace std;

// menus respectivos para cada TDA incluyendo el menu principal
int menuPrincipal();
int menuListas();
int menuPilas();
int menuColas();

//  prototipos de las opciones para cada una de las TDA
int opcionesListas();

int main(int argc, char** argv) {
    int option=0;
        while( option != 4 ) {
            switch( option = menuPrincipal()){
                case 1:{// mostrar submenu de listas
                    int opcion=0;
                    switch(opcion=menuListas()){
                        case 1:{// opcion para trabajar con arraylist
                            int opc=0;
                            switch(opc=opcionesListas()){
                                case 1:{// insertar elemento 
                                    cout<<"insertar elemento";
                                    break;
                                }
                                
                                
                                case 2:{// imprimir elementos
                                    
                                    break;
                                }
                                
                                case 3:{// buscar elemento
                                    
                                    break;
                                }
                                
                                case 4:{// borrar elemento
                                    
                                    break;
                                }
                                
                                case 5:{// ver si esta vacia                             
                                    
                                    break;
                                }
                                
                                case 6:{// obtener elemento por posicion
                                    
                                    break;
                                }
                                
                                case 7:{// obtener siguiente
                                    cout<<"obteniendo siguiente";
                                    break;
                                }
                                
                                case 8:{
                                    
                                    break;// obtener anterior
                                }
                                
                                case 9:{// borrar todos los elementos(anula)
                                    
                                    break;
                                }
                                
                                case 10:{
                                    
                                    break;
                                        }
                        
                            }
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

int opcionesListas(){
     int opcion=0;
    while(opcion < 1 || opcion > 10){
        cout<<"      OPCIONES PARA LISTAS "<<endl
        <<"1. Insertar elemento  "<<endl
        <<"2. Imprimir elementos"<<endl
        <<"3. Buscar elemento"<<endl
        <<"4. Borrar elemento"<<endl
        <<"5. Ver si está vacía"<<endl
        <<"6. Obtener elemento por posición"<<endl
        <<"7. Obtener siguiente "<<endl
        <<"8. Obtener anterior "<<endl
        <<"9. Borrar todos los elementos"<<endl
        <<"10. Regresar al menu principal"<<endl
        <<"Ingrese una opcion entre 1 y 10: ";
        cin>>opcion;
        cout<<endl;
        if(opcion >= 1 && opcion <= 10)
            break;
        else
            cout<<endl<<"Opcion incorrecta, elija nuevamente "<<endl;			
	}//Fin del ciclo while
	
	
	return opcion; 
  
}