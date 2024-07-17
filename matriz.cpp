#include <iostream>

using namespace std;

int main(){
	int matriz[3][3],matriz1[3][3],matrizf[3][3];
	cout<< "Multiplicacion de matrices(3x3) " << endl; 
	cout<< "____________________________ " << endl; 
	cout<< "Ingrese los elementos de la primera matriz" << endl; 
	for(int i=0;i < 3;i++){
		for(int j=0; j < 3; j++){
		cout<<"Ingresa elemento ("<<i<< "x"<<j<<"):"<<endl;
		cin >> matriz[i][j];   
		}	
	}
	
	cout<< "Ingrese los elementos de la segunda matriz" << endl;	
	for(int i=0;i < 3;i++){
		for(int j=0; j < 3; j++){
		cout<<"Ingresa elemento ("<<i<< "x"<<j<<"):"<<endl;
		cin >> matriz1[i][j];   
		}	
	}
	
	for(int i=0;i < 3;i++){
		for(int j=0; j < 3; j++){
		matrizf[i][j]=matriz[i][0]*matriz1[i][j]+matriz[i][1]*matriz1[i][j]+matriz[i][2]*matriz1[i][j];
		}	
	}
	
	cout<<"Matriz A:"<<endl;
	for(int i=0;i < 3;i++){
		for(int j=0; j < 3; j++){
		cout<< matriz[i][j]<<" ";   
		}
	cout<<endl;
	}
	
	cout <<endl;	
	cout<<"Matriz B:"<<endl;
	for(int i=0;i < 3;i++){
		for(int j=0; j < 3; j++){
		cout<< matriz1[i][j]<<" ";   
		}
	cout <<endl;	
	}	
	
	cout<<"Matriz AxB:"<<endl;
	for(int i=0;i < 3;i++){
		for(int j=0; j < 3; j++){
		cout<< matrizf[i][j]<<" ";   
		}
	cout <<endl;	
	}	

	return 0;
}
