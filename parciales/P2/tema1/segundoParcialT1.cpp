#include <iostream>
using namespace std;

// 1a)
bool funcionVector (int N) {
    int vector[N];
    int j=0;
    bool resultado=true;

    for (int i=0;i<N;i++) {
        cin >> vector[i];
    }

    while (j<N-1 && resultado==true) {
        if (vector[j+1]>=(vector[j]*2)) {
            j++;
        } else {
            resultado=false;
        }
    }

    return resultado;
}

//1b)
int funcionMatriz (int matriz1[3][3], int matriz2[3][3]) {
    int sumatoria1=0, sumatoria2=0;
    int resultado;
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            sumatoria1+=matriz1[i][j];
        }
    }

    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            sumatoria2+=matriz2[i][j];
        }
    }

    if (sumatoria1>sumatoria2) {
        resultado=1;
    } else if (sumatoria2>sumatoria1) {
        resultado=-1;
    } else {
        resultado=0;
    }

    return resultado;
}

// 2
struct Competidor {
    int numeroCompetidor;
    int numeroPista;
    string apellido;
    int tiempo;
};

void burbujeo(Competidor arr[], int n){
    Competidor aux;
    for(int i=0;i<n;i++) {
        for(int j=0; j<n-i-1; j++){
            if(arr[j].numeroCompetidor>arr[j+1].numeroCompetidor){
                aux=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=aux;
            }
        }
    }
}

void apareo (Competidor A[], int M, Competidor B[], int N, Competidor C[]) {
    int i=0, j=0, k=0;
    while (i<M && j<N) {
        if (A[i].numeroCompetidor < B[j].numeroCompetidor) {
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
    Competidor competidoresPista1[5]={
        {1, 1, "Gomez", 20},
        {3, 1, "Gonzalez", 12},
        {7, 1, "Fernandez", 10},
        {11, 1, "Lopez", 30},
        {6, 1, "Palacios", 16}
    };

    Competidor competidoresPista2[5]={
        {13, 2, "Sanchez", 12},
        {2, 2, "Rodriguez", 14},
        {5, 2, "Coronel", 15},
        {8, 2, "Ramirez", 21},
        {12, 2, "Ocampos", 11}
    };

    Competidor competidoresOrdenado[10];

    burbujeo(competidoresPista1, 5);
    burbujeo(competidoresPista2, 5);
    apareo(competidoresPista1, 5, competidoresPista2, 5, competidoresOrdenado);

    cout << "Numero\tApellido\tNumero De Pista\tTiempo" << endl;
    for (int i=0;i<10;i++) {
        cout << competidoresOrdenado[i].numeroCompetidor << "\t" << competidoresOrdenado[i].apellido << "\t" << competidoresOrdenado[i].numeroPista << "\t" << competidoresOrdenado[i].tiempo << endl;
    }

    string ganador;
    int mejorTiempo, menos15segundos=0;
    for (int i=0;i<10;i++) {
        if (competidoresOrdenado[i].tiempo<mejorTiempo || i==0) {
            mejorTiempo=competidoresOrdenado[i].tiempo;
            ganador=competidoresOrdenado[i].apellido;
        }

        if (competidoresOrdenado[i].tiempo<15) {
            menos15segundos++;
        } 
    }

    cout << "El ganador de la competencia fue: " << ganador << endl;
    cout << "Cantidad de competidores que finalizaron la carrera en menos de 15 segundos: " << menos15segundos << endl;

    return 0;
}