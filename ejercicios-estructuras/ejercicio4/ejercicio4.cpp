#include <iostream>
using namespace std;

struct Fecha {
    int dia;
    int mes;
    int anio;
};

struct Boleta {
    string apellido;
    int legajo;
    string codigoMateria;
    Fecha fecha;
};

int main () {
    int i=0;
    Boleta boletas[100];

    cout << "Ingrese su legajo: ";
    cin >> boletas[i].legajo;

    while (boletas[i].legajo!=0 && i<100) {
        cout << "Ingrese su apellido: ";
        cin >> boletas[i].apellido;
        cout << "Ingrese el codigo de materia: ";
        cin >> boletas[i].codigoMateria;
        cout << "Ingrese el anio del examen: ";
        cin >> boletas[i].fecha.anio;
        cout << "Ingrese el mes del examen: ";
        cin >> boletas[i].fecha.mes;
        cout << "Ingrese el dia del examen: ";
        cin >> boletas[i].fecha.dia;

        i++;
        cout << "Ingrese su legajo: ";
        cin >> boletas[i].legajo;
    }

    for (int j=0;j<i;j++) {
        cout << j << endl;
        cout << "Legajo: " << boletas[j].legajo << endl;
        cout << "Codigo de la materia: " << boletas[j].codigoMateria << endl;
        cout << "Fecha del examen: " << boletas[j].fecha.dia << "/" << boletas[j].fecha.mes << "/" << boletas[j].fecha.anio << endl;
        cout << "Apellido del alumno: " << boletas[j].apellido << endl;
        cout << "---------------------" << endl;
    }
    
    return 0;
}