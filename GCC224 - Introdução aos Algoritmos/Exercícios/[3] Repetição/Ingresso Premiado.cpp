#include <iostream>

using namespace std;

int main()
{
    
    int quantidadeIngressos;
    cin>>quantidadeIngressos;
    
    int count = 1;
    bool encontrou = false;
    int ganhador = 0;
    while (count <= quantidadeIngressos and encontrou == false)
    {
        int ingresso;
        cin>>ingresso;
        
        if (count == ingresso)
        {
            ganhador = count;
            encontrou = true;
        }
        
        count++;
        
    }
    
    cout<<ganhador<<endl;
    
    return 0;
}