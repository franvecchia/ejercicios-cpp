#include <iostream>
using namespace std;

int main () {
    int fechaNacimiento, personaMayor, personaMenor;
    string nombres, nombrePersonaMayor, nombrePersonaMenor;

    cout << "Ingrese un nombre: ";
    cin >> nombres;
    nombrePersonaMayor = nombres;
    nombrePersonaMenor = nombres;

    cout << "Ingrese la fecha de nacimiento de " << nombres << ": ";
    cin >> fechaNacimiento; 
    personaMayor = fechaNacimiento;
    personaMenor = fechaNacimiento;
        
    while (nombres != "FIN") {
        cout << "Ingrese un nombre: ";
        cin >> nombres;

        if (nombres != "FIN") {
            cout << "Ingrese la fecha de nacimiento de " << nombres << ": ";
            cin >> fechaNacimiento; 
        }

        if (fechaNacimiento < personaMayor) {
            personaMayor = fechaNacimiento;
            nombrePersonaMayor = nombres;
        } else if (fechaNacimiento > personaMenor) {
            personaMenor = fechaNacimiento;
            nombrePersonaMenor = nombres;
        }
    }

    cout << "La persona mas grande ingresada fue: " << nombrePersonaMayor << " nacido el: " << personaMayor << endl;
    cout << "La persona mas chica ingresada fue: " << nombrePersonaMenor << " nacido el: " << personaMenor << endl;

    return 0;
}