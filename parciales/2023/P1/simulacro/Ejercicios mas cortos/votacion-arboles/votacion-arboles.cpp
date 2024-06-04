#include <iostream>
using namespace std;

int main () {
    char voto;
    int edad, acumEdad=0, votosPositivos=0, votosNegativos=0, votosEnBlanco=0,totalVotos=0;

    cout << "Ingrese su voto (S, N, B) o F para finalizar: ";
    cin >> voto;

    while (voto!='F') {
        totalVotos++;
        if (voto=='S') {
            votosPositivos++;
        } else if (voto=='N') {
            votosNegativos++;
        } else if (voto=='B') {
            votosEnBlanco++;
        } // puede realizarse tambien con switch.

        cout << "Ingrese su edad: ";
        cin >> edad;
        acumEdad += edad;

        cout << "Ingrese su voto (S, N, B) o F para finalizar: ";
        cin >> voto;
    }

    if (votosPositivos>votosNegativos && votosPositivos>votosEnBlanco) { 
        cout << "El resultado del plebiscito fue a favor de la poda de arboles." << endl;
    } else if (votosNegativos>votosPositivos && votosNegativos>votosEnBlanco) { 
        cout << "El resultado del plebiscito fue en contra de la poda de arboles." << endl;
    } else if ((votosEnBlanco>votosPositivos && votosEnBlanco>votosNegativos) || votosNegativos==votosPositivos) { // indeterminado en caso de empate entre positivos y negativos.
        cout << "El resultado del plebiscito fue indeterminado." << endl;
    }

    cout << "Promedio de edad de los votantes: " << acumEdad/totalVotos << endl;
    cout << "Porcentaje de votos positivos: " << (votosPositivos*100)/totalVotos << endl;
    cout << "Porcentaje de votos negativos: " << (votosNegativos*100)/totalVotos << endl;
    
    return 0;
}