#include <iostream>
using namespace std;

int main()
{
    
    int code, quantity;
    cin>>code>>quantity;
    
    int vUnitario, vBruto;
    float desconto, vTotal;
    if (code > 0 and code <= 10)
    {
		vUnitario = 10;
		vBruto = vUnitario * quantity;
		
		if (vBruto < 250)
		{
			desconto = vBruto * 0.05;
		}
		else if (vBruto >= 250 and vBruto <= 500)
		{
			desconto = vBruto * 0.10;
		}
		else
		{
			desconto = vBruto * 0.15;
		}
		
		vTotal = vBruto - desconto;
	}
	else if (code > 10 and code <= 20)
    {
		vUnitario = 15;
		vBruto = vUnitario * quantity;
		
		if (vBruto < 250)
		{
			desconto = vBruto * 0.05;
		}
		else if (vBruto >= 250 and vBruto <= 500)
		{
			desconto = vBruto * 0.10;
		}
		else
		{
			desconto = vBruto * 0.15;
		}
		
		vTotal = vBruto - desconto;
	}
	else if (code > 20 and code <= 30)
    {
		vUnitario = 20;
		vBruto = vUnitario * quantity;
		
		if (vBruto < 250)
		{
			desconto = vBruto * 0.05;
		}
		else if (vBruto >= 250 and vBruto <= 500)
		{
			desconto = vBruto * 0.10;
		}
		else
		{
			desconto = vBruto * 0.15;
		}
		
		vTotal = vBruto - desconto;
	}
	else if (code > 30 and code <= 40)
    {
		vUnitario = 30;
		vBruto = vUnitario * quantity;
		
		if (vBruto < 250)
		{
			desconto = vBruto * 0.05;
		}
		else if (vBruto >= 250 and vBruto <= 500)
		{
			desconto = vBruto * 0.10;
		}
		else
		{
			desconto = vBruto * 0.15;
		}
		
		vTotal = vBruto - desconto;
	}
	
	cout<<vUnitario<<endl<<vBruto<<endl<<desconto<<endl<<vTotal;
    
    return 0;
}
