#include <iostream>

using namespace std;

int main()
{
    
    int anterior;
    int count = 1;
    bool ordenado = true;
    
    while (count <= 5)
    {
		int x;
		cin>>x;
		
		if (count>1 and x < anterior)
		{
			ordenado = false;
		}
		anterior = x;
		count++;
    }
    if (ordenado == true)
    {
		cout<<1<<endl;
	}
	else
	{
		cout<<0<<endl;
    }
    
    return 0;
}