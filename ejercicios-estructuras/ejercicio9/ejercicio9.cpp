#include <iostream>
using namespace std;

struct Inscripciones {
    int nroLegajo;
    int codigoMateria;
    string apellidoNombre;
};

void apareo (Inscripciones A[], int M, Inscripciones B[], int N, Inscripciones C[]) {
    int i=0, j=0, k=0;
    while (i<M && j<N) {
        if (A[i].codigoMateria < B[j].codigoMateria) {
            C[k] = A[i];
            i++;
        } else {
            C[k] = B[j];
            j++;
        }
        k++;
    }

    for (int h=i;h<M;h++) {
        C[k] = A[h];
        k++;
    }

    for (int h=j;h<N;h++) {
        C[k] = B[h];
        k++;
    }
}

int main () {
    Inscripciones MAESTROFINALES[5]={
        {123, 1, "pablo"},
        {122, 3, "francisco"},
        {121, 4, "fernando"},
        {234, 5, "micaela"},
        {222, 8, "jose"} 
    }, DIAFINALES[5]={
        {121, 2, "federico"},
        {333, 6, "sofia"},
        {455, 7, "paula"},
        {444, 9, "carlos"},
        {777, 10, "marcelo"}
    };

    Inscripciones resultados[10];

    apareo(MAESTROFINALES, 5, DIAFINALES, 5, resultados);

    for (int i=0;i<10;i++) {
        cout << "Numero de legajo: " << resultados[i].nroLegajo << endl;
        cout << "Codigo de materia: " << resultados[i].codigoMateria << endl;
        cout << "Apellido y nombre: " << resultados[i].apellidoNombre << endl;
        cout << "---------------" << endl;
    }

    return 0;
}