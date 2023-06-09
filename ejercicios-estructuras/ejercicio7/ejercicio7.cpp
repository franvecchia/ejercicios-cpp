#include <iostream>
using namespace std;

struct Fecha {
    int dia;
    int mes;
    int anio;
};

struct Boleta {
    int legajo;
    int codigoMateria;
    Fecha fecha;
    string apellido;
};

void burbujeo (Boleta inscripcionesMayo[], int cantInscripciones) {
    int aux;
    for (int i=0;i<cantInscripciones;i++) {
        for (int j=0;j<cantInscripciones;j++) {
            if (inscripcionesMayo[j].legajo > inscripcionesMayo[j+1].legajo) {
                aux = inscripcionesMayo[j].legajo;
                inscripcionesMayo[j].legajo = inscripcionesMayo[j+1].legajo;
                inscripcionesMayo[j+1].legajo = aux;
            }
        }
    }
}

int main () {
    int cantInscripcionesMayo=5;
    Boleta vectorOrdenado[cantInscripcionesMayo];
    Boleta inscripcionesMayo[cantInscripcionesMayo]={
        {23456711, 112233, {01, 05, 2023}, "Roig"}, 
        {23456811, 112233, {01, 05, 2023}, "Paredes"}, 
        {23456911, 222333, {01, 05, 2023}, "Paladino"}, 
        {23456111, 444555, {01, 05, 2023}, "Ferrara"}, 
        {23456211, 222333, {01, 05, 2023}, "Pareja"}
    };

    burbujeo(inscripcionesMayo, cantInscripcionesMayo);

    for (int i=0;i<cantInscripcionesMayo;i++) {
        vectorOrdenado[i].legajo = inscripcionesMayo[i].legajo;
    }

    return 0;
}