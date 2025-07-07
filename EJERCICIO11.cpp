/*11. Simulación de Propagación de Fuego: Cree un programa que simule la propagación de un incendio 
en un bosque representado por una matriz de 10x10, donde los árboles pueden estar en diferentes 
estados: vivos (0), quemándose (1), quemados (2). El programa debe actualizar el estado del bosque 
en función de las siguientes reglas y mostrar el bosque en su estado inicial y después de la 
propagación del fuego: 
• Un árbol vivo (0) se convierte en quemándose (1) si al menos uno de sus vecinos está quemándose. 
• Un árbol quemándose (1) se convierte en quemado (2) en la siguiente iteración. 
• Un árbol quemado (2) permanece quemado.*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	int Bosque[10][10];
	int PrimerIncendio[10][10];
	int SegundoFuego[10][10];
	int contador;
	char bandera;
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
	
	int deltaX[]={-1, 1, 1, -1, -1, 0, 0, 1};
	int deltaY[]={-1, -1, 1, 1, 0, -1, 1, 0};
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			if(Bosque[i][j]==0){
				bandera='F';
				for(int k=0; k<8; k++){
					int fila = i + deltaX[k];
					int columna = j + deltaY[k];
					if(fila>=0 && fila<10 && columna>=0 && columna<10){
						if(Bosque[fila][columna] == 1){
							bandera = 'V';
							break;
						}
					}
				}
				if(bandera == 'V'){
					PrimerIncendio[i][j] = 1;
				}else{
					PrimerIncendio[i][j] = 0;
				}
			}
			else if(Bosque[i][j] == 1){
				PrimerIncendio[i][j]=2;
			}
			else{
				PrimerIncendio[i][j]=2;
			}
		}
	}
	
	
	
	
	return 0;
}
