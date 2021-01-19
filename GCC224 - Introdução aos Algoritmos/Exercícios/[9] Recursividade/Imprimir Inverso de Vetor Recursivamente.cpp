#include <iostream>
using namespace std;

void inverso(int vetor[], int n){
	
	if(--n >= 0){
		cout<<vetor[n]<<" ";
		inverso(vetor, n);
	}
}

int main(){
	
	int n;
	cin>>n;
	
	int vetor[n];
	for (int i = 0; i < n; i++)
		cin>>vetor[i];
		
	inverso(vetor, n);
	
	return 0;
}
