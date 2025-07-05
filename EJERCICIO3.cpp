/*3. Suma de Diagonales: Desarrolle un programa que sume los elementos de las dos diagonales de una 
matriz de 4x4 y muestre el resultado. */

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	int SumaDP=0;
	int SumaDS=0;
	int Matriz[4][4];
	
	srand(time(0));
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			Matriz[i][j] = rand()%9+1;
		}
	}
	
	cout<<"Matriz."<<endl;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<Matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if(i==j){
				SumaDP=SumaDP+Matriz[i][j];
			}
		}
	}
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if(i+j == 3){
				SumaDS=SumaDS+Matriz[i][j];
			}
		}
		
	}
	cout<<"----------------------------------------"<<endl;
	cout<<"La suma de la diagonal PRINCIPAL es: "<<SumaDP;
	cout<<"\nLa suma de la diagonal SECUNDARIA es: "<<SumaDS;
	
	return 0;
}
