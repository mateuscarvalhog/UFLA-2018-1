#include <iostream>
using namespace std;

int main()
{
	
	float salario, aumento, novoSalario;
	cin>>salario;
	
	if (salario <= 300)
	{
		aumento = salario * 0.15;
		novoSalario = salario + aumento;
	}
	else if (salario > 300 and salario <= 600)
	{
		aumento = salario * 0.10;
		novoSalario = salario + aumento;
	}
	else if (salario > 600 and salario <=900)
	{
		aumento = salario * 0.05;
		novoSalario = salario + aumento;
	}
	else if (salario > 900)
	{
		aumento = 0;
		novoSalario = salario;
	}
	
	cout<<aumento<<endl<<novoSalario;
	
	return 0;
}
