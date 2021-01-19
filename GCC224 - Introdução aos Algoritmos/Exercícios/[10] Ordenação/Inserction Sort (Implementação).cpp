#include <iostream>
using namespace std;

void insertion(int vetor[], int tam){
	
	int j, aux;
	
	for (int i = 1; i < tam; i++){
		aux = vetor[i];
		j = i - 1;
		
		while ((j >= 0) and (aux < vetor[j])){
			vetor[j + 1] = vetor[j];
			j--;
			for (int w = 0; w < tam; w++)
				cout<<vetor[w]<<" ";
			cout<<endl<<j<<" "<<aux<<endl;
		}
		vetor[j + 1] = aux;
	}
}

int main(){
	
	int n;
	cin>>n;
	
	int vetor[n];
	for (int i = 0; i < n; i++)
		cin>>vetor[i];
	
	insertion (vetor, n);
	
	for (int i = 0; i < n; i++)
		cout<<vetor[i]<<" ";
	
	return 0;
}
