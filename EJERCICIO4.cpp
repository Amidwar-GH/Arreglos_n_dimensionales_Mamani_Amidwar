/*4. Intercambio de Filas: Desarrolle un programa que intercambie dos filas específicas de una matriz 
de 4x4 y muestre la matriz resultante. 
Ejemplo de Entrada
 Matriz: 
1  2  3  4 
5  6  7  8 
9  10 11 12 
13 14 15 16 
 
Filas a intercambiar: 
0 
2
 Matriz resultante: 
9  10 11 12 
5  6  7  8 
1  2  3  4 
13 14 15 16 */

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


int main(){
	int F1,F2;
	int Matriz[4][4];
	int auxiliar;
	
	srand(time(0));
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			Matriz[i][j] = rand()%9+1;
		}
	}
	
	cout<<"Matriz inicial."<<endl;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<Matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	
	do{
		cout<<"\nDigite las filas a intercambiar"<<endl;
		cout<<"Fila: ";
		cin>>F1;
		cout<<"Fila: ";
		cin>>F2;
	}while(F1<0 || F1>3 || F2<0 || F2>3);
	
	
	cout<<endl;
	
	for(int j=0; j<4; j++){
		auxiliar = Matriz[F1][j];
		Matriz[F1][j] = Matriz[F2][j];
		Matriz[F2][j] = auxiliar;
	}
	
	
	cout<<"Matriz final."<<endl;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<Matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
