#include <iostream>
using namespace std;

int main () {
    int valorEntero, sumaComponentes = 0;

    cout << "Ingresar valor entero (cantidad de numeros en el conjunto) menor a 25: " << endl;
    cin >> valorEntero;

    int VEC[valorEntero];

    for (int i = 0; i < valorEntero; i++) {
        cout << "Ingrese los valores del vector: " << endl;
        cin >> VEC[i];

        sumaComponentes += VEC[i];
    }

    for (int j = 0; j < valorEntero; j++) {
        if (sumaComponentes > 10) {
            if (j % 2 != 0) cout << VEC[j] << endl;
        } else {
            if (j % 2 == 0) cout << VEC[j] << endl;
        }
    }

    /* if (sumaComponentes > 0) {
        cout << "Los valores impares del conjunto son: " << endl;
        for (int j = 0; j < valorEntero; j++) {
            if (j % 2 != 0) cout << VEC[j] << endl;
        }
    } else {
        cout << "Los valores pares del conjunto son: " << endl;
        for (int k = 0; k < valorEntero; k++) {
            if (k % 2 == 0) cout << VEC[k] << endl;
        }
    } */
    
    return 0;
}