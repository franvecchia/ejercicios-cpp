#include <iostream>
using namespace std;

int main () {
    double numero;
    double sumatoriaMayores=0, cant=0;
    double sumatoriaMenores=0;

    for (int i=0;i<50;i++) {
        cout << "Ingrese un numero: ";
        cin >> numero;
        if (numero > 100) {
            sumatoriaMayores += numero;
            cant++;
        } else if (numero < -10) {
            sumatoriaMenores += numero;
        }
    }

    cout << "Promedio de los mayores que 100: " << (sumatoriaMayores/cant) << endl;
    cout << "Suma de los menores que -10: " << sumatoriaMenores << endl;

    return 0;
}