#include <iostream>
using namespace std;

struct Domicilio {
    string calle;
    int altura;
    string ciudad;
};

struct Persona {
    Domicilio domicil;
    string nombre;
    string apellido;
    int edad;
};

Persona pedirDatos () {
    Persona persona1;
    cout << "Ingrese su nombre: ";
    cin >> persona1.nombre;
    cout << "Ingrese su apellido: ";
    cin >> persona1.apellido;
    cout << "Ingrese su edad: ";
    cin >> persona1.edad;
   
    return persona1;
}

Persona pedirDomicilio () {
    Persona persona1;
    cout << "Ingrese su calle: ";
    cin >> persona1.domicil.calle;
    cout << "Ingrese su altura: ";
    cin >> persona1.domicil.altura;
    cout << "Ingrese la ciudad: ";
    cin >> persona1.domicil.ciudad;

    return persona1;
}

int main () {
    Persona datosPersona = pedirDatos();
    Persona domicilioPersona = pedirDomicilio();

    cout << "Nombre: " << datosPersona.nombre << endl;
    cout << "Apellido: " << datosPersona.apellido << endl;
    cout << "Edad: " << datosPersona.edad << endl;
    cout << "Direccion: " << domicilioPersona.domicil.calle << " ";
    cout << domicilioPersona.domicil.altura << endl;
    cout << "Ciudad: " << domicilioPersona.domicil.ciudad << endl;
    
    return 0;
}