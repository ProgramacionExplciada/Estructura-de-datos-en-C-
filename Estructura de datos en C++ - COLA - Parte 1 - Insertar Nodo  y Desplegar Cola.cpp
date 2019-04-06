#include <iostream>

using namespace::std;

struct nodo{
	int dato;
	nodo* siguiente;
} *primero, *ultimo;


void insertarNodo();
void desplegarCola();

int main(){
	insertarNodo();
	insertarNodo();
	insertarNodo();
	insertarNodo();
	insertarNodo();
	cout << endl << " La COLA " << endl;
	desplegarCola();
	return 0;
}

// primero = 45    ultimo = 12      actual = null                          45, 6, 7 , 12
 
// COLA            45 -> 6 -> 7 -> 12 -> NULL                

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

















