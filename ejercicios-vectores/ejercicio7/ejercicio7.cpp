#include <iostream>
using namespace std;
//SIN TERMINAR (PARA MODIFICAR DESPUES).

int main () {
    int N, contMaximo=0;
    cout << "Ingrese el tamanio del vector: ";
    cin >> N;

    int DATO[N]={1,4,3,1,4}, MEJORDATO[2];
    MEJORDATO[0]=DATO[0];
    MEJORDATO[1]=DATO[0];

    for (int i=1;i<N;i++) {
        if (DATO[i]>MEJORDATO[0]) {
            MEJORDATO[0]=DATO[i];
        } else if (DATO[i]>MEJORDATO[1]) {
            MEJORDATO[1]=DATO[i];
        }
    }

    cout << "Maximo: " << MEJORDATO[0] << ", segundo maximo: " << MEJORDATO[1] << endl;
    
    return 0;
}