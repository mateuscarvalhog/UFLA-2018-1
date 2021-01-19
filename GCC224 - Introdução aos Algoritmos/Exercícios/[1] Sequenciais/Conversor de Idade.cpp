#include <iostream>

using namespace std;

int main()
{

	// Despreza anos bissextos, meses tem 30 dias e ano 48 semanas
	
	int idade;
	cin>>idade;
	
	int meses;
	meses = idade * 12;
	cout<<meses<<""<<endl;
	
	int semanas;
	semanas = idade * 48;
	cout<<semanas<<""<<endl;
	
	int dias;
	dias = idade * 360;
	cout<<dias<<""<<endl;
	
	return 0;
}
