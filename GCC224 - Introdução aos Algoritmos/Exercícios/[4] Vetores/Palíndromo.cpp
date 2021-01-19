#include <iostream>
using namespace std;

int main(){
	int tam;
	cin>>tam;
	
	char palavra[tam];
	for (int i = 0; i < tam; i++)
		cin>>palavra[i];
	
	bool igual = true;
	int inicio = 0, fim = tam - 1;
	
	while ((inicio < fim) and (igual)){
		if (palavra[inicio] != palavra[fim])
			igual = false;
		else
			cout<<inicio<<" "<<palavra[inicio]<<" "<<fim<<" "<<palavra[fim]<<" ";
		
		inicio++;
		fim--;
	}
	cout<<endl;
	
	if (igual == false)
		cout<<"nao";
	else
		cout<<"sim";
	
	return 0;
}
