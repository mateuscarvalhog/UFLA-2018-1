#include <iostream>

using namespace std;

int main()
{
    
    int ms, h, min, restoh;
    double restomin, s;
    cin>>ms;
    
    h = ms / 3600000;
    restoh = ms % 3600000;
    min = restoh / 60000;
    restomin = restoh % 60000;
    s = restomin / 1000;
    
    cout<<h<<" : "<<min<<" : "<<s<<endl;
    
    return 0;
}
