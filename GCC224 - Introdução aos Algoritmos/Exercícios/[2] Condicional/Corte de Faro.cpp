#include <iostream>
using namespace std;

int main()
{
    
    int numCartas, posicaoInicial, posicaoFinal;
    cin>>numCartas>>posicaoInicial;
    
    int meio1 = numCartas / 2;
    
    if (posicaoInicial < meio1)
    {
		posicaoFinal = posicaoInicial * 2 + 1;
    }
    else
    {
		posicaoFinal = (2 * posicaoInicial) - (2 * meio1);
	}
    
    cout<<posicaoFinal<<endl;
    
    return 0;
}
