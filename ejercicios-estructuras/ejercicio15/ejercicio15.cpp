#include <iostream>
using namespace std;

struct Articulo {
    string nombreArticulo;
    int codigoArticulo; //(0...29)
    int codigoSucursal; // (0...3)    
};

struct MovimientoArticulo {
    int codigoArticulo; //(0...29)
    int codigoSucursal; // (0...3)
    char tipoMovimiento;
    int cantidad;
};

int main () {
    int cantidadArticulos=10;
    int cantidadSucursales=4;

    // matriz de articulos que comercializa el dueño
    Articulo articulosALaVenta[cantidadSucursales][cantidadArticulos];
    // array de movimientos con articulos (le ingresan o lo vende)
    MovimientoArticulo movimientosArticulos[cantidadArticulos];
    // matriz inicial con el stock de cada articulo, ya viene cargado
    int stockInicial[cantidadSucursales][cantidadArticulos];

    // proceso todos los movimientos de los articulos
    for (int i=0;i<cantidadArticulos;i++) {
        // si es una entrada le sumo stock, si es salida le resto (buscamos el stock de la matriz con busqueda directa)
        if (movimientosArticulos[i].tipoMovimiento == 'E') {
            stockInicial[movimientosArticulos[i].codigoSucursal][movimientosArticulos[i].codigoArticulo]+=movimientosArticulos[i].cantidad;
        } else {
            stockInicial[movimientosArticulos[i].codigoSucursal][movimientosArticulos[i].codigoArticulo]-=movimientosArticulos[i].cantidad;
        }
    }

    // una vez cambiado todos los stocks, creamos el vector pedido y lo cargamos
    Articulo listaArticulosSinStock[cantidadArticulos];
    int indiceListaArticulos=0;

    for (int i=0; i<cantidadSucursales;i++) {
        cout << "Sucursal: " << i << endl;
        for (int j=0;j<cantidadArticulos;j++) {
            cout << stockInicial[i][j] << endl;
            // si el stock de dicho producto en dicha sucursal es menor o igual a cero, lo agregamos al vector
            if (stockInicial[i][j] <= 0) {
                listaArticulosSinStock[indiceListaArticulos]=articulosALaVenta[i][j];
                indiceListaArticulos++;
            }
        }
    }

    // mostramos los articulos sin stock
    for (int i=0;i<indiceListaArticulos;i++) {
        cout << listaArticulosSinStock[i].nombreArticulo << "   " << listaArticulosSinStock[i].codigoSucursal << "   "
        << listaArticulosSinStock[i].codigoArticulo << "   " << endl;
    }

    return 0;
}