#include <iostream>
#include <string>

std::string contra, intento1, intento2, intento3;	//Inicializo las variables (de tipo string, pues necesitamos que permitan toda clase de carácter y toda clase de longitud.

int main()
{

	
	std::cout<<"\nIngrese una contraseña: ";
	std::cin>>contra; //Se guarda la contraseña principal
	
	std::cout<<"\nIngrese nuevamente su contraseña (intento 1): ";
	std::cin>>intento1; //Se guarda el primer intento de volver a ingresar la contraseña para su posterior comparación
	
	if (contra == intento1) //Comparamos la contraseña con el primer intento
	{
		std::cout<<"\nFelicidades, recordas tu contraseña";	
		return 0;	
	}
	else{
	std::cout<<"\nIngrese nuevamente su contraseña (intento 2): ";
	std::cin>>intento2;	
	} if(contra == intento2) //Comparamos la contraseña con el segundo intento
	{
		std::cout<<"\nFelicidades, recordas tu contraseña";
		return 0;		
	}
	else{
	std::cout<<"\nIngrese nuevamente su contraseña (intento 3): ";
	std::cin>>intento3;
	}
	if(contra == intento3) //Comparamos la contraseña con el tercer intento
	{
		std::cout<<"\nFelicidades, recordas tu contraseña";
		return 0;		
	}
	else //Si ningun intento fue satisfactorio, ocurre lo siguiente
	{
		std::cout<<"\nTenes que ejercitar la memoria";
	}

	return 0;
	
}


