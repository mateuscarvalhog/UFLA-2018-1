#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    
    double x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    
    double Dx, Dy, D;
    Dx = pow((x2 - x1), 2);
    Dy = pow((y2 - y1), 2);
    D = sqrt ((Dx + Dy));
    cout<<D<<endl;
    
    return 0;
}
