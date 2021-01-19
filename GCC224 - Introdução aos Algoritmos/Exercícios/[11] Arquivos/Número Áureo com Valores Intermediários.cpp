#include <iostream>
#include <fstream>
using namespace std;

double phi(int n){
	
	if (n == 1){
		return 1;
	}else{
		return 1 + (1.0 / phi(n - 1));
	}
}

int main(){
	
	int n;
	cin>>n;
	
	cout<<phi(n)<<endl;
	
	ofstream arquivo("phi.txt");
	for (int i = 1; i <= n; i++){
		arquivo<<phi(i)<<endl;
	}
	arquivo.close();
	
	return 0;
}
