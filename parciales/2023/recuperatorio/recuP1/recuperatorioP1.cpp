#include <iostream>
using namespace std;

int compararRondas (int carta1, int carta2, string nombreJugador1, string nombreJugador2) {
    int resultado;
    if (carta1>carta2) {
        resultado=1;
        cout << nombreJugador1 << " gana la ronda." << endl;
    } else if (carta2>carta1) {
        resultado=-1;
        cout << nombreJugador2 << " gana la ronda." << endl;
    } else {
        resultado=0;
        cout << "EMPATE.";
    }

    return resultado;
}

int main () {
    string jugador1, jugador2;
    int resultado;
    int carta1, carta2;
    cout << "Ingrese el nombre del jugador 1: ";
    cin >> jugador1;
    cout << "Ingrese el nombre del jugador 2: ";
    cin >> jugador2;

    for (int i=0;i<3;i++) {
        cout << "RONDA " + i+1 << endl;
        cout << jugador1 << ", ingrese la carta que desea tirar: ";
        cin >> carta1;
        cout << jugador2 << ", ingrese la carta que desea tirar: ";
        cin >> carta2;
        resultado += compararRondas(carta1, carta2, jugador1, jugador2);
    }

    if (resultado>0) {
        cout << "El ganador de la partida fue: " << jugador1 << endl;
    } else if (resultado<0) {
        cout << "El ganador de la partida fue: " << jugador2 << endl;
    } else {
        cout << "Empate." << endl;
    }

    return 0;
}