#include <iostream>
using namespace std;

void maiores(int aumento[], int n, int hInicio, int& maior, int& segMaior){
	
	int alturas[n + 1];
	for(int i = 0; i <= n; i++){
		if (i == 0)
			alturas[i] = hInicio;
		else
			alturas[i] = alturas[i - 1] + aumento[i - 1];
	}
	
	for(int i = 1; i < n + 1; i++){
		if (alturas[i] > maior){
			segMaior = maior;
			maior = alturas[i];
		}else if ((alturas[i] < maior) and (alturas[i] > segMaior)){
			segMaior = alturas[i];
		}
	}
}			

int main(){
	
	int anoInicio;
	cin>>anoInicio;
	
	int hInicio;
	cin>>hInicio;
	
	int n;
	cin>>n;
	
	int aumento[n];
	for(int i = 0; i < n; i++)
		cin>>aumento[i];
	
	int maior = hInicio, segMaior = 0;
	
	maiores(aumento, n, hInicio, maior, segMaior);
	
	cout<<maior<<endl<<segMaior;
	
	return 0;
}
