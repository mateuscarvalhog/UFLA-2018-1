#include <iostream>
using namespace std;

void selection(int vetor[], int tam){
	
	int posMenor, aux;
	
	for (int i = 0; i < tam - 1; i++){
		posMenor = i;
		for (int j = i + 1; j < tam; j++){
			if (vetor[j] <  vetor[posMenor]){
				posMenor = j;
			}
			cout<<j<<" "<<posMenor<<endl;
		}
		aux = vetor[i];
		vetor[i] = vetor[posMenor];
		vetor[posMenor] = aux;
		for (int w = 0; w < tam; w++)
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
	
	selection (vetor, n);
	
	for (int i = 0; i < n; i++)
		cout<<vetor[i]<<" ";
	
	return 0;
}
