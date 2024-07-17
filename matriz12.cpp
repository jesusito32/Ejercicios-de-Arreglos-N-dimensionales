#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int matriz[10][10];
    int n;
    
    cout << "El juego de la vida de Conway" << endl;
    cout << "------------------------------" << endl;
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = rand() % 2;
        }
    }
    
    cout <<" Veces desea repetir el juego? ";
    cin >> n;
    
    for (int g = 0; g < n; g++) {
        int newBoard[10][10];
        
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                int vecinos_vivos = 0;
                
                for (int di = -1; di <= 1; ++di) {
                    for (int dj = -1; dj <= 1; ++dj) {
                        if (di == 0 && dj == 0) continue; 
                        int ni = i + di;
                        int nj = j + dj;
                        
                        if (ni >= 0 && ni < 10 && nj >= 0 && nj < 10 && matriz[ni][nj] == 1) {
                            ++vecinos_vivos;
                        }
                    }
                }
                
                if (matriz[i][j] == 1) {
                    if (vecinos_vivos < 2 || vecinos_vivos > 3) {
                        newBoard[i][j] = 0; 
                    } else {
                        newBoard[i][j] = 1; 
                    }
                } else {
                    if (vecinos_vivos == 3) {
                        newBoard[i][j] = 1; 
                    } else {
                        newBoard[i][j] = 0; 
                    }
                }
            }
        }
        
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                matriz[i][j] = newBoard[i][j];
            }
        }
        
        cout << "Generacion " << (g + 1) << ":" << endl;
        for (int i = 0; i < 10; i++) {
            cout << "[";
            for (int j = 0; j < 10; j++) {
                cout << matriz[i][j];
            }
            cout << "]" << endl;
        }
        cout << endl;
    }

    return 0;
}