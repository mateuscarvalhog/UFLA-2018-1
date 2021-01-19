#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    
    float n, h;
    cin>>n;
    
    h = 2 * log ((n + sqrt (pow (n, 2) + 4)) / 2);
    cout<<h<<endl;
    
    return 0;
}
