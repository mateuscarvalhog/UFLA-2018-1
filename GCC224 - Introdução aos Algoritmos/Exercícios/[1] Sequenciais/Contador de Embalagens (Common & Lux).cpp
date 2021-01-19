#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    
    int numberofproducts;
    cin>>numberofproducts;
    
    int lux = floor(numberofproducts / 3);
    int common = numberofproducts - lux;
    
    cout<<common<<endl;
    cout<<lux<<endl;
    
    return 0;
}
