#include <iostream>
using namespace std;

int main()
{
    
    int n1, n2, resto;
    cin>>n1>>n2;
    
    if (n1 > n2)
    {
		while (n2 != 0)
		{
			resto = n1 % n2;
			n1 = n2;
			n2 = resto;
		}
		cout<<n1;
	}
	else
	{
		while (n1 != 0)
		{
			resto = n2 % n1;
			n2 = n1;
			n1 = resto;
		}
		cout<<n2;
	}
    
    return 0;
}
