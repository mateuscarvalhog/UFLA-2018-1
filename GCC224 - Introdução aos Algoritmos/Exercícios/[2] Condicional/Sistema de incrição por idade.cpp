#include <iostream>

using namespace std;

int main() {
	
	int age;
	cin>>age;
	
	if (age>=5 and age<=7)
	{
		cout<<"Infantil"<<endl;
	}
	else if (age>=8 and age<=10)
	{
		cout<<"Juvenil"<<endl;
	}
	else if (age>=11 and age<=15)
	{
		cout<<"Adolescente"<<endl;
	}
	else if (age>=16 and age<=30)
	{
		cout<<"Adulto"<<endl;
	}
	else if (age>30)
	{
		cout<<"Senior"<<endl;
	}
	else
	{
		cout<<"Nao registrado"<<endl;
	}
	
	return 0;
}