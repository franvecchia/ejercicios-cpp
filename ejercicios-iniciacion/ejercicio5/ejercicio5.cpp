#include <iostream>
using namespace std;

int main () {
    int numero1=5, numero2=7;

    if (numero1>numero2) {
        cout << "El numero uno es mayor" << endl;
    } else if (numero2>numero1) {
        cout << "El numero dos es mayor" << endl;
    } else {
        cout << "Los numeros son iguales" << endl;
    }

    return 0;
}