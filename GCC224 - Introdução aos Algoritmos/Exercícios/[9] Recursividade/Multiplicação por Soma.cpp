#include <iostream>
using namespace std;

int produto(int num1, int num2){
	
	if (num2 == 1)
		return num1;
	else
		return num1 + produto(num1, num2 - 1);
}

int main(){
	
	int num1, num2;
	cin>>num1>>num2;
	
	cout<<produto(num1, num2);
	
	return 0;
}
