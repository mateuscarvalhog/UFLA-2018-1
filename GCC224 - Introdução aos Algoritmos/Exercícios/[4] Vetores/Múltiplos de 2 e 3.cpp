#include <iostream>
using namespace std;

int main(){
	
	int numeros[7], qtd = 0;
	for (int i = 0; i < 7; i++)
		cin>>numeros[i];
		
	for (int i = 0; i < 7; i++){
		if (numeros[i] % 2 == 0){
			cout<<numeros[i]<<" ";
			qtd++;
		}
	}
	if (qtd == 0)
		cout<<0;
	
	cout<<endl;
	qtd = 0;
	
	for (int i = 0; i < 7; i++){
		if (numeros[i] % 3 == 0){
			cout<<numeros[i]<<" ";
			qtd++;
		}
	}
	if (qtd == 0)
		cout<<0;
		
	cout<<endl;
	qtd = 0;
	
	for (int i = 0; i < 7; i++){
		if (numeros[i] % 6 == 0){
			cout<<numeros[i]<<" ";
			qtd++;
		}
	}
	if (qtd == 0)
		cout<<0;
	
	return 0;
}
