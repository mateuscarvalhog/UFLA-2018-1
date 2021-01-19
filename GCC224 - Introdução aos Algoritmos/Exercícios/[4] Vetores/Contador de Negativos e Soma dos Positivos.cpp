#include <iostream>
using namespace std;

int main(){
	
	float numeros[10];
	for (int i = 0; i < 10; i++)
		cin>>numeros[i];
	
	int cont = 0;
	float soma = 0;
	
	for (int i = 0; i < 10; i++){
		if (numeros[i] < 0)
			cont++;
		else if (numeros[i] > 0)
			soma += numeros[i];
	}
	
	cout<<cont<<endl;
	cout<<soma<<endl;
	
	return 0;
}
