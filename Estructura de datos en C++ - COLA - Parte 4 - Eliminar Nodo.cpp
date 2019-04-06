#include <iostream>

using namespace::std;

struct nodo{
	int dato;
	nodo* siguiente;
} *primero, *ultimo;


void insertarNodo();
void buscarNodo();
void modificarNodo();
void eliminarNodo();
void desplegarCola();

int main(){	
	int opcion_menu=0;
	do
	{
		cout << endl << "|-------------------------------------|";
		cout << endl << "|              ° COLA °               |";
		cout << endl << "|------------------|------------------|";
		cout << endl << "| 1. Insertar      | 4. Eliminar      |";
		cout << endl << "| 2. Buscar        | 5. Desplegar     |";
		cout << endl << "| 3. Modificar     | 6. Salir         |";
		cout << endl << "|------------------|------------------|";
		cout << endl << endl << " Escoja una Opcion: ";
		cin >> opcion_menu;
		switch(opcion_menu){
			case 1:
				cout << endl << endl << " INSERTA NODO EN LA COLA " << endl << endl;
				insertarNodo();
				break;
			case 2:
				cout << endl << endl << " BUSCAR UN NODO EN LA COLA " << endl << endl;
				buscarNodo();
				break;
			case 3:
				cout << endl << endl << " MODIFICAR UN NODO DE LA COLA " << endl << endl;
				modificarNodo();
				break;
			case 4:
				cout << endl << endl << " ELIMINAR UN NODO DE LA COLA " << endl << endl;
				eliminarNodo();
				break;
			case 5: 
				cout << endl << endl << " DESPLEGAR COLA DE NODOS " << endl << endl;
				desplegarCola();
				break;
			case 6:
				cout << endl << endl << " Programa finalizado..." << endl << endl;
				break;
			default:
				cout << endl << endl << " Opcion No Valida " << endl << endl;
			}
	} while (opcion_menu != 6);
	return 0;
}             

void insertarNodo(){
	nodo* nuevo = new nodo();
	cout << " Ingrese el dato del nuevo Nodo: ";
	cin >> nuevo->dato;

	if(primero==NULL){
		primero = nuevo;
		primero->siguiente = NULL;
		ultimo = primero;
	}else{
		ultimo->siguiente = nuevo;
		nuevo->siguiente = NULL;
		ultimo = nuevo;
	}
	cout << endl << " Nodo Ingresado " << endl << endl;
}

void buscarNodo(){
	nodo* actual = new nodo();
	actual = primero;
	bool encontrado = false;
	int nodoBuscado = 0;
	cout << " Ingrese el dato del nodo a Buscar: ";
	cin >> nodoBuscado;
	if(primero != NULL){
		while(actual!=NULL && encontrado != true){
			
			if(actual->dato == nodoBuscado){
				cout << "\n Nodo con el dato ( " << nodoBuscado << " ) Encontrado";
				encontrado = true;
			}
			
			actual = actual->siguiente;
		}
		if(!encontrado){
			cout << "\n Nodo No Encontrado";
		}
	}else{
		cout << endl << " La cola se encuentra Vacia " << endl << endl;
	}	
}

void modificarNodo(){
	nodo* actual = new nodo();
	actual = primero;
	bool encontrado = false;
	int nodoBuscado = 0;
	cout << " Ingrese el dato del nodo a Buscar para Modificar: ";
	cin >> nodoBuscado;
	if(primero != NULL){
		while(actual!=NULL && encontrado != true){
			
			if(actual->dato == nodoBuscado){
				cout << "\n Nodo con el dato ( " << nodoBuscado << " ) Encontrado";
				cout << "\n Ingrese el nuevo dato para este Nodo: ";
				cin >> actual -> dato;
				cout << "\n Nodo Modificado\n\n";
				encontrado = true;
			}
			
			actual = actual->siguiente;
		}
		if(!encontrado){
			cout << "\n Nodo No Encontrado\n\n";
		}
	}else{
		cout << endl << " La cola se encuentra Vacia " << endl << endl;
	}		
}

// primero = 45    ultimo = 12      actual = 12   anterior = null      encontrado = false         nodoBuscado = 6              45, 6, 7 , 12
 
// COLA            45 -> 6 -> 7 ->  12 -> NULL      

void eliminarNodo(){
	nodo* actual = new nodo();
	actual = primero;
	nodo* anterior = new nodo();
	anterior = NULL;
	bool encontrado = false;
	int nodoBuscado = 0;
	cout << " Ingrese el dato del nodo a Buscar para Eliminar: ";
	cin >> nodoBuscado;
	if(primero != NULL){
		
		while(actual!=NULL && encontrado != true){
			
			if(actual->dato == nodoBuscado){
				cout << "\n Nodo con el dato ( " << nodoBuscado << " ) Encontrado";
				
				if(actual == primero){
					primero = primero -> siguiente;
				}else if(actual == ultimo){
					anterior->siguiente = NULL;
					ultimo = anterior;
				}else{
					anterior->siguiente = actual->siguiente;
				}
				
				cout << "\n Nodo Eliminado\n\n";
				
				encontrado = true;
			}
			anterior = actual;
			actual = actual->siguiente;
		}
		if(!encontrado){
			cout << "\n Nodo No Encontrado\n\n";
		}
	}else{
		cout << endl << " La cola se encuentra Vacia " << endl << endl;
	}	
}

void desplegarCola(){
	nodo* actual = new nodo();
	actual = primero;
	if(primero!=NULL){
		while(actual!=NULL){
			cout << endl << " " << actual->dato;
			actual = actual->siguiente;
		}
	}else{
		cout << endl << " La cola se encuentra Vacia " << endl << endl;
	}
}










/*




*/






