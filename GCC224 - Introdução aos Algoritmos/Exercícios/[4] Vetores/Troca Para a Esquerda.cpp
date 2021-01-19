#include <iostream>
using namespace std;

int main(){
	int N;
	cin>>N;
	int vetor[N];
	for (int i = 0; i < N; i++)
		cin>>vetor[i];	
	int P;
	cin>>P;
	
	int novoVetor[N];
	int aux = 0;
	
	for (int i = 0; i < N; i++){
		if (i > P){
			novoVetor[aux] = vetor[i];
			aux++;
		}
	}
	for (int i = 0; i < N; i++){
		if (i <= P){
			novoVetor[aux] = vetor[i];
			aux++;
		}
	}
	for (int i = 0; i < N; i++){
		if (i < N - 1)
			cout<<novoVetor[i]<<" ";
		else if (i == N - 1)
			cout<<novoVetor[i];
	}
	
	return 0;
}
