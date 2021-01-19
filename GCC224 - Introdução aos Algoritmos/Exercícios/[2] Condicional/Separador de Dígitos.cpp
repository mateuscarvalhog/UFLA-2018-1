#include <iostream>
using namespace std;

int main()
{
    
    int numero, unidade, dezena, centena, uMilhar, dMilhar;
    cin>>numero;
    
    if (numero > 99999)
    {
		cout<<"invalido"<<endl;
	}
	else
	{	
	    dMilhar = numero / 10000;
		uMilhar = (numero - (dMilhar * 10000)) / 1000;
		centena = (numero - (dMilhar * 10000 + uMilhar * 1000)) / 100;
		dezena =  (numero - (dMilhar * 10000 + uMilhar * 1000 + centena * 100)) / 10;
		unidade = numero - (dMilhar * 10000 + uMilhar * 1000 + centena * 100 + dezena * 10);
		
		cout<<dMilhar<<"..."<<uMilhar<<"..."<<centena<<"..."<<dezena<<"..."<<unidade;
    }
    
    return 0;
}
