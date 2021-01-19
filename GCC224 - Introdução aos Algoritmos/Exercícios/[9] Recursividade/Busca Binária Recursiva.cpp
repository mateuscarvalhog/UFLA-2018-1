#include <iostream>
using namespace std;

void bubble(int vetor[], int tam){
	
	for(int i = 0; i < tam - 1; i++)
		for(int j = 0; j < tam - 1 - i; j++)
			if(vetor[j] > vetor[j + 1])
				swap(vetor[j], vetor[j + 1]);	
}

int busca(int vetor[], int n, int buscado, int& cont, int inicio, int fim){
	
	int meio = (inicio + fim) / 2;

	if (inicio > fim){
		return -1;
	}else{
		if(buscado == vetor[meio]){
			cont++;
			return meio;
		}else if(buscado < vetor[meio]){
			cont++;
			return busca(vetor, n, buscado, cont, inicio, meio - 1);
		}else{
			cont++;
			return busca(vetor, n, buscado, cont, meio + 1, fim);
		}
	}
}

int main(){
	
	int n;
	cin>>n;
	
	int vetor[n];
	for (int i = 0; i < n; i++)
		cin>>vetor[i];
	
	int buscado;
	cin>>buscado;
	
	bubble(vetor, n);
	
	int cont = 0;
	int inicio = 0, fim = n - 1;
	
	cout<<busca(vetor, n, buscado, cont, inicio, fim)<<endl;
	cout<<cont;
	
	return 0;
}
