#include <iostream>

using namespace std;

int main(){
	int matriz[3][3],elemento,n;
	cout<< "Busqueda de elemento de matriz " << endl; 
	cout<< "____________________________ " << endl; 
	cout<< "Ingrese los elementos de la matriz" << endl; 
	for(int i=0;i < 3;i++){
		for(int j=0; j < 3; j++){
		cout<<"Ingresa elemento ("<<i<< "x"<<j<<"):"<<endl;
		cin >> matriz[i][j];   
		}	
	}
	cout<<"Matriz:"<<endl;
	for(int i=0;i < 3;i++){
		for(int j=0; j < 3; j++){
		cout<< matriz[i][j]<<" ";   
		}
	cout<< endl;
	}
	cout<<endl;
	cout<<"Ingrese el elemento a buscar:"<<endl;
	cin >> n;
	cout<<"El valor "<<n<<" se encuentra en:"<<endl; 
	for(int i=0;i < 3;i++){
		for(int j=0; j < 3; j++){
		elemento=matriz[i][j];
		if(elemento==n){
			cout<<"Fila "<<i<<", Columna "<<j<<endl;
			 
			}
		}	
	}


	return 0;
	}
