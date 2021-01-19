#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	int A[n][n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin>>A[i][j];
	
	int menor = A[0][0];
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if ((i + j <= n) and ( A[i][j] < menor))
				menor = A[i][j];
	
	cout<<menor;
	
	return 0;		
}
