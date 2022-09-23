#include <iostream>

bool primo(int num); //Defino el prototipo de la función

int main()
{
	int num;
	std::cout<<"Ingrese un numero: "<<std::endl;
	std::cin>>num;
	
	if (primo(num)) //Si la función al trabajar con la variable ingresada por el usuario devuelve que es verdadero
	{
		std::cout<<"Es primo";
	} 
	else //De lo contrario
	{
		std::cout<<"No es primo";
	}
}

bool primo(int num)
{
	if (num == 0 || num == 1 || num == 4) //Casos especiales en los que no son numeros primos.
	{
		return false;
	}
	
	for (int i=2; i<num / 2 ; i++) //Inicializo el entero en 2. Mientras sea menor a la mitad del numero ingresado, se va a seguir incrementando su valor en 1.
	{
		if (num % i == 0) //Si el resto del numero ingresado divido i es 0, entonces no es primo.
		{
		return false;	
		}
	}
	//De no poder ser posible la división bajo los parametros anteriormente dichos, se confirma que es un numero primo.
	return true;
}

