#include <iostream>
using namespace std;

bool esOctubre(int mes) {
    return mes == 10;
}

bool nacimientos1990(int dia, int mes, int anio) {
    if (anio < 1990) {
        return true;
    } 
    if (anio == 1990 && mes < 7) {
        return true;
    } 
    if (anio == 1990 && mes == 7 && dia < 9) {
        return true;
    } else {
        return false;
    }
}

bool nacimientosPrimavera(int dia, int mes, int anio, char sexo) {
    if (anio != 1982 || sexo != 'F') {
        return false;
    } 
    if (mes >= 9 && mes <= 11) {
        return true;
    }

    return false;
}

void obtenerSexoPersonaMasVieja(int fecha, char sexo, int &fechaMenor, char &sexoPersonaMayor) {
    if(fecha < fechaMenor || fechaMenor == 0){
        fechaMenor = fecha;
        sexoPersonaMayor = sexo;
    }
}


int main() {
    int octubre = 0;
    int antesJulio = 0;
    int mujeresPrimavera = 0;
    int dia, mes, anio;
    char sexo, sexoPersonaMasVieja;
    int fecha, fechaMayor;

    cin >> dia;
    cin >> mes >> anio >> sexo;


    while (dia!=0) {

        if (esOctubre(mes)) octubre++;
        if (nacimientos1990(dia, mes, anio)) {
            antesJulio++;
        } 
        if (nacimientosPrimavera(dia, mes, anio, sexo)) {
            mujeresPrimavera++;
        }

        fecha = (anio * 10000) + (mes * 100) + (dia);
        obtenerSexoPersonaMasVieja(fecha,sexo,fechaMayor,sexoPersonaMasVieja);

        cin >> dia;
        cin >> mes >> anio >> sexo;
    }

    cout << "Nacimientos en octubre: " << octubre << endl;
    cout << "Nacimientos antes del 9 de julio de 1990: " << antesJulio << endl;
    cout << "Nacimientos de mujeres en la primavera del 1982: " << mujeresPrimavera << endl;
    cout << "Sexo de la persona mas vieja: " << obtenerSexoPersonaMasVieja(fecha,sexo,fechaMayor,sexoPersonaMasVieja) << endl;

    return 0;
}