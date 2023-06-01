#include <iostream>
using namespace std;

int factorial(int numero){
    int factorial = 1;
    for(int j=1;j<=numero;j++) {
        factorial *= j;
    }

    return factorial;
}

int main () {
    int N, numeroAFactorizar;

    cout << "Ingrese el tamano del vector: " <<endl;
    cin >> N;

    int VEC[N], FACT[N];

    for (int i=0; i<N; i++){
        cout << "Ingrese un valor para la posicion " << i <<":";
        cin >> VEC[i];

        numeroAFactorizar = VEC[i];
        FACT[i] = factorial(numeroAFactorizar);
    }

    for (int k=0; k<N; k++){
        cout << VEC[k] << " factorial: " << FACT[k] << endl;
    }


    return 0;
}