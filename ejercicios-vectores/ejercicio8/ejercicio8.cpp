#include <iostream>
using namespace std;

int main () {
    int N, count=0;
    cout << "Ingrese el tamanio del vector: ";
    cin >> N;
    
    int GG[N]={3,50,4,6,5,1,2,3,4,5,6,67,10};

    // a
    /*for (int i=0;i<N;i++) {
        cout << GG[i] << endl;
    } */

    //b 
    for (int i = N - 1; i >= 0; i--) {
        cout << GG[i] << " ";
        count++;

        if (count == 10) {
            cout << endl;
            count = 0;
        }
    }

    //c
    /*for (int k=0;k<N;k++) {
        if (k==5 || k==10 || k==15 || k==20 || k==25 || k==30 || k==35) {
            cout << endl;
            cout << k << ": " << GG[k] << " ";
        } else {
            cout << k << ": " << GG[k] << " ";
        }
    } */

    return 0;
}