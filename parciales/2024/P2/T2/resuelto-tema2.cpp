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

void apareo (Compra vector1[], Compra vector2[], int tam1, int tam2, Compra vectorResultado[]) {
    int i=0, j=0, k=0;
    while (i<tam1 && j<tam2) {
        if (vector1[i].nombreCompletoCliente < vector2[j].nombreCompletoCliente) {
            vectorResultado[k]=vector1[i];
            i++;
        } else if (vector1[i].nombreCompletoCliente > vector2[j].nombreCompletoCliente) {
            vectorResultado[k]=vector2[j];
            j++;
        } else {
            vectorResultado[k]=vector1[i];
            k++;
            vectorResultado[k]=vector1[i];
            i++;
            j++;
        }

        k++;
    }

    while (i<tam1) {
        vectorResultado[k]=vector1[i];
        i++;
        k++;
    }

    while (j<tam2) {
        vectorResultado[k]=vector2[j];
        j++;
        k++;
    }

    cout << "idProducto    cantPedida    nombreCompleto" << endl;
    for (int h=0;h<k;h++) {
        cout << vectorResultado[h].idProducto << "           " <<  vectorResultado[h].cantidadPedida 
        << "            " << vectorResultado[h].nombreCompletoCliente << endl;
    }
}


void infoProductos (Compra compras[], int cantCompras, int cantProductos) {
    int cantidadPorProducto[cantProductos]={0};
    Compra comprasMenoresA5[cantCompras*2];
    int cantMenoresA5=0;

    for (int i=0;i<cantCompras;i++) {
        if (compras[i].cantidadPedida < 5) {
            comprasMenoresA5[cantMenoresA5]=compras[i];
            cantMenoresA5++;
        }

        cantidadPorProducto[compras[i].idProducto - 1]+=compras[i].cantidadPedida;
    }

    cout << "Compras con una cantidad pedida menor a 5: " << endl;
    for (int i=0;i<cantMenoresA5;i++) {
        cout << comprasMenoresA5[i].idProducto << "    " << comprasMenoresA5[i].nombreCompletoCliente 
        << "    " << comprasMenoresA5[i].cantidadPedida << endl;
    }

    cout << "Cantidades por producto: " << endl;
    for (int i=0;i<cantProductos;i++) {
        cout << "Producto " << i+1 << ": " << cantidadPorProducto[i] << endl;
    }
}

int main () {
    // prueba ejercicio 1

    // prueba ejercicio 2
    int cantCompras=5, cantProductos=5;
    Compra comprasMesPasado[cantCompras]={ 
        {3, 10, "AntonioLopez"},
        {1, 5, "AntonioLopez"},
        {5, 20, "DelfinaLopez"},
        {3, 1, "ManuelLopez"},
        {4, 2, "PabloLopez"}
    }, 
    comprasMesActual[cantCompras]={
        {2, 10, "AntonioLopez"},
        {1, 11, "DelfinaLopez"},
        {2, 3, "FernandoLopez"},
        {1, 4, "OrlandoLopez"},
        {4, 11, "YamilaLopez"}
    };
    Producto productos[cantProductos]={
        {1, "adsdasada", 1000},
        {2, "qwerty", 2500},
        {3, "afjwopasp", 8000},
        {4, "apfosadngpoad", 250},
        {5, "asdaspdasldaspd", 50}
    };
    int tamanioFinal=cantCompras*2;
    Compra comprasFinal[tamanioFinal];
    
    apareo(comprasMesPasado, comprasMesActual, cantCompras, cantCompras, comprasFinal);
    infoProductos(comprasFinal, tamanioFinal, cantProductos);

    return 0;
}