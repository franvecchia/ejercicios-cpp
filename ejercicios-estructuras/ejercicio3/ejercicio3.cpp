#include <iostream>
using namespace std;

struct FechaNacimiento {
    int fecha;
};

struct Persona {
    string nombre;
    string apellido;
    FechaNacimiento fecha1;
};

int main () {
    Persona persona1;
    string nombreMayor;
    int fechaMayor;
    bool primerIngreso=false;
    
    cout <<"Ingrese su nombre: ";
    cin >> persona1.nombre;

    while (persona1.nombre!="FIN") {
        cout << persona1.nombre << ", ingrese su fecha de nacimiento: ";
        cin >> persona1.fecha1.fecha;

        if (persona1.fecha1.fecha<fechaMayor || primerIngreso==false) {
            fechaMayor = persona1.fecha1.fecha;
            nombreMayor = persona1.nombre;
        }

        primerIngreso=true;
        cout << "Ingrese otro nombre: ";
        cin >> persona1.nombre;
    }

    if (primerIngreso) {
        cout << "La persona mayor fue: " << nombreMayor << " con una fecha de nacimiento en: " << fechaMayor << endl;
    } else {
        cout << "No hubo datos para procesar." << endl;
    }
    
    return 0;
}