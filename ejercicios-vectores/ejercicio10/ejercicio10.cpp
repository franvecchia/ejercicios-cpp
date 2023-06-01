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
            C[i] = A[i];
        }

        if (i>=N && j<M) {
            C[i] = B[j];
            j++;
        }
    }

    for (int i=0;i<N+M;i++) {
        cout << C[i] << endl;
    }

    return 0;
}