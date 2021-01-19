#include <iostream>
#include <cmath>

//Encontra embalagem em caixas de 6 produtos

using namespace std;

int main()
{
    
    int nproduct, nbox;
    cin>>nproduct;
    
    nbox = ceil (nproduct / 6.0);
    cout<<nbox<<endl;
    
    return 0;
}
