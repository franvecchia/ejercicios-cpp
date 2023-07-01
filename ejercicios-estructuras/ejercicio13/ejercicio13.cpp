#include <iostream>
using namespace std;

struct Empleado {
    int legajo;
    int diaTrabajo[31];
};

struct EmpleadoPorPresentismo {
    int legajo;
    int diasPresente;
};

void burbujeo(EmpleadoPorPresentismo arr[], int n){
    EmpleadoPorPresentismo aux;
    int i=0;
    bool operando=false;
    while(i<n && !operando){
        operando=true;
        for(int j=0; j<n-i-1; j++){
            if(arr[j].diasPresente>arr[j+1].diasPresente){
                aux=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=aux;
                operando=false;
            }
        }
        i++;
    }
    return;
}

void burbujeo2(int arr[], int n){
    int aux;
    int i=0;
    bool operando=false;
    while(i<n && !operando){
        operando=true;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]<arr[j+1]){
                aux=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=aux;
                operando=false;
            }
        }
        i++;
    }
    return;
}

int main () {
    int N;
    cout << "Ingrese la cantidad de empleados: ";
    cin >> N;

    Empleado empleados[N];
    EmpleadoPorPresentismo empleadosPorPresentismo[N];
    int diasPorAusentes[31];

    for (int i=0;i<N;i++) {
        for (int j=0;j<31;j++) {
            if (empleados[i].diaTrabajo[j]==1) {
                empleadosPorPresentismo[i].diasPresente++;
            } else {
                diasPorAusentes[j]++;
            }
        }
    }

    burbujeo(empleadosPorPresentismo, N);
    burbujeo2(diasPorAusentes, 31);

    cout << "Empleados con mas presentes: " << endl;
    cout << empleadosPorPresentismo[0].legajo << "\t" << empleadosPorPresentismo[0].diasPresente << endl;
    cout << empleadosPorPresentismo[1].legajo << "\t" << empleadosPorPresentismo[1].diasPresente << endl;
    cout << empleadosPorPresentismo[2].legajo << "\t" << empleadosPorPresentismo[2].diasPresente << endl;

    cout << "Cantidad de ausentes en el mayor dia: " << diasPorAusentes[0] << endl;  


    return 0;
}