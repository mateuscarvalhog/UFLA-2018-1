#include <iostream>
using namespace std;

int main(){
	int numeros[10], divisores[5];
	for (int i = 0; i < 10; i++)
		cin>>numeros[i];
	for (int i = 0; i < 5; i++)
		cin>>divisores[i];
	
	for (int i = 0; i < 10; i++){
		int cont = 0;
		
		for (int j = 0; j < 5; j++)
			if (numeros[i] % divisores[j] == 0)
				cont++;
				
		cout<<numeros[i]<<" "<<cont<<endl;
	}
	return 0;
}
