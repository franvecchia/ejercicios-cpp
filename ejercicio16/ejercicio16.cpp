#include <iostream>
using namespace std;

int main () {
    int valores, cantidad=0;
    cout << "Ingrese el valor " << cantidad+1 << ": ";
    cin >> valores;

    while (valores >= 0) {
        cantidad++;
        cout << "Ingrese el valor " << cantidad+1 << ": ";
        cin >> valores;
    }

    cout << "La cantidad de valores ingresados fue: " << cantidad;

    return 0;
}