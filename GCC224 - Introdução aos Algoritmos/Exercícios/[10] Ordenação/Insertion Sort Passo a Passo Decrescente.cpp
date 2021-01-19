#include <iostream>
using namespace std;

void insertion (int vetor[], int tam){
	
	int aux, j;
	
	for(int i = tam - 2; i >= 0; i--){
		aux = vetor[i];
		j = i + 1;
		while((j < tam) and (vetor[j] > aux)){
			vetor[j - 1] = vetor[j];
			j++;
		}
		vetor[j - 1] = aux;
		
		for(int w = 0; w < tam; w++)
			cout<<vetor[w]<<" ";
		
		cout<<endl;
	}
}	

int main(){
	
	int n;
	cin>>n;
	
	int vetor[n];
	for (int i = 0; i < n; i++)
		cin>>vetor[i];
	
	insertion(vetor, n);
	
	return 0;
}
