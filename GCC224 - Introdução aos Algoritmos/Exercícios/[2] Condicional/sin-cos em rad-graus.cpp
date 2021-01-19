#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    
    char funcao, umAngulo;
    float angulo;
    cin>>funcao>>umAngulo>>angulo;
    
    if (funcao == 's')
    {
		if (umAngulo == 'g')
		{
			cout<<sin(angulo * M_PI / 180)<<endl;
		}
		else
		{
			cout<<sin(angulo);
		}
	}
	else if (funcao == 'c')
	{
		if (umAngulo == 'g')
		{
			cout<<cos(angulo * M_PI  / 180)<<endl;
		}
		else
		{
			cout<<cos(angulo);
		}
    }
    
    return 0;
}
