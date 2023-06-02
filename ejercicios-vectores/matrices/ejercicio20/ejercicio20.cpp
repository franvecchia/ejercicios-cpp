#include <iostream>
using namespace std;

int main () {
    int M; 
    float acumPromedio=0, cont=0;
    int pos_i, pos_j, pos_k, maximo;
    cout << "Ingrese la cantidad de planos, filas y columnas: ";
    cin >> M;
    int MATRIDIM[M][M][M]={0};

    for (int i=0; i<M; i++) {
        for (int j=0;j<M;j++) {
            for (int k = 0; k<M; k++) {
                cout << "Ingrese el elemento [" << i << "][" << j << "][" << k << "]: ";
                cin >> MATRIDIM[i][j][k];
            }
        }
    }

    // a, por planos, filas, columnas
    for (int i=0;i<M;i++) {
        for (int j=0;j<M;j++) {
            for (int k=0;k<M;k++) {
                cout << MATRIDIM[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // b
    for (int i=0; i<M; i++) {
        for (int j=0;j<M;j++) {
            for (int k = 0; k<M; k++) {
                acumPromedio += MATRIDIM[i][j][k];
                cont++;
            }
        }
    }

    cout << "El promedio de la matriz es: " << acumPromedio/cont << endl;

    // c
    for (int i=0; i<M; i++) {
        for (int j=0;j<M;j++) {
            for (int k = 0; k<M; k++) {
                if ((MATRIDIM[i][j][k] > maximo) || (k==0 && i==0)) {
                    maximo = MATRIDIM[i][j][k];
                    pos_i = i;
                    pos_j = j;
                    pos_k = k;
                }
            }
        }
    }

    cout << "El valor maximo de la matriz es: " << maximo << " y se encontraba en la posicion [" << pos_i << "][" << pos_j << "][" << pos_k << "]" << endl;

    return 0;
}