/*10. Generador de Tablero de Buscaminas: Desarrolla un programa que genere un tablero inicial para 
el juego de Buscaminas en una cuadrícula de 10x10. El programa debe:  
a) Crear aleatoriamente un tablero donde cada celda puede contener una mina (1) o estar vacía (0).  
b) Para cada celda, calcular y mostrar el número de minas en las ocho celdas adyacentes (no se 
cuenta la celda misma).  
c) Mostrar el tablero original con las minas y el tablero con los números lado a lado.  
Nota: Recuerda que en Buscaminas, el número en una celda indica cuántas minas hay alrededor, no 
incluyendo la propia celda.*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	int Buscaminas[10][10];
	int contador;
	int finalBuscaminas[10][10];
	int NuevaColumna,NuevaFila;
	srand(time(0));
	
	
	cout<<"*************************************\n";
	cout<<"* BIENVENIDO AL JUEGO DE BUSCAMINAS *\n";
	cout<<"*************************************\n";
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			Buscaminas[i][j]=rand()%2;
		}
	}
	
	/*for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			cout<<Buscaminas[i][j]<<" "; 
		}
		cout<<endl;
	}*/
	
	int deltaX[]={-1, -1, -1,  0, 0, 1, 1, 1};
	int deltaY[]={-1,  0,  1, -1, 1, -1, 0, 1};
	
	//reconocimiento de las 8 casillas alrededor
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			contador=0;
			for(int k=0; k<8; k++){
				NuevaFila = i + deltaX[k];
				NuevaColumna = j + deltaY[k];
				
				if(NuevaFila>=0 && NuevaFila<10 && NuevaColumna>=0 && NuevaColumna<10){
					if(Buscaminas[NuevaFila][NuevaColumna] == 1){
						contador = contador + 1;
					}
				}
			}
			finalBuscaminas[i][j]=contador; 
		}
	}
	
	cout<<endl;
	cout<<endl;
	
	cout<<"TABLERO INICIAL \t   TABLERO FINAL"<<endl;
	
	for(int i=0; i<10; i++){
		
		
		for(int j=0; j<10; j++){
			cout<<Buscaminas[i][j]<<" ";
		}
		
		cout<<"\t";
		
		for(int l=0; l<10; l++){
			cout<<finalBuscaminas[i][l]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
