#include <iostream>
#include <cmath>
using namespace std;

void calculo (int n, int numeros[], float& mediana){
	
	if (n % 2 == 0){
		int meio1, meio2;
		meio1 = numeros[(n / 2) - 1];
		meio2 = numeros[n / 2];
		
		mediana = (meio1 + meio2) / 2.0;
	}else{
		int pos = ceil(n / 2);
		mediana = numeros[pos];
	}
}

int main(){
	
	int n;
	cin>>n;
	
	int numeros[n];
	for (int i = 0; i < n; i++)
		cin>>numeros[i];
	
	float mediana;
	
	calculo(n, numeros, mediana);
	
	cout<<mediana;
	
	return 0;
}
