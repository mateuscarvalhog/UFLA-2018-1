#include <iostream>

using namespace std;

int main()
{
    
    int count = 1, numA = 0, numB = 0;
    
    while (count <= 10)
    {
		char letra;
		cin>>letra;
		
		if (letra == 'a')
		{
			numA++;
		}
		else
		{
			numB++;
		}
		count++;
	}
	
	if (numA < numB)
	{
		cout<<1<<endl;
	}
	else
	{
		cout<<0<<endl;
	}
    
    return 0;
}