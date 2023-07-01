#include <iostream>
using namespace std;

struct JuegosPorConsola{
    string consola;
    int cantJuegos;
};

struct JuegosLocal{
    int codigoJuego;
    string tituloJuego;
    int stockLocal;
    string consola;
};

void burbujeo(JuegosLocal arr[], int n){
    JuegosLocal aux;
    int i=0;
    bool operando=false;
    while(i<n && !operando){
        operando=true;
        for(int j=0; j<n-i-1; j++){
            if(arr[j].consola>arr[j+1].consola){
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

void corteDeControl(JuegosLocal local[], int n, JuegosPorConsola consola[], int &k){
    int i=0;
    k=0;
    while(i<n){
        string key=local[i].consola;
        consola[k].consola=local[i].consola;
        int cantJuegos=0;
        while(i<n && local[i].consola==key){
            cantJuegos++;
            i++;
        }
        consola[k].cantJuegos=cantJuegos;
        k++;
    }
    return;
}

void imprimirVec(JuegosPorConsola arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i].consola<<endl;
        cout<<arr[i].cantJuegos<<endl;
    }
    return;
}
int main(){
    JuegosLocal Juegos[]={
        {123456, "Splatoon", 15, "Switch"},
        {654321, "Zelda", 30, "Switch"},
        {789654, "Halo", 10, "Xbox"},
        {483921, "Minecraft", 20, "Xbox"},
        {213213, "God of War", 7, "Playstation"},
        {573821, "Uncharted", 14, "Playstation"},
        {323212, "Sims", 50, "PC"},
        {483921, "W.O.W.", 13, "PC"},
        {323921, "Enter the Gungeon", 5, "Xbox"}
    };
    
    int g=9;
    burbujeo(Juegos, g);
    int k=0;
    JuegosPorConsola JuegosXConsola[g];
    corteDeControl(Juegos, g, JuegosXConsola, k);
    imprimirVec(JuegosXConsola, k);
    return 0;
}