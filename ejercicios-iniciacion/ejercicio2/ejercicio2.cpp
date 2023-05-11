#include <iostream>
using namespace std;

int main() {
   int dia, mes, anio;
   cout << "Ingrese el dia: ";
   cin >> dia;
   cout << "Ingrese el mes: ";
   cin >> mes;
   cout << "Ingrese el anio: ";
   cin >> anio;

   int fecha = (anio * 10000) + (mes * 100) + dia;
   cout << "La fecha es: " << fecha << endl;

   return 0;
}