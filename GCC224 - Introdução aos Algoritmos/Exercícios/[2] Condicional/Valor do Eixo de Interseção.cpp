#include <iostream>
using namespace std;

int main()
{
    
    float xponto1, yponto1, xponto2, yponto2, p0, p;
    char eixo0;
    cin>>xponto1>>yponto1>>xponto2>>yponto2>>eixo0>>p0;
    
    if (xponto1 == xponto2 and eixo0 == 'y')
    {
		p = xponto1;
		cout<<p<<endl;
	}
	else if (yponto1 == yponto2 and eixo0 == 'x')
	{
		p = yponto1;
		cout<<p<<endl;
	}
	else if (xponto1 == xponto2 and eixo0 =='x')
	{
		cout<<"nenhuma"<<endl;
	}
	else if (yponto1 == yponto2 and eixo0 == 'y')
	{
		cout<<"nenhuma"<<endl;
	}
    else if (eixo0 == 'x')
    {
		p = ((p0 - xponto1) * (yponto2 - yponto1) / (xponto2 - xponto1)) + yponto1;
		cout<<p<<endl;
	}
	else if (eixo0 == 'y')
	{
		p = ((p0 - yponto1) * (xponto2 - xponto1) / (yponto2 - yponto1)) + xponto1;
		cout<<p<<endl;
	}
    
    return 0;
}
