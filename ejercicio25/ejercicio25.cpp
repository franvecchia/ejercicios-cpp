#include <iostream>
using namespace std;

int main() {
    int m, color, numero, ultimo_numero = -1, cantidad_ceros = 0, cantidad_ant_cero = 0, 
    cantidad_seguidas_negro = 0, cantidad_seguidas_num = 0, mayor_alternados = 0, mayor_segundas_docenas = 0, cantidad_segundas_docenas=0;
    bool ultimo_color = false; // false: rojo, true: negro
    // Pedimos el número de pares a ingresar
    cout << "Ingrese el número de pares {color, número}: ";
    cin >> m;
    // Leemos los pares y realizamos los conteos necesarios
    for (int i = 0; i < m; i++) {
        cout << "Ingrese el par " << i+1 << " de " << m << " (color, número): ";
        cin >> color >> numero;
        // Contamos ceros y número anterior al cero
        if (numero == 0) {
            cantidad_ceros++;
            if (ultimo_numero != -1) {
                cantidad_ant_cero++;
            }
        } else {
            ultimo_numero = numero;
        }
        // Contamos seguidas del color negro
        if (color == 1) {
            if (ultimo_color) {
                cantidad_seguidas_negro++;
            } else {
                ultimo_color = true;
                cantidad_seguidas_negro = 1;
            }
        } else {
            ultimo_color = false;
        }
        // Contamos seguidas del mismo número
        if (numero == ultimo_numero) {
            cantidad_seguidas_num++;
        } else {
            ultimo_numero = numero;
            cantidad_seguidas_num = 1;
        }
        // Contamos seguidas alternadas rojo-negro y el máximo
        if ((color == 0 && ultimo_color) || (color == 1 && !ultimo_color)) {
            cantidad_segundas_docenas++;
            if (cantidad_segundas_docenas > mayor_alternados) {
                mayor_alternados = cantidad_segundas_docenas;
            }
        } else {
            cantidad_segundas_docenas = 1;
        }
    }
    // Mostramos los resultados
    cout << endl << "Resultados:" << endl;
    cout << "Cantidad de ceros: " << cantidad_ceros << endl;
    cout << "Cantidad de veces que salió el número anterior a cada cero: " << cantidad_ant_cero << endl;
    cout << "Cantidad máxima de veces seguidas que llegó a repetirse el color negro: " << cantidad_seguidas_negro << endl;
    cout << "Cantidad máxima de veces seguidas que llegó a repetirse el mismo número: " << cantidad_seguidas_num << endl;
    cout << "Mayor número de veces seguidas que salieron alternados el rojo y el negro: " << mayor_alternados << endl;
    cout << "Mayor número de veces seguidas que se negó la segunda docena: " << mayor_segundas_docenas << endl;

    return 0;
}