#include <iostream>
using namespace std;

int login () {
    string usuario, contrasenia;
    int cantIntentos=1;
    do {
        cout << "Ingrese usuario: ";
        cin >> usuario;
        cout << "Ingrese contrasenia: ";
        cin >> contrasenia;

        if ((usuario!="admin" || contrasenia!="boletos") && cantIntentos<=5) {
            cout << "Usuario o contrasenia incorrectos, intente nuevamente." << endl;
            cantIntentos++;
        }
    } while ((usuario!="admin" || contrasenia!="boletos") && cantIntentos<5);

    return cantIntentos;
}

int pedirCantidad (string mensaje) {
    int cantidad;
    cout <<mensaje;
    cin >> cantidad;
    return cantidad;
}

void calcularCantidades (int cantAdul, int cantMenor, string pelicula,int &mayorVendidos, int &mayorRecaudado, string &masVendida, string &masRecaudacion) {
    if ((cantAdul+cantMenor)>mayorVendidos) {
        mayorVendidos = cantAdul+cantMenor;
        masVendida = pelicula;
    }

    if ((cantAdul*500)+(cantMenor*300)>mayorRecaudado) {
        mayorRecaudado=(cantAdul*500)+(cantMenor*300);
        masRecaudacion=pelicula;
    }
}

void emitirCantidades (int cantAdul, int cantMenor, string masVendida, string masRecaudacion) {
    cout << "Pelicula que mas boletos vendio: "<< masVendida << endl;
    cout << "Pelicula que mas dinero recaudo: " << masRecaudacion << endl;
    cout <<"Cantidad TOTAL de entradas de adultos vendidas es: " << cantAdul << endl;
    cout <<"Cantidad TOTAL de entradas de menores vendidas es: " << cantMenor << endl;
}

int main () {
    int cantIntentos = login();
    string nombrePelicula, masVendida, masRecaudacion;
    int mayorVendidos=-1, mayorRecaudado=-1;
    int cantAdultos=0, cantMenores=0;

    char continuarIngreso = 's';
    if (cantIntentos<5){
        while (continuarIngreso == 's'){
            cout <<"Ingrese nombre de la pelicula: ";
            cin >> nombrePelicula;
            int cantAd = pedirCantidad("Ingrese cantidad de adultos: ");
            cantAdultos +=cantAd;
            int cantMen = pedirCantidad("Ingrese cantidad de menores: ");
            cantMenores += cantMen;
            cout <<"Desea cargar otra pelicula? (s/n): ";
            cin >> continuarIngreso;
            calcularCantidades (cantAd, cantMen, nombrePelicula, mayorVendidos, mayorRecaudado, masVendida, masRecaudacion);
        }   
        emitirCantidades(cantAdultos, cantMenores, masVendida, masRecaudacion);
    } else {
        cout <<"Acceso bloqueado. Contacte un asesor en linea";
    }   
    
    return 0;
}