#include <iostream>
#include <fstream>
using namespace std;

int main(){
	
	string vetor1[100], vetor2[100];
	int cont1 = 0, cont2 = 0;
	string aux;
	
	ifstream arqA("arquivoA.txt");
	if(arqA){
		while(arqA>>aux){
			vetor1[cont1] = aux;
			cont1++;
		}
	}
	
	ifstream arqB("arquivoB.txt");
	if(arqB){
		while(arqB>>aux){
			vetor2[cont2] = aux;
			cont2++;
		}
	}
	
	ofstream arqC("arquivoC.txt");
	
	if(cont1 == cont2){
		for(int i = 0; i < cont1; i++){
			arqC<<vetor1[i]<<" "<<vetor2[i]<<" ";
		}
	}else if(cont1 > cont2){
		for(int i = 0; i < cont2; i++){
			arqC<<vetor1[i]<<" "<<vetor2[i]<<" ";
		}
		for(int i = cont2; i < cont1; i++){
			arqC<<vetor1[i]<<" ";
		}
	}
	else if(cont2 > cont1){
		for(int i = 0; i < cont2; i++){
			arqC<<vetor1[i]<<" "<<vetor2[i]<<" ";
		}
		for(int i = cont1; i < cont2; i++){
			arqC<<vetor2[i]<<" ";
		}
	}
	
	return 0;
}
