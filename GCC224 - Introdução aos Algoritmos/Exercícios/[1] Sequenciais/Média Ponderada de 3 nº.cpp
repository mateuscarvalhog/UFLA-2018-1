#include <iostream>

using namespace std;

int main()
{
    
    float nota1, nota2, nota3, mp;
    int peso1, peso2, peso3, pesot;
    cin>>nota1>>nota2>>nota3>>peso1>>peso2>>peso3;
    
    pesot = peso1 + peso2 + peso3;
    mp = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / pesot;
    cout<<mp<<endl;
    
    
    return 0;
}
