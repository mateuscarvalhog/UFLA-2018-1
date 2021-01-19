#include <iostream>
using namespace std;

int main(){
    
    int numeros[8];
    for (int i = 0; i < 8; i++)
		cin>>numeros[i];
	
    int positivos[8], negativos[8];
    int p = 0, n = 0;
    
    for (int i = 0; i < 8; i++){
		if (numeros[i] > 0){
			positivos[p] = numeros[i];
			p++;
		}else if (numeros[i] < 0){
			negativos[n] = numeros[i];
			n++;
		}
	}
	
	for (int i = 0; i < p; i++)
		cout<<positivos[i]<<" ";
	cout<<endl;
		
	for (int i = 0; i < n; i++)
		cout<<negativos[i]<<" ";
    cout<<endl;
    
    return 0;
}
