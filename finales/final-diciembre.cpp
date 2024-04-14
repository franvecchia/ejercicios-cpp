#include <iostream>
using namespace std;

struct Producto {
    int idProducto;
    string nombreProducto;
    float precio;
    int stock;
};

struct Pedido {
    int idCliente;
    int idProducto;
    int cantidadPedida;
};

Producto buscarProducto (int idProducto, Producto producto[]) {
    int i=0;
    bool resultado=false;
    Producto productoABuscar;
    while (i<20 && resultado==false) {
        if (producto[i].idProducto == idProducto) {
            resultado=true;
            productoABuscar=producto[i];
        } else {
            i++;
        }
    }

    return productoABuscar;
}

void burbujeo(Pedido arr[], int n){
    Pedido aux;
    int i=0;
    bool operando=false;
    while(i<n && !operando){
        operando=true;
        for(int j=0; j<n-i-1; j++){
            if(arr[j].idProducto>arr[j+1].idProducto){
                aux=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=aux;
                operando=false;
            }
        }
        i++;
    }
    return;
}

void actualizarStock(int idProducto, Producto producto[], int cantPedida) {
    int i=0;
    bool resultado=false;
    while (i<20 && resultado==false) {
        if (producto[i].idProducto == idProducto) {
            resultado=true;
            producto[i].stock -= cantPedida;
        } else {
            i++;
        }
    }
}


int main () {
    Pedido pedidos[]={};
    Producto productos[]={};
    Pedido pedido;

    cout << "Ingrese un idProducto o -1 para finalizar: ";
    cin >> pedido.idProducto;
    int cont=0;
    while (pedido.idProducto != -1) {
        pedido.idCliente=cont+1;
        cout << "Ingrese la cantidad pedida: ";
        cin >> pedido.cantidadPedida;

        pedidos[cont]=pedido;
        cont++;

        cout << "Ingrese un idProducto o -1 para finalizar: ";
        cin >> pedido.idProducto;
    }

    cout << "Listado de pedidos" << endl;
    int i=0;
    int cantProductosSatisfechos=0, cantProductosInsatisfechos=0;
    float precioTotalSatisfechos=0;
    cout << "Id producto \t NombreProducto \t PrecioUnitario \t cantPedida \t PrecioTotal" << endl;
    while (i<cont) {
        Producto producto=buscarProducto(pedidos[i].idProducto, productos);
        if (producto.stock>=pedido.cantidadPedida) {
            cout << producto.idProducto << "\t\t" << producto.nombreProducto << "\t\t" << producto.precio << "\t\t" << pedido.cantidadPedida << "\t\t" << pedido.cantidadPedida*producto.precio << endl;
            cantProductosSatisfechos++;
            precioTotalSatisfechos+=producto.precio*pedido.cantidadPedida;
            actualizarStock(pedido.idProducto, productos, pedido.cantidadPedida);
        } else {
            cout << "Este pedido no se puede satisfacer" << endl;
            cantProductosInsatisfechos++;
        }
        i++;
    }

    cout << "Cantidad de productos pedidos: " << cantProductosSatisfechos+cantProductosInsatisfechos << endl;
    cout << "Cantidad productos satisfechos: " << cantProductosSatisfechos << endl;
    cout << "Precio total productos satisfechos: " << precioTotalSatisfechos << endl;
    cout << "Cantidad productos insatisfechos: " << cantProductosInsatisfechos << endl;

    i=0;
    cout << "Stock de productos" << endl;
    cout << "Id producto \t NombreProducto \t precio \t stock \t estado" << endl;
    while (i<20) {
        if (productos[i].stock < 20) {
            cout << productos[i].idProducto << "\t\t" << productos[i].nombreProducto << "\t\t" << productos[i].precio << "\t\t" << productos[i].stock << "\t\t" << "REPOSICION" << endl;
        } else {
            cout << productos[i].idProducto << "\t\t" << productos[i].nombreProducto << "\t\t" << productos[i].precio << "\t\t" << productos[i].stock << "\t\t" << "NORMAL" << endl;
        }
        i++;
    }

    return 0;
}