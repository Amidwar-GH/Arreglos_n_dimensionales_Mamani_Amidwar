/*11. Simulaci�n de Propagaci�n de Fuego: Cree un programa que simule la propagaci�n de un incendio 
en un bosque representado por una matriz de 10x10, donde los �rboles pueden estar en diferentes 
estados: vivos (0), quem�ndose (1), quemados (2). El programa debe actualizar el estado del bosque 
en funci�n de las siguientes reglas y mostrar el bosque en su estado inicial y despu�s de la 
propagaci�n del fuego: 
� Un �rbol vivo (0) se convierte en quem�ndose (1) si al menos uno de sus vecinos est� quem�ndose. 
� Un �rbol quem�ndose (1) se convierte en quemado (2) en la siguiente iteraci�n. 
� Un �rbol quemado (2) permanece quemado.*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	int Bosque[10][10];
	int PrimerFuego[10][10];
	int SegundoFuego[10][10];
	
	//inicializamos el generador de numeros;
	srand(time(0));
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			Bosque[i][j] = rand()%2;
		}
	}
	//PARA VERIFICAR SI SE LLENO EL ARREGLO LUEGO SE SUPRIME 
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			cout<<Bosque[i][j]<<" "; 
		}
		cout<<endl;
	}
	
	/*int deltaX[]={-1, 1, 1, -1, -1, 0, 0, 1};
	int deltaY[]={-1, -1, 1, 1, 0, -1, 1, 0};
	
	int(i=0; i<10; i++){
		int (j=0; j<10; j++){
			contador=0;
			int(k=0; k<10; k++){
				nuevaFila = i+deltaX[k];
				nuevaColumna = i+deltaY[k];
				
			}
		}
	}*/
	
	return 0;
}
