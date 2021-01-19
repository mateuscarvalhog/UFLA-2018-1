#include <iostream>
using namespace std;

int main(){
	
	int vetor[10];
	for (int i = 0; i < 10; i++)
		vetor[i] = 0;
	
	int numEntradas;
	cin>>numEntradas;
	for (int i = 0; i < numEntradas; i++)
		cin>>vetor[i];
	
	int novaEntrada, posicao;
	cin>>novaEntrada>>posicao;
	
	for (int i = 8; i >= posicao; i--)
		vetor[i + 1] = vetor[i];
		
	vetor[posicao] = novaEntrada;
	
	for (int i = 0; i < 10; i++)
		cout<<vetor[i]<<" ";
		
	return 0;
}
