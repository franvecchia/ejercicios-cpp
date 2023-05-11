#include <iostream>
using namespace std;

void imprimirSegunUltimoNumero (int N, int unArreglo[], int positivos[], int negativos[], int contPositivos, int contNegativos) {
    if (unArreglo[N-1]<10) {
        for (int j=0;j<contNegativos;j++) {
            cout << negativos[j] << endl;
        }
    } else {
        for (int k=0;k<contPositivos;k++) {
            cout << positivos[k] << endl;
        }
    }
}

int main () {
    int N, contNegativos=0, contPositivos=0;
    cout << "Ingrese el tamanio del vector: ";
    cin >> N;
    int unArreglo[N], positivos[N], negativos[N];
    
    for (int i=0;i<N;i++) {
        cout << "Ingrese un numero en la posicion del vector " << i << ": ";
        cin >> unArreglo[i];
        if (unArreglo[i]<0) {
            negativos[contNegativos] = unArreglo[i];
            contNegativos++;
        } else {
            positivos[contPositivos] = unArreglo[i];
            contPositivos++;
        }

        if (i==N-1) {
            imprimirSegunUltimoNumero(N, unArreglo, positivos, negativos, contPositivos, contNegativos);
        }
    }
    return 0;
}