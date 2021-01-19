#include <iostream>
using namespace std;

int ricci(int n, int ric1, int ric2){
	
	if (n == 0)
		return ric1;
	else if (n == 1)
		return ric2;
	else
		return ricci(n - 2, ric1, ric2) + ricci(n - 1, ric1, ric2);
}

int main(){
	
	int ric1, ric2, n;
	cin>>ric1>>ric2>>n;
	
	for (int i = 0; i < n; i++)
		cout<<ricci(i, ric1, ric2)<<" ";
	
	return 0;
}
