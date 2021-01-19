#include <iostream>
using namespace std;

int main(){
	
	int m, n;
	cin>>m>>n;
	
	float A[m][n];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin>>A[i][j];
	
	float menor = A[0][0];
	int jMenor = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (A[i][j] < menor){
				menor = A[i][j];
				jMenor = j;
			}
	
	float soma = 0;
	for (int i = 0; i < m; i++)
		soma += A[i][jMenor];
	
	cout<<menor<<endl<<soma;
	
	return 0;
}
