#include <iostream>
using namespace std;

int ordem (int n, char vetor[]){
	
	int cont = 0;
	bool alfa = false;
	
	for (int i = 1; i < n; i++){
		if (vetor[i] > vetor[i - 1]){
			cont++;
			alfa = true;
			while (alfa){
				i++;
				if (vetor[i] < vetor[i - 1]){
					alfa = false;
				}
			}
		}
	}
	
	return cont;
}

int main(){
	
	int n;
	cin>>n;
	
	char vetor[n];
	for (int i = 0; i < n; i++){
		cin>>vetor[i];
	}
	
	cout<<ordem (n, vetor);
	
	return 0;
}
