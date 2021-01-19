#include <iostream>
using namespace std;

int main(){
	
	int m, n;
	cin>>m>>n;
	
	int A[m][n];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin>>A[i][j];
	
	int i = m - 1;
			
	if (m % 2 == 0){
		while (i >= 0){
			if (i % 2 != 0)
				for (int j = 0; j < n; j++)
					cout<<A[i][j]<<" ";
			else
				for (int j = n - 1; j >= 0; j--)
					cout<<A[i][j]<<" ";
		i--;
		}
	}
	i = m - 1;
	if (m % 2 != 0){
		while (i >= 0){
			if (i % 2 == 0)
				for (int j = 0; j < n; j++)
					cout<<A[i][j]<<" ";
			else
				for (int j = n - 1; j >= 0; j--)
					cout<<A[i][j]<<" ";
		i--;
		}
	}
	
	return 0;
}
