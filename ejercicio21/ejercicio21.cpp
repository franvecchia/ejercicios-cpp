#include <iostream>
using namespace std;

int main () {
    int M, numero, mayor, menor, posMayor, posMenor;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> M;
    cout << "Ingrese un numero: ";
    cin >> numero;
    mayor = numero;
    menor = numero;

    for (int i=1;i<=M-1;i++) {
        cout << "Ingrese un numero: ";
        cin >> numero;

        if (numero>mayor) {
            mayor=numero;
            posMayor = i;
        } else if (numero<menor) {
            menor=numero;
            posMenor=i;
        }
    }

    cout << "El numero mayor ingresado es " << mayor << " en la posicion  " << posMayor << endl;
    cout << "El numero mas chico ingresado es " << menor << " en la posicion " << posMenor << endl;

    return 0;
}