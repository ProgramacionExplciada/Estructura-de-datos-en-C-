#include <iostream>

using namespace::std;


struct nodo{
	int dato;
	nodo* siguiente;
	nodo* atras;
} *primero, *ultimo;


void insertarNodo();
void buscarNodo();
void modificarNodo();
void eliminarNodo();
void desplegarListaPU();
void desplegarListaUP();

int main(){
	int opcion_menu=0;
	do
	{
		cout << "\n|-------------------------------------|";
		cout << "\n|      ° LISTA CIRCULAR DOBLE °       |";
		cout << "\n|------------------|------------------|";
		cout << "\n| 1. Insertar      | 5. Desplegar P.U |";
		cout << "\n| 2. Buscar        | 6. Desplegar U.P |";
		cout << "\n| 3. Modificar     | 7. Salir         |";
		cout << "\n| 4. Eliminar      |                  |";
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
			cout << "\n\n DESPLEGAR LISTA DE NODOS DEL PRIMERO AL UTLIMO\n\n";
			desplegarListaPU();
			break;
		case 6:
			cout << "\n\n DESPLEGAR LISTA DE NODOS DEL UTLIMO AL PRIMERO\n\n";
			desplegarListaUP();
			break;
		case 7:
			cout << "\n\n Programa finalizado...";
			break;
		default:
			cout << "\n\n Opcion No Valida \n\n";
		}
	} while (opcion_menu != 7);
	
	return 0;
}

void insertarNodo(){
	nodo* nuevo = new nodo();
	cout << "Ingrese el dato que contendra el nuevo Nodo: ";
	cin >> nuevo->dato;
	
	if(primero==NULL){
		primero = nuevo;
		ultimo = nuevo;
		primero->siguiente = primero;
		primero->atras = ultimo;
	}else{
		ultimo->siguiente = nuevo;
		nuevo->atras = ultimo;
		nuevo->siguiente = primero;
		ultimo = nuevo;
		primero->atras = ultimo;
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
	if(primero!=NULL){
		do{
			
			if(actual->dato==nodoBuscado){
				cout << "\n Nodo con el dato ( " << nodoBuscado << " ) Encontrado\n\n";
				encontrado = true;				
			}
			
			actual = actual->siguiente;
		}while(actual!=primero && encontrado != true);
		
		if(!encontrado){
			cout << "\n Nodo no Encontrado\n\n";
		}
		
	}else{
		cout << "\n La lista se Encuentra Vacia\n\n";
	}
}

void modificarNodo(){
	nodo* actual = new nodo();
	actual = primero;
	bool encontrado = false;
	int nodoBuscado = 0;
	cout << " Ingrese el dato del nodo a Buscar para Modificar: ";
	cin >> nodoBuscado;
	if(primero!=NULL){
		do{
			
			if(actual->dato==nodoBuscado){
				cout << "\n Nodo con el dato ( " << nodoBuscado << " ) Encontrado";
				
				cout << "\n Ingrese el nuevo dato para este Nodo: ";
				cin >> actual->dato;
				cout << "\n Nodo Modificado\n\n";
				
				encontrado = true;				
			}
			
			actual = actual->siguiente;
		}while(actual!=primero && encontrado != true);
		
		if(!encontrado){
			cout << "\n Nodo no Encontrado\n\n";
		}
		
	}else{
		cout << "\n La lista se Encuentra Vacia\n\n";
	}
}

// primero = 67    ultimo = 12                nuevo = 12            actual = 12           anterior = 8       encontrado = false     nodoBuscado = 45               

// lista circular doble  =            (12) <- 67 -> <- 45 -> <- 8 -> <- 12 -> (67)

void eliminarNodo(){
	nodo* actual = new nodo();
	actual = primero;
	nodo* anterior = new nodo();
	anterior = NULL;
	bool encontrado = false;
	int nodoBuscado = 0;
	cout << " Ingrese el dato del nodo a Buscar para Eliminar: ";
	cin >> nodoBuscado;
	if(primero!=NULL){
		do{
			
			if(actual->dato==nodoBuscado){
				cout << "\n Nodo con el dato ( " << nodoBuscado << " ) Encontrado";
				
				if(actual==primero){
					primero = primero->siguiente;
					primero->atras = ultimo;
					ultimo->siguiente = primero;
				}else if(actual==ultimo){
					ultimo = anterior;
					ultimo->siguiente = primero;
					primero->atras = ultimo;
				}else{
					anterior->siguiente = actual->siguiente;
					actual->siguiente->atras = anterior;
				}
				
				cout << "\n Nodo Eliminado\n\n";
				encontrado = true;				
			}
			
			anterior = actual;
			actual = actual->siguiente;
		}while(actual!=primero && encontrado != true);
		
		if(!encontrado){
			cout << "\n Nodo no Encontrado\n\n";
		}
		
	}else{
		cout << "\n La lista se Encuentra Vacia\n\n";
	}
}

void desplegarListaPU(){
	nodo* actual = new nodo();
	actual = primero;
	if(primero!=NULL){
		do{
			cout << "\n " << actual->dato; 
			actual = actual->siguiente;
		}while(actual!=primero);
		
	}else{
		cout << "\n La lista se Encuentra Vacia\n\n";
	}
}

void desplegarListaUP(){
	nodo* actual = new nodo();
	actual = ultimo;
	if(primero!=NULL){
		do{
			cout << "\n " << actual->dato; 
			actual = actual->atras;
		}while(actual!=ultimo);
		
	}else{
		cout << "\n La lista se Encuentra Vacia\n\n";
	}
}



/*

*/










