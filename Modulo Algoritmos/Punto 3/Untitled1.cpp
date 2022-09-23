#include <iostream>
#include <string>

std::string nombre;
int valorH, antiguedad, tHoras, tCobro;

int main()
{
	
	std::cout<<"Ingrese el valor hora del empleado: ";
	std::cin>>valorH;
	std::cout<<"\nIngrese el nombre del empleado: ";
	std::cin>>nombre;
	std::cout<<"\nIngrese la antiguedad del empleado: ";
	std::cin>>antiguedad;
	std::cout<<"\nIngrese la cantidad de horas trabajadas en el mes: ";
	std::cin>>tHoras;
	tCobro=valorH*tHoras;
	
	if (antiguedad > 10)
	{
		tCobro=tCobro+(antiguedad*30);
	}
	
	std::cout<<"El trabajador "<<nombre<<" tiene "<<antiguedad<<" años de antiguedad y debe cobrar un total de $"<<tCobro;
	
	return 0;
}
