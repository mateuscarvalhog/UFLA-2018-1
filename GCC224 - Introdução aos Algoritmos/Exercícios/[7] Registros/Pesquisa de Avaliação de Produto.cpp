#include <iostream>
using namespace std;

struct data{
	char sexo;
	int idade;
	char resposta;
};

int main(){
	
	int num;
	cin>>num;
	
	data entrevistados[num];
	for (int i = 0; i < num; i++){
		cin>>entrevistados[i].sexo;
		cin>>entrevistados[i].idade;
		cin>>entrevistados[i].resposta;
	}
	
	int contS = 0, contN = 0;
	int contS19 = 0, contN17 = 0;
	int contN19F = 0, contS17M = 0;
	
	for (int i = 0; i < num; i++){
		if (entrevistados[i].resposta == 'S')
			contS++;
		else if (entrevistados[i].resposta == 'N')
			contN++;
		
		if ((entrevistados[i].resposta == 'S') and (entrevistados[i].idade >= 18))
			contS19++;
		else if ((entrevistados[i].resposta == 'N') and (entrevistados[i].idade < 18))
			contN17++;
			
		if ((entrevistados[i].resposta == 'N') and (entrevistados[i].idade >= 18) and (entrevistados[i].sexo == 'F'))
			contN19F++;
		else if ((entrevistados[i].resposta == 'S') and (entrevistados[i].idade < 18) and (entrevistados[i].sexo == 'M'))
			contS17M++;
	}
	
	cout<<contS<<endl<<contN<<endl<<contS19<<endl;
	cout<<contN17<<endl<<contN19F<<endl<<contS17M;
	
	return 0;
}
