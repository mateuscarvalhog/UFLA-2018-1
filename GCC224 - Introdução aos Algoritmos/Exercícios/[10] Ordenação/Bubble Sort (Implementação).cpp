#include <iostream>
using namespace std;

void bubble(int vetor[], int tam){
	
	for(int i = 0; i < tam - 1; i++){
		for(int j = 0; j < tam - 1 - i; j++){
			if (vetor[j] > vetor[j + 1]){
				swap(vetor[j], vetor[j + 1]);
			}
			for(int w = 0; w < tam; w++)
				cout<<vetor[w]<<" ";
			cout<<endl<<i<<" "<<j<<endl;
		}
	}	
}

int main(){
	
	int n;
	cin>>n;
	
	int vetor[n];
	for (int i = 0; i < n; i++)
		cin>>vetor[i];
	
	bubble (vetor, n);
	
	for (int i = 0; i < n; i++)
		cout<<vetor[i]<<" ";
	
	return 0;
}
