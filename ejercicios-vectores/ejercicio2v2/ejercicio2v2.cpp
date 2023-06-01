#include <iostream>
using namespace std;

int main () {
    int N;
    cout << "Ingrese el tamanio del vector: ";
    cin >> N;

    int unArray[N];    

    for (int i=0;i<N;i++) {
        cout << "Ingrese el valor en la posicion " << i << ": ";
        cin >> unArray[i];

        if (i==N-1) {
            if (unArray[i] < 10) {
                for (int j=0;j<N;j++) {
                    if (unArray[j]<0) {
                        cout << unArray[j] << endl;
                    }
                }
            } else {
                for (int k=0;k<N;k++) {
                    if (unArray[k]>0) {
                        cout << unArray[k] << endl;
                    }
                }
            }
        }
    }

    return 0;
}