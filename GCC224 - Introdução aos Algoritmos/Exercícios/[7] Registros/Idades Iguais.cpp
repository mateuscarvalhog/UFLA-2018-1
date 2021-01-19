#include <iostream>
using namespace std;

int main(){
	
	int cont = 0;
	struct dados{
		int idadePai;
		int idadeMae;
		int idadeFilho;
	} familia[5];
	
	for (int i = 0; i < 5; i++){
		cin>>familia[i].idadePai;
		cin>>familia[i].idadeMae;
		cin>>familia[i].idadeFilho;
	}
	
	for (int i = 0; i < 4; i++){
		for (int j = i + 1; j < 5; j++){
			if (familia[i].idadeFilho == familia[j].idadeFilho){
				cout<<familia[i].idadePai<<" "<<familia[i].idadeMae<<endl;
				cout<<familia[j].idadePai<<" "<<familia[j].idadeMae<<endl;
				cont++;
			}
		}
	}
	
	if (cont == 0)
		cout<<-1;
		
	return 0;
}
