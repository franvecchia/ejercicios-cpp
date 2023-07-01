#include <iostream>
using namespace std;

struct Libro {
    int codigoLibro;
    string autor;
    int stock;
    string titulo;
    string editorial;
    string genero;
};

struct Deposito {
    int codigoLibro;
    int stock;
};

void apareo (Libro A[], int M, Deposito B[], int N) {
    int i=0, j=0;
    int librosFaltantes=0;
    cout << "Libros faltantes: " << endl;
    while (i<M && j<N) {
        if (A[i].codigoLibro < B[j].codigoLibro) {
            cout << A[i].codigoLibro << endl;
            if (A[i].stock==0) {
                cout << "Falta en local y en deposito" << endl;
            } else {
                cout << "Falta en deposito." << endl;
            }
            librosFaltantes++;
            i++;
        } else if (B[j].codigoLibro< A[i].codigoLibro){
            cout << B[j].codigoLibro << endl;
            if (B[j].stock==0) {
                cout << "Falta en local y en deposito." << endl;
            } else {
                cout << "Falta en local." << endl;
            }
            librosFaltantes++;
            j++;
        } else {
            if (A[i].stock==0 && B[j].stock==0) {
                cout << A[i].codigoLibro<< endl;
                cout << "Falta en local y en deposito." << endl;
            } else if (A[i].stock==0 && B[j].stock!=0) {
                cout << A[i].codigoLibro << endl;
                cout << "Falta en local" << endl;
            } else if (A[i].stock!=0 && B[j].stock==0) {
                cout << A[i].codigoLibro << endl;
                cout << "Falta en deposito." << endl;
            }

            i++;
            j++;
        }
    }

    for (int h=i;h<M;h++) {
        cout << A[h].codigoLibro << endl;
        if (A[h].stock==0) {
            cout << "Falta en local y en deposito." << endl;
        } else {
            cout << "Falta en deposito." << endl;
        }

        librosFaltantes++;
    }

    for (int h=j;h<N;h++) {
        cout << B[h].codigoLibro << endl;
        if (B[h].stock==0) {
            cout << "Falta en local y en deposito." << endl;
        } else {
            cout << "Falta en local." << endl;
        }

        librosFaltantes++;
    }

    cout << "La cantidad de libros faltantes fue de: " << librosFaltantes << endl;
}

int main () {
    int librosFaltantes=0;
    Libro libros[5]={
        {1, "", 2, "", "", ""},
        {2, "", 10, "", "", ""},
        {4, "", 8, "", "", ""},
        {5, "", 0, "", "", ""},
        {7, "", 2, "", "", ""}
    }; 

    Deposito deposito[5]={
        {1,3},
        {2, 4},
        {3,0},
        {5,10},
        {6,2}
    };

    apareo(libros, 5, deposito, 5);

    return 0;
}