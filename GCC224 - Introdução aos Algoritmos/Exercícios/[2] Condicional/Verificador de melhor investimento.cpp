#include <iostream>

using namespace std;

int main() {
	
	int type;
	float inv;
	cin>>type>>inv;
	
	if (type == 1)
	{
		cout<<inv + (inv * 0.005)<<endl;
	}
	else
	{
		cout<<(inv * 0.03) + inv - 30<<endl;
	}
	
	
	return 0;
}