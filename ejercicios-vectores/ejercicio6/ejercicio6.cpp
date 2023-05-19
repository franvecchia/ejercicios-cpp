#include <iostream>
using namespace std;

int calcularMaximo (int maximo, int VALOR[], int i) {
    if (VALOR[i] > maximo || i==0) {
        maximo = VALOR[i];
    }

    return maximo;
}

int calcularMinimo (int minimo, int VALOR[], int i) {
    if (VALOR[i] < minimo || i==0) {
        minimo = VALOR[i];
    }

    return minimo;
}

void calcularPosicionesMaximos (int &contPos, int j, int maximo, int VALOR[], int POS[]) {
    if (maximo == VALOR[j]) {
        POS[contPos] = j;
        contPos++;
    }
} 

int main () {
    int N,maximo, minimo, contPos=0;
    cout << "Ingrese el tamanio del vector: ";
    cin >> N;

    int VALOR[N]={6,6,6,6,6,6}, POS[N];

    for (int i=0;i<N;i++) {
        maximo = calcularMaximo(maximo, VALOR, i);
        minimo = calcularMinimo(minimo, VALOR, i);
    }

    for (int j=0;j<N;j++) {
        calcularPosicionesMaximos(contPos, j, maximo, VALOR, POS);
    }

    cout << "El maximo fue: " << maximo << endl;
    cout << "El minimo fue: " << minimo << endl;
    cout << "La/s posicion/es del maximo fueron: " << endl;
    for (int k=0;k<contPos;k++) {
        cout << POS[k] << endl;
    }

    return 0;
}