#include <iostream>
using namespace std;

//1a)
bool funcionVector (int N) {
    int vector[N];
    int j=0;
    bool resultado=true;

    for (int i=0;i<N;i++) {
        cin >> vector[i];
    }

    while (j<N && resultado==true) {
        if (vector[j+1]<=(vector[j]*2)) {
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
struct Supermercado {
    int codigoProvincia;
    string nombreProvincia;
    int numeroSucursal;
    int totalVentas;
};

void burbujeo (Supermercado supermercados[], int cant) {
    Supermercado aux;
    for (int i=0;i<cant;i++) {
        for (int j=0;j<cant-i-1;j++) {
            if (supermercados[j].codigoProvincia > supermercados[j+1].codigoProvincia) {
                aux = supermercados[j];
                supermercados[j] = supermercados[j+1];
                supermercados[j+1] = aux;
            }
        }
    }
}

int main () {
    Supermercado supermercados[12]={
        {1, "Mendoza", 1, 500},
        {2, "Buenos Aires", 1, 150},
        {3, "Neuquen", 3, 200},
        {1, "Mendoza", 3, 200},
        {4, "Entre rios", 1, 100},
        {1, "Mendoza", 2, 450},
        {2, "Buenos Aires", 2, 200},
        {3, "Neuquen", 1, 200},
        {2, "Buenos Aires", 3, 20},
        {4, "Entre rios", 2, 105},
        {3, "Neuquen", 2, 200},
        {4, "Entre rios", 3, 90}
    };

    burbujeo(supermercados, 12);

    int i=0;
    int totalProvincias=0;
    while(i<12) {
        int key=supermercados[i].codigoProvincia;
        int totalPorProvincia=0;
        int sucursalMaxima=0;
        int numeroSucursalMaxima;
        cout << "Provincia: " << supermercados[i].nombreProvincia << endl;
        while(i<12 && supermercados[i].codigoProvincia==key){
            cout << supermercados[i].numeroSucursal << "\t" << supermercados[i].totalVentas << endl;

            totalPorProvincia+=supermercados[i].totalVentas;

            if (supermercados[i].totalVentas>sucursalMaxima) {
                sucursalMaxima=supermercados[i].totalVentas;
                numeroSucursalMaxima=supermercados[i].numeroSucursal;
            }
            i++;
        }
        totalProvincias+=totalPorProvincia;
        cout << "Total de provincia: " << totalPorProvincia << endl;
        cout << "La sucursal que mas vendio en la provincia fue: "<<  numeroSucursalMaxima  << endl;
    }

    cout << "Total de ventas: " << totalProvincias << endl;

    return 0;
}