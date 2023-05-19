#include <iostream>
using namespace std;

bool esPar (int i) {
    return i%2==0;
}

int main () {
    int N;
    cout << "Ingrese el tamanio del vector: ";
    cin >> N;

    int UNO[N]={1,2,3,4,5,6}, DOS[N]={6,7,8,9,10,11}, TRES[N];

    for (int i=1;i<=N;i++) {
        if (esPar(i)) {
            TRES[i] = UNO[i];
        } else {
            TRES[i] = DOS[i]; 
        }
    }

    for (int j=1;j<=N;j++) {
        cout << TRES[j] << endl;
    }

    return 0;
}