#include <iostream>

using namespace::std;

struct nodo{
	int dato;
	nodo* siguiente;
} *primero, *ultimo;

void insertarNodo();
void desplegarLista();

int main(){
	insertarNodo();
	insertarNodo();
	insertarNodo();
	insertarNodo();
	insertarNodo();
	cout << "\n\n Listas \n";
	desplegarLista();
	return 0;
}

// primero = 12    ultimo = 13          actual =  null            lis 12 . 45 . 6 . 13

//Lista Simple =                 12 -> 45 -> 6 -> 13 -> NULL           

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

