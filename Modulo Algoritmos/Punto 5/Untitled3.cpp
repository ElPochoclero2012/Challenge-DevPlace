//El punto D no lo resuelvo porque no est? explicado, pues es igual al C
#include <iostream>
#include <string>

int nMax=0, nMin=0, nSum=0, num=0;

int main()
{
	do
	{
		std::cout<<"Ingrese numeros enteros, cuando quiera frenar ingrese '-1': ";
		std::cin>>num;		 
		if(num!=-1){
			nSum=nSum+num;	//Variable acumuladora que suma todos los numeros ingresados.
		
			if(nMax<num) //Si el numero mas grande ingresado es menor al ultimo que se ingres? se actualiza la variable de este al numero actual.
			{
				nMax=num;
			}	
			if(nMin>num) //Si el numero mas peque?o ingresado es mayor al ultimo que se ingres? se actualiza la variable de este al numero actual.
			{
				nMin=num;
			}
		}
	} while (num!=-1); 
	
	std::cout<<"Mayor numero introducido: "<<nMax<<" \n";
	std::cout<<"Menor numero introducido: "<<nMin<<" \n";
	std::cout<<"Suma de todos los numeros: "<<nSum<<" \n";
	
	return 0;
}
