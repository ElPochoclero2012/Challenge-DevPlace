//En esta resolución voy a suponer que el punto 2 se refiere a que si aparece el valor viejo se reemplace por el nuevo. Así que...
/*
2)Escribir una función Reemplazar que tenga como argumentos una pila con tipo de elemento int y dos valores int: nuevo y viejo 
de forma que si el segundo valor aparece en algún lugar de la pila sea reemplazado por el primero.
*/
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;	
};

void agregarPila(Nodo *&, int);

int main()
{
	Nodo *pila = NULL;
	
	
	return 0;
}

void agregarPila(Nodo *&pila, int n)
{
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
}
