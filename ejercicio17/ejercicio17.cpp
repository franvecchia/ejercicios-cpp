#include <iostream>
using namespace std;

int main () {
    float sueldos=1, cantidadSueldo1=0,cantidadSueldo2=0,cantidadSueldo3=0,cantidadSueldo4=0;

    while (sueldos!=0) {
        cout << "Ingrese un sueldo: ";
        cin >> sueldos;

        if (sueldos>0) {
            if (sueldos < 1520) {
                cantidadSueldo1++;
            } else if (sueldos >= 1520 && sueldos < 2780) {
                cantidadSueldo2++;
            } else if (sueldos >= 2780 && sueldos < 5999) {
                cantidadSueldo3++;
            } else {
                cantidadSueldo4++;
            }
        } else {
            cout << "Valor erroneo.";
        }
    }

    cout << "La cantidad de empleados con sueldo menor a 1520 es: " << cantidadSueldo1 << endl;
    cout << "La cantidad de empleados con sueldo entre 1520 y 2780: " << cantidadSueldo2 << endl;
    cout << "La cantidad de empleados con sueldo entre 2780 y 5999 es: " << cantidadSueldo3 << endl;
    cout << "La cantidad de empleados con sueldo mayor a 5999 es: " << cantidadSueldo4 << endl;

    return 0;
}