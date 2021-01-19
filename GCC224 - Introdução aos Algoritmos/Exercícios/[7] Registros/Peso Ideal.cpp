#include <iostream>
using namespace std;

struct data{
	string nome;
	char sexo;
	double altura;
	double peso;
};

int main(){
	
	int qtd;
	cin>>qtd;
	
	data paciente[qtd];
	for (int i = 0; i < qtd; i++){
		cin>>paciente[i].nome;
		cin>>paciente[i].sexo;
		cin>>paciente[i].altura;
		cin>>paciente[i].peso;
	}
	
	double pesoMaior = 0;
	string nomePesoMaior;
	for (int i = 0; i < qtd; i++){
		if (paciente[i].peso > pesoMaior){
			pesoMaior = paciente[i].peso;
			nomePesoMaior = paciente[i].nome;
		}
	}
	cout<<nomePesoMaior<<endl;
	
	double pesoIdeal[qtd];
	for (int i = 0; i < qtd; i++){
		if (paciente[i].sexo == 'H')
			pesoIdeal[i] = 72.7 * paciente[i].altura - 58;
		else if (paciente[i].sexo == 'M')
			pesoIdeal[i] = 62.1 * paciente[i].altura - 44.7;
	}
	
	for (int i = 0; i < qtd; i++)
		if (paciente[i].peso > pesoIdeal[i])
			cout<<paciente[i].nome<<" "<<pesoIdeal[i] - paciente[i].peso<<endl;
	
	for (int i = 0; i < qtd; i++)
		if (paciente[i].peso < pesoIdeal[i])
			cout<<paciente[i].nome<<" "<<pesoIdeal[i] - paciente[i].peso<<endl;
	
	return 0;
}
