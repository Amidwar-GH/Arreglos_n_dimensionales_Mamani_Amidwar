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
	int F,C,F1,C1;
	
	srand(time(0));
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			Matriz[i][j] = rand()%9+1;
		}
	}
	
	cout<<"Matriz"<<endl;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<Matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	
	MAXIMO = Matriz[0][0];
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if(Matriz[i][j]>MAXIMO){
				MAXIMO = Matriz[i][j];
				F=i;
				C=j;
			}
		}
		cout<<endl;
	}
	cout<<"-----------------------------------------------"<<endl;
	
	cout<<"La posicion o posiciones del maximo valor es:  "<<endl;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if(Matriz[i][j] == MAXIMO){
				cout<<"["<<i<<","<<j<<"]"<<endl;
			}
		}
	}
	
	MINIMO = Matriz[0][0];
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if(Matriz[i][j]<MINIMO){
				MINIMO = Matriz[i][j];
				F1 = i;
				C1 = j;
			}
		}
	}
	
	cout<<"La posicion o posiciones del minimo valor es:  "<<endl;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if(Matriz[i][j] == MINIMO){
				cout<<"["<<i<<","<<j<<"]"<<endl;
			}
		}
	}
	
	return 0;
}
