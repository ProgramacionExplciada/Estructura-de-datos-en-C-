#include <iostream>

using namespace::std;

struct nodo{
	int dato;
	nodo* siguiente;
} *primero;

void insertarNodo();
void desplegarPila();

int main(){
	insertarNodo();
	insertarNodo();
	insertarNodo();
	insertarNodo();
	insertarNodo();
	cout << endl << " LA PILA QUEDA ASI " << endl;
	desplegarPila();
	return 0;
}

// primero = 9        nuevo  = 9         actual =  null               4,7,8,9

//PILA  -     9 -> 8 -> 7 -> 4 -> null                       9   8  7  4

void insertarNodo(){
	nodo* nuevo = new nodo();
	cout << " Ingrese el dato que contendra el nuevo Nodo: ";
	cin >> nuevo->dato;
	
	nuevo->siguiente = primero;
	primero = nuevo;
	
	cout << endl << " Nodo Ingresado " << endl << endl;
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










