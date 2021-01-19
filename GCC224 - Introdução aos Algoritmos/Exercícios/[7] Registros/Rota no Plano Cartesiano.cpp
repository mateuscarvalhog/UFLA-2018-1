#include <iostream>
#include <cmath>
using namespace std;

struct coordenadas{
	double x;
	double y;
};

int main(){
	
	coordenadas pontos[5];
	for (int i = 0; i < 5; i++){
		cin>>pontos[i].x;
		cin>>pontos[i].y;
	}
	
	int inicio, fim;
	
	double distancia, distTotal = 0;
	
	cin>>inicio>>fim;
	
	for (int i = 2; i < 5; i++){
		distancia = sqrt(pow((pontos[fim].y - pontos[inicio].y), 2) + pow((pontos[fim].x - pontos[inicio].x), 2));
		distTotal += distancia;
		
		inicio = fim;
		cin>>fim;
	}
	
	cout<<distTotal;
	
	return 0;
}
