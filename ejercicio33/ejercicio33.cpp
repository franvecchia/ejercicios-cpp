#include <iostream>
using namespace std;

void leer(string mensaje, int &valor){
    cout << mensaje;
    cin >> valor;
    return;
}

int maxComunDivisor(int numA, int numB){    
    int r = numA % numB;
    while (r != 0){
        numA = numB;
        numB = r;
        r = numA % numB;
    }
    return numB;
}

int main () {
    int numeroA, numeroB;
    leer("Ingrese numero A: ", numeroA);
    leer("Ingrese numero B: ", numeroB);
    
    if (numeroB == 0)
    {
        cout << "No se puede dividir por cero";
        return -1;
    }

    int divisor = maxComunDivisor(numeroA, numeroB);
    cout << "El maximo comun divisor entre " << numeroA << " y " << numeroB << " es " << divisor << endl;
    

    return 0;
}