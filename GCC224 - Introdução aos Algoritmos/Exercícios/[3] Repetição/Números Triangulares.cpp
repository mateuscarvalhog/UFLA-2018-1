#include <iostream>

using namespace std;

int main()
{
    
    int niveis;
    cin>>niveis;
    
    int soma = 0;
    int count = 1;
    
    while (count <= niveis)
    {
		soma += count;
		
		count++;
	}
	
	cout<<soma<<endl;
    
    return 0;
}