#include <iostream>
using namespace std;
// a
struct FechaNacimiento {
    int dia;
    int mes;
    int anio;
};

struct Persona {
    string nombre;
    string apellido;
    FechaNacimiento fecha;
};

//b
struct Calificaciones {
    int nota1;
    int nota2;
    int nota3;
};

struct Alumno {
    int legajo;
    Persona persona;
    Calificaciones notas;
};

int main () {
    
    return 0;
}