#include <iostream>
using namespace std;

int main () {
    int nota, acumNotas=0, totalAlumnos=0, totalAprobados=0, totalReprobados=0, totalAusentes=0, notaMasAlta=0, notaMasBaja=10;
    // tambien notaMasAlta y nota mas baja pueden ser inicializados debajo del ingreso de la primer nota de la siguiente forma: int NotaMasAlta=nota, notaMasBaja=nota;
    cout << "Ingrese una nota: ";
    cin >> nota;

    while (nota!=-1) {
        totalAlumnos++;
        if (nota>=6 && nota<=10) {
            totalAprobados++;
        }else if (nota<6 && nota>0) {
            totalReprobados++;
        } else if (nota==0){
            totalAusentes++;
        } 

        if (nota>notaMasAlta) {
            notaMasAlta = nota;
        }

        if (nota<notaMasBaja && nota!=0) { //nota!=0 necesario
            notaMasBaja=nota;
        }
        
        acumNotas += nota;

        cout << "Ingrese una nota: ";
        cin >> nota;
    }

    cout << "Total de alumnos: " << totalAlumnos << endl;
    cout << "Total de aprobados: " << totalAprobados << endl;
    cout << "Total de reprobados: " << totalReprobados << endl;
    cout << "Total de ausentes: " << totalAusentes << endl;
    cout << "Nota mas alta: " << notaMasAlta << endl;
    cout << "Nota mas baja: " << notaMasBaja << endl;
    cout << "Promedio de notas: " << acumNotas/totalAlumnos << endl;
    cout << "Porcentaje de aprobados: " << (totalAprobados*100)/totalAlumnos << endl;
    cout << "Porcentaje de desaprobados: " << (totalReprobados*100)/totalAlumnos << endl;
    return 0;
}