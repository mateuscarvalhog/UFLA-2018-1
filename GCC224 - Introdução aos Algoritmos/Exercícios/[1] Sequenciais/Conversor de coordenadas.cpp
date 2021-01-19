#include <iostream>

using namespace std;

int main()
{
    
    float l_window, h_window, x_mouse, y_mouse;
    cin>>l_window>>h_window>>x_mouse>>y_mouse;
    cout<<((2 * x_mouse) / l_window) - 1<<endl<< -(((2 / h_window) * y_mouse) - 1);
    
    
    
    return 0;
}
