#include <iostream>
using namespace std;

int main () {
    int N, sumatoriaPrincipal=0, sumatoriaSecundaria=0;
    cout << "Ingrese el tamanio de filas y columnas: ";
    cin >> N;

    int CUADRADA[N][N];

    for (int i=0;i<N;i++) {
        for (int j=0;j<N;j++) {
            cout << "Ingrese el numero en la posicion [" << i << "][" << j << "]: ";
            cin >> CUADRADA[i][j];
        }
    }
    // a
    for (int i=0;i<N;i++) {
        sumatoriaPrincipal += CUADRADA[i][i];
    }

    for (int i = 0; i < N; i++) {
        sumatoriaSecundaria += CUADRADA[i][N - 1 - i];
    }

    if (sumatoriaPrincipal > sumatoriaSecundaria) {
        cout << "La sumatoria de la diagonal principal es mayor que la secundaria con un total de: " << sumatoriaPrincipal;
    } else if (sumatoriaSecundaria > sumatoriaPrincipal) {
        cout << "La sumatoria de la diagonal secundaria es mayor que la principal con un total de: " << sumatoriaSecundaria;
    } else {
        cout << "Las sumatorias de las diagonales son iguales.";
    }

    // b (suponiendo que N es par)

    // c 
    int triangularInferior=0, triangularSuperior=0;
    for (int i=0;i<N;i++) {
        for (int j=0;j<N;j++) {
            if (i>j) {
                triangularInferior += CUADRADA[i][j];
            }

            if (j>i) {
                triangularSuperior += CUADRADA[i][j];
            }
        }
    }

    if (triangularSuperior > triangularInferior) {
        cout << "La sumatoria de la triangular superior es mayor a la inferior con un total de: " << triangularSuperior << endl;
    } else if (triangularInferior > triangularSuperior) {
        cout << "La sumatoria de la triangular inferior es mayor a la superior con un total de: " << triangularInferior << endl;
    } else {
        cout << "La sumatoria de las triangulares son iguales." << endl;
    }

    return 0;
}