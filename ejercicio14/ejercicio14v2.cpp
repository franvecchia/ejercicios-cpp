#include <iostream>
using namespace std;

int main () {
    int numeros, cantidad, suma=0;
    float promedio;
    int i=0;

    while (i<5) {
         cout << "Ingrese un numero: ";
        cin >> numeros;
       if (numeros > 100) {
          promedio += numeros;
          cantidad++;
       } else if (numeros < -10) {
           suma += numeros;
       }
       i++;
    }
    
    cout << "El promedio de los numeros mayores que 100: " << promedio/cantidad << endl;
    cout << "La suma de los numeros menores que -10: " << suma << endl;

    return 0;
}