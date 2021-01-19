#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int vogais(string nome){
	
	string aux;
	int tam = 0;
	int qtd = 0;
	
	ifstream arq(nome.c_str());
	if (arq){
		while (arq>>aux){
			tam = aux.size();
			for (int i = 0; i < tam; i++){
				if ( aux[i] == 'A' or aux[i] == 'a' or aux[i] == 'E' or aux[i] == 'e' or aux[i] == 'I' or aux[i] == 'i' or aux[i] == 'O' or aux[i] == 'o' or aux[i] == 'U' or aux[i] == 'u' ){
					qtd++;
				}
			}
		}
	}
	return qtd;
}

int main(){
	
	string nome;
	cin>>nome;
	
	cout<<vogais(nome);
	
	return 0;
}
