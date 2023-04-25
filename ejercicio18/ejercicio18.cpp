#include <iostream>
using namespace std;

int main () {
    int M, natural=1, contador=0;
    cout << "Ingrese un valor: ";
    cin >> M;

    while (contador < M) {
        if (natural%3==0 && natural%5!=0) {
            cout << natural << endl;
            contador++;
        }
        natural++;
    }

	return 0;
}