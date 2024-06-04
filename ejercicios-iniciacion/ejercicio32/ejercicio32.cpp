#include <iostream>
using namespace std;

int main () {
    int M, nroVuelo, cantAsientos, nroPasaporte;
    float importe;
    string destino;

    cout << "Ingrese la cantidad de vuelos: " << endl;
    cin >> M;

    int i=0, cantVuelosCompletos=0, nroVueloMasRecaudacion, cantVecesVuelosCompletos=0;
    float recaudadoMes=0, mayorRecaudado=0;
    while (i<M) {
        cout << "Ingrese el numero de vuelo: " << endl;
        cin >> nroVuelo;
        cout << "Ingrese la cantidad de asientos: " << endl;
        cin >> cantAsientos;
        cout << "Ingrese el destino: " << endl;
        cin >> destino;
        float totalVuelo=0;
        int cantPasajeros=0;

        cout << "nro de vuelo: " << nroVuelo << "\t" << "Destino: " << destino << endl;

        cout << "Ingrese el numero de pasaporte: " << endl;
        cin >> nroPasaporte;
        while (cantPasajeros<cantAsientos && nroPasaporte != 0) {
            cout << "Ingrese el importe: " << endl;
            cin >> importe;

            cout << "Nro de pasaporte\tImporte en U$S" << endl;
            cout << nroPasaporte << "\t\t\t" << importe << endl;
            cantPasajeros++;
            totalVuelo+=importe;

            if (cantPasajeros<cantAsientos) {
                cout << "Ingrese el numero de pasaporte: " << endl;
                cin >> nroPasaporte;    
            }
        }

        if (cantPasajeros==cantAsientos) {
            cantVuelosCompletos++;
        } else {
            if (cantVuelosCompletos>1) {
                cantVecesVuelosCompletos++;
            }
            cantVuelosCompletos=0;
        }

        if (totalVuelo>mayorRecaudado) {
            mayorRecaudado=totalVuelo;
            nroVueloMasRecaudacion=nroVuelo;
        }

        float porcentajeLibres=(cantPasajeros*100)/cantAsientos;
        recaudadoMes+=totalVuelo;
        cout << "Total recaudado del vuelo: " << totalVuelo << endl;
        cout << "Porcentaje de asientos libres: " << porcentajeLibres << "%"  << endl;
        cout << "Porcentaje de asientos ocupados: " << 100-porcentajeLibres << "%" << endl;
        i++;
    }

    cout << "Total recaudado en el mes: " << recaudadoMes << endl;
    cout << "Cantidad de veces seguidas que se dieron vuelos completos: " << cantVuelosCompletos << endl;
    cout << "El numero de vuelo que mas recaudo: " << mayorRecaudado <<endl;

    return 0;
}