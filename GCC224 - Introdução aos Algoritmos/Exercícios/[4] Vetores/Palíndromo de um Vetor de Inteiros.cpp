#include <iostream>
using namespace std;

int main(){
	
	int tam;
	cin>>tam;
	
	int numeros[tam];
	for (int i = 0; i < tam; i++)
		cin>>numeros[i];
	
	int inicio = 0, fim = tam - 1;
	bool palindromo = true;
	
	while ((palindromo) and (inicio <= fim)){
		if (numeros[inicio] != numeros[fim])
			palindromo = false;
		inicio++;
		fim--;
	}
	
	if (palindromo)
		cout<<1;
	else if (!palindromo)
		cout<<0;
	
	return 0;
}
