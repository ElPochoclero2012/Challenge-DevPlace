//Pide dos cosas diferentes el punto, crear un proyecto que solicite al usuario una contraseña y un constructor que generará una contraseña aleatoria, yo hice esto ultimo
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <cstring>
#include <time.h>
using namespace std;

class Password{
	private: //atributos
		int longitud;
		string contra;
				
	public: //metodos
		Password(); //Constructor
		bool esFuerte(string);
		string generarPassword(int);
		//metodos get para los atributos de contraseña y longitud
		int getLongitud(int);
		string getContra(string);
		//metodo set para atributo longitud
		void setLongitud(int);
};
 //Constructor
Password::Password()
{

}

int Password::getLongitud(int)
{
	return longitud;
}

string Password::getContra(string)
{
	return contra;
}

void Password::setLongitud(int _longitud)
{
	longitud = _longitud;
}

bool Password::esFuerte(string clave2) //No encuentro de que forma podría verificar cada letra del string, pero este es el prototipo de lo que se me ocurre
{
	bool flag = false;
	int mayus,minus,num;
	do{
		if ((clave2 >= 'a') && (clave2 <= 'z')) minus++;
		if ((clave2 >= 'A') && (clave2 <= 'Z')) mayus++;
		if ((clave2 >= 0) && (clave 2 <= 9)) num++;
	}while (clave2 != NULL);
	if((minus>1) && (mayus>2) && (num>3))
	{
		cout<<"\n La contraseña es fuerte";
		flag = true;
	} else{
		cout<<"\n La contraseña es débil";
	}
	return flag;
}

string Password::generarPassword(int longi) //Constructor con la longitud que nosotros indicamos, genera una contraseña aleatoria de esa longitud.
{
	string clave1, clave2;
	for(int i = 0; i<longi; i++)
	{
		clave1 = 48 + rand() % (122 - 48);
		clave2 += clave1;		
	}
	cout<<clave2;
	
	return clave2;
}

	int longi, decision;
	string clave;

int main()
{

	Password password1;
	
	srand(time(NULL));
	
	cout<<"Si quiere generar una clave aleatoria ingrese 1, si quiere ingresar una clave manual ingrese 2";
	cin>>decision;
	
	switch (decision)
	{

		case 1:

			cout<<"Ingrese cuantos caracteres quiere que tenga su clave? (minimo 8): ";
			cin>>longi;
	
			if(longi>=8){
			cout<<"\nLongitud guardada... ";
			password1.setLongitud(longi);
			password1.generarPassword(longi);
			password1.esFuerte(password1.generarPassword(longi));
			return 0;
			}
			else{
				cout<<"\nLa cantidad ingresada es menor a la requerida. ";
				return 0;
			}
		break;
	
		case 2:
			cout<<"Ingrese la clave (minimo 8 caracteres): ";
			cin>>clave;
			if(clave.length()>=8)
			{
				password1.setLongitud(clave.length());
				password1.esFuerte(clave);
				return 0;
			}
			else{
				cout<<"La cantidad de caracteres ingresadas es insuficiente. ";
				return 0;
			}
		break;
		
		default: 
			cout<<"Ha ingresado una opción incorrecta. ";
			return 0;	
		break;
	}
	
	return 0;
}
