#include <iostream>
using namespace std;

int main () {
    int M, N;
    float acumPromedio=0, cont=0;
    cout << "Ingrese el tamanio de las filas de la matriz: ";
    cin >> M;
    cout << "Ingrese el tamanio de las columnas de la matriz: ";
    cin >> N;

    int MATRIZA[M][N];

    for (int i=0;i<M;i++) {
        for (int j=0;j<N;j++) {
            cout << "Ingrese el numero en la posicion [" << i << "][" << j << "]: ";
            cin >> MATRIZA[i][j];
        }
    }

    /*for (int i=0;i<M;i++) {
        for (int j=0;j<N;j++) {
            cout << MATRIZA[i][j] << " ";
        }
        cout << endl;
    }*/

    // a
    for (int i=0;i<N;i++) {
        for (int j=0;j<M;j++) {
            cout << MATRIZA[j][i] << " ";
        }
        cout << endl;
    }

    // b
    for (int i=0;i<M;i++) {
        for (int j=0;j<N;j++) {
            acumPromedio += MATRIZA[i][j];
            cont++;
        }
    }

    cout << "El promedio de las componentes de la matriz fue: " << acumPromedio/cont << endl;

    // c
    /* int VECSUMCOL[N];
    for (int j=0;j<N;j++) {
        for (int i=0;i<M;i++) {
            VECSUMCOL[j] += MATRIZA[i][j];
        }
    }

    for (int i=0;i<N;i++) {
        cout << VECSUMCOL[i] << endl;
    } */

    // d
    int VECMAXFIL[M];
    for (int i=0;i<M;i++) {
        for (int j=0;j<N;j++) {
            if (MATRIZA[i][j] > VECMAXFIL[i] || j==0) {
                VECMAXFIL[i] = MATRIZA[i][j];
            }
        }
    }

    for (int i=0;i<M;i++) {
        cout << VECMAXFIL[i] << endl;
    }

    return 0;
}