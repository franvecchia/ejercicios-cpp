#include <iostream>
using namespace std;

void apareo (int A[], int M, int B[], int N, int C[]) {
    int i=0, j=0, k=0;
    while (i<M && j<N) {
        if (A[i] < B[j]) {
            C[k] = A[i];
            i++;
        } else {
            C[k] = B[j];
            j++;
        }
        k++;
    }

    for (int h=i;h<M;h++) {
        C[k] = A[h];
        k++;
    }

    for (int h=j;h<N;h++) {
        C[k] = B[h];
        k++;
    }
}

int main () {
    int M,N;
    cout << "Ingrese el tamanio del vector A: ";
    cin >> M;

    cout << "Ingrese el tamanio del vector B: ";
    cin >> N;

    int A[M]={1, 6, 18, 23, 28}, B[N]={12, 14, 19, 21, 24}, C[M+N];
    // los vectores deben ser cargados ordenados en orden ASCENDENTE
    /*for (int i=0;i<M;i++) {
        cin >> A[i];
    }

    for (int i=0;i<N;i++) {
        cin >> B[i];
    } */

    apareo(A, M, B, N, C);

    for (int i=0;i<M+N;i++) {
        cout << C[i] << endl;        
    }

    return 0;
}