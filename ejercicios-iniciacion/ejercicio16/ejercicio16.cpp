#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int cantidad=0, numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    while (numero > 0) {
        cout << numero << endl;
        cantidad++;
        cout << "Ingrese otro numero: ";
        cin >> numero;
    }
    
    cout << "Cantidad de numeros ingresados: " << cantidad;

    return 0;
}
