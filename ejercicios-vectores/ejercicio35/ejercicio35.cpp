#include <iostream>
using namespace std;

int main () {
    string palabra[]={"C", "H", "U", "B", "U", "T"};

    int i=0, N=6;
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