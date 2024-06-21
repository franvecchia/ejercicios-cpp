/*Una empresa carga los datos del presentismo de sus empleados ingresando por cada empleado:
Legajo (entero de 8 dígitos) y por cada día del mes un 1 si se presentó a trabajar o un 0 si faltó. Para
simplificar, todos los empleados trabajan 31 días. Realizar un programa que permita:
a- Cargar los datos de N empleados, siendo N también informado por el usuario
b- Informar los legajos de los tres empleados con mejor presentismo
c- Informar el número del día con mayor ausentismo.*/


#include <iostream>
using namespace std;

struct Empleado {
    int legajo;
    int presentes[31];
};

struct EmpleadoPorPresentismo {
    int legajo;
    int presentes;
};

void burbujeo(EmpleadoPorPresentismo arr[], int n){
    EmpleadoPorPresentismo aux;
    int i=0;
    bool operando=false;
    while(i<n && !operando){
        operando=true;
        for(int j=0; j<n-i-1; j++){
            if(arr[j].presentes>arr[j+1].presentes){
                aux=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=aux;
                operando=false;
            }
        }
        i++;
    }
}

int main () {
    int N;
    cout << "Ingrese la cantidad de empleados: ";
    cin >> N;

    Empleado empleados[N];
    EmpleadoPorPresentismo empleadosPresentismo[N];
    int diasAusentismo[31]={0};

    for (int i=0;i<N;i++) {
        empleadosPresentismo[i].legajo=empleados[i].legajo;
        for (int j=0;j<31;j++) {
            if (empleados[i].presentes[j] == 1) {
                empleadosPresentismo[i].presentes++;
            } else {
                diasAusentismo[j]++;
            }
        }
    }

    burbujeo(empleadosPresentismo, N);

    for (int i=0;i<3;i++) {
        cout << empleadosPresentismo[i].legajo << "   " << empleadosPresentismo[i].presentes << endl;
    }

    int mayorDia=-1;
    int cantAusentes=-1;
    for (int i=0;i<31;i++) {
        if (diasAusentismo[i]>cantAusentes) {
            cantAusentes=diasAusentismo[i];
            mayorDia=i+1;
        }
    }

    cout << "El dia con mayor ausentismo: " << mayorDia << endl;

    return 0;
}