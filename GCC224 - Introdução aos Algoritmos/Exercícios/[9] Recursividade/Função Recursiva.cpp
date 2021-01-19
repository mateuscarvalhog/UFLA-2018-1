#include <iostream>

using namespace std;

int MIN(int num1, int num2, int num3){
    if ((num1 <= num2) and (num1 <= num3))
        return num1;
    else if ((num2 <= num1) and (num2 <= num3))
        return num2;
    else 
		return num3;
}

int funcao(int n){
    if (n < 4)
        return n;
    else
		return MIN(funcao(n - 1), funcao(n - 2), funcao(n - 3))+1;
}

int main() {
    int n;
    cin>>n;
    
    cout<<funcao(n)<<endl;
    
    return 0;
}
