#include <iostream>

using namespace std;

int main() {
	
	int number;
	cin>>number;
	
	int resto = number%2;
	
	if (resto==0)
	{
		cout<<"par"<<endl;
	} else {
		cout<<"impar"<<endl;
	}
	return 0;
}