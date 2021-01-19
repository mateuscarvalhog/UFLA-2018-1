#include <iostream>
using namespace std;

int main()
{
    
    int N, cont = 0;
    float razao, pg = 1;
    cin>>razao>>N;
    
    cout<<1<<endl;
    
    while (cont < N - 1)
    {
		pg *= razao;
		cout<<pg<<endl;
		
		cont++;
	}
	
    
    return 0;
}
