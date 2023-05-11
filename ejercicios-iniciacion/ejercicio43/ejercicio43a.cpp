#include <iostream>
using namespace std;

int convertirTiempoAMinutos(int tiempoEnHHMM) {
    int horas = tiempoEnHHMM / 100;
    int minutos = tiempoEnHHMM % 100;
    return horas * 60 + minutos;
}

int main() {
    int tiempoEnHHMM;
    cout << "Ingrese un horario en HHMM: ";
    cin >> tiempoEnHHMM;
    int tiempoEnMinutos = convertirTiempoAMinutos(tiempoEnHHMM);
    cout << "El tiempo " << tiempoEnHHMM << " en minutos es: " << tiempoEnMinutos << endl;
    return 0;
}