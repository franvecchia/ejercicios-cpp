#include <iostream>
using namespace std;

int main () {
    int N,M,sumaSucesiva=0;
    cout << "Ingrese un numero: ";
    cin >> N;
    cout << "Ingrese otro numero: ";
    cin >> M;

    for (int i=1;i<=M;i++) {
        sumaSucesiva += N;
    }
    cout << sumaSucesiva << endl;
    return 0;
}