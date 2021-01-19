#include <iostream>
#include <cmath>

//Converte a altura que se quer chegar em número de degraus baseado na altura dos degraus

using namespace std;

int main()
{
    
    float hdegrau, htotal, hdegrauconv, ndegraus;
    cin>>hdegrau>>htotal;
    
    hdegrauconv = hdegrau / 100;
    ndegraus = htotal / hdegrauconv;
    cout<<ceil (ndegraus)<<endl;
    
    return 0;
}
