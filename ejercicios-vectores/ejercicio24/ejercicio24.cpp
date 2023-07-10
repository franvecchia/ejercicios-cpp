#include <iostream>
using namespace std;

int contarElementos (int vector[], int cant) {
    int cont=0;
    for (int i=0;i<cant;i++) {
        if (vector[i] != 0) {
            cont++;
        }
    }

    return cont;
}

int posicionMayor (int vector[], int cant) {
    int mayor;
    for (int i=0;i<cant;i++) {
        if (vector[i] > mayor || i==0) {
            mayor=vector[i];
        }
    }

    int j=0;
    bool primeraVez=true;
    int posicion;
    while (j<cant && primeraVez==true) {
        if (vector[j] == mayor) {
            posicion=j;
            primeraVez=false;
        } else {
            j++;
        }
    }

    return posicion;
}

int posicionesMayor (int vector[], int cant, int posiciones[]) {
    int mayor;
    for (int i=0;i<cant;i++) {
        if (vector[i] > mayor || i==0) {
            mayor=vector[i];
        }
    }

    int cont=0;
    for (int i=0;i<cant;i++) {
        if (vector[i] == mayor) {
            posiciones[cont] = i;
            cont++;
        }
    }

    return cont;
}

int main () {
    int vector[1000]={18,163,24,54,163,12,24,51, 163};
    int tamanioReal=contarElementos(vector, 1000);

    // a
    int posicion = posicionMayor(vector, tamanioReal);
    cout << posicion << endl;
    cout << "------------------------" << endl;
    // b
    int posiciones[tamanioReal];
    int cont=posicionesMayor(vector, tamanioReal, posiciones);
    for (int i=0;i<cont;i++) {
        cout << posiciones[i] << endl;
    }
    return 0;
}