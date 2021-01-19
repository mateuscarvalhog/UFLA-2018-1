#include <iostream>
using namespace std;

int T(int n){
	
	if (n == 1)
		return n;
	else
		return 2 * T(n - 1) + 1;
}

int main(){
	
	int n;
	cin>>n;
	
	cout<<T(n);
	
	return 0;
}
