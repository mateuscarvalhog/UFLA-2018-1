#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct dados{
	string nome;
	string ano;
	string distancia;
	string hemisferio;
	bool excluido;
};

void realocar(dados* &lista, int &n, int &cont){
	
	dados* aux = new dados[n];
	
	for (int i = 0; i < cont; i++){
		aux[i] = lista[i];
	}
	
	n += 2;
	
	delete[] lista;
	
	lista = new dados[n];
	
	for (int i = 0; i < cont; i++){
		lista[i] = aux[i];
	}
	
	delete[] aux;
	
	aux = NULL;
	
	cout << "memoria ajustada " << n << endl;
}

void incluir(dados* &lista, int &n, int &cont){
	
	if(cont == n){
		realocar(lista, n, cont);
	}
	
	cin.ignore();				
	getline(cin, lista[cont].nome);
	getline(cin, lista[cont].ano);
	getline(cin, lista[cont].distancia);
	getline(cin, lista[cont].hemisferio);
		
	lista[cont].excluido = false;
	
	cont++;
}

void excluir(dados* &lista, int cont){
	
	bool existe = false; //verifica existência para saída "nao existe";
	
	string escolhido;
	
	cin.ignore();
	
	getline(cin, escolhido);
		
	for (int i = 0; i < cont; i++){
		if (escolhido == lista[i].nome and !lista[i].excluido){
			lista[i].excluido = true;
			existe = true;
		}	
	}
	if(!existe){
		cout << "nao existe" << endl;
	}
}

void listar(dados* &lista, int cont){
	
	for (int i = 0; i < cont; i++){
		if (lista[i].excluido == false){
			cout<<lista[i].nome<<endl;
			cout<<lista[i].ano<<endl;
			cout<<lista[i].distancia<<endl;
			cout<<lista[i].hemisferio<<endl;
		}	
	}	
}

void alterar(dados* &lista, int cont){
	
	bool existe = false; //verifica existência para saída "nao existe";
	string comparar;			
	
	cin.ignore();
	getline(cin, comparar);
	
	for (int i = 0; i < cont; i++){
		if (comparar == lista[i].nome and !lista[i].excluido){
			getline(cin, lista[i].ano);
			getline(cin, lista[i].distancia);
			getline(cin, lista[i].hemisferio);
			
			existe = true;
		}
	}
	
	if(!existe){
		cout<<"nao existe"<<endl;
	}	
}

void salvar(dados* &lista, int &n, int &cont){
	
	ofstream arq("data.dat", ios::binary);
	 
	char c[1];
	 
	int arquivados = 0;
	 
	if(arq){
		for (int i = 0; i < cont; i++){
			if (!lista[i].excluido){
				arquivados++;
				
				int tam = (lista[i].nome).size();
				
				for (int j = 0; j < tam; j++){
					c[0] = lista[i].nome[j];
					arq.write(c, 1);
				}
				
				arq.write("*", 1);
				tam = (lista[i].ano).size();
				
				for (int j = 0; j < tam; j++){
					c[0] = lista[i].ano[j];
					arq.write(c, 1);
				}
				
				arq.write("*", 1);
				tam = (lista[i].distancia).size();
				
				for (int j = 0; j < tam; j++){
					c[0] = lista[i].distancia[j];
					arq.write(c, 1);
				}
				
				arq.write("*", 1);
				tam = (lista[i].hemisferio).size();
				
				for (int j = 0; j < tam; j++){
					c[0] = lista[i].hemisferio[j];
					arq.write(c, 1);
				}
				
				arq.write("*", 1);
			}
		}		
	}
	
	arq.close();
	
	cout << "gravados " << arquivados << endl; 
}

void carregar(dados* &lista, int &n, int &cont){
	
	n = 2;
	
	delete[] lista;
	
	lista = new dados[n];
	
	ifstream arq("data.dat", ios::binary);
	
	char c[1];
	
	int dado = 1;
	
	cont = 0;
	
	if (arq){
		while(!arq.eof()){
			arq.read(c, 1);
			
			if(c[0] == '*'){
				dado++;
			} else {
				if(cont == n){
					realocar(lista, n, cont);
				}
				switch(dado){
					case 1:{
						lista[cont].nome += c[0];
						break;
					}
					case 2:{
						lista[cont].ano += c[0];
						break;
					}
					case 3:{
						lista[cont].distancia += c[0];
						break;
					}
					case 4:{
						lista[cont].hemisferio += c[0];
						break;
					}
				}
			}
			if(dado == 5){
				dado = 1;
				lista[cont].excluido = false;
				cont++;
			}
		}
	}
}

int main (){
	
	int n = 2;
		
	dados* lista = new dados[n];
	
	int opcao; //opcao é o numero do menu;
		
	//contadores
	int cont = 0; //controla nº de dados inseridos (base de comparação para opções 2 à 4);
	
	do{
		cin >> opcao;
		
		//incluir[1];
		if (opcao == 1){
			incluir(lista, n, cont);
		}		
		//excluir[2];
		if (opcao == 2){
			excluir(lista, cont);
		}		
		//listar[3];
		if (opcao == 3){
			listar(lista, cont);
		}		
		//alterar[4];
		if (opcao == 4){
			alterar(lista, cont);
		}
		//salvar[5];	
		if (opcao == 5){
			salvar(lista, n, cont);
		}
		//carregar[6];
		if (opcao == 6){
			carregar(lista, n, cont);
		}	
		//sair[7];
	}while (opcao != 7);
	
	delete[] lista;
			
	return 0;
}
