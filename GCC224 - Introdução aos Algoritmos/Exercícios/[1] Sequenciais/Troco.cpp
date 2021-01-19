#include <iostream>

using namespace std;

int main()
{
    int pago, total, troco;
    int notas20, notas10, notas5, notas2, notas1;
    int resto20, resto10, resto5, resto2;
    cin>>pago>>total;
    
    troco = pago - total;
    notas20 = troco / 20;
    resto20 = troco % 20;
    notas10 = resto20 / 10;
    resto10 = resto20 % 10;
    notas5 = resto10 / 5;
    resto5 = resto10 % 5;
    notas2 = resto5 / 2;
    resto2 = resto5 % 2;
    notas1 = resto2;
    
    cout<<notas20<<endl<<notas10<<endl<<notas5<<endl<<notas2<<endl<<notas1<<endl;
    
    return 0;
}