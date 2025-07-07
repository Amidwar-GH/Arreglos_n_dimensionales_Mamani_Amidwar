/*8. Espiral de Matriz: Escribe un programa que recorra los elementos de una matriz cuadrada de 5x5 
en orden espiral. El recorrido debe comenzar en la esquina superior izquierda de la matriz y avanzar 
en sentido horario, imprimiendo los elementos en el orden en que se encuentran siguiendo un camino 
espiral. 
 
Matriz: 
1  2  3  4  5 
6  7  8  9  10 
11 12 13 14 15 
16 17 18 19 20 
21 22 23 24 25 
 
Ejemplo de salida: 
Recorrido en espiral: 
1 2 3 4 5 10 15 20 25 24 23 22 21 16 11 6 7 8 9 14 19 18 17 12 13 */

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	const int N=5;
	int Matriz[N][N];
	bool Rep[N][N]={false};
	
	srand(time(0));

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            Matriz[i][j] = rand() % 9 + 1;
        }
    }
    
    cout << "Matriz:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << Matriz[i][j] << " ";
        }
        cout << endl;
    }
	
	int deltaX[4] = {0,1,0,-1};
	int deltaY[4] = {1,0,-1,0};
	
	int x=0;
	int direccion = 0;
	int y=0;
	
	
	cout<<"\nRecorrido en espiral: "<<endl;
	for(int i=0; i<N*N; i++){
		cout<<Matriz[x][y]<<" ";
		Rep[x][y] = true;
		
		int nx = x+deltaX[direccion];
		int ny = y+deltaY[direccion];
		
		if(nx<0 || nx>=N || ny<0 || ny>=N || Rep[nx][ny]){
			direccion = (direccion+1)%4;
			nx = x+deltaX[direccion];
			ny = y+deltaY[direccion];
		}
		
		x=nx;
		y=ny;
	}
	
	cout<<endl;
	cout<<endl;
	
	return 0;
}
