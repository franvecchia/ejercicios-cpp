#include <iostream>
using namespace std;

int factorialNumero (int numeroAFactorizar) {
    int factorial=1;
    for (int k=1;k<=numeroAFactorizar;k++) {
        factorial*=k;
    }

    return factorial;
}

int main () {
    int N, numeroAFactorizar;
    cout << "Ingrese el tamanio del vector: ";
    cin >> N;

    int VEC[N], FACT[N];

    for (int i=0;i<N;i++) {
        cout << "Ingrese un valor en la posicion del vector " << i << ": ";
        cin >> VEC[i];

        numeroAFactorizar = VEC[i];
        FACT[i] = factorialNumero(numeroAFactorizar);
    }

    for (int j=0;j<N;j++) {
        cout << VEC[j] << ", factorial: " << FACT[j] << endl;
    }

    return 0;
}