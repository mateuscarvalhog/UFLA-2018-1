#include <iostream>
using namespace std;

int main()
{
    
    int code;
    float salario, aumento;
    string cargo;
    cin>>code>>salario;
    
    if (code == 1)
    {
		cout<<"Escriturario"<<endl;
		aumento = salario * 0.5;
	}
	else if (code == 2)
	{
		cout<<"Secretario"<<endl;
		aumento = salario * 0.35;
	}
	else if (code == 3)
	{
		cout<<"Caixa"<<endl;
		aumento = salario * 0.2;
	}
	else if (code == 4)
	{
		cout<<"Gerente"<<endl;
		aumento = salario * 0.1;
	}
	else if (code == 5)
	{
		cout<<"Diretor"<<endl;
		aumento = 0;
	}
	
	salario +=aumento;
	cout<<aumento<<endl<<salario;
    
    return 0;
}
