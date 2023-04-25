#include <iostream>
using namespace std;

void leer(string mensaje, int &valor){
    cout << mensaje;
    cin >> valor;
    return;
}

int calcularFactorial(int nro){
    int fact = 1;
    for (int i = 1; i <= nro; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main () {
    int numero;
    leer("Ingrese un numero: ", numero);   
    
    if (numero <= 0)
    {
        cout << "El numero debe ser mayor o igual a cero";
        return -1;
    }

    int factorial = calcularFactorial(numero);
    cout << "El factorial de " << numero << " es "<< factorial << endl;
    
    return 0;
}