#include <iostream>
using namespace std;

bool seAbreCurso(int tiempoLlegada[], int cantidadTotal, int alumnosMinimosAbrir) {
    if (cantidadTotal>=alumnosMinimosAbrir) {
        return true;
    } else {
        return false;
    }
}

int main () {
    int alumnosMinimosAbrir = 2, totalAlumnos=5;
    int tiempoLlegada[totalAlumnos];
    bool seAbre = seAbreCurso(tiempoLlegada, totalAlumnos, alumnosMinimosAbrir);

    return 0;
}