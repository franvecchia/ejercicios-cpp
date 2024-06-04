#include <iostream>
using namespace std;

int main () {
    
    int identificacion=0, identificacionMaxPeso= 0, puerto, cantidadP1=0, cantidadP2=0, cantidadP3=0;
    float peso, pesoTotal= 0, pesoMax=0;

    cout << "Ingrese la identificacion del contenedor: ";
    cin >> identificacion;
    cout << "Ingrese el peso del contenedor: ";
    cin >> peso;
    cout << "Ingrese el puerto de arribo del contenedor: ";
    cin >> puerto;
    pesoMax = peso;
    identificacionMaxPeso = identificacion;

    for (int i = 1; i < 10; i++)
    {
        
        if (puerto == 1){
            cantidadP1++;
        } else if (puerto == 2){
                cantidadP2++;
            }else if (puerto == 3){
                cantidadP3++;
            }

        pesoTotal = pesoTotal + peso;

        if (peso > pesoMax){
            pesoMax = peso;
            identificacionMaxPeso = identificacion;
        }

        cout << "Ingrese la identificacion del contenedor: ";
        cin >> identificacion;
        cout << "Ingrese el peso del contenedor: ";
        cin >> peso;
        cout << "Ingrese el puerto de arribo del contenedor: ";
        cin >> puerto;
        
    }

    cout << "El peso total que debe trasladar el buque es: " << pesoTotal <<endl;
    cout << "El contenedor de mayor peso es el: " << identificacionMaxPeso <<endl;
    cout << "La cantidad de contenedores del puerto 1 es: " << cantidadP1 <<endl;
    cout << "La cantidad de contenedores del puerto 2 es: " << cantidadP2 <<endl;
    cout << "La cantidad de contenedores del puerto 3 es: " << cantidadP3 <<endl;
    
    return 0;
}