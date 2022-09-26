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

void reemplazar(Nodo *&pila, int dato)
{
	int nuevo=4, viejo=3; //Elijo estos numeros de forma aleatoria, pues no hay un numero predeterminado por la consigna para las variables
	Nodo *aux = pila;
	aux->dato = dato;
	aux->siguiente = pila;
	
	while(aux->siguiente != NULL) //Mientras aún no se haya llegado al final de la pila
	{
		if(aux->dato = viejo) //Si el dato es igual a viejo
		{
			aux->dato = nuevo; //Igualamos el dato a nuevo
			
			aux->siguiente = pila; //Y seguimos con el siguiente elemento de la pila
		} else{
			aux->siguiente = pila; //Y de no ser así, simplemente pasamos al siguiente elemento
		}
	}
}



int main()
{
	

	return 0;
}
