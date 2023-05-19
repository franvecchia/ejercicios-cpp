#include <iostream>
using namespace std;

int main () {
    int N;
    cout << "Ingrese el tamanio del vector: ";
    cin >> N;
    
    int GG[N]={3,50,4,6,5,1,2,3,4,5,6,67,10};

    // a
    for (int i=0;i<N;i++) {
        cout << GG[i] << endl;
    } 

    //b 
    for (int j=0;j<N;j++) {
        if (j==10 || j==20 || j==30) {
            cout << endl;
            cout << GG[j] << " ";
        } else {
            cout << GG[j] << " ";
        }
    } 

    //c
    for (int k=0;k<N;k++) {
        if (k==5 || k==10 || k==15 || k==20 || k==25 || k==30 || k==35) {
            cout << endl;
            cout << k << ": " << GG[k] << " ";
        } else {
            cout << k << ": " << GG[k] << " ";
        }
    }

    return 0;
}