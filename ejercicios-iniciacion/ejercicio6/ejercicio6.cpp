/*Dadas dos fechas informar cual es la más reciente. Determine cuáles serían los datos de entrada y las leyendas
a informar de acuerdo al proceso solicitado.*/

#include <iostream>
using namespace std;

int main () {
    // AAAAMMDD
    int fecha1, fecha2;

    cout << "Ingrese una fecha: "<<endl;
    cin>>fecha1;
    cout<<"Ingrese otra fecha: " << endl;
    cin>>fecha2;

    if (fecha1>fecha2) {
        cout << "La fecha 1: "<< fecha1 << " es mas reciente que la fecha 2." << endl;
    } else if (fecha2>fecha1) {
        cout << "La fecha 2 es mas reciente que la fecha 1." << endl;
    } else {
        cout << "La fechas son iguales." << endl;
    }

    return 0;
}