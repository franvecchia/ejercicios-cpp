#include <iostream>
using namespace std;

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
    int numeroA=5, numeroB=7;

    int divisor = maxComunDivisor(numeroA, numeroB);
    cout << "El maximo comun divisor entre " << numeroA << " y " << numeroB << " es " << divisor << endl;
    
    return 0;
}