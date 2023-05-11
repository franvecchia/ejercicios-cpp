#include <iostream>
using namespace std;

bool esPar (int i) {
    return i%2==0;
}

int main () {
    int N,cont=0;
    cout << "Ingrese el tamanio del vector: ";
    cin >> N;
    int unArreglo[N]= {};

    for (int i=1;i<=N*2;i++) {
        if (esPar(i)) {
            unArreglo[cont]=i;
            cont++;
        }
    }

    for (int j=0;j<N;j++) {
        cout << unArreglo[j] << endl;
    }
    return 0;
}