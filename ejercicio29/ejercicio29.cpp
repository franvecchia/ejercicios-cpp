#include <iostream>
#include <string>

using namespace std;

// Función para obtener el número romano de un dígito
string obtenerNumeroRomano(int digito, string unidad, string mitad, string decena) {
    string num_romano = "";
    if (digito == 9) {
        num_romano = unidad + decena;
    } else if (digito >= 5) {
        num_romano = mitad;
        for (int i = 6; i <= digito; i++) {
            num_romano += unidad;
        }
    } else if (digito == 4) {
        num_romano = unidad + mitad;
    } else {
        for (int i = 1; i <= digito; i++) {
            num_romano += unidad;
        }
    }
    return num_romano;
}

// Función para convertir un número entero a su correspondiente número romano
string convertirARomano(int num) {
    string num_romano = "";
    int unidades = num % 10;
    int decenas = (num / 10) % 10;
    int centenas = (num / 100) % 10;
    int millares = (num / 1000) % 10;
    if (millares > 0) {
        for (int i = 1; i <= millares; i++) {
            num_romano += "M";
        }
    }
    num_romano += obtenerNumeroRomano(centenas, "C", "D", "M");
    num_romano += obtenerNumeroRomano(decenas, "X", "L", "C");
    num_romano += obtenerNumeroRomano(unidades, "I", "V", "X");
    return num_romano;
}

int main() {
    int num;
    cout << "Ingrese un numero entero entre 1 y 3999: ";
    cin >> num;
    if (num < 1 || num > 3999) {
        cout << "El numero ingresado esta fuera del rango permitido." << endl;
    } else {
        string num_romano = convertirARomano(num);
        cout << "El numero " << num << " en romano es: " << num_romano << endl;
    }
    return 0;
}
