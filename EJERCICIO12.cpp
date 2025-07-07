/*12. Juego de la Vida de Conway: Desarrolla un programa que simule el "Juego de la Vida" de Conway 
en un tablero de 10x10. El programa debe:  
a) Crear aleatoriamente un tablero inicial donde cada celda puede estar viva (1) o muerta (0).  
b) Calcular el estado del tablero en la segunda generaci�n.  
c) Mostrar el tablero inicial y el tablero de la segunda generaci�n lado a lado. 
En el "Juego de la Vida", el estado de cada celda en la pr�xima generaci�n se determina por el 
n�mero de celdas vivas adyacentes: 
1. Una c�lula viva con menos de dos vecinos vivos muere (subpoblaci�n). 
2. Una c�lula viva con dos o tres vecinos vivos sigue viva. 
3. Una c�lula viva con m�s de tres vecinos vivos muere (sobrepoblaci�n). 
4. Una c�lula muerta con exactamente tres vecinos vivos se convierte en una c�lula viva 
(reproducci�n). */

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	int FILA,COLUMNA;
	int CelViva=0;
	int MatrizInicial[10][10];
	int MatrizFinal[10][10];
	
	srand(time(0));
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			MatrizInicial[i][j]=rand()%2;
		}
	}
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			cout<<MatrizInicial[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int deltaX[]={-1,-1,-1,0,0,1,1,1};
	int deltaY[]={-1,0,1,-1,1,-1,0,1};
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			CelViva=0;
			
			for(int k=0; k<8; k++){
				FILA=i+deltaX[k];
				COLUMNA= j+deltaY[k];
				
				if(FILA>=0 && FILA<10 && COLUMNA>=0 && COLUMNA<10){
					CelViva = CelViva + MatrizInicial[FILA][COLUMNA];
				}
			}
			
			if(MatrizInicial[i][j] == 1){
				if(CelViva<2 || CelViva>3){
					MatrizFinal[i][j]=0;
				}else{
					MatrizFinal[i][j]=1;
				}
			}else{
				if(CelViva==3){
					MatrizFinal[i][j]=1;
				}else{
					MatrizFinal[i][j]=0;
				}
			}
		}
	}
	
	
	
	
	
	return 0;
}
