#include <iostream>
using namespace std;
// ejercicio que tambien sirve para corregir el de temperaturas.

void invertirDatos (float &alturaMaxima, float &alturaMinima) {
    if (alturaMinima>alturaMaxima) {
        float aux = alturaMaxima; //importante declarar un auxiliar ya que si no se pisarian los datos.
        alturaMaxima = alturaMinima;
        alturaMinima = aux;
        cout << "Los datos de las mareas han sido invertidos ya que la altura maxima era menor a la minima." << endl;
    }
}

void datosDelDia(int fecha, float alturaMaxima, float alturaMinima) {
    cout << "La fecha de hoy es: " << fecha << endl;
    cout << "La altura maxima de hoy fue: " << alturaMaxima << endl;
    cout << "La altura minima de hoy fue: " << alturaMinima << endl;
    cout << "La diferencia de marea de hoy fue: " << alturaMaxima-alturaMinima << endl;
}

int calculoMayorMarea (int fecha, float diferenciaMarea, float &mayorDiferencia, int mayorFecha) {
    //importante que la mayor fecha la reciba ya que va cambiando, si la declara dentro de la funcion se pisara siempre declarandose nuevamente.
    if (diferenciaMarea>mayorDiferencia) {
        mayorDiferencia=diferenciaMarea;
        mayorFecha=fecha;
    }

    return mayorFecha;
}

int main () {
    int fecha, fechaAnterior=-1, mayorFecha=0;
    float alturaMaxima, alturaMinima, mayorDiferencia=-1, diferenciaMarea;
    bool ingresoFecha=false;

    cout << "Ingrese una fecha, o -1 para salir: ";
    cin >> fecha;

    while (fecha!=-1) {
        if (fecha>fechaAnterior) { // importante para controlar el ingreso de datos por si ingresa una fecha menor.
            fechaAnterior=fecha;
            ingresoFecha=true;
            cout << "Ingrese la altura maxima de la marea en metros: ";
            cin >> alturaMaxima;
            cout << "Ingrese la altura minima de la marea en metros: ";
            cin >> alturaMinima;

            invertirDatos(alturaMaxima, alturaMinima);
            datosDelDia(fecha, alturaMaxima, alturaMinima);
            
            diferenciaMarea=alturaMaxima-alturaMinima;
            mayorFecha = calculoMayorMarea(fecha, diferenciaMarea, mayorDiferencia, mayorFecha);

        } else {
            cout << "La fecha ingresada debe ser mayor a la anterior." << endl;
        }

        cout << "Ingrese otra fecha, o -1 para salir: ";
        cin >> fecha;
    }

    if (ingresoFecha) { // puede realizarse tambien con un contador y que diga > 0.
        cout << "La mayor diferencia de marea se produjo el dia: " << mayorFecha << " y fue de: " << mayorDiferencia << endl;
    } else {
        cout << "No hubo datos para procesar." << endl;
    }

    return 0;
}