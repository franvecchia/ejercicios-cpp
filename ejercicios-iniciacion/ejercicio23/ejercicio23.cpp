#include <iostream>
using namespace std;

int main () {
    float valor, maximoNegativo, minimoPositivo, valorMinimoRango, promedio=0,acumPromedio=0;
    int acumNegativos=0, acumRango=0, acumPositivos=0, cantIngresos=0;

    while (valor != 0) {
        cout << "Ingrese valores: ";
        cin >> valor;

        if (valor < 0) {
            if (acumNegativos == 0) {
                maximoNegativo = valor;
            }

            if (valor > maximoNegativo) {
                maximoNegativo = valor;
            }

            acumNegativos++;  
        } else if (valor > 0) {
            if (acumPositivos == 0) {
                minimoPositivo = valor;
            }

            if (valor < minimoPositivo) {
                minimoPositivo = valor;
            }

            acumPositivos++;
        } 
        
        if (valor >= -17.3 && valor <= 26.9) {
            if (acumRango == 0) {
                valorMinimoRango = valor;
            }

            if (valor < valorMinimoRango) {
                valorMinimoRango = valor;
            }

            acumRango++;
        } 

        if (valor != 0) {
            acumPromedio += valor;
            cantIngresos++;
        }
    }

    promedio = acumPromedio/cantIngresos;

    if (acumNegativos == 0) {
        cout << "No se ingresaron valores negativos." << endl;
    } else {
        cout << "Valor maximo negativo: " << maximoNegativo << endl;
    }

    if (acumPositivos == 0) {
        cout << "No se ingresaron valores positivos." << endl;
    } else {
        cout << "Valor minimo positivo: " << minimoPositivo << endl;
    }

    if (acumRango == 0) {
        cout << "No se ingresaron valores dentro del rango de -17,3 y 26,9." << endl;
    } else {
        cout << "Valor minimo entre el rango de -17.3 y 26.9: " << valorMinimoRango << endl;
    }
    
    if (cantIngresos == 0) {
        cout << "No se ingresaron valores." << endl;
    } else {
        cout << "Promedio de todos los valores ingresados: " << promedio << endl;
    }

    cout << acumRango << endl;

    return 0;
}