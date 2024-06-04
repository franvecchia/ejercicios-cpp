#include <iostream>
using namespace std;

void calcularCostoAbono(int costoAbono, int minutosLibres, int cargoPorMinuto, int minutosUtilizados, int &minutosExcedidos, float &montoTotal) {
    minutosExcedidos = minutosUtilizados - minutosLibres;
    if (minutosExcedidos < 0) {
        minutosExcedidos = 0;
    }

    montoTotal = (costoAbono + (minutosExcedidos * cargoPorMinuto)) *1.21;
}

int main() {
    int costoAbono, minutosExcedidos, minutosLibres;
    float montoTotal;

    cout << "Ingrese el costo del abono: ";
    cin >> costoAbono;
    cout << "Ingrese la cantidad de minutos libres: ";
    cin >> minutosLibres;
    int cargoPorMinuto=10;
    cout << "Ingrese el cargo por minuto: ";
    cin >> cargoPorMinuto;
    int minutosUtilizados;
    cout << "Ingrese la cantidad de minutos utilizados: ";
    cin >> minutosUtilizados;
    calcularCostoAbono(costoAbono, minutosLibres, cargoPorMinuto, minutosUtilizados, minutosExcedidos, montoTotal);
    cout << "Minutos excedidos: " << minutosExcedidos << endl;
    cout << "Monto total a abonar: $" << montoTotal << endl;
    return 0;
}