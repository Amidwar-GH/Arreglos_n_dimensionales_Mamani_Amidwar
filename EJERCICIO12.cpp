/*12. Juego de la Vida de Conway: Desarrolla un programa que simule el "Juego de la Vida" de Conway 
en un tablero de 10x10. El programa debe:  
a) Crear aleatoriamente un tablero inicial donde cada celda puede estar viva (1) o muerta (0).  
b) Calcular el estado del tablero en la segunda generación.  
c) Mostrar el tablero inicial y el tablero de la segunda generación lado a lado. 
En el "Juego de la Vida", el estado de cada celda en la próxima generación se determina por el 
número de celdas vivas adyacentes: 
1. Una célula viva con menos de dos vecinos vivos muere (subpoblación). 
2. Una célula viva con dos o tres vecinos vivos sigue viva. 
3. Una célula viva con más de tres vecinos vivos muere (sobrepoblación). 
4. Una célula muerta con exactamente tres vecinos vivos se convierte en una célula viva 
(reproducción). */

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
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
	
	
	
	return 0;
}
