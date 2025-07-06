/*6. Reflejar una Imagen: Implemente un programa que refleje horizontalmente una imagen 
representada por una matriz de 6x6. El programa debe intercambiar los elementos de cada fila para 
obtener la imagen reflejada. 
 
Matriz: 
1  2  3  4  5 
6  7  8  9  1 
2  3  4  5  6 
7  8  9  1  2 
3  4  5  6  7 
Ejemplo de Salida 
Matriz reflejada horizontalmente: 
5  4  3  2  1 
1  9  8  7  6 
6  5  4  3  2 
2  1  9  8  7 
7  6  5  4  3 */

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	int Matriz[6][6];
	
	srand(time(0));
	
	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
			Matriz[i][j] = rand()%9+1;
		}
	}
	
	cout<<"Matriz"<<endl;
	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
			cout<<Matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	return 0;
}
