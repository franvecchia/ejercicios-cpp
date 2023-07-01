#include <iostream>
using namespace std;

struct Productos {
    int codigoProducto;
    int stock;
};

struct Cliente {
    int numeroPedido;
    long int numeroCliente;
    int codigoProducto;
    int cantidadPedida;
};

void procesarPedidos(Productos vectorProductos[], int cantProductos, Cliente vectorClientes[], int cantPedidos, Cliente vectorRechazos[], int &cantRechazos) {
    bool encontrado=false;
    int j=0;
    for (int i=0;i<cantPedidos;i++) {
        while (j<cantProductos && encontrado==false) {
            if (vectorClientes[i].codigoProducto == vectorProductos[j].codigoProducto) {
                encontrado=true;
                if (vectorProductos[j].stock > vectorClientes[i].cantidadPedida) {
                    vectorProductos[j].stock -= vectorClientes[i].cantidadPedida;
                    cout << "Pedido: " << i << endl;
                    cout << "Numero de Pedido: " << vectorClientes[i].numeroPedido << endl;
                    cout << "Numero de cliente: " << vectorClientes[i].numeroCliente << endl;
                    cout << "Codigo de producto: " << vectorClientes[i].codigoProducto << endl;
                    cout << "Cantidad pedida: " << vectorClientes[i].cantidadPedida << endl;
                    cout << "----------------" << endl;
                } else {
                    vectorRechazos[cantRechazos] = vectorClientes[i];
                    cantRechazos++;
                }
            }
            j++;
        }
        encontrado=false;
        j=0;
    }

    if (cantRechazos>0) {
        cout << "Pedidos rechazados: " << endl;
        for (int i=0;i<cantRechazos;i++) {
            cout << "Pedido: " << i << endl;
            cout << "Numero de pedido: " << vectorRechazos[i].numeroPedido << endl;
            cout << "Numero de cliente: " << vectorRechazos[i].numeroCliente << endl;
            cout << "Codigo de producto: " << vectorRechazos[i].codigoProducto << endl;
            cout << "Cantidad Pedida: " << vectorRechazos[i].cantidadPedida << endl;
            cout << "----------------" << endl;
        }
    } else {
        cout << "No hubo pedidos rechazados." << endl;
    }
}


int main () {
    int cantProductos=5;
    Productos vectorProductos[100]={
        {1, 20},
        {2, 15},
        {3, 100},
        {4, 2},
        {5, 10}
    };
    int cantClientes=5;
    Cliente vectorClientes[100]={
        {123, 231, 1, 10},
        {124, 232, 2, 5},
        {125, 233, 1, 5},
        {126, 234, 4, 3},
        {127, 235, 5, 8}
    };

    Cliente vectorRechazos[cantClientes];
    int cantRechazos=0;

    procesarPedidos(vectorProductos, cantProductos, vectorClientes, cantClientes, vectorRechazos, cantRechazos);

    return 0;
}