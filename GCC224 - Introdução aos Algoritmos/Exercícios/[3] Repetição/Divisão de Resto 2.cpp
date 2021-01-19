#include <iostream>
using namespace std;

int main()
{
    
    int divisor, numero;
    bool resto2 = false;
    cin>>divisor;
    
    while (resto2 == false)
    {	
		cin>>numero;
		if (numero % divisor == 2)
		{
			resto2 = true;
			cout<<numero / divisor;
		}
	}
    
    return 0;
}
