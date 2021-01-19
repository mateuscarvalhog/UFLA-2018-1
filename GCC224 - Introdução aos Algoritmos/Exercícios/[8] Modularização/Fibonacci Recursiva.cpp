#include <iostream>
using namespace std;

int fibonacci(int numero){
	
	if (numero < 2)
		return numero;
	else
		return fibonacci(numero - 1) + fibonacci(numero - 2);
}

int main(){
	
	int tam;
	cin>>tam;
	
	
	for (int i = 0; i < tam; i++){
		cout<<fibonacci(i)<<" ";
	}
	
	return 0;
}
