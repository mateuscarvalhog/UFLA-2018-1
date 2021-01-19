#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;


int main()
{ 
	string nomeE;
	cin>>nomeE;
	
	string nomeS;
	cin>>nomeS;
	
	ifstream Entrada(nomeE.c_str()); //pega o nome da string como nome do arquivo
	ofstream Saida(nomeS.c_str());
	
	string palavra;
	
	if(Entrada and Saida){
		while(Entrada>>palavra){
			Saida<<palavra;
		}
	}
	
	return 0;
}
