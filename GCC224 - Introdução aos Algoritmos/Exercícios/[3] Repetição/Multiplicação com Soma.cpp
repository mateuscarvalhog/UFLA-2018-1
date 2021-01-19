#include <iostream>

using namespace std;

int main()
{
    
    int a, b;
    cin>>a>>b;
    int soma = 0;
    int count = 1;
    
    while (count<=b)
    {
		soma += a;
		cout<<soma<<endl;
		
		count++;
	}
    
    return 0;
}