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
void desplegarLista();

int main(){
	
	int opcion_menu = 0;
	
	do
	{
		cout << "\n|-------------------------------------|";
		cout << "\n|           ° LISTA SIMPLE °          |";
		cout << "\n|------------------|------------------|";
		cout << "\n| 1. Insertar      | 4. Eliminar      |";
		cout << "\n| 2. Buscar        | 5. Desplegar     |";
		cout << "\n| 3. Modificar     | 6. Salir         |";
		cout << "\n|------------------|------------------|";
		cout << "\n\n Escoja una Opcion: ";
		cin >> opcion_menu;
		switch(opcion_menu){
		case 1:
			cout << "\n\n INSERTA NODO EN LA LISTA \n\n";
			insertarNodo();
			break;
		case 2:
			cout << "\n\n BUSCAR UN NODO EN LA LISTA \n\n";
			buscarNodo();
			break;
		case 3:
			cout << "\n\n MODIFICAR UN NODO DE LA LISTA \n\n";
			modificarNodo();
			break;
		case 4:
			cout << "\n\n ELIMINAR UN NODO DE LA LISTA \n\n";
			eliminarNodo();
			break;
		case 5: 
			cout << "\n\n DESPLEGAR LISTA DE NODOS \n\n";
			desplegarLista();
			break;
		case 6:
			cout << "\n\n Programa finalizado...";
			break;
		default:
			cout << "\n\n Opcion No Valida \n\n";
		}
	} while (opcion_menu != 6);
	
	
	return 0;
}

void insertarNodo(){
	nodo* nuevo = new nodo();
	cout << " Ingrese el dato que contendra el nuevo Nodo: ";
	cin >> nuevo->dato;
	
	if(primero == NULL){
		primero = nuevo;
		primero->siguiente = NULL;
		ultimo = nuevo;
	}else{
		ultimo->siguiente = nuevo;
		nuevo->siguiente = NULL;
		ultimo = nuevo;
	}
	cout << "\n Nodo Ingresado\n\n";
}      

void buscarNodo(){
	nodo* actual = new nodo();
	actual = primero;
	bool encontrado = false;
	int nodoBuscado = 0;
	cout << " Ingrese el dato del nodo a Buscar: ";
	cin >> nodoBuscado;
	if(primero != NULL){
		
		while(actual != NULL && encontrado != true){
			
			if(actual->dato == nodoBuscado){
				cout << "\n Nodo con el dato " << nodoBuscado << " Encontrado\n\n";
				encontrado = true;
			}
			
			actual = actual->siguiente;
		}
		if(!encontrado){
			cout << "\n Nodo No Encontrado\n\n";
		}
	}else{
		cout  << "\n La Lista se Encuentra Vacia\n\n";
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
		
		while(actual != NULL && encontrado != true){
			
			if(actual->dato == nodoBuscado){
				cout << "\n Nodo con el dato " << nodoBuscado << " Encontrado";
				cout << "\n Ingrese el Nuevo dato para este Nodo: ";
				cin >> actual->dato;
				encontrado = true;
			}
			
			actual = actual->siguiente;
		}
		if(!encontrado){
			cout << "\n Nodo No Encontrado\n\n";
		}
	}else{
		cout  << "\n La Lista se Encuentra Vacia\n\n";
	}
}

// primero = 12    ultimo = 6    actual =  13     anterior = 6    encontrado  = true     nodoBuscado = 98         lis 12 . 45 . 6 . 13                 98

//Lista Simple =                 12 ->  98 ->  6 ->  null        13 -> NULL      

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
		
		while(actual != NULL && encontrado != true){
			
			if(actual->dato == nodoBuscado){
				cout << "\n Nodo con el dato " << nodoBuscado << " Encontrado\n\n";
				
				if(actual == primero){
					primero = primero->siguiente;
				}else if(actual == ultimo){
					anterior->siguiente = NULL;
					ultimo = anterior;
				}else{
					anterior->siguiente = actual->siguiente;
				}
				
				cout << "\n Nodo ELiminado con exito\n\n";
				
				encontrado = true;
			}
			
			anterior = actual;
			actual = actual->siguiente;
		}
		if(!encontrado){
			cout << "\n Nodo No Encontrado\n\n";
		}
	}else{
		cout  << "\n La Lista se Encuentra Vacia\n\n";
	}
}

void desplegarLista(){
	nodo* actual = new nodo();
	actual = primero;
	if(primero != NULL){
		
		while(actual != NULL){
			cout << " " << actual->dato  << endl;
			actual = actual->siguiente;
		}
		
	}else{
		cout  << "\n La Lista se Encuentra Vacia\n\n";
	}
}














/*



*/





