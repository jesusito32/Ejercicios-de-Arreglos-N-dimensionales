#include <iostream>

using namespace std;

int main(){
	int matriz[4][4],fila1,fila2,cambio1;
	cout<< "Cambio de 2 filas de matrices(4x4) " << endl; 
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
	
	cout<< "Filas a intercambiar:" << endl;
	cin>>fila1;
	cin>>fila2;
	  
	for(int j=0;j<4;j++){
		cambio1=matriz[fila1][j];
		matriz[fila1][j]=matriz[fila2][j];
		matriz[fila2][j]=cambio1;
	}
	 
	cout<<"Matriz Resultante:"<<endl;
	for(int i=0;i < 4;i++){
		for(int j=0; j < 4; j++){
		cout<< matriz[i][j]<<" ";   
		}
	cout<<endl;
	}

	return 0;
}
