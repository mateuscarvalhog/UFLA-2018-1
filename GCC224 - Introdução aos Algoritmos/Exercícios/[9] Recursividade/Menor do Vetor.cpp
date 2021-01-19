#include <iostream>
using namespace std;

int menores ( int v[], int n, int i, int menor )
{
	if ( i >= 0 )
	{
		if ( v[i] < menor )
		{
			menor = v[i];
		}
		return menores ( v, n, i-1, menor );
	}
	return menor;
}
int main()
{ 
	int n;
	cin >> n;
	int v[n];
	for ( int i = 0; i < n; i++ )
	{
		cin >> v[i];
	}
	int i = n-1;
	int menor = v[0];
	cout << menores ( v, n, i, menor );
return 0;
}

