#include <iostream>
using namespace std;

int main () {

    int K, acumPuntos=0, puntosPuntero, posEquipo;
    char resultadoPartido;

    cout << "Ingrese la cantidad de equipos: ";
    cin >> K;

    for (int i=1;i<=K;i++) {
        for (int j=1;j<K;j++) {
            cout << "Ingrese el resultado del partido " << j << " del equipo " << i << " (G, E, P): ";
            cin >> resultadoPartido;

            if (resultadoPartido == 'G') {
                acumPuntos += 3;
            } else if (resultadoPartido == 'E') {
                acumPuntos += 1;
            }
        }

        if (i == 1) {
            puntosPuntero = acumPuntos;
            posEquipo = i;
        } else if (acumPuntos > puntosPuntero) {
            puntosPuntero = acumPuntos;
            posEquipo = i;
        }

        acumPuntos = 0;
    }

    cout << "El ganador del torneo fue el equipo: " << posEquipo << " con un puntaje total de: " << puntosPuntero << " puntos." << endl;
    
    return 0;
}