#include <iostream>
using namespace std;

void busquedaBinaria (int REFER[], int X, int N) {
    int inf=0, sup=N, mitad;
    bool encontrado = false;

    while (inf <= sup && encontrado==false) {
        mitad = (inf+sup)/2;
        if (REFER[mitad] == X) {
            encontrado=true;
        }
        if (REFER[mitad] > X) {
            sup = mitad-1;
            mitad = (inf+sup)/2;
        }
        if (REFER[mitad] < X) {
            inf = mitad+1;
            mitad = (inf+sup)/2;
        }
    }

    if (encontrado) {
        cout << "El numero fue encontrado en la posicion: " << mitad << endl;
        cout << "El numero fue encontrado entre las posiciones: " << mitad+1 << " y " << mitad-1 << endl;
        
    } else {
        cout << "El numero no ha sido encontrado." << endl;
    }
}

int main () {
    int N, X;
    cout << "Ingrese el tamanio del vector: ";
    cin >> N;

    // Los datos deben ser ingreasados de forma ASCENDENTE
    int REFER[N];

    for (int i=0;i<N;i++) {
        cin >> REFER[i];
    }

    cout << "Ingrese el numero a buscar: ";
    cin >> X;

    busquedaBinaria(REFER, X, N);

    return 0;
}