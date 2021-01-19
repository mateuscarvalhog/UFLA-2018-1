#include <iostream>
using namespace std;

int sub(int n, int vetor[]){
	
	int cont = 0;
	int aux1 = 0, aux2 = 1;
	
	while (aux2 < n){
		if (vetor[aux1] > vetor[aux2]){
			cont++;
			aux1++;
			aux2++;
			while (vetor[aux1] > vetor[aux2]){
				aux1++;
				aux2++;
			}
		}else{
			aux1++;
			aux2++;
		}
	}
	
	return cont;
}

int main(){
	
	int n;
	cin>>n;
	
	int vetor[n];
	for (int i = 0; i < n; i++)
		cin>>vetor[i];
	
	cout<<sub(n, vetor);
	
	return 0;
}
