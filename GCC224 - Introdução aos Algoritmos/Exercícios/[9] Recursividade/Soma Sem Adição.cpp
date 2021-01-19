#include <iostream>
using namespace std;

int sucessor(int& x, int& y);
int antecessor(int& x, int& y);

int soma(int& x, int& y){
	
	if (y == 0)
		return x;
	else if (y < 0){
		antecessor(x, y);
		return soma(x, y);
	}else{
		sucessor(x, y);
		return soma(x, y);
	}
}

sucessor(int& x, int& y){
	
	y--;
	return ++x;
}

antecessor(int& x, int& y){
	
	y++;
	return --x;
}	

int main(){
	
	int x, y;
	cin>>x>>y;
	
	cout<<soma(x, y);
	
	return 0;
}
