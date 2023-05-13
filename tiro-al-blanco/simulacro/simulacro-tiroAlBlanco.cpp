#include <iostream>
using namespace std;

int ingresarCantJugadores () {
    int cantJugadores;
    do {
        cout << "Ingrese la cantidad de jugadores: ";
        cin >> cantJugadores;

        if (cantJugadores<2) {
            cout << "Valor ingresado erroneo, por favor intente nuevamente." << endl;
        }
    } while (cantJugadores<2);

    return cantJugadores;
}

void calcularPuntosJugador (int &puntosJugador, int &tirosCentro) {
    int distanciaCentro;
    cout << "Ingrese la distancia al centro del tiro: ";
    cin >> distanciaCentro;

    if (distanciaCentro==0) {
        cout << "Tiro al centro, sumas 500 puntos." << endl;
        tirosCentro++;
        puntosJugador+=500;
    } else if (distanciaCentro>=0 && distanciaCentro<=10) {
        cout << "El tiro tiene una pequeña distancia respecto al centro, sumas 250 puntos." << endl;
        puntosJugador+=250;
    } else if (distanciaCentro>=11 && distanciaCentro<=50) {
        cout << "El tiro tiene bastante distancia respecto al centro, sumas 100 puntos." << endl;
        puntosJugador+=100;
    } else if (distanciaCentro>50) {
        cout << "El tiro cayo fuera del tablero, no sumas puntos." << endl;
    }
}

int calcularGanador (int puntosJugador, int puntosMaximosJugador) {
    if (puntosJugador > puntosMaximosJugador) {
        puntosMaximosJugador = puntosJugador;
    }

    return puntosMaximosJugador;
}

int main () {
    int cantJugadores = ingresarCantJugadores();
    int puntosJugador=0, tirosCentro=0, puntosMaximosJugador=-1;

    for (int i=1;i<=cantJugadores;i++) {
        cout << "jugador " << i << endl;
        for (int j=1;j<=3;j++) {
            calcularPuntosJugador(puntosJugador, tirosCentro);
        }

        puntosMaximosJugador = calcularGanador(puntosJugador, puntosMaximosJugador);
        puntosJugador=0;
    }

    cout << "El ganador del juego hizo la cantidad de puntos de: " << puntosMaximosJugador << endl;
    cout << "La cantidad de tiros al centro fue de: " << tirosCentro << endl;
    return 0;
}