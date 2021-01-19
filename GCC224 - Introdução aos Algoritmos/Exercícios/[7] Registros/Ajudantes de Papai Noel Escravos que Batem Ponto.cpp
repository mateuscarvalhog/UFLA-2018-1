#include <iostream>
using namespace std;

struct controle{
	string nome;
	int entrada[7];
	int saida[7];
};

int main(){
	
	int qtd;
	cin>>qtd;
	
	controle ajudantes[qtd];
	for(int i = 0; i < qtd; i++){
		cin>>ajudantes[i].nome;
		for(int j = 0; j < 7; j++){
			cin>>ajudantes[i].entrada[j];
			cin>>ajudantes[i].saida[j];
		}
	}
	
	int horaDiaria, horaSemanal = 0;
	
	for (int i = 0; i < qtd; i++){
		for (int j = 0; j < 7; j++){
			horaDiaria = ajudantes[i].saida[j] - ajudantes[i].entrada[j];
			horaSemanal += horaDiaria;
		}
		
		if (horaSemanal < 70)
			cout<<ajudantes[i].nome<<" "<<horaSemanal<<endl;
		
		horaSemanal = 0;
	}
	
	return 0;
}
