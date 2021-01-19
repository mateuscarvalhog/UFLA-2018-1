#include <iostream>
using namespace std;

int main()
{
    
    int dimensao, i = 0;
    cin>>dimensao;
    
    while (i < dimensao)
    {
		int j = 0; 
		
		while (j < dimensao)
		{
			int ij = (i + j) % 2;
			
			if (ij == 0)
			{
				cout<<".";
			}
			else
			{
				cout<<"#";
			}
			j++;
		}
		i++;
		cout<<endl;
	}
    
    return 0;
}
