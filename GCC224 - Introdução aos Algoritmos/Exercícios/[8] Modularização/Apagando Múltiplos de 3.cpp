#include <iostream>
using namespace std;

void excluir(int n, int vetor[]){
	
	for (int i = 0; i < n; i++){
		if(vetor[i] % 3 == 0){
			vetor[i] = -1;
		}
	}
}
	

int main(){
	
	int n;
	cin>>n;
	
	int numeros[n];
	for (int i = 0; i < n; i++)
		cin>>numeros[i];
		
	excluir(n, numeros);
	
	int cont = 0;
	for (int i = 0; i < n; i++){
		if(numeros[i] != -1){
			cout<<numeros[i]<<" ";
			cont++;
		}
	}
	cout<<endl<<cont;
	
	return 0;
}
