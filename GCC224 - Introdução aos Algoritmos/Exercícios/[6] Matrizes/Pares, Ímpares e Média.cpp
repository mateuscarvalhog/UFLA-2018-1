#include <iostream>
using namespace std;

int main(){
	
	int A[3][4];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			cin>>A[i][j];
			
	int pares = 0, impares = 0, soma = 0;
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 4; j++){
			if (A[i][j] % 2 == 0)
				pares++;
			else
				impares++;
				
			soma += A[i][j];
		}
	}
	
	cout<<pares<<endl<<impares<<endl<<(soma / 12.0);
	
	return 0;
}
