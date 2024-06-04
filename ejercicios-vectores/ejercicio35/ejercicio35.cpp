#include <iostream>
using namespace std;

int size (string vector) {
    int cant=0;

    while (vector[cant] != '\0') {
        cant++;
    }

    return cant;
}

int main () {
    string palabra={'C', 'H', 'U', 'B', 'U', 'T'};

    int i=0, N=size(palabra);

    cout << N << endl;

    bool resultado=true;
    while (i<N && resultado==true) {
        if (palabra[i] == palabra[N-1-i]) {
            i++;
        } else {
            resultado=false;
        }
    }

    if (resultado) {
        cout << "La palabra es palindroma." << endl;
    } else {
        cout << "La palabra no es palindroma." << endl;
    }


    return 0;
}