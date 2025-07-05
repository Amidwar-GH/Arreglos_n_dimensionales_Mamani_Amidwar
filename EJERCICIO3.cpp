/*3. Suma de Diagonales: Desarrolle un programa que sume los elementos de las dos diagonales de una 
matriz de 4x4 y muestre el resultado. */

#include<iostream>
#include<cstdlib>
#include<ctime>

int main(){
	
	int Matriz[3][3];
	
	srand(time(0));
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			Matriz[i][j] = rand()%9+1;
		}
	}
	
	
	
	
	return 0;
}
