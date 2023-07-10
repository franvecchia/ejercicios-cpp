#include <iostream>
using namespace std;

int contarAlumnos (int vec[]) {
    int cont=0;
    for (int i=0;i<50;i++) {
        if (vec[i]!=0) {
            cont++;
        }
    }

    return cont;
}

int main () {
    int alumnos[50]={18,24,35,51,18,55,21,33,44,100};
    int cantRealAlumnos = contarAlumnos(alumnos);
    float sumatoriaEdades=0, cont=0;

    for (int i=0;i<cantRealAlumnos;i++) {
        sumatoriaEdades+=alumnos[i];
        cont++;
    }

    cout << "El promedio de las personas ingresadas es: " << sumatoriaEdades/cont << endl;

    for (int i=0;i<cantRealAlumnos;i++) {
        if (alumnos[i] > sumatoriaEdades/cont) {
            cout << alumnos[i] << endl;
        }
    }


    return 0;
}