#include <iostream>
using namespace std;

int main () {
    int numero=0, cantLotes=0, maximoConjunto=0, posEnLoteMaximo=0, loteMaximo=0;

    cout << "Ingrese numero: ";
    cin >> numero;
    maximoConjunto = numero;

    while (numero >= 0)
    {
        float suma=0, contador=0, promedio=0, minimoLote=0;
        minimoLote=numero;
        while (numero != 0)
        {
            suma = suma + numero;
            contador++;
            if (numero > maximoConjunto){
                maximoConjunto = numero;
                posEnLoteMaximo = contador;
                loteMaximo = cantLotes;
            }
            if (numero < minimoLote){
                minimoLote = numero;
            }
            cout << "Ingrese numero: ";
            cin >> numero;
        }
        if (contador >0){
            promedio = suma/contador;
            cout << "El promedio del sublote fue: " << promedio << endl;
            cout << "El valor minimo del sublote fue: " << minimoLote << endl;
        }
        cantLotes++;
        cout << "Ingrese numero: ";
        cin >> numero;
        
    }

    cout << "El total de lotes procesados fue: " << cantLotes << endl;
    cout << "El maximo valor fue: " << maximoConjunto << endl;
    cout << "Ubicado en el lote: " << loteMaximo << endl;
    cout << "Su posicion en el lote fue: " << posEnLoteMaximo << endl;

    return 0;
}