#include <iostream>
using namespace std;

struct data{
	string nome;
	string pedido;
};

struct estoque{
	string toy;
	int qtd;
};

int main(){
	
	int numCartas;
	cin>>numCartas;
	
	data carta[numCartas];
	for (int i = 0; i < numCartas; i++){
		cin>>carta[i].nome;
		cin>>carta[i].pedido;
	}
	
	int numBrinq;
	cin>>numBrinq;
	
	estoque brinquedos[numBrinq];
	for (int i = 0; i < numBrinq; i++){
		cin>>brinquedos[i].toy;
		cin>>brinquedos[i].qtd;
	}
	
	string aux[numCartas];
	int auxCont = 0;
	bool achou = false;
	
	for (int i = 0; i < numCartas; i++){
		aux = carta[i].pedido;
		
		for (int j = 0; j < numCartas; j++){
			if (aux == carta[j].pedido)
				auxCont++;
				
