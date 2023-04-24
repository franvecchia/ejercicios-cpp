#include <iostream>
using namespace std;

int main () {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    int res3 = (numero/5)/7;

    cout << "La quinta parte del numero ingresado es: " << numero/5 << endl;
    cout << "El resto del numero ingresado dividiendolo por 5 es: " << numero % 5 << endl;
    cout << "La septima parte del resultado del primer punto es: " << res3 << endl;

    return 0;
}