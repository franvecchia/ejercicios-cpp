#include <iostream>
using namespace std;

// 1
bool estaNumeroTresVeces (int vector[], int tam, int X) {
    int i=0, cont=0;

    while (i<tam && cont<3) {
        if (vector[i] == X) {
            cont++;
        }
        i++;
    }

    return cont==3;
}

//2
struct Compra {
    int idProducto;
    int cantidadPedida;
    string nombreCompletoCliente;
};

struct Producto {
    int idProducto;
    string descripcion;
    float precioUnitario;
};

void emitirListado (Compra compras[], Producto productos[], int cantCompras) {
    int i=0;
    float totalGeneral=0, gastoMayorCliente=-1;
    string nombreClienteMayor;
    Compra comprasMayoresA10Mil[cantCompras];
    int cantComprasMayores10Mil=0;

    while (i<cantCompras) {
        string key=compras[i].nombreCompletoCliente;
        float totalCliente=0;
        cout << "Nombre del cliente: " << key << endl;
        cout << "Descripcion     Precio operacion" << endl;
        while (i<cantCompras && key==compras[i].nombreCompletoCliente) {
            Producto productoActual=productos[compras[i].idProducto - 1];
            float precioOperacion=productoActual.precioUnitario*compras[i].cantidadPedida;
            cout <<  productoActual.descripcion << "    " << precioOperacion << endl;

            totalCliente+=precioOperacion;
            if (precioOperacion > 10000) {
                comprasMayoresA10Mil[cantComprasMayores10Mil]=compras[i];
                cantComprasMayores10Mil++;
            }
            i++;
        }
        cout << "Total cliente: " << totalCliente << endl;
        totalGeneral+=totalCliente;
        if (totalCliente>gastoMayorCliente) {
            gastoMayorCliente=totalCliente;
            nombreClienteMayor=key;
        }
    }
    cout << "Total general: " << totalGeneral << endl;
    cout << "El cliente que mas gasto es: " << nombreClienteMayor << endl;

    for (int i=0;i<cantComprasMayores10Mil;i++) {
        cout << comprasMayoresA10Mil[i].nombreCompletoCliente << "    " << comprasMayoresA10Mil[i].idProducto
        << "    " << comprasMayoresA10Mil[i].cantidadPedida << endl;
    }
}

int main () {
    // prueba ejercicio 1.
    int tam=10, vector[tam]={21,33,4,12,7,18,7,23,19,1}, numeroABuscar=7;
    if (estaNumeroTresVeces(vector, tam, numeroABuscar)) {
        cout << "El numero estaba al menos 3 veces." << endl;
    } else {
        cout << "El numero no estaba al menos 3 veces." << endl;
    }

    // prueba ejercicio 2
    int cantCompras=10, cantProductos=5;
    Compra compras[cantCompras]={
    {3, 10, "AntonioLopez"},
    {1, 5, "AntonioLopez"},
    {2, 10, "AntonioLopez"},
    {5, 20, "DelfinaLopez"},
    {1, 11, "DelfinaLopez"},
    {4, 10, "FernandoLopez"},
    {2, 1, "FernandoLopez"},
    {3, 2, "FernandoLopez"},
    {1, 3, "FernandoLopez"},
    {5, 4, "ManueLopez"}
    };
    Producto productos[cantProductos]={
        {1, "adsdasada", 1000},
        {2, "qwerty", 2500},
        {3, "afjwopasp", 8000},
        {4, "apfosadngpoad", 250},
        {5, "asdaspdasldaspd", 50}
    };

    emitirListado(compras, productos, cantCompras);
    
    return 0;
}