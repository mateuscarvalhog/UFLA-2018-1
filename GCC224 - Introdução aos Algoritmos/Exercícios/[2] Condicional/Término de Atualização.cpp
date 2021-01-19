#include <iostream>

using namespace std;

int main()
{
    
    int diaAtual, horaAtual, minAtual, duracao;
    cin>>diaAtual>>horaAtual>>minAtual>>duracao;
    
    int dia, hora, min, restodia, restohora;
    dia = diaAtual + (duracao / 1440);
    restodia = duracao % 1440;
    hora = horaAtual + (restodia / 60);
    
    if (hora > 23)
    {
		hora -= 24;
		dia++;
	}
	
	restohora = restodia % 60;
    min = minAtual + restohora;
    
    if (min > 59)
    {
		min -= 60;
		hora++;
	}
	
	if (hora > 23)
	{
		hora -=24;
		dia++;
	}
	
	cout<<dia<<" "<<hora<<" "<<min<<endl;
    
    return 0;
}
