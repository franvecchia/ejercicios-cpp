#include <iostream>
using namespace std;

int main () {
    int N, sumatoriaDiagonalPrincipal=0, sumatoriaDiagonalSecundaria=0;
    cout << "Ingrese el tamanio de filas y columnas: ";
    cin >> N;

    int cuadrada[N][N];

    // a
    for (int i=0;i<N;i++) {
        for (int j=0;j<N;j++) {
            cout << "Ingrese el valor en la posicion: [" << i << "][" << j << "]: ";
            cin >> cuadrada[i][j];
        }
    }

    for (int i=0;i<N;i++) {
        sumatoriaDiagonalPrincipal+=cuadrada[i][i];
    }

    for (int i=0;i<N;i++) {
        sumatoriaDiagonalSecundaria+=cuadrada[i][N-1-i];
    }

    if (sumatoriaDiagonalPrincipal>sumatoriaDiagonalSecundaria) {
        cout << "Los elementos de la diagonal principal son: " << endl; 
        for (int i=0;i<N;i++) {
            cout << cuadrada[i][i] << endl;
        }
    } else if (sumatoriaDiagonalSecundaria>sumatoriaDiagonalPrincipal) {
        cout << "Los elementos de la diagonal secundaria son: " << endl;
        for (int i=0;i<N;i++) {
            cout << cuadrada[i][N-1-i] << endl;
        }
    } else {
        cout << "Las sumatorias son iguales." << endl;
    }

    // b
    int maximo, acumCuartos=0, filaMatrizMaxima=0, columnaMatrizMaxima=0;
    int matrizMaxima[N/2][N/2]={0};

    for (int i=0;i<N/2;i++) {
        for (int j=0;j<N/2;j++) {
            acumCuartos+=cuadrada[i][j];
            matrizMaxima[filaMatrizMaxima][columnaMatrizMaxima]=cuadrada[i][j];
            columnaMatrizMaxima++;
        }
        columnaMatrizMaxima=0;
        filaMatrizMaxima++;
    }

    maximo=acumCuartos;
    acumCuartos=0;
    filaMatrizMaxima=0;
    columnaMatrizMaxima=0;

    for (int i=0;i<N/2;i++) {
        for (int j=N/2;j<N;j++) {
            acumCuartos+=cuadrada[i][j];
        }
    }


    if (acumCuartos>maximo) {
        maximo = acumCuartos;
        for (int i=0;i<N/2;i++) {
            for (int j=N/2;j<N;j++) {
                matrizMaxima[filaMatrizMaxima][columnaMatrizMaxima]=cuadrada[i][j];
                columnaMatrizMaxima++;
            }
            columnaMatrizMaxima=0;
            filaMatrizMaxima++;
        }
    }
    acumCuartos=0;
    filaMatrizMaxima=0;
    columnaMatrizMaxima=0;

    for (int i=N/2;i<N;i++) {
        for (int j=0;j<N/2;j++) {
            acumCuartos+=cuadrada[i][j];
        }
    }

    if (acumCuartos>maximo) {
        maximo = acumCuartos;
        for (int i=N/2;i<N;i++) {
            for (int j=0;j<N/2;j++) {
                matrizMaxima[filaMatrizMaxima][columnaMatrizMaxima]=cuadrada[i][j];
                columnaMatrizMaxima++;
            }
            columnaMatrizMaxima=0;
            filaMatrizMaxima++;
        }
    }
    acumCuartos=0;
    filaMatrizMaxima=0;
    columnaMatrizMaxima=0;

    for (int i=N/2;i<N;i++) {
        for (int j=N/2;j<N;j++) {
            acumCuartos+=cuadrada[i][j];
        }
    }

    if (acumCuartos>maximo) {
        maximo = acumCuartos;
        for (int i=N/2;i<N;i++) {
            for (int j=N/2;j<N;j++) {
                matrizMaxima[filaMatrizMaxima][columnaMatrizMaxima]=cuadrada[i][j];
                columnaMatrizMaxima++;
            }
            columnaMatrizMaxima=0;
            filaMatrizMaxima++;
        }
    }
    acumCuartos=0;
    filaMatrizMaxima=0;
    columnaMatrizMaxima=0;

    cout << "La matriz maxima es: " << endl;
    for (int i=0;i<N/2;i++) {
        for (int j=0;j<N/2;j++) {
            cout << matrizMaxima[i][j] << " ";
        }
        cout << endl;
    }

    // c
    int sumatoriaInferior=0, sumatoriaSuperior=0;
    for (int i=0;i<N;i++) {
        for (int j=0;j<N;j++) {
            if (i>=j) {
                sumatoriaInferior+=cuadrada[i][j];
            }

            if (j>=i) {
                sumatoriaSuperior+=cuadrada[i][j];
            }
        }
    }

    int matrizTriangularMaxima[N][N]={};

    if (sumatoriaSuperior>sumatoriaInferior) {
        for (int i=0;i<N;i++) {
            for (int j=0;j<N;j++) {
                if (j>=i) {
                    matrizTriangularMaxima[i][j]=cuadrada[i][j];
                }
            }
        }
    } else {
        for (int i=0;i<N;i++) {
            for (int j=0;j<N;j++) {
                if (i>=j) {
                    matrizTriangularMaxima[i][j]=cuadrada[i][j];
                }
            }
        }
    }

    cout << "Los elementos de la triangular maxima son: " << endl;
    for (int i=0;i<N;i++) {
        for (int j=0;j<N;j++) {
            cout << matrizTriangularMaxima[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}