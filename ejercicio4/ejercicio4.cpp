#include <iostream>
using namespace std;

int main () {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    float resultadoPuntoA = numero/4;
    float resultadoPuntoB = numero%5;
    float resultadoPuntoC = resultadoPuntoA/7;


    cout << "El numero ingresado dividido 5 es: " << resultadoPuntoA << endl;
    cout << "El resto del numero por 5 es: "<< resultadoPuntoB << endl;
    cout << "El resultado del punto A divido 7 es: "<< resultadoPuntoC << endl;

    return 0; 
}