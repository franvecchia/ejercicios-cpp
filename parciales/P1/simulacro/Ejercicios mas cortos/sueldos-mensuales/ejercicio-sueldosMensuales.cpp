#include <iostream>
using namespace std;

void leer(string mensaje, float &valor){
    cout << mensaje;
    cin >> valor;
    return;
}

int main () {
    float sueldo, total=0;
    int contadorMeses=1;
    leer("Ingrese sueldo: ", sueldo);  

    while (sueldo>=0 && contadorMeses<12) {
        total += sueldo;
        leer("Ingrese sueldo: ", sueldo);
        contadorMeses++;
    }

    cout << "El monto total en sueldos es: " << total;    

    return 0;
}