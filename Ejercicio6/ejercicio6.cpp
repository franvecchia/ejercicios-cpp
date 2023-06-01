#include <iostream>
using namespace std;

int main () {
    int N, maximoValor=0;

    cout << "Ingrese el tamano del vector: " <<endl;
    cin >> N;

    int VALOR[N];

    for (int i=0; i<N; i++){
        cout << "Ingrese un valor para la posicion " << i <<":";
        cin >> VALOR[i];
    }

    maximoValor = VALOR[0];

    for (int k=0; k<N; k++){
        if (VALOR[k] > maximoValor){
            maximoValor = VALOR[i];
        }
    }

    cout << "El valor maximo en el vector es: " << maximoValor;
    cout << "Encontrado en la/s posicion/es: ";

    for (int j = 0; j < N; j++)
    {
        if (VALOR[j] == maximoValor){
            cout << j << " ";
        }
    }
    

    return 0;
}