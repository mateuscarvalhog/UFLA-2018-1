#include <iostream>
using namespace std;

int main()
{
    
    float horaExtra, horaFalta, horaTotal, minTotal;
    int gratificacao;
    cin>>horaExtra>>horaFalta;
    
    horaTotal = horaExtra - (2 / 3 * horaFalta);
    minTotal = horaTotal * 60;
    
    if (minTotal > 2400)
    {
		gratificacao = 500;
	}
	else if (minTotal > 1800 and minTotal <= 2400)
	{
		gratificacao = 400;
	}
	else if (minTotal > 1200 and minTotal <= 1800)
	{
		gratificacao = 300;
	}
	else if (minTotal > 600 and minTotal <= 1200)
	{
		gratificacao = 200;
	}
	else
	{
		gratificacao = 100;
	}
	
	cout<<gratificacao;
    
    return 0;
}
