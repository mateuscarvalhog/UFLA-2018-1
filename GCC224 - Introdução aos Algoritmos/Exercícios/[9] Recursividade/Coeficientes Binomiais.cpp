#include <iostream>
using namespace std;

int C(int N, int K){
	
	if (N == 0 or K == 0)
		return 1;
	else if (N == K)
		return 1;
	else
		return C(N - 1, K - 1) + C(N - 1, K);
}

int main(){
	
	int N, K;
	cin>>N>>K;
	
	cout<<C(N, K);
	
	return 0;
}
