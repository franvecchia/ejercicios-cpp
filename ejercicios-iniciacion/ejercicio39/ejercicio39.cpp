#include <iostream>
using namespace std;

void obtenerHoraEnSegundos(int valor, int &hora, int &min, int &seg) {
    hora = (valor / 10000) * 3600;
    min = ((valor % 10000) / 100) * 60;
    seg = valor % 100;
}

void obtenerNuevaHora(int segundos, int &hh, int &mm, int &ss) {
    hh = (segundos / 3600) % 24;
    mm = (segundos % 3600) / 60;
    ss = segundos % 60;
}

int main () {
    int horaInicial = 0;
    int horaFinal = 0;

    cout << "Ingrese hora inicial: ";
    cin >> horaInicial;
    cout << endl;

    cout << "Ingrese hora final: ";
    cin >> horaFinal;
    cout <<endl;

    int hh = 0;
    int mm = 0;
    int ss = 0;

    obtenerHoraEnSegundos(horaInicial, hh, mm, ss);
    int horaInicialEnSegundos = hh + mm + ss;

    obtenerHoraEnSegundos(horaFinal, hh, mm, ss);
    int horaFinalEnSegundos = hh + mm + ss;

    int horaResultanteEnSegundos = horaInicialEnSegundos + horaFinalEnSegundos;

    obtenerNuevaHora(horaResultanteEnSegundos, hh, mm, ss);

    cout << "La nueva hora es: " << hh << ":" << mm << ":" << ss << endl;

    return 0;
}