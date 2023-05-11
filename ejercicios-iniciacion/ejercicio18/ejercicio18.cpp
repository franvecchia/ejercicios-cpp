#include <iostream>
using namespace std;

int main() {
    int M;
    cout << "Ingrese el valor de M: ";
    cin >> M;

    int contador = 0;
    int natural = 1;

    while (contador < M) {
        if (natural % 3 == 0 && natural % 5 != 0) {
            cout << natural << endl;
            contador++;
        }
        natural++;
    }

    return 0;
}