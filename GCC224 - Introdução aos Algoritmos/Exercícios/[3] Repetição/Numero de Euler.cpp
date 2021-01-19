#include <iostream>
using namespace std;

int main()
{
    
    int precisao, cont = 0, cont2 = 1;
    double fatorial = 1, calculo = 0, divisao;
    cin>>precisao;
    
    while (cont < precisao)
    {
		while (cont2 <= cont)
		{
			fatorial *= cont2;
			cont2++;
		}
		divisao = 1 / fatorial;
		calculo += divisao;
		cont++;
	}
	
	cout<<calculo;
    
    return 0;
}
