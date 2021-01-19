#include <iostream>

using namespace std;

void impressao(int n) {	
	if(n == 0) {
		cout << n << " ";
	} else {
		impressao(n - 1);
		cout << n << " ";
	}
}

int main() {
	int n;
	cin >> n;
	
	impressao(n);
	
	return 0;
}