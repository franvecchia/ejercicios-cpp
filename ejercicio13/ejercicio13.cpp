#include <iostream>
using namespace std;

int main () {
    int N, M, sumaSucesiva=0;
    cout << "Ingrese un numero: ";
    cin >> N;
    cout << "Ingrese otro numero: ";
    cin >> M; 

    for (int i=0;i<M;i++) {
        sumaSucesiva += N;
    } 

    cout << "La suma sucesiva de " << N << "x" << M << " es " << sumaSucesiva;

    return 0;
}