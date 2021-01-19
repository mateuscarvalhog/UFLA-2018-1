#include <iostream>
using namespace std;

int main()
{
    
    int N, F1 = 0, F2 = 1, cont = 0;
    cin>>N;
    
    while (cont < N)
    {	
		if (cont == F1)
		{
			cout<<F1<<endl;
		}
		else if (cont == F2)
		{
			cout<<F2<<endl;
		}
		else
		{
			int Fn;
			Fn = F1 + F2;
			F1 = F2;
			F2 = Fn;
			cout<<Fn<<endl;
		}
		cont++;
	}
	
    return 0;
}
