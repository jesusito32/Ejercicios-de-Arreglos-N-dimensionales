#include <iostream>

using namespace std;

int main(){
	int matriz[4][4],numeroMax,numeroMen,fila,fila1,columna,columna1=0;
	cout<< "El numero maximo y minimo de una matriz(4x4) " << endl; 
	cout<< "____________________________ " << endl; 
	cout<< "Ingrese los elementos de la matriz" << endl; 
	for(int i=0;i < 4;i++){
		for(int j=0; j < 4; j++){
		cout<<"Ingresa elemento ("<<i<< "x"<<j<<"):"<<endl;
		cin >> matriz[i][j];   
		}	
	}
	
	cout<<"Matriz:"<<endl;
	for(int i=0;i < 6;i++){
		for(int j=0; j < 6; j++){
		cout<< matriz[i][j]<<" ";   
		}
	cout<<endl;
	}
	
	numeroMax=matriz[0][0];
	numeroMen=matriz[0][0];
	for(int i=0;i < 4;i++){
		for(int j=0; j < 4; j++){
			if(matriz[i][j]>numeroMax){
			numeroMax=matriz[i][j];
			fila=i;
			columna=j;
			}
		}
	}
	
	for(int i=0;i < 4;i++){
		for(int j=0; j < 4; j++){
			if(matriz[i][j]<numeroMen){
			numeroMen=matriz[i][j];
			fila1=i;
			columna1=j;
				
			}
		}
	}
	
	cout<<"El numero maximo de la matriz es: "<<numeroMax<<" Posicion["<<fila<<","<<columna<<"]"<<endl; 
	cout<<"El numero minimo de la matriz es: "<<numeroMen<<" Posicion["<<fila1<<","<<columna1<<"]"<<endl; 

	return 0;
}
