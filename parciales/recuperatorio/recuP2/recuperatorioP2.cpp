#include <iostream>
using namespace std;

void vectorSinNumero (int vector[], int X) {
    bool encontrado=false;
    int i=0;

    while (i<10 && encontrado==false) {
        if (vector[i] != X) {
            i++;
        } else {
            encontrado=true;
        }
    }

    if (encontrado) {
        for (int j=0;j<10;j++) {
            if (vector[j] != X) {
                cout << vector[j] << endl;
            }
        }
    } else {
        cout << "Numero no encontrado." << endl;
    }
}

struct Modelo {
    int idModelo;
    string marca;
    string nombreModelo;
};

struct Venta {
    int idModelo;
    int idVendedor;
    int fecha;
    string nombreCliente;
};

void emitirListado (Venta ventas[], Modelo modelos[], int cantVentas, int cantModelos) {
    int i=0;
    int totalVentas=0;
    int maxVentas=0;
    int fechaMayor;

    while (i<cantVentas) {
        int key=ventas[i].fecha;
        int totalPorFecha=0;

        cout << "Fecha: " << key << endl;
        cout << "Nombre\tidVendedor\tModelo" << endl;
        while (i<cantVentas && ventas[i].fecha==key) {
            int cont=0;
            bool encontrado=false;
            string modeloVendido;

            // por cada elemento del vector de ventas, hay que buscar el nombreModelo con el idModelo, para poder mostrarlo en el listado.
            while (cont<cantModelos && encontrado==false) {
                if (ventas[i].idModelo == modelos[cont].idModelo) {
                    modeloVendido=modelos[cont].nombreModelo;
                    encontrado=true;
                } else {
                    cont++;
                }
            }
            
            cout << ventas[i].nombreCliente << "\t\t" << ventas[i].idVendedor << "\t" << modeloVendido << endl;
            totalPorFecha++;
            i++;
        }
        cout << "Total de ventas de la fecha: "<< totalPorFecha << endl;
        totalVentas+=totalPorFecha;

        if (maxVentas<totalPorFecha) {
            maxVentas = totalPorFecha;
            fechaMayor=ventas[i-1].fecha;
        }
    }
    cout << "Total de ventas: " << totalVentas << endl;
    cout << "La fecha que mas automovil es se vendieron: " << fechaMayor << endl;
}

int main () {
    // prueba ejercicio 1.
    int vector[10]={1,2,3,8,5,6,7,8,9,10};
    int numeroABorrar=8;

    vectorSinNumero(vector, numeroABorrar);

    // prueba ejercicio 2.
    Modelo modelos[5]={
        // idModelo, marca, nombreModelo.
        {1, "Toyota", "Etios"},
        {3, "Ford", "Fiesta"},
        {5, "Volkswagen", "Gol"},
        {4, "Toyota","Hilux"},
        {2, "Chevrolet", "Cruze"}
    };

    Venta ventas[10]={ //ordenado por fecha
        // idModelo, idVendedor, fecha, nombreCliente.
        {1, 1, 1202, "Franco"}, 
        {3, 2, 1202, "Gustavo"},
        {3, 2, 1003, "Hector"},
        {3, 5, 1003, "Hugo"},
        {2, 9, 1003, "Gonzalo"},
        {5, 10, 2006, "Federico"},
        {5, 4, 2110, "Sofia"},
        {1, 3, 2110, "Micaela"},
        {1, 8, 2110, "Carlos"},
        {4, 8, 2110, "Camilo"}
    };

    emitirListado(ventas, modelos, 10, 5);

    return 0;
}