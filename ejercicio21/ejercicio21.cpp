#include <iostream>
using namespace std;

int main () {
int mayorPosicion = 1;
int menorPosicion = 1;
int valorMayor;
int valorMenor;
int n = 0;
int userInput = 0;
int contador = 1;

cout << "Ingrese la cantidad de valores" << endl;
cin >> n;

cout << "Ingrese un valor" << endl;
cin >> userInput;
valorMayor = userInput;
valorMenor = userInput;

for (int i = 1; i < n; i++) {
    cout << "Ingrese un valor" << endl;
    cin >> userInput;
    contador++;
    if (userInput > valorMayor) {
        valorMayor = userInput;
        mayorPosicion = contador;
        
    }
    if (userInput < valorMenor) {
        valorMenor = userInput;
        menorPosicion = contador;
    }
    
}

cout << "El mayor es " << valorMayor << " en el lugar " << mayorPosicion << endl;
cout << "El menor es " << valorMenor << " en el lugar " << menorPosicion << endl;

 return 0;
}