#include <iostream>
using namespace std;

bool esPar (int i) {
    return i%2==0;
}

bool segunSumatoria (int sumatoria) {
    if (sumatoria>0) {
        return true;
    } else {
        return false;
    }
}

void imprimirPares (int pares[], int contPares) {
    for (int j=0;j<contPares;j++) {
        cout << pares[j] << endl;
    } 
} 

void imprimirImpares (int impares[], int contImpares) {
    for (int j=0;j<contImpares;j++) {
        cout << impares[j] << endl;
    } 
}

int main () {
    int N, sumatoria=0, contPares=0, contImpares=0;
    cout << "Ingrese el tamanio del vector: ";
    cin >> N;

    int VEC[N];
    int pares[N], impares[N];

    for (int i=0;i<N;i++) {
        cout << "Ingrese un valor en la posicion del vector " << i << ": ";
        cin >> VEC[i];

        sumatoria += VEC[i];

        if (esPar(i)) {
            pares[contPares] = VEC[i];
            contPares++;
        } else {
            impares[contImpares] = VEC[i];
            contImpares++;
        }
    }

    if (segunSumatoria(sumatoria)) {
        imprimirPares(pares, contPares);
    } else {
        imprimirImpares(impares, contImpares);
    }

    return 0;
}