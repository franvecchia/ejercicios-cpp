#include <iostream>
using namespace std;

int main () {
    string domicilio, nombre, apellido, domicilioMayor;
    char tipoVivienda, sexo, nivelEstudios, estanCompletos;
    int cantIntegrantes, edad, cantPrimariosCompletos=0, cantAnalfabetos=0, cantPersonas=0, cantIntegrantesMayor=0;
    float acumCiudad=0;
    int cantNivelPrimario=0, cantNivelSecundario=0, cantNivelTerciario=0, cantNivelUniversitario=0;
    int cantFemenino=0, cantMasculino=0;

    cout << "Ingrese la cantidad de integrantes de la familia: " << endl;
    cin >> cantIntegrantes;
    while (cantIntegrantes != 0) {
        cout << "Ingrese el domicilio: " << endl;
        cin >> domicilio;
        cout << "Ingrese el tipo de vivienda: " << endl;
        cin >> tipoVivienda;

        if (tipoVivienda=='D' && cantIntegrantes>cantIntegrantesMayor) {
            cantIntegrantesMayor=cantIntegrantes;
            domicilioMayor=domicilio;
        }

        float acumFamilia=0;
        for (int i=0;i<cantIntegrantes;i++) {
            cout << "Ingrese el nombre: " << endl;
            cin >> nombre;
            cout << "Ingrese el apellido: " << endl;
            cin >> apellido;
            cout << "Ingrese la edad: " << endl;
            cin >> edad;
            cout << "Ingrese el sexo: " << endl;
            cin >> sexo;
            cout << "Ingrese los estudios: " << endl;
            cin >> nivelEstudios;
            cout << "Ingrese si sus estudios estan completos o incompletos: " << endl;
            cin >> estanCompletos;

            if (nivelEstudios > 'P' || (nivelEstudios=='P' && estanCompletos=='C')) {
                cout << nombre << endl;
                cout << apellido << endl;
                cout << edad << endl;
                cout << sexo << endl;
                cout << nivelEstudios << endl;
                cout << estanCompletos << endl;
            }

            if (edad>10 && nivelEstudios=='N') {
                cantAnalfabetos++;
            }

            if (estanCompletos=='I') {
                switch (nivelEstudios) {
                    case 'P': cantNivelPrimario++;
                    break;
                    case 'S': cantNivelSecundario++;
                    break;
                    case 'T': cantNivelTerciario++;
                    break;
                    case 'U': cantNivelUniversitario++;
                    break;
                }
            }

            if (sexo=='M') {
                cantMasculino++;
            } else {
                cantFemenino++;
            }

            acumFamilia+=edad;
        }

        cout << "Promedio edad familia: " << acumFamilia/cantIntegrantes << endl;

        acumCiudad+=acumFamilia;
        cantPersonas+=cantIntegrantes;

        cout << "Ingrese la cantidad de integrantes de la familia: " << endl;
        cin >> cantIntegrantes;
    }

    cout << "Porcentaje de analfabetos: " << (cantAnalfabetos*100)/cantPersonas << endl;
    cout << "Domicilio de la familia con mas integrantes que vive en departamento: " << domicilioMayor << endl;
    cout << "Promedio de edad de la ciudad: " << acumCiudad/cantPersonas << endl;
    cout << "Porcentaje de masculinos: " << (cantMasculino*100)/cantPersonas << endl;
    cout << "Porcentaje de femeninos: " << (cantFemenino*100)/cantPersonas << endl;

    return 0;
}