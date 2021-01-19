#include <iostream>
using namespace std;

int main()
{
    
    int num, divisor = 1, soma = 0;
    cin>>num;
    
    while (divisor <= num)
    {
		if (num % divisor == 0)
		{
			cout<<divisor;
			soma += divisor;
			if (divisor != num)
			{
				cout<<"+";
			}
		}
		divisor++;
	}
	
	cout<<"="<<soma;
    
    return 0;
}
