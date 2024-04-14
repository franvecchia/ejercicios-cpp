#include <iostream>
using namespace std;

// Ej. MI-17: Se ingresa un conjunto de valores float, cada uno de los cuales representan el sueldo de un empleado,
// excepto el último valor que es cero e indica el fin del conjunto. Se pide desarrollar un programa que determine e informe:
// a) Cuántos empleados ganan menos $1.520.
// b) Cuántos ganan $1.520 o más pero menos de $2.780.
// c) Cuántos ganan $2.780 o más pero menos de $5.999.
// d) Cuántos ganan $5.999 o más.

int main ()
{
    float salario;
    int catA=0;
    int catB=0;
    int catC=0;
    int catD=0;

    cout <<"ingrese el salario: " <<endl;
    cin >> salario;

    while (salario !=0)
    {
        cout<<"Salario "<< salario <<endl;
        if (salario>0 && salario<1520)
        {
            catA++;
        } else if (salario<2780)
        {
           catB++;
        }else if (salario<5999)
        {
           catC++;
        } else {
            catD++;
        }
        
        cout<< "Ingrese otro salario "<<endl;
        cin>> salario;
        
    }

    cout << "Hay: " << catA << " empleados categoria A.";

    cout << " Hay: " << catB << " empleados categoria B";

    cout << " Hay: " << catC << " empleados categoria C";

    cout << " Hay: " << catD << " empleados categoria D";

     return 0;
}