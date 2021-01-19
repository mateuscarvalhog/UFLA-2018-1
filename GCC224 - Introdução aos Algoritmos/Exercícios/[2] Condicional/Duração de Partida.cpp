#include <iostream>
using namespace std;

int main()
{
    
    int horaInicio, minInicio, horaTermino, minTermino, horaDuracao, minDuracao;
    cin>>horaInicio>>minInicio>>horaTermino>>minTermino;
    
    if (horaInicio > horaTermino)
    {
		horaDuracao = (24 - horaInicio) + horaTermino;
		
		if (minInicio > minTermino)
		{
			minDuracao = (60 - minInicio) + minTermino;
			horaDuracao -= 1;
		}
		else
		{
			minDuracao = minTermino - minInicio;
		}
	}
	else
	{
		horaDuracao = horaTermino - horaInicio;
		
		if (minInicio > minTermino)
		{
			minDuracao = (60 - minInicio) + minTermino;
			horaDuracao -= 1;
		}
		else
		{
			minDuracao = minTermino - minInicio;
		}
	}
	
	cout<<horaDuracao<<" "<<minDuracao<<endl;
    
    return 0;
}
