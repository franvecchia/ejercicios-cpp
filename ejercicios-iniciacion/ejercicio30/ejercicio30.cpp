#include <iostream>
using namespace std;

int main () {
    int numero, cantCeros=0, cantPositivos=0, sumatoriaNegativos=0;
    float acum=0, promedio=0;

    // punto 2: for(int i=0;i<N;i++)
    // punto 3: while(numero!=numeroAnterior)
    // punto 4: while(cantCeros<=4 && cantidad<N)
    // punto 5: while(cantCeros<=4 && cantidad<N && promedio<=6)
    for (int i=0;i<167;i++) {
        cout << "Ingrese un numero: " << endl;
        cin >> numero;

        if (numero==0) {
            cantCeros++;
        }

        if (numero>0) {
            acum+=numero;
            cantPositivos++;
            //punto 5: promedio=acum/cantPositivos;
        }

        if (numero<0) {
            sumatoriaNegativos+=numero;
        }
    }

    cout << "Cantidad de ceros: " << cantCeros << endl;
    cout << "Promedio de los positivos: " << acum/cantPositivos << endl;
    cout << "Sumatoria de los negativos: " <<sumatoriaNegativos <<endl;

    return 0;
}