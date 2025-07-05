/*Producto de Dos Matrices: Implemente un programa que multiplique dos matrices de 3x3 y 
muestre el resultado, y muestre las dos matrices y su resultado en horizontal 
Ejemplo de Salida 
Matriz A:             Matriz B:             Resultado: 
1 2 3                    9 8 7                 30    24    18 
4 5 6                    6 5 4                 84    69    54 
7 8 9                    3 2 1                 138  114  90*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main (){
	int matrizA[3][3];
	int matrizB[3][3];
	int resultado[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
	
	srand(time(0));
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			matrizA[i][j] = rand()%9+1;
			matrizB[i][j] = rand()%9+1;
		}
	}
	
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			for(int k=0; k<3; k++){
				resultado[i][j] = resultado[i][j] + matrizA[i][k]*matrizB[k][j];
			}
		}
	}
	
	cout<<"MatrizA        MatrizB          Resultado"<<endl;
	cout<<endl;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<matrizA[i][j]<<" ";
		}
		
		cout<<"\t";
		cout<<"\t";
		
		for(int j=0; j<3; j++){
			cout<<matrizB[i][j]<<" ";
		}
		
		cout<<"\t";
		cout<<"\t";
		
		for(int j=0; j<3; j++){
			cout<<resultado[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
