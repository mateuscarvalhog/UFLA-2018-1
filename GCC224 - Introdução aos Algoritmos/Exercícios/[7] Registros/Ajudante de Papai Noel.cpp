#include <iostream>
#include <string>

using namespace std;

int main(){
	int n = 0, cont = 0;
	cin >> n;
	
	struct dados{
		string nome;
		string toy;
		int good;
		int bad;
	} crianca[n];
	
	for(int i = 0; i < n; i++){
		cin >> crianca[i].nome;
		cin >> crianca[i].toy;
		cin >> crianca[i].good;
		cin >> crianca[i].bad;
	}
	
	for(int i = 0; i < n; i++){
		if(crianca[i].good > crianca[i].bad){
			cout << crianca[i].toy << " ";
			cont++;
		}
	}
	
	if(cont == 0){
		cout << "nada";
	}
	
	return 0;
}
