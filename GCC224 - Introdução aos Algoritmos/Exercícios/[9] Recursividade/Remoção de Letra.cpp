#include <iostream>
#include <cstring>
using namespace std;

void remover (string& palavra, int pos, int tam){
	
	if (pos == tam){
		palavra.erase(pos,1);
	}else{
		remover(palavra, pos, tam - 1);
	}
}

int main(){
	
	string palavra;
	cin>>palavra;
	
	int pos;
	cin>>pos;
	
	int tam = palavra.size();
	
	remover(palavra, pos, tam);
	
	cout<<palavra<<endl;
	
	return 0;
}
