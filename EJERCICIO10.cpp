/*10. Generador de Tablero de Buscaminas: Desarrolla un programa que genere un tablero inicial para 
el juego de Buscaminas en una cuadr�cula de 10x10. El programa debe:  
a) Crear aleatoriamente un tablero donde cada celda puede contener una mina (1) o estar vac�a (0).  
b) Para cada celda, calcular y mostrar el n�mero de minas en las ocho celdas adyacentes (no se 
cuenta la celda misma).  
c) Mostrar el tablero original con las minas y el tablero con los n�meros lado a lado.  
Nota: Recuerda que en Buscaminas, el n�mero en una celda indica cu�ntas minas hay alrededor, no 
incluyendo la propia celda.*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	int Buscaminas[10][10];
	
	srand(time(0));
	
	
	cout<<"***********************************\n";
	cout<<"* El tablero inicial del juego es *\n";
	cout<<"***********************************\n";
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			Buscaminas[i][j]=rand()%2;
		}
	}
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			cout<<Buscaminas[i][j]<<" "; 
		}
		cout<<endl;
	}
	
	int deltaX[]={-1, -1, -1,  0, 0, 1, 1, 1};
	int deltaY[]={-1,  0,  1, -1, 1, -1, 0, 1};
	
	
	
	
	return 0;
}
