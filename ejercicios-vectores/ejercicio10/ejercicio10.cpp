#include <iostream>
using namespace std;

int main () {
    int N, M;
    cout << "Ingrese el tamanio del vector A: ";
    cin >> N;
    cout << "Ingrese el tamanio del vector B: ";
    cin >> M;

    int A[N], B[M], C[N+M];

    for (int i=0;i<N;i++) {
        cout << "Ingrese el valor en la posicion del vector: " << i << ": ";
        cin >> A[i];
    }

    for (int i=0;i<M;i++) {
        cout << "Ingrese el valor en la posicion del vector: " << i << ": ";
        cin >> B[i];
    }

    int j=0;
    for (int i=0;i<N+M;i++) {
        if (i<N) {
            // mientras que i sea menor a N significa que tengo que cargar todavia valores del primer vector.
            C[i] = A[i];
        } 

        if (i>=N && j<M) { 
            /*si i es mayor a N significa que ya cargue todo el primer vector, 
            y repito lo mismo con una j para el vector B (mientras que j sea menor a M tengo que agregar del segundo vector)*/
            C[i] = B[j];
            j++;
        }
    }

    for (int i=0;i<N+M;i++) {
        cout << C[i] << endl; // al finalizar muestro el vector C.
    }

    // el punto D era igual pero al momento de agregar al vector C agrego un if de si (A[i] != 0) y (B[i] != 0) depende con el vector que este agregando.

    return 0;
}