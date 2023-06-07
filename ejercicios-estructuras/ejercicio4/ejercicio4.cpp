#include <iostream>
using namespace std;

struct Fecha {
    int dia;
    int mes;
    int anio;
};

struct Boleta {
    int legajo;
    string codigoMateria;
    Fecha fecha;
    string apellido;
};

int main () {
    int i=0;
    Boleta boletas[100];

    cout << "Ingrese su legajo: ";
    cin >> boletas[i].legajo;

    while (boletas[i].legajo!=0 && i<100) {
        cout << "Ingrese el codigo de materia: ";
        cin >> boletas[i].codigoMateria;
        cout << "Ingrese el dia del examen: ";
        cin >> boletas[i].fecha.dia;
        cout << "Ingrese el mes del examen: ";
        cin >> boletas[i].fecha.mes;
        cout << "Ingrese el anio del examen: ";
        cin >> boletas[i].fecha.anio;
        cout << "Ingrese su apellido: ";
        cin >> boletas[i].apellido;
        
        i++;
        cout << "Ingrese su legajo: ";
        cin >> boletas[i].legajo;
    }

    Boleta inscripciones[i];

    for(int j=0; j<i;j++){
        inscripciones[j].legajo = boletas[j].legajo;
        inscripciones[j].codigoMateria = boletas[j].codigoMateria;
        inscripciones[j].fecha.dia = boletas[j].fecha.dia;
        inscripciones[j].fecha.mes = boletas[j].fecha.mes;
        inscripciones[j].fecha.anio = boletas[j].fecha.anio;
        inscripciones[j].apellido = boletas[j].apellido;
    }

    for (int j=0;j<i;j++) {
        cout << j << endl;
        cout << "Legajo: " << inscripciones[j].legajo << endl;
        cout << "Codigo de la materia: " << inscripciones[j].codigoMateria << endl;
        cout << "Fecha del examen: " << inscripciones[j].fecha.dia << "/" << inscripciones[j].fecha.mes << "/" << inscripciones[j].fecha.anio << endl;
        cout << "Apellido del alumno: " << inscripciones[j].apellido << endl;
        cout << "---------------------" << endl;
    }
    
    return 0;
}
