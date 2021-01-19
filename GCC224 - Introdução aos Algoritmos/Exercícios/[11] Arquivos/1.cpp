#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	int x = 100;
	string v[x];
	int cont = 0;
	ifstream arqA ( "arquivoA.txt" );
	string palavra1;
	if ( arqA )
	{
		while ( arqA >> palavra1 )
		{
			v[cont] = palavra1;
			cont++;
		}
	}
	x = cont;
	ifstream arqB ( "arquivoB.txt" );
	int y = 100;
	string vet[y];
	int marc = 0;
	string palavra2;
	if ( arqB )
	{
		while ( arqB >> palavra2 )
		{
			vet[marc] = palavra2;
			marc++;
		}
	}
	y = marc;
	ofstream arqC ( "arquivoC.txt" );
	if ( x == y )
	{
		for ( int i = 0; i < y; i++ )
		{
			arqC << v[i] << " " << vet[i] << " ";
		}
	}
	if ( x > y )
	{
		for ( int i = 0; i < y; i++ )
		{
			arqC << v[i] << " " << vet[i] << " ";
		}
		for ( int i = y; i < x; i++ )
		{
			arqC << v[i] << " ";
		}
	}
	if ( y > x )
	{
		for ( int i = 0; i < x; i++ )
		{
			arqC << v[i] << " " << vet[i] << " ";
		}
		for ( int i = x; i < y; i++ )
		{
			arqC << vet[i] << " ";
		}
	}
return 0;
}
