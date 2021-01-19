#include <iostream>
using namespace std;

int main()
{
    
    float salarioBase, imposto, gratificacao, salarioLiquido;
    int tempoServico;
    char categoria;
    cin>>salarioBase>>tempoServico;
    
    if (salarioBase < 200.00)
    {
		imposto = 0;
	}
	else if (salarioBase >= 200.00 and salarioBase <= 450.00)
	{
		imposto = salarioBase * 0.03;
	}
	else if (salarioBase > 450.00 and salarioBase < 700.00)
	{
		imposto = salarioBase * 0.08;
	}
	else
	{
		imposto = salarioBase * 0.12;
	}
    
    if (salarioBase > 500.00)
    {
		if (tempoServico <= 3)
		{
			gratificacao = salarioBase * 0.2;
		}
		else
		{
			gratificacao = salarioBase * 0.3;
		}
	}
	else
	{
		if (tempoServico <= 3)
		{
			gratificacao = salarioBase * 0.23;
		}
		else if (tempoServico > 3 and tempoServico < 6)
		{
			gratificacao = salarioBase * 0.35;
		}
		else
		{
			gratificacao = salarioBase * 0.33;
		}
	}
	
	salarioLiquido = salarioBase - imposto + gratificacao;
	
	if (salarioLiquido < 350.00)
	{
		categoria = 'A';
	}
	else if (salarioLiquido >= 350.00 and salarioLiquido < 600.00)
	{
		categoria = 'B';
	}
	else
	{
		categoria = 'C';
	}
	
	cout<<imposto<<endl<<gratificacao<<endl<<salarioLiquido<<endl<<categoria;
    
    return 0;
}
