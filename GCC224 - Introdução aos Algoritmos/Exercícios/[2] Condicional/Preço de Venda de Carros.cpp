#include <iostream>
using namespace std;

int main()
{
    
    float custoFabrica, lucro, imposto;
    cin>>custoFabrica;
    
    if (custoFabrica <= 20000)
    {
		lucro = custoFabrica * 0.05;
		imposto = 0;
	}
	else if (custoFabrica > 20000 and custoFabrica <= 40000)
	{
		lucro = custoFabrica * 0.1;
		imposto = (custoFabrica + lucro) * 0.3;
	}
	else
	{
		lucro = custoFabrica * 0.15;
		imposto = (custoFabrica + lucro) * 0.45;
	}
	
	cout<<custoFabrica + lucro + imposto<<endl;
    
    return 0;
}
