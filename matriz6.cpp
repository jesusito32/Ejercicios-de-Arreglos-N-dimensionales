#include <iostream>

using namespace std;

int main(){
	int fila1,fila2,cambio1;
	int matriz[6][6]={
		{1,2,3,4,5,6},
	    {7,8,9,10,11,12},
		{13,14,15,16,17,18},
		{19,20,21,22,23,24},
	    {25,26,27,28,29,30},
		{31,32,33,34,35,45}
	};
	cout<< "Simetria o reflejo de una matriz de 6x6 " << endl; 
	cout<< "____________________________ " << endl; 

	cout<<"Matriz:"<<endl;
	for(int i=0;i < 6;i++){
		for(int j=0; j < 6; j++){
		cout<< matriz[i][j]<<" ";   
		}
	cout<<endl;
	}
	
	for(int i=0;i<6;i++){
		int cont=0;
		for(int j=5; j>2;j--){
			cambio1=matriz[i][cont];
			matriz[i][cont]=matriz[i][j];
			matriz[i][j]=cambio1;	
			cont++;
		}
	}
	 
	cout<<"Matriz Resultante:"<<endl;
	for(int i=0;i < 6;i++){
		for(int j=0; j < 6; j++){
		cout<< matriz[i][j]<<" ";   
		}
	cout<<endl;
	}

	return 0;
}
