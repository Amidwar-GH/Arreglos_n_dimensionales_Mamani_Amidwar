/*7. Rotación de una Imagen Representada por una Matriz: Escriba un programa que rote una matriz 
de 4x4, representando una imagen, 90 grados en sentido horario. 
Matriz: 
1  2  3  4 
5  6  7  8 
9  1  2  3 
4  5  6  7 
Matriz rotada 90 grados en sentido horario: 
4  9  5  1 
5  1  6  2 
6  2  7  3 
7  3  8  4 */

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	int Matriz[4][4];
	int MatrizRotada[4][4];
	
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			Matriz[i][j] = rand()%9+1;
		}
	}
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			//cambiamos filas por columnas
			MatrizRotada[j][3-i] = Matriz[i][j];
		}
	}
	
	cout<<"Matriz          Matriz rotada 90 grados en sentido horario"<<endl;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<Matriz[i][j]<<" ";
		}
		cout<<"\t";
		
		for(int j=0; j<4; j++){
			cout<<MatrizRotada[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
