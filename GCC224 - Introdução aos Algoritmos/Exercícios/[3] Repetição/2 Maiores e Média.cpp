#include <iostream>
using namespace std;

int main()
{
    
    float numero, maior = 0, segundo = 0, soma = 0;
    int cont = 0;
    
    while (cont < 7)
    {
		cin>>numero;
		
		if (numero > segundo)
		{
			segundo = numero;
		}
		if (numero > maior)
		{	
			segundo = maior;
			maior = numero;
		}
		
		soma += numero;
		cont++;
	}
	
	cout<<maior<<endl<<segundo<<endl<<(soma - (maior + segundo)) / 5;
		
    
    return 0;
}
