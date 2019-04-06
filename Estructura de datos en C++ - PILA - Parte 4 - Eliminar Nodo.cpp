#include <iostream>

using namespace::std;

struct nodo{
	int dato;
	nodo* siguiente;
} *primero;

void insertarNodo();
void buscarNodo();
void modificarNodo();
void eliminarNodo();
void desplegarPila();

int main(){
	int opcion_menu=0;
	do
	{
		cout << endl << "|-------------------------------------|";
		cout << endl << "|              ° PILA °               |";
		cout << endl << "|------------------|------------------|";
		cout << endl << "| 1. Insertar      | 4. Eliminar      |";
		cout << endl << "| 2. Buscar        | 5. Desplegar     |";
		cout << endl << "| 3. Modificar     | 6. Salir         |";
		cout << endl << "|------------------|------------------|";
		cout << endl << endl << " Escoja una Opcion: ";
		cin >> opcion_menu;
		switch(opcion_menu ){
			case 1:
				cout << endl << endl << " INSERTA NODO EN LA PILA " << endl << endl;
				insertarNodo();
				break;
			case 2:
				cout << endl << endl << " BUSCAR UN NODO EN LA PILA " << endl << endl;
				buscarNodo();
				break;
			case 3:
				cout << endl << endl << " MODIFICAR UN NODO DE LA PILA " << endl << endl;
				modificarNodo();
				break;
			case 4:
				cout << endl << endl << " ELIMINAR UN NODO DE LA PILA " << endl << endl;
				eliminarNodo();
				break;
			case 5: 
				cout << endl << endl << " DESPLEGAR PILA DE NODOS " << endl << endl;
				desplegarPila();
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
	cout << " Ingrese el dato que contendra el nuevo Nodo: ";
	cin >> nuevo->dato;
	nuevo->siguiente = primero;
	primero = nuevo;
	cout << endl << " Nodo Ingresado " << endl << endl;
}

void buscarNodo(){
	nodo* actual = new nodo();
	actual = primero;
	int nodoBuscado = 0;
	bool encontrado = false;
	cout << " Ingrese el dato del Nodo a Buscar: ";
	cin >> nodoBuscado;
	if(primero!=NULL){
		while(actual!=NULL && encontrado != true){
			
			if(actual->dato == nodoBuscado){
				cout << endl << " Nodo con el dato ( " << nodoBuscado << " ) Encontrado" << endl << endl;
				encontrado = true;
			}
			
			actual = actual->siguiente;
		}
		if(encontrado==false){
			cout << endl << " Nodo no Encontrado" << endl << endl;
		}
	}else{
		cout << endl << " La Pila se encuentra vacia" << endl << endl;
	}
}

void modificarNodo(){
	nodo* actual = new nodo();
	actual = primero;
	int nodoBuscado = 0;
	bool encontrado = false;
	cout << " Ingrese el dato del Nodo a Buscar par Modificar: ";
	cin >> nodoBuscado;
	if(primero!=NULL){
		while(actual!=NULL && encontrado != true){
			
			if(actual->dato == nodoBuscado){
				cout << endl << " Nodo con el dato ( " << nodoBuscado << " ) Encontrado";
				cout << endl << " Ingrese el nuevo dato para este Nodo: ";
				cin >> actual->dato;
				cout << endl << " Nodo Modificado " << endl << endl;
				encontrado = true;
			}
			
			actual = actual->siguiente;
		}
		if(encontrado==false){
			cout << endl << " Nodo no Encontrado" << endl << endl;
		}
	}else{
		cout << endl << " La Pila se encuentra vacia" << endl << endl;
	}	
}

// primero = 9       actual =  9    anterior = null     nodoBuscado = 9   encontrado = false            4,7,8,9

//PILA  -     9 -> 8 -> 7 -> 4 -> null                       9   8  7  4

void eliminarNodo(){
	nodo* actual = new nodo();
	actual = primero;
	nodo* anterior = new nodo();
	anterior = NULL;
	int nodoBuscado = 0;
	bool encontrado = false;
	cout << " Ingrese el dato del Nodo a Buscar para Eliminar: ";
	cin >> nodoBuscado;
	if(primero!=NULL){
		while(actual!=NULL && encontrado != true){
			
			if(actual->dato == nodoBuscado){
				cout << endl << " Nodo con el dato ( " << nodoBuscado << " ) Encontrado";
				
				if(actual == primero){
					primero = primero->siguiente;
				}else{
					anterior->siguiente = actual->siguiente;
				}
				cout << endl << " Nodo Eliminado" << endl << endl;
				encontrado = true;
			}
			anterior = actual;
			actual = actual->siguiente;
		}
		if(encontrado==false){
			cout << endl << " Nodo no Encontrado" << endl << endl;
		}
	}else{
		cout << endl << " La Pila se encuentra vacia" << endl << endl;
	}	
}

void desplegarPila(){
	nodo* actual = new nodo();
	actual = primero;
	if(primero!=NULL){
		while(actual!=NULL){
			cout << endl << " " << actual->dato; 
			actual = actual->siguiente;
		}
	}else{
		cout << endl << " La Pila se encuentra vacia" << endl << endl;
	}
}







/*
	
*/




