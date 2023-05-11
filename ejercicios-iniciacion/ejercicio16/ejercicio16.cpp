#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int cantidad=0, numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << numero << endl;

    while (numero > 0) {
        cout << "Ingrese otro numero: ";
        cin >> numero;
        cout << numero << endl;
        cantidad++;
    }
    
    cout << "Cantidad de numeros ingresados: " << cantidad;

    return 0;
}
