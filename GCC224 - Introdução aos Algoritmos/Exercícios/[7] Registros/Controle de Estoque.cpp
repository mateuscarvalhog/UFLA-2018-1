#include <iostream>
using namespace std;

struct data{
	int tipo;
	float preco;
	int estoque;
	string deposito;
};

int main(){
	
	data produto[60];
	int i = 0;
	bool terminou = false;
	
	while (!terminou){
		cin>>produto[i].tipo;
		if (produto[i].tipo != 0){
			cin>>produto[i].preco;
			cin>>produto[i].estoque;
			cin>>produto[i].deposito;
		}else
			terminou = true;
		
		i++;
	}
	
	terminou = false;
	int codigo;
	
	while (!terminou){
		cin>>codigo;
		if (codigo == 0)
			terminou = true;
		else{
			for (int j = 0; j < i; j++){
				if (codigo == produto[j].tipo){
					produto[j].estoque -= 1;
					if (produto[j].estoque < 0){
						cout<<"erro 3221";
						return 3221;
					}
				}
			}
		}
	}
	
	int acabando = produto[0].estoque, contAcabando;
	
	for (int j = 1; j < i; j++)
		if (produto[j].estoque < acabando){
			acabando = produto[j].estoque;
			contAcabando = j;
		}
	
	cout<<produto[tipoAcabando].tipo<<" ";
	cout<<produto[tipoAcabando].estoque<<" ";
	cout<<produto[tipoAcabando].deposito;
	
	return 0;
}
