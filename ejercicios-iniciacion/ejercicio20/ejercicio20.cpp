#include <iostream>
using namespace std;

int main () {
    int numeros, mayor;

    for (int i=0;i<4;i++) {
        cout << "Ingrese un numero: ";
        cin >> numeros;

        if (numeros>mayor || i==0) {
            mayor=numeros;
        }
    }

    cout << "El mayor numero ingresado fue: " << mayor << endl;
    
    return 0;
}