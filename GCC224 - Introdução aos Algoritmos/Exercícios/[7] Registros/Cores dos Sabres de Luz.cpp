#include <iostream>
using namespace std;

struct sabreDeLuz{
	string cristal;
	string cor;
};

struct jedi{
	string nome;
	string hierarquia;
	sabreDeLuz sabre;
};
	
int main(){
	
	int qtd;
	cin>>qtd;
	
	int i = 0, j = 0;
	
	string cor[qtd] = " ";
	int cont[qtd] = {0};
	
	jedi vetJedi[qtd];
	for (int i = 0; i < qtd; i++){
		cin>>vetJedi[i].nome;
		cin>>vetJedi[i].hierarquia;
		cin>>vetJedi[i].sabre.cristal;
		cin>>vetJedi[i].sabre.cor;
		
		for (j = 0; j < qtd; j++){
			if (cor[j] == vetJedi[i].sabre.cor)
				j = qtd;
			else if (cor[j] == " "){
				cor[j] = vetJedi[i].sabre.cor;
				j = qtd;
			}
		}
	}
	
	string busca = " ";
	cin>>busca;
	
	for (i = 0; i < qtd; i++)
		if (vetJedi[i].hierarquia == busca)
			for (j = 0; j < qtd; j++)
				if (vetJedi[i].sabre.cor == cor[j])
					cont[j]++;
	
	for (j = 0; j < qtd; j++)
		if (cor[j] != " ")
			cout<<cor[j]<<" "<<cont[j]<<endl;
		

	return 0;
}
