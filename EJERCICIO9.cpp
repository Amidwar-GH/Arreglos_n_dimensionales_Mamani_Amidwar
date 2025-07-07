/*9. Programa que imprime un cuadrado latino de orden N. Un cuadrado latino de orden N es una matriz 
cuadrada en la que la primera fila contiene los N primeros números naturales y cada una de las 
siguientes N-1 filas contiene la rotación de la fila anterior un lugar a la derecha. Ejemplo: Cuadrado 
latino de orden 4.  
1 2 3 4  
4 1 2 3  
3 4 1 2  
2 3 4 1 */

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	int N;

    cout << "Digite el orden del cuadrado latino: ";
    cin >> N;

    int Matriz[20][20];
	
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			Matriz[i][j] = ((j-i+N)%N)+1;
		}
	}
	
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cout<<Matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
