#include <iostream>
using namespace std;
//SIN TERMINAR (PARA MODIFICAR DESPUES).

int calcularMaximo (int DATO[], int maximo, int i, int &contMaximo) {
    if (DATO[i] >= maximo) {
        maximo = DATO[i];
        contMaximo++;
    }

    return maximo;
}

int calcularSegundoMaximo(int j, int maximo, int segundoMaximo, int DATO[], int contMaximo) {
    return segundoMaximo;
}

int main () {
    int N, contMaximo=0;
    cout << "Ingrese el tamanio del vector: ";
    cin >> N;

    int DATO[N]={1,2,3,5,4}, MEJORDATO[2];
    int maximo=DATO[0], segundoMaximo=DATO[0];

    for (int i=0;i<N;i++) {
        maximo = calcularMaximo(DATO, maximo, i, contMaximo);
    }

    for (int j=0;j<N;j++) {
        segundoMaximo = calcularSegundoMaximo(j, maximo, segundoMaximo, DATO, contMaximo);
    }

    MEJORDATO[0] = maximo;
    MEJORDATO[1] = segundoMaximo;

    cout << "Maximo: " << MEJORDATO[0] << ", segundo maximo: " << MEJORDATO[1] << endl;

    return 0;
}