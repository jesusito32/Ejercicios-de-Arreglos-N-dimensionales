#include <iostream>

using namespace std;

int main(){
	int matriz[4][4],matrizF[4][4];
	cout<< "Rotar 90° en sentido horario una matriz  (4x4) " << endl; 
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
	
	for(int i=0;i < 4; i++){
		for(int j=0; j<4; j++){
			matrizF[j][3-i]=matriz[i][j];
		}
	} 
	
	cout<<"Matriz Resultante:"<<endl;
	for(int i=0;i < 4;i++){
		for(int j=0; j < 4; j++){
		cout<< matrizF[i][j]<<" ";   
		}
	cout<<endl;
	}
}
