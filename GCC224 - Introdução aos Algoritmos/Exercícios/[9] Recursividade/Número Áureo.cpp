#include <iostream>
using namespace std;

double phi(int n){
	
	if (n == 1){
		return 1;
	}else{
		return 1 + (1  / phi(n - 1));
	}
}
		
int main(){
	
	int n;
	cin>>n;
	
	cout<<phi(n);
	
	return 0;
}
