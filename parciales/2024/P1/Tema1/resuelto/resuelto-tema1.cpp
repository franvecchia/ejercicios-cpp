#include <iostream>
using namespace std;

//ej 2
bool mayorNumeroAIngreso(int numero) {
    int numeroIngreso, sumatoria=0;

    for (int i=0;i<10;i++) {
        cout << "Ingrese un numero: ";
        cin >> numeroIngreso;

        sumatoria+=numeroIngreso;
    }

    return sumatoria>numero;
}

// ej 1
int calcularPuntaje (int tiempo) {
    int puntaje=0;

    if (tiempo<60) {
        puntaje=50;
    } else if (tiempo<90) {
        puntaje=25;
    } else if (tiempo<120) {
        puntaje=10;
    }

    return puntaje;
}

int calcularMejorTiempo(int tiempo, int mejorTiempo) {
    if (tiempo<mejorTiempo) {
        mejorTiempo=tiempo;
    }

    return mejorTiempo;
}

void calcularGanador(int puntajeCompetidor, string nombreCompetidor, string &nombreGanador, int &puntajeGanador) {
    if (puntajeCompetidor>puntajeGanador) {
        puntajeGanador=puntajeCompetidor;
        nombreGanador=nombreCompetidor;
    }
}

void informarCambioDeNeumaticos(int &tiempoParaCambioDeNeumaticos) {
    if (tiempoParaCambioDeNeumaticos>=300) {
        cout << "Es necesario realizar un cambio de neumaticos." << endl;
        tiempoParaCambioDeNeumaticos=0;
    }
}

int main () {
    int idCompetidor, contador=0, tiempoCompetidor, mejorTiempo=1000000, puntajeGanador=0;
    string nombreCompetidor, nombreGanador;

    cout << "Ingrese un id de competidor, (0 -1 para salir): ";
    cin >> idCompetidor;

    while (idCompetidor!=-1 && contador<20) {
        contador++;
        cout << "Ingrese el nombre del competidor: ";
        cin >> nombreCompetidor;

        int puntajeCompetidor=0, tiempoParaCambioDeNeumaticos=0;
        for (int i=0;i<10;i++) {
            cout << "Ingrese el tiempo que le tomo finalizar la pista " << i+1 << ": " << endl;
            cin >> tiempoCompetidor;

            puntajeCompetidor+=calcularPuntaje(tiempoCompetidor);
            tiempoParaCambioDeNeumaticos+=tiempoCompetidor;

            mejorTiempo=calcularMejorTiempo(tiempoCompetidor, mejorTiempo);
            informarCambioDeNeumaticos(tiempoParaCambioDeNeumaticos);
        }

        calcularGanador(puntajeCompetidor, nombreCompetidor, nombreGanador, puntajeGanador);

        cout << "Ingrese un id de competidor, (0 -1 para salir): " << endl;
        cin >> idCompetidor;
    }

    cout << "El mejor tiempo registrado en una pista fue de: " << mejorTiempo << " segundos." << endl;
    cout << "El ganador de la competencia es: " << nombreGanador << " con un tiempo de: " << puntajeGanador << " puntos." << endl;

    return 0;
}