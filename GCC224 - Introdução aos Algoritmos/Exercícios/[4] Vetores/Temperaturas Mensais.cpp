#include <iostream>
#include <string>
using namespace std;

int main(){
	
	double tempMedia[12];
	for (int i = 0; i < 12; i++)
		cin>>tempMedia[i];
	
	string mes[12] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
	double maior = tempMedia[0], menor = tempMedia[0];
	string maiorMes = mes[0], menorMes = mes[0];
	
	for (int i = 0; i < 12; i++){
		for (int j = i + 1; j < 12; j++){
			if (tempMedia[j] < menor){
				menor = tempMedia[j];
				menorMes = mes[j];
			}
			if (tempMedia[j] > maior){
				maior = tempMedia[j];
				maiorMes = mes[j];
			}
		}
	}
	cout<<maiorMes<<endl<<menorMes;
	
	return 0;
}
