#include <iostream>
using namespace std;

int main(){
	
	int qtd;
	cin>>qtd;
	
	int numeros[qtd];
	for (int i = 0; i < qtd; i++)
		cin>>numeros[i];
	
	int busca;
	cin>>busca;
	
	int inicio = 0, fim = qtd - 1, meio;
	int posicao = -1, contBuscas = 0;
	
	while (inicio <= fim){
		meio = (inicio + fim) / 2;
		
		if (numeros[meio] == busca){
			posicao = meio;
			inicio = fim + 1; //Terminar o while;
		}else if (busca < numeros[meio]){
			fim = meio - 1;
		}else
			inicio = meio + 1;
			
		contBuscas++;
	}
	
	if (posicao == busca)
		cout<<posicao<<endl<<contBuscas<<endl;
	else
		cout<<-1;
	
	return 0;
}
