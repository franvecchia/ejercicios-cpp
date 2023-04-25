#include <iostream>
using namespace std;

// Recibe la edad y retorna un entero indicando el grupo etario al que pertenece 
int EdadAGrupoEtario(int edad){

    if (edad > 0 && edad <= 14){
        return 1;
    }
    if (edad > 14 && edad <= 21){
        return 2;
    } 
    if (edad > 21 && edad <= 28){
        return 3;
    }
    if (edad > 28 && edad <= 35){
        return 4;
    }
    if (edad > 35 && edad <= 42){
        return 5;
    }
    if (edad > 42 && edad <= 49){
        return 6;
    }
    if (edad > 49 && edad <= 63){
        return 7;
    }
    if (edad > 63){
        return 8;
    }
    if (edad < 0){
        return -1;
    }

}

int main () {
    
    cout << EdadAGrupoEtario(25);
    return 0;
}