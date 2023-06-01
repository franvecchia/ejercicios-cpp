#include <iostream>
using namespace std;

int main () {
 // Variables
    int cantElementos = 0;
    int sumaElementos = 0;
 // Toma N
    cout << "Ingrese cantidad de elementos: " << endl;
    cin >> cantElementos;

// Crea el array

    int VEC[cantElementos];

// Ingresa elementos a VEC
    for (int i = 0; i < cantElementos; i++)
    {
        int userInput = 0;
        cout << "Ingrese un valor entero: " << endl;
        cin >> userInput;
        VEC[i] = userInput;
    }
    
 // Proceso (hace la suma de los elementos del vector)

    for (int i = 0; i < cantElementos; i++)
    {
        sumaElementos+= VEC[i];
    }

 // Output (si la suma es > 0, itera sobre el vector mostrando los valores cuyo indice %2 sea distinto de 0. Si no, muestra pares.)
    if (sumaElementos > 0) {
        cout << "Es mayor a 0" << endl;
        for (int i = 0; i < cantElementos; i++)
        {
            if(i%2 != 0) {
                cout << VEC[i] << endl;
            }
        }
    } else {
        cout << "Es menor a 0" << endl;
          for (int i = 0; i < cantElementos; i++)
        {
            if(i%2 == 0) {
                cout << VEC[i] << endl;
            }
        }
    }

 return 0;
}