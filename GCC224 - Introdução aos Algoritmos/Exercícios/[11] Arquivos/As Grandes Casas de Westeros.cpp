#include <iostream>
#include <fstream>
using namespace std;

struct data{
	string casa, cidade, brasao;
};

string procura(data westeros[], int cont, string busca, char mod){
	
	for (int i = 0; i < cont; i++){
		if(mod == 'c'){
			if (busca == westeros[i].casa){
				return westeros[i].cidade;
			}
		}else{
			if (busca == westeros[i].casa){
				return westeros[i].brasao;
			}
		}
	}
	return "";
}

int main(){
	
	int cont = 0;
	data westeros[100];
	string info1, info2, info3;
	
	ifstream arq("casas.txt");
	if(arq){
		while((arq>>info1) and (arq>>info2) and (arq>>info3)){
			westeros[cont].casa = info1;
			westeros[cont].cidade = info2;
			westeros[cont].brasao = info3;
			cont++;
		}
	}
	
	string busca;
	char mod;
	cin>>busca>>mod;
	
	cout<<procura(westeros, cont, busca, mod)<<endl;
	
	return 0;
}
