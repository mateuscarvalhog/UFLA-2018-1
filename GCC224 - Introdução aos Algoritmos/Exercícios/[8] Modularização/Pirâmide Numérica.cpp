#include <iostream>
using namespace std;

void piramide(int n){
	
	int aux = 1;
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j <= i; j++){
			cout<<aux++<<" ";
		}
		cout<<endl;
		aux = 1;
	}
}

int main(){
	
	int n;
	cin>>n;
	
	piramide(n);
	
	return 0;
}
