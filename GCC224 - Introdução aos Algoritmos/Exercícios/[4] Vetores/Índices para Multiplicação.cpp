#include <iostream>
using namespace std;

int main(){
	
	int numeros[7];
	for (int i = 0; i < 7; i++)
		cin>>numeros[i];
	
	int posicao, multiplicacao = 1;
	
	cin>>posicao;
	while (posicao >= 0){
		multiplicacao *= numeros[posicao];
		
		cin>>posicao;
	}
	cout<<multiplicacao<<endl;
	
	return 0;
}
