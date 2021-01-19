#include <iostream>
using namespace std;

int main()
{
    
    int numero, fatorial = 1;
    cin>>numero;
    
    while (numero > 1)
    {
		fatorial *= numero;
		numero--;
	}
	
	cout<<fatorial;
    
    return 0;
}
