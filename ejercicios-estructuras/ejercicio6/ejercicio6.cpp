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

void concatenarInscripciones(Boleta inscripcionesAnt[], int cantInscripcionesAnt, Boleta inscripcionesMay[], int cantInscripcionesMay, Boleta inscripcionesTot[]) {
    int cantTotal = cantInscripcionesAnt + cantInscripcionesMay;
    int j=0;
    for (j=0;j<cantInscripcionesAnt;j++) {
        inscripcionesTot[j].legajo = inscripcionesAnt[j].legajo;
        inscripcionesTot[j].codigoMateria = inscripcionesAnt[j].codigoMateria;
        inscripcionesTot[j].fecha.dia = inscripcionesAnt[j].fecha.dia;
        inscripcionesTot[j].fecha.mes = inscripcionesAnt[j].fecha.mes;
        inscripcionesTot[j].fecha.anio = inscripcionesAnt[j].fecha.anio;
        inscripcionesTot[j].apellido = inscripcionesAnt[j].apellido;
    }

    for (int i=cantInscripcionesAnt;i<cantTotal;i++) {
        inscripcionesTot[j].legajo = inscripcionesMay[i].legajo;
        inscripcionesTot[j].codigoMateria = inscripcionesMay[i].codigoMateria;
        inscripcionesTot[j].fecha.dia = inscripcionesMay[i].fecha.dia;
        inscripcionesTot[j].fecha.mes = inscripcionesMay[i].fecha.mes;
        inscripcionesTot[j].fecha.anio = inscripcionesMay[i].fecha.anio;
        inscripcionesTot[j].apellido = inscripcionesMay[i].apellido;
        j++;
    }
}

int main () {
    int cantInscripcionesAnteriores = 10;
    Boleta inscripcionesAnteriores[cantInscripcionesAnteriores] = {
        {12345678, 112233, {01, 03, 2023}, "Perez"}, 
        {12345778, 112233, {01, 03, 2023}, "Gonzalez"}, 
        {12345878, 222333, {01, 03, 2023}, "Gutierrez"}, 
        {12345978, 444555, {01, 03, 2023}, "Fantini"}, 
        {12343678, 222333, {01, 03, 2023}, "Moreira"}, 
        {12344678, 444555, {01, 03, 2023}, "Branca"}, 
        {12346678, 112233, {01, 03, 2023}, "Mendez"}, 
        {12347678, 444555, {01, 03, 2023}, "Bianchi"}, 
        {12348678, 112233, {01, 03, 2023}, "Fernandez"}, 
        {12348678, 222333, {01, 03, 2023}, "Lopez"}
    };
    
    int cantInscripcionesMayo=5;
    Boleta inscripcionesMayo[cantInscripcionesMayo]={
        {23456711, 112233, {01, 05, 2023}, "Roig"}, 
        {23456811, 112233, {01, 05, 2023}, "Paredes"}, 
        {23456911, 222333, {01, 05, 2023}, "Paladino"}, 
        {23456111, 444555, {01, 05, 2023}, "Ferrara"}, 
        {23456211, 222333, {01, 05, 2023}, "Pareja"}
    };

    int cantInscripcionesTotales = cantInscripcionesAnteriores+cantInscripcionesMayo;
    Boleta inscripcionesTotales[cantInscripcionesTotales];
    concatenarInscripciones(inscripcionesAnteriores, cantInscripcionesAnteriores, inscripcionesMayo, cantInscripcionesMayo, inscripcionesTotales);

    for (int j=0;j<cantInscripcionesTotales; j++) {
        cout << j << endl;
        cout << "Legajo: " << inscripcionesTotales[j].legajo << endl;
        cout << "Codigo de la materia: " << inscripcionesTotales[j].codigoMateria << endl;
        cout << "Fecha del examen: " << inscripcionesTotales[j].fecha.dia << "/" << inscripcionesTotales[j].fecha.mes << "/" << inscripcionesTotales[j].fecha.anio << endl;
        cout << "Apellido del alumno: " << inscripcionesTotales[j].apellido << endl;
        cout << "---------------------" << endl;
    }

    return 0;
}