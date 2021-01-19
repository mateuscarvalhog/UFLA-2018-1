#include <iostream>
using namespace std;

struct imposto{
	string nome;
	double aliquota;
};

struct NF{
	string produto;
	double valor;
	string impostoRef;
};

void leituraImposto (int qtdI, imposto vetImposto[]){
	
	for (int i = 0; i < qtdI; i++){
		cin>>vetImposto[i].nome;
		cin>>vetImposto[i].aliquota;
	}
}
void leituraItem(int qtdNF, NF venda[], int i){
		cin>>venda[i].produto;
		cin>>venda[i].valor;
		cin>>venda[i].impostoRef;
	}
void leituraNF (int qtdNF, NF venda[]){
	
	for (int i = 0; i < qtdNF; i++){
		leituraItem(qtdNF, venda, i);
	}
}

void impostoUnitario (NF venda[], int qtdNF, imposto vetImposto[], int qtdI, double valorImp[]){
	
	for (int i = 0; i < qtdNF; i++){
		for (int j = 0; j < qtdI; j++){
			if (venda[i].impostoRef == vetImposto[j].nome){
				valorImp[i] = venda[i].valor * vetImposto[j].aliquota;
				j = qtdI; //Terminar a procura;
			}
		}
	}
}

void impTotal(double valorImp[], int qtdNF, double& soma){
	
	for (int i = 0; i < qtdNF; i++){
		soma += valorImp[i];
	}
}

int main(){
	
	int qtdI;
	cin>>qtdI;
	
	imposto vetImposto[qtdI];
	leituraImposto (qtdI, vetImposto);
	
	int qtdNF;
	cin>>qtdNF;
	
	NF venda[qtdNF];
	leituraNF (qtdNF, venda);
	
	double valorImp[qtdNF];
	impostoUnitario (venda, qtdNF, vetImposto, qtdI, valorImp);
	
	double soma = 0;
	impTotal (valorImp, qtdNF, soma);
	
	cout<<soma<<endl;
	
	return 0;
}
