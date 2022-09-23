#include <iostream>
#include <cstdlib>
#include <string>

int num;

int main()
{
	num = 1 + (rand() % 1001);
	int i=0;
	std::cout<<num<<"\n\n";
	std::cout<<"Se ha generado un numero aleatorio, intente adivinarlo: ";
	std::cin>>i;
	for(int x=0; x=num; x)
	{
		if (i<num)
		{
			std::cout<<"Vuelva a intentarlo! El numero que ha ingresado es MENOR al generado aleatoriamente: \n";
			std::cin>>i;
		} 
		else if (i>num)
		{
			std::cout<<"Vuelva a intentarlo! El numero que ha ingresado es MAYOR al generado aleatoriamente: \n";
			std::cin>>i;
		}
		else if (i==num)
		{
			std::cout<<"Lo lograste! Felicidades... ";
			x=num;
			return 0;
		}
	}
	
}
