#include <iostream>

using namespace std;

int main()
{
    
    float num1, num2, num3, num4, bigger, second;
    cin>>num1>>num2>>num3>>num4;
    
    bigger = num1;
    second = num2;
    
    if (num2 > num1)
    {
		bigger = num2;
		second = num1;
	}
	if (num3 > second)
	{
		second = num3;
	}
	if (num3 > bigger)
	{
		second = bigger;
		bigger = num3;
	}
	if (num4 > second)
	{
		second = num4;
	}
	if (num4 > bigger)
	{
		second = bigger;
		bigger = num4;
	}
	
	cout<<bigger<<endl<<second<<endl;
    
    return 0;
}
