#include <iostream>
using namespace std;

int main() {
   int fecha, dia, mes, anio;

   cout << "Ingrese la fecha en formato AAAAMMDD: ";
   cin >> fecha;

   dia = fecha % 100;
   mes = (fecha / 100) % 100;
   anio = fecha / 10000;

   cout << "La fecha ingresada es: " << dia << "/" << mes << "/" << anio << endl;

   return 0;
}