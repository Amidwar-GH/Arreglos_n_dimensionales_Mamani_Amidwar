/*Buscar un Valor en una Matriz: Escriba un programa que busque un valor específico en una matriz 
de 3x3 y devuelva todas las posiciones donde se encuentra, indicando la fila y la columna de cada 
ocurrencia. 
Ejemplo de entrada 
	Valor a buscar: 2 				Matriz: 
	Ejemplo Salida 					1 2 3 
	El valor 2 se encuentra en: 	4 2 6 
	Fila 0, Columna 1				7 2 9
	Fila 1, Columna 1 
	Fila 2, Columna 1*/								
									 

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

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

