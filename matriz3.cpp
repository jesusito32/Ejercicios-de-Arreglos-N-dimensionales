#include <iostream>

using namespace std;

int main(){
	int matriz[4][4],elemento,matrizf[4][4];
	int suma1=0,suma2=0,sumaf=0;
	cout<< "Suma de diagonales de matrices(4x4) " << endl; 
	cout<< "____________________________ " << endl; 
	cout<< "Ingrese los elementos de la matriz" << endl; 
	for(int i=0;i < 4;i++){
		for(int j=0; j < 4; j++){
		cout<<"Ingresa elemento ("<<i<< "x"<<j<<"):"<<endl;
		cin >> matriz[i][j];   
		}	
	}
	
	cout<<"Matriz:"<<endl;
	for(int i=0;i < 4;i++){
		for(int j=0; j < 4; j++){
		cout<< matriz[i][j]<<" ";   
		}
	cout<<endl;
	}
	cout<< endl;
		
	for(int i=0;i < 4;i++){
	elemento=matriz[i][i];
	suma1=suma1+elemento;
	}

	int g=4;
	for(int i=0;i<4;i++){
	elemento=matriz[i][g];
	suma2=suma2+elemento;
	g--;	
	}
	
	sumaf=suma1+suma2;
	cout<< "LA suma de las diagonales de la matriz 4x4 es:" <<sumaf<< endl; 
}
