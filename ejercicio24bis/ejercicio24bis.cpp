#include <iostream>
using namespace std;

int main () {

    int numero, cantLotes=0, maximoConjunto=0, posMax=0, subloteMax=0, cantidadotal=0;
    cout << "Ingrese un numero: ";
    cin >> numero;

    maximoConjunto = numero;

    while (numero >=0)
    {
        float suma= 0, cantidad = 0, minSublote=0;
        cantLotes++;
        minSublote=numero;

        while (numero > 0)
        {
            suma = suma + numero;
            cantidad++;

            if (numero > maximoConjunto){
                maximoConjunto = numero;
                posMax = cantidad;
                subloteMax = cantLotes;
            }

            if (numero < minSublote){
                minSublote=numero;
            }

            cout << "Ingrese un numero: ";
            cin >> numero;

        }

        cantidadotal = cantidadotal + cantidad;
       
       if (cantidad > 0){
            cout << "El promedio del lote es : " << suma/cantidad <<endl;
            cout << "El valor minimo del sublote es : " << minSublote <<endl;
       }
    
        if (numero >= 0){
            cout << "Ingrese un numero: ";
            cin >> numero;
        }
       
                      
    }

    cout << "La cantidad total de sublotes es : " << cantLotes <<endl;
    if (cantidadotal > 0) {
        cout << "El maximo numero es : " << maximoConjunto <<endl;
        cout << "El maximo esta en el lote: " << subloteMax <<endl;
        cout << "La posicion dentro del lote es : " << posMax <<endl;
    }
      

    return 0;
}
