#include <iostream>
using namespace std;

int main () {
    string oracion= "hola como estas todo bien.";
    int contadorOracion=0, letras=0;
    int vocalA=0, vocalE=0, vocalI=0, vocalO=0, vocalU=0, contadorPalabras=0, palabraMasLarga=0;

    while (oracion[contadorOracion]!= '.') {
        if (oracion[contadorOracion] == 'a') {
            vocalA++;
        } else if (oracion[contadorOracion] == 'e') {
            vocalE++;
        } else if (oracion[contadorOracion] == 'i') {
            vocalI++;
        } else if (oracion[contadorOracion] == 'o') {
            vocalO++;
        } else if (oracion[contadorOracion] == 'u') {
            vocalU++;
        }

        if (oracion[contadorOracion] == ' ') {
            contadorPalabras++;

            if (contadorPalabras == 1) {
                palabraMasLarga = letras;
            } 
        
            if (letras > palabraMasLarga) {
                palabraMasLarga = letras-1;
            }

            letras = 0;
        }

        contadorOracion++;
        letras++;
    }

    cout << "Cantidad de 'A' en la oracion: " << vocalA << endl;
    cout << "Cantidad de 'E' en la oracion: " << vocalE << endl;
    cout << "Cantidad de 'I' en la oracion: " << vocalI << endl;
    cout << "Cantidad de 'O' en la oracion: " << vocalO << endl;
    cout << "Cantidad de 'U' en la oracion: " << vocalU << endl;

    cout << "La cantidad de palabras en la oracion es de: " << contadorPalabras+1 << endl;

    if (letras > palabraMasLarga) {
        palabraMasLarga = letras-1;
    }

    cout << "La palabra mas larga tiene una cantidad de letras de: " << palabraMasLarga << endl; 
    
    return 0;
}