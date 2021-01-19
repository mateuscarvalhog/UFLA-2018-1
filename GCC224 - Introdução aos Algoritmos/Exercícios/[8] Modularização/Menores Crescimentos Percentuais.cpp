#include <iostream>
using namespace std;

void comparacao(int anoInicio, int n, int publico[], int& menor, int& segMenor){
	
	float aux = (publico[1] - publico[0]) * 100.0 / publico[0];
	float porcMenor = aux, porcSeg = 1000;
	
	for (int i = 2; i < n; i++){
		aux = (publico[i] - publico[i - 1]) * 100.0 / publico[i - 1];
		
		if (aux < porcMenor and aux > 0){
			segMenor = menor;
			porcSeg = porcMenor;
			menor = anoInicio + i;
			porcMenor = aux;
		}else if(aux < porcSeg and aux > porcMenor and aux > 0){
			segMenor = anoInicio + i;
			porcSeg = aux;
		}
	}
}
			
int main(){
	
	int anoInicio;
	cin>>anoInicio;
	
	int n;
	cin>>n;
	
	int publico[n];
	for (int i = 0; i < n; i++)
		cin>>publico[i];
	
	int menor = anoInicio + 1, segMenor;
	
	comparacao(anoInicio, n, publico, menor, segMenor);
	
	cout<<menor<<endl<<segMenor;
	
	return 0;
}
