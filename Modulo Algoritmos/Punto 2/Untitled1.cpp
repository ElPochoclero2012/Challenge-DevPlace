#include <iostream>
#include <string>

std::string contra, intento1, intento2, intento3;	//Inicializo las variables (de tipo string, pues necesitamos que permitan toda clase de car�cter y toda clase de longitud.

int main()
{

	
	std::cout<<"\nIngrese una contrase�a: ";
	std::cin>>contra; //Se guarda la contrase�a principal
	
	std::cout<<"\nIngrese nuevamente su contrase�a (intento 1): ";
	std::cin>>intento1; //Se guarda el primer intento de volver a ingresar la contrase�a para su posterior comparaci�n
	
	if (contra == intento1) //Comparamos la contrase�a con el primer intento
	{
		std::cout<<"\nFelicidades, recordas tu contrase�a";	
		return 0;	
	}
	else{
	std::cout<<"\nIngrese nuevamente su contrase�a (intento 2): ";
	std::cin>>intento2;	
	} if(contra == intento2) //Comparamos la contrase�a con el segundo intento
	{
		std::cout<<"\nFelicidades, recordas tu contrase�a";
		return 0;		
	}
	else{
	std::cout<<"\nIngrese nuevamente su contrase�a (intento 3): ";
	std::cin>>intento3;
	}
	if(contra == intento3) //Comparamos la contrase�a con el tercer intento
	{
		std::cout<<"\nFelicidades, recordas tu contrase�a";
		return 0;		
	}
	else //Si ningun intento fue satisfactorio, ocurre lo siguiente
	{
		std::cout<<"\nTenes que ejercitar la memoria";
	}

	return 0;
	
}


