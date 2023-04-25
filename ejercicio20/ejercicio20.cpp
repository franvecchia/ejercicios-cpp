#include <iostream>
using namespace std;

int main () {
    int numeros;
    cout << "Ingrese numeros: ";
    cin >> numeros;
    int mayor = numeros;

    for (int i=0;i<2;i++) {
        cout << "Ingrese numeros: ";
        cin >> numeros;

        if (numeros>mayor) {
            mayor = numeros;
        }
    }

    cout << "El mayor valor asignado es: " << mayor << endl;

	return 0;
}