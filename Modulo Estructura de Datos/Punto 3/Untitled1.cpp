#include <iostream>
#include <conio.h>
using namespace std;

struct Nodo{
	Nodo* izq;
	int info;
	Nodo* der;	
};

class Lista{
	private:
		Nodo* inicio;
		Nodo* fin;
	public:
		Lista();
		void agregar(int valor);
		void sumarTotalFinInicio();
};

Lista::Lista(){
	
	inicio = NULL;
	fin = NULL;
}

void Lista::agregar(int valor){
	
	Nodo* nodo = new Nodo();
	nodo->info = valor;
	
	if (inicio == NULL)
	{
		inicio = nodo;
		fin = nodo;
		nodo->izq = NULL;
		nodo->der = NULL;
	}else {
		nodo->izq = fin;
		fin->der = nodo;
		fin = fin->der;
		fin->der = NULL;
	}
}


void Lista::sumarTotalFinInicio()
{
	Nodo* reco = fin;
	int suma;
	
	while(reco!=NULL)
	{
		suma+= reco->info;
		reco = reco->izq;
	}
	cout<<"La suma total de fin a inicio es: "<<suma;
}


int main()
{
	
	Lista lista;
	
	int cantElement,elemento;
	
	cout<<"Cuantos elementos quiere agregar en la lista? . . . "<<endl;
	cin>>cantElement;
	cout<<"\n";
	
	for (int i=0; i<cantElement; i++)
	{
		cout<<"Ingrese el elemento numero... "<<i+1<<"\n\n";
		cin>>elemento;
		lista.agregar(elemento);
		cout<<"\n";
	}

	lista.sumarTotalFinInicio();

	return 0;
}


