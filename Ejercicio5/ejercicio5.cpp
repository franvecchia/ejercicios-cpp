#include <iostream>
using namespace std;

int main () {
    int N;
    cout << "Ingrese el tamanio del vector: ";
    cin >> N;
    
    int UNO[N], DOS[N], TRES[N];

    for (int i = 0; i < N; i++)
    {
        cout << "Ingrese el valor de la posicion " << i << " de UNO: ";
        cin >> UNO[i];
    }
    
    for (int i = 0; i < N; i++)
    {
        cout << "Ingrese el valor de la posicion " << i << " de DOS: ";
        cin >> DOS[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (i%2==0){
            TRES[i] = UNO[i];
        } else {
            TRES[i] = DOS[i];
        }
    }

    cout << "Los valores del vector TRES son: ";

    for (int i = 0; i < N; i++)
    {
        cout << TRES[i] << " ";
    }
    
    return 0;
}