#include <iostream>
using namespace std;

int main () {
    int N;
    cout << "Ingrese el tamanio del vector: ";
    cin >> N;

    int A[N]={23,1,4,16,7}, B[N]={21,99,9,14,3}, C[N];

    for (int i=0;i<N;i++) {
        C[i] = A[i]+B[N-i-1];
    }

    for (int j=0;j<N;j++) {
        cout << C[j] << endl;
    }

    return 0;
}