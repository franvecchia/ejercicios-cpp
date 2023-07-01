#include <iostream>
using namespace std;

int main () {
    int tipoInfraccion;
    string motivo;
    int valor;
    char gravedad;
    
    int gravedad1=0, gravedad2=0, gravedad3=0, cant=0;
    for (int i=0;i<20;i++) {
        cout << "Ingrese el tipo de infraccion: (1, 2, 3 o 4): ";
        cin >> tipoInfraccion;
        cout << "Ingrese el valor de la multa: ";
        cin >> valor;
        cout << "Ingrese la gravedad de la infraccion: 'L', 'M' o 'G': ";
        cin >> gravedad;

        switch (gravedad) {
            case 'L': gravedad1+=valor;
            break;
            case 'M': gravedad2+=valor;
            break;
            case 'G': gravedad3+=valor;
            break;
            default: cout << "ERROR." << endl;
        }

        if ((tipoInfraccion==3 || tipoInfraccion==4) && gravedad=='G') {
            cant++;
        }
    }
    
    if (cant>=3) {
        cout << "Clausurar fabrica." << endl;
    }

    return 0;
}