#include <iostream>
using namespace std;

// ej 2
bool calculoEntreDosNumeros (int numero1, int numero2) {
    int sumatoria=0;
    for (int i=numero1+1;i<numero2;i++) {
        int numeroFinal=i*3;
        sumatoria+=numeroFinal;
        cout << numeroFinal;
    }

    return sumatoria>100;
}

int calcularMayorEdad(int edadPiloto, int edadPilotoMayor) {
    if (edadPiloto>edadPilotoMayor) {
        edadPilotoMayor=edadPiloto;
    }

    return edadPilotoMayor;
}

// ej 1
void calcularEscuderiaMayor (int sumatoriaEdad, int &sumatoriaMayor, string nombreEscuderia, string &escuderiaMayor) {
    if (sumatoriaEdad>sumatoriaMayor) {
        sumatoriaMayor=sumatoriaEdad;
        escuderiaMayor=nombreEscuderia;
    }
}

void informarCategoriaEdad(int sumatoriaEdad) {
    float promedio=sumatoriaEdad/10;

    if (promedio<25) {
        cout << "Pilotos juveniles." << endl;
    } else if (promedio<40) {
        cout << "Pilotos cadetes." << endl;
    } else {
        cout << "Pilotos expertos." << endl;
    }
}

int main () {
    int idEscuderia, contador=0, edadPiloto, edadPilotoMayor=0, sumatoriaMayor=0;
    string nombreEscuderia, escuderiaMayor;

    cout << "Ingrese un idEscuderia (o -1 para salir): ";
    cin >> idEscuderia;

    while (idEscuderia != -1 && contador<20) {
        contador++;
        cout << "Ingrese el nombre de la escuderia: ";
        cin >> nombreEscuderia;

        int sumatoriaEdad=0;
        for (int i=0;i<10;i++) {
            cout << "Ingrese la edad del piloto: ";
            cin >> edadPiloto;

            sumatoriaEdad+=edadPiloto;
            edadPilotoMayor=calcularMayorEdad(edadPiloto, edadPilotoMayor);
        }

        calcularEscuderiaMayor(sumatoriaEdad, sumatoriaMayor, nombreEscuderia, escuderiaMayor);
        informarCategoriaEdad(sumatoriaEdad);
        
        cout << "Ingrese un idEscuderia (o -1 para salir): ";
        cin >> idEscuderia;
    }

    cout << "El piloto mayor tiene la edad de: " << edadPilotoMayor << endl;
    cout << "El nombre de la escuderia que mas pilotos experimentados tiene es: " << escuderiaMayor << endl;

    return 0;
}