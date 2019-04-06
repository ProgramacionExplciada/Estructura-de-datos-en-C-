#include <iostream>

using namespace::std;


struct nodo{
	int dato;
	nodo* siguiente;
	nodo* atras;
} *primero, *ultimo;


void insertarNodo();

void desplegarListaPU();
void desplegarListaUP();

int main(){
	insertarNodo();
	insertarNodo();
	insertarNodo();
	insertarNodo();
	insertarNodo();
	cout << "\n\n LISTA CIRCULAR DOCLE DEL PRIMERO AL ULTIMO\n";
	desplegarListaPU();
	cout << "\n\n LISTA CIRCULAR DOCLE DEL ULTIMO AL PRIMERO\n";
	desplegarListaUP();
	return 0;
}

// primero = 67    ultimo = 12                nuevo = 12               actual =  67                          67,  23, 8, 12

// lista circular doble  =            (12) <- 67 -> <- 23 -> <- 8 -> <- 12 -> (67)

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













