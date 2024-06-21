#include <iostream>
using namespace std;

void vectorSinNumero (int vector[], int X) {
    bool encontrado=false;
    int i=0;

    while (i<10 && !encontrado) {
        if (vector[i] == X) {
            encontrado=true;
        } else {
            i++;
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
    int idModelo; //(1...5)
    string marca;
    string nombreModelo;
};

struct Venta {
    int idModelo;
    int fecha;
    string nombreCliente;
};

void emitirListado (Venta ventas[], Modelo modelos[], int cantVentas) {
    int i=0;
    int cantVentasTotal=0, ventasMayor=-1, fechaMayor;
    while (i<cantVentas) {
        int key=ventas[i].fecha;
        int totalVentasFecha=0;

        cout << "Fecha: " << key << endl;
        cout << "nombre cliente   marca    nombre modelo" << endl;
        while (i<cantVentas && key==ventas[i].fecha) {
            Modelo modeloVentaActual=modelos[ventas[i].idModelo - 1];
            cout << ventas[i].nombreCliente << "       " << modeloVentaActual.marca << "        "
            << modeloVentaActual.nombreModelo << endl;
            totalVentasFecha++;
            i++;
        }
        cout << "Cantidad de ventas de la fecha: " << totalVentasFecha << endl;
        cantVentasTotal+=totalVentasFecha;
        if (totalVentasFecha>ventasMayor) {
            ventasMayor=totalVentasFecha;
            fechaMayor=key;
        }
    }
    cout << "Cantidad de ventas del mes: " << cantVentasTotal << endl;
    cout << "Fecha que mas automoviles se vendieron: "<< fechaMayor << endl;
}

void informarCantidadModelos(Venta ventas[], Modelo modelos[], int cantVentas, int cantModelos) {
    int cantidadVendidaPorModelo[cantModelos]={0};

    for (int i=0;i<cantVentas;i++) {
        cantidadVendidaPorModelo[ventas[i].idModelo - 1]++;
    }

    for (int i=0;i<cantModelos;i++) {
        cout << "Cantidad vendida del modelo " << i+1 << ": " << cantidadVendidaPorModelo[i] << endl;
    }
}

int main () {
    // prueba ejercicio 1.
    int vector[10]={1,2,3,8,5,6,7,8,9,10};
    int numeroABorrar=8;

    vectorSinNumero(vector, numeroABorrar);
    cout << "-----------------" << endl;

    // prueba ejercicio 2.
    int cantModelos=5;
    Modelo modelos[cantModelos]={
        // idModelo, marca, nombreModelo.
        {1, "Toyota", "Etios"},
        {2, "Ford", "Fiesta"},
        {3, "Volkswagen", "Gol"},
        {4, "Toyota","Hilux"},
        {5, "Chevrolet", "Cruze"}
    };

    int cantVentas=10;
    Venta ventas[cantVentas]={ //ordenado por fecha
        // idModelo, idVendedor, fecha, nombreCliente.
        {1, 2103, "Franco"}, 
        {3, 2103, "Gustavo"},
        {3, 2103, "Hector"},
        {3, 505, "Hugo"},
        {2, 505, "Gonzalo"},
        {5, 1406, "Federico"},
        {5, 2110, "Sofia"},
        {1, 2110, "Micaela"},
        {1, 2110, "Carlos"},
        {4, 2110, "Camilo"}
    };

    emitirListado(ventas, modelos, cantVentas);
    informarCantidadModelos(ventas, modelos, cantVentas, cantModelos);

    return 0;
}