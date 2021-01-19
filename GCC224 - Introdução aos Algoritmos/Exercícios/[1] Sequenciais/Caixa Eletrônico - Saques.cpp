#include <iostream>

using namespace std;

int main()
{
    
    int saque, notas100, notas50, notas20, notas10, notas5, notas2, notas1;
    cin>>saque;
    
    int resto100, resto50, resto20, resto10, resto5, resto2;
    
    notas100 = saque / 100;
    resto100 = saque % 100;
    
    notas50 = resto100 / 50;
    resto50 = resto100 % 50;
    
    notas20 = resto50 / 20;
    resto20 = resto50 % 20;
    
    notas10 = resto20 / 10;
    resto10 = resto20 % 10;
    
    notas5 = resto10 / 5;
    resto5 = resto10 % 5;
    
    notas2 = resto5 / 2;
    resto2 = resto5 % 2;
    
    notas1 = resto2;
    
    cout<<notas100<<endl<<notas50<<endl<<notas20<<endl<<notas10<<endl<<notas5<<endl<<notas2<<endl<<notas1;
    
    return 0;
}
