/*5. Buscar el Máximo y Mínimo: Escriba un programa que encuentre el valor máximo y el valor 
mínimo en una matriz de 4x4, indicando sus posiciones.*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	int Matriz[4][4];
	int MAXIMO ;
	int MINIMO;
	
	srand(time(0));
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			Matriz[i][j] = rand()%9+1;
		}
	}
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<Matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
