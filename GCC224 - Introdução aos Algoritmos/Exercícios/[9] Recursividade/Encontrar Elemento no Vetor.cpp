#include <iostream>
using namespace std;

int busca(int n, int vetor[], int buscado, int cont = 0){
	
	if (vetor[cont] == buscado)
		return 1;
	else if (cont < n){
		cont++;
		 return busca(n, vetor, buscado, cont);
	}else
		return 0;
}

int main(){
	
	int n;
	cin>>n;
	
	int vetor[n];
	for (int i = 0; i < n; i++)
		cin>>vetor[i];
	
	int buscado;
	cin>>buscado;
	
	cout<<busca(n, vetor, buscado);
	
	return 0;
}
