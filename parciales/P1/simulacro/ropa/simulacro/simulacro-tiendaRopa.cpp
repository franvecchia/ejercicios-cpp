#include <iostream>
using namespace std;

int calculoDelTotal (string codigoProducto, int cantidad, int &totalAPagar) {
    if (codigoProducto=="REMERA") {
        totalAPagar+=(800*cantidad);
    } else if (codigoProducto=="PANTALON") {
        totalAPagar+=(2500*cantidad);
    } else if (codigoProducto=="SWEATER") {
        totalAPagar+=(1200*cantidad);
    }

    return totalAPagar;
}

void procesarVenta (int dni, string codigoProducto, char color, int cantidad, char formaPago, int totalAPagar, double &recaudacionTotal, int &ventasTarjeta, int &totalVentas, int &mayorDni, double &totalMayorVenta) {
    double productoConDescuento;
    totalVentas++;
    cout << "DNI: " << dni << endl;
    cout << "Forma de pago: " << formaPago << endl;
    if (formaPago=='E') {
        productoConDescuento = totalAPagar*0.85;
        recaudacionTotal += productoConDescuento;
        cout << "Total a pagar: " << productoConDescuento << endl;

        if (productoConDescuento > totalMayorVenta) {
            totalMayorVenta = productoConDescuento;
            mayorDni = dni;
        }

    } else if (formaPago=='T') {
        recaudacionTotal+=totalAPagar;
        ventasTarjeta++;
        cout << "Total a pagar: " << totalAPagar << endl;

        if (totalAPagar > totalMayorVenta) {
            totalMayorVenta = totalAPagar;
            mayorDni = dni;
        }
    }
}

void calcularDiaTrabajo (int recaudacionTotal, int ventasTarjeta, int totalVentas, int mayorDni, double totalMayorVenta) {
    double porcentajeConTarjeta = (ventasTarjeta*100)/totalVentas;
    cout << "La recaudacion total de hoy fue: " << recaudacionTotal << endl;
    cout << "El porcentaje de ventas con tarjeta fue de: " << porcentajeConTarjeta << "%" << endl;
    cout << "La mayor venta se realizo con dni: " << mayorDni << " y el total fue: " << totalMayorVenta;
}

int main () {
    int dni, cantidad, ventasTarjeta=0, totalVentas=0, mayorDni, totalAPagar=0;
    string codigoProducto;
    char color, formaPago;
    double recaudacionTotal=0, totalMayorVenta=-1;
    
    cout << "Ingrese un DNI para procesar una venta, o 0 para salir: ";
    cin >> dni;

    while (dni!=0) {
        do {
            cout << "Ingrese el codigo de producto: ";
            cin >> codigoProducto;
            if (codigoProducto != "FIN") {
                cout << "Ingrese el color del producto: ";
                cin >> color;
                cout << "Ingrese la cantidad: ";
                cin >> cantidad;
            }

           calculoDelTotal(codigoProducto,cantidad,totalAPagar);
        } while (codigoProducto!="FIN");

        cout << "Ingrese la forma de pago: ";
        cin >> formaPago;

        procesarVenta(dni, codigoProducto, color, cantidad, formaPago, totalAPagar, recaudacionTotal, ventasTarjeta, totalVentas, mayorDni, totalMayorVenta);
        totalAPagar=0;
        
        cout << "Ingrese otro DNI para procesar una venta, o 0 para salir: ";
        cin >> dni;
    }

    if (totalVentas>=1) {
        calcularDiaTrabajo(recaudacionTotal, ventasTarjeta, totalVentas, mayorDni, totalMayorVenta);
    } else {
        cout << "No ha habido ninguna venta.";
    }
    
    return 0;
}