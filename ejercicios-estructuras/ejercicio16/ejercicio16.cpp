#include <iostream>
using namespace std;

struct Venta {
    int legajoPromotor; //(1...100)
    int idTelefono; // (1... 10)
    int cantidadVendida;
    int diaMesVenta;
};

struct Promotor {
    int legajoPromotor; // (1...40)
    string nombrePromotor;
    float porcentajeComision;
};

struct modeloTelefono {
    int idTelefono;
    string descripcion;
    float precio;
};

void calcularSueldoPromotores(Venta ventas[], modeloTelefono telefonos[], Promotor promotores[], int cantVentas, int cantPromotores) {
    // A: array donde en cada posicion voy a guardar lo que cobra cada promotor
    float sueldoPromotores[cantPromotores]={0};

    /*para calcular una venta necesitamos el precio del modelo del telefono, la cantidad vendida y 
    el porcentaje de la venta del promotor, todos estos datos tenemos que obtenerlos con busqueda directa (ya que podemos),
    y asi calcularlo y agregarlo en la posicion de sueldos de ese promotor*/

    /*NOTA IMPORTANTE: en el enunciado no dice que los vectores esten ordenados, para hacerle busqueda directa
    habria que aplicar burbujeo en cada uno de ellos por sus respectivos campos para que asi queden ordenados secuencialmente*/

    // procesamos las ventas y obtenemos los datos, calculamos el precio y lo agregamos al vector resultado
    for (int i=0;i<cantVentas;i++) {
        float precioTelefono=telefonos[ventas[i].idTelefono - 1].precio;
        float comisionPromotor=promotores[ventas[i].legajoPromotor - 1].porcentajeComision;
        float cantidadPedida=ventas[i].cantidadVendida;
        
        float totalPrecio=precioTelefono*comisionPromotor*cantidadPedida;
        sueldoPromotores[ventas[i].legajoPromotor - 1]+= totalPrecio;
    }

    // mostramos el resultado:
    for (int i=0;i<cantPromotores;i++) {
        cout << "Sueldo promotor " << i+1 << ": " << sueldoPromotores[i] << endl;
    }
}

void modeloCelularPorPromotor(Venta ventas[], modeloTelefono telefonos[], Promotor promotores[], int cantVentas, int cantPromotores, int cantTelefonos) {
    /* B: matriz donde en las filas ira el promotor en si, y en las columnas cada celular que vendio,
    en cada celda ira la cantidad vendida*/
    int cantidadVendidaPorPromotorYTelefono[cantPromotores][cantTelefonos]={0};

    for (int i=0;i<cantVentas;i++) {
        // con acceso directo, en la posicion del promotor y el telefono, le incrementamos la cantidad
        cantidadVendidaPorPromotorYTelefono[ventas[i].legajoPromotor - 1][ventas[i].idTelefono - 1]+=ventas[i].cantidadVendida;
    }

    /*por cada promotor calculamos cual fue el telefono que mas vendio, luego accedemos con busqueda directa
    a ese modelo del telefono y mostramos la descripcion del mismo.*/
    for (int i=0;i<cantPromotores;i++) {
        int mayorPromotor=-1;
        int modeloMayorPromotor;
        for (int j=0;j<cantTelefonos;j++) {
            if (cantidadVendidaPorPromotorYTelefono[i][j] > mayorPromotor) {
                mayorPromotor=cantidadVendidaPorPromotorYTelefono[i][j];
                modeloMayorPromotor=j;
            }
        }
        string descripcionMayorPromotor=telefonos[modeloMayorPromotor].descripcion;
        cout << "El modelo que mas vendio el promotor es: " << descripcionMayorPromotor << endl;
    }

    /*D: si el promotor no vendio un telefono, en la celda tendra un 0, lo mostramos asi con todos
    los promotores que tengan 0 en ese telefono (hay que recorrer la matriz por columna (por promotor y no por telefono)).*/
    for (int i=0;i<cantTelefonos;i++) {
        cout << "Modelo telefono: " << i+1 << endl;
        for (int j=0;i<cantPromotores;i++) {
            if (cantidadVendidaPorPromotorYTelefono[j][i] == 0) {
                cout << "El siguiente promotor no vendio el telefono: " << promotores[j].nombrePromotor << endl;
            }
        }
    }
}

void modeloCelularMasVendido(Venta ventas[], modeloTelefono telefonos[], int cantVentas, int cantTelefonos) {
    /*C: array de tamaño de los telefonos, en cada posicion va la cantidad vendida de ese modelo.*/
    int cantidadVendidaTelefonos[cantTelefonos]={0};

    for (int i=0;i<cantVentas;i++) {
        cantidadVendidaTelefonos[ventas[i].idTelefono - 1]+= ventas[i].cantidadVendida;
    }

    // luego puedo calcular el mayor, o simplemente aplicarle burbujeo al vector y mostrar la primer posicion.
}

int main () {
    // ventas del mes de la empresa (ya viene cargado)
    int cantVentas=100;
    Venta ventas[cantVentas];
    // telefonos que comercializa la empresa (ya viene cargado)
    int cantTelefonos=10;
    modeloTelefono telefonos[cantTelefonos];
    // promotores de la empresa (ya viene cargado)
    int cantPromotores=40;
    Promotor promotores[cantPromotores];

    calcularSueldoPromotores(ventas, telefonos, promotores, cantVentas, cantPromotores);
    modeloCelularPorPromotor(ventas, telefonos, promotores,cantVentas, cantPromotores, cantTelefonos);
    modeloCelularMasVendido(ventas, telefonos, cantVentas, cantTelefonos);

    return 0;
}