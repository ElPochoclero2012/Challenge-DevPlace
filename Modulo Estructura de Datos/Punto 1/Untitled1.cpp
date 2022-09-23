#include <iostream>
#include <conio.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

//Prototipo de función
void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
void eliminarNodo(Nodo *&, int);

Nodo *lista = NULL;

int dato,num, respN;
char resp;

int main()
{
	
	
	do{
		cout<<"Ingrese un numero: ";
		cin>>dato;
		insertarLista(lista, dato);
		cout<<"\nQuiere agregar otro elemento a la lista? (s/n) ";
		cin>>resp;
	}while((resp=='S') || (resp == 's'));
	
	cout<<"La lista ingresada total es: \n";
	mostrarLista(lista);
	
	cout<<"\n\nIngrese el numero que desee eliminar de la pila: ";
	cin>>respN;
	

	eliminarNodo(lista,respN);

	cout<<"\n La lista actual queda en: ";
	mostrarLista(lista);

	
	return 0;
}

void insertarLista(Nodo *&lista, int n) //Utilizo esta funcion para insertar elementos a la lista.
{
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	Nodo *aux1 = lista;
	Nodo *aux2;
	
	while ((aux1 != NULL) && (aux1->dato < n))
	{
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}
	
	if(lista == aux1)
	{
		lista = nuevo_nodo;
	}
	else
	{
		aux2->siguiente = nuevo_nodo;
	}

	nuevo_nodo->siguiente = aux1;

	cout<<"\tElemento "<<n<<" se ha agregado correctamente a la lista.  \n";
}

void mostrarLista(Nodo *lista) //Con esa función enseño los elementos de la lista en orden de entrada.
{
	Nodo *actual = new Nodo();
	actual = lista;
	
	while(actual != NULL)
	{
		cout<<actual->dato<<" -> ";
		actual = actual->siguiente;
	}
}


void eliminarNodo(Nodo *&lista, int n) //Encontrar forma de que se eliminen todos los Nodos con el mismo valor, por ahora solo elimina el primero que encuentra
{
	if (lista!=NULL)
	{
		Nodo *aux_borrar;
		Nodo *anterior = NULL;
		
		aux_borrar = lista;

		while((aux_borrar != NULL) && (aux_borrar->dato != n)) //Recorro la lista mientras esta no sea nula ni el dato actual de aux_borrar sea el que queremos eliminar.
		{
			anterior = aux_borrar;
			aux_borrar = aux_borrar->siguiente;
		}
		
		if(aux_borrar == NULL) //Si el elemento no ha sido encontrado.
		{
			cout<<"El elemento no ha sido encontrado.";
		}
		else if (anterior == NULL) //Si el primer elemento es el que buscamos eliminar.
		{
			lista = lista->siguiente;
			delete aux_borrar;
			
		}
		else //Si el elemento está en la lista pero no es el primer Nodo.
		{
			anterior->siguiente = aux_borrar->siguiente;
			delete aux_borrar;
		}
	}
}
