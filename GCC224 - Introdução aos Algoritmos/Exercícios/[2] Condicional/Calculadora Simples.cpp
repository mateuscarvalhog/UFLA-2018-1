#include <iostream>
using namespace std;

int main()
{
    
    float num1, num2;
    char operacao;
    cin>>num1>>operacao>>num2;
    
    if (operacao == '+')
    {
		cout<<num1 + num2<<endl;
	}
	else if (operacao == '-')
	{
		cout<<num1 - num2<<endl;
	}
	else if (operacao == '*')
	{
		cout<<num1 * num2<<endl;
	}
	else if (operacao == '/')
	{
		if (num2 == 0)
		{
			cout<<"erro"<<endl;
		}
		else
		{
			cout<<num1 / num2<<endl;
		}
	}
    
    return 0;
}
