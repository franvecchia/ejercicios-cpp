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

bool esElemento (int vector[], int cant, int DATO) {
    int i=0;
    bool resultado=false;
    while (i<cant && resultado==false) {
        if (vector[i] == DATO) {
            resultado=true;
        } else {
            i++;
        }
    }

    return resultado;
}

int posicionDelElemento (int vector[], int cant, int DATO) {
    int i=0;
    bool resultado=false;
    int posicion=-1;
    while (i<cant && resultado==false) {
        if (vector[i] == DATO) {
            resultado=true;
            posicion=i;
        } else {
            i++;
        }
    }

    return posicion;
}

void posicionesDelElemento (int vector[], int cant, int DATO, int posiciones[], int &cont) {
    posiciones[cant];
    cont=0;
    for (int i=0;i<cant;i++) {
        if (vector[i] == DATO) {
            posiciones[cont] = i;
            cont++;
        }
    }
}

void primeraYUltimaPosicion (int vector[], int cant, int DATO, int primeraUltima[]) {
    primeraUltima[2];
    bool primeraPosicion=true;
    for (int i=0;i<cant;i++) {
        if (vector[i] == DATO) {
            if (primeraPosicion) {
                primeraUltima[0]=i;
                primeraPosicion=false;
            } else {
                primeraUltima[1] = i;
            }
        }
    }
}

int main () {
    int vector[1000]={1,2,3,4,5,13,7,13,9,10,11,12,13,14,15};
    int DATO = 13;

    int tamanioReal=contarElementos(vector, 1000);
    // a
    bool resultado = esElemento(vector, tamanioReal, DATO);
    // b
    int posicion=posicionDelElemento(vector, tamanioReal, DATO);
    cout << posicion << endl;
    cout << "-----------------" << endl;
    // c 
    int posiciones[tamanioReal];
    int cont=0;
    posicionesDelElemento(vector, tamanioReal, DATO, posiciones, cont);
    for (int i=0;i<cont;i++) {
        cout << posiciones[i] << endl;
    }
    cout << "-------------------" << endl;
    // d
    int primeraUltima[2];
    primeraYUltimaPosicion(vector, tamanioReal, DATO, primeraUltima);
    cout << primeraUltima[0] << endl;
    cout << primeraUltima[1] << endl;

    return 0;
}