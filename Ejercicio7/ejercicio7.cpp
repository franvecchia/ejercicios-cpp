#include <iostream>
using namespace std;

int main () {
    int N, maximoValor=0, repetido=0, segundoMaxValor=0;
    cout << "Ingrese el tamanio del vector: ";
    cin >> N;
    
    int DATO[N];
    int MEJORDATO[2];

    for (int i=0; i<N; i++){
        cout << "Ingrese un valor para la posicion " << i <<":";
        cin >> DATO[i];
    }

    MEJORDATO[0] = DATO[0]; //Cargo el primer valor leido de DATO en la primera posicion de MEJORDATO
    
    if (DATO[1] > MEJORDATO[0]){ 
        //si el segundo valor leido de DATO es mayor al primero pongo el segundo en MEJORDATO[0] y el primer valor leido lo paso a MEJORDATO[1]
        MEJORDATO[0] = DATO[1];
        MEJORDATO[1] = DATO[0];
    }else {
        //sino el primer valor leido de DATO queda en MEJORDATO[0] y el segundo valor leido lo pongo en MEJORDATO[1]
        MEJORDATO[1] = DATO[1];
    }

    //el array MEJORDATO tiene los dos primeros valores leidos de DATO. Lo que hago en el for es comparar cada dato siguiente con los dos valores de MEJORDATO

    for (int k=2; k<N; k++){
        if (DATO[k] >= MEJORDATO[0]){
             //si el valor leido de DATO es mayor o igual a MEJORDATO[0] (significa que tambien es mayor a MEJORDATO[1]) ese valor ocupa el primer lugar, desplazo el primer valor anterior al segundo (MEJORDATO[1]) y el segundo anterior se descarta 
            MEJORDATO[1] = MEJORDATO[0];
            MEJORDATO[0] = DATO[k];
        }
        else {  
            if (DATO[k] > MEJORDATO[1]){
                //si es mayor solamente al segundo valor mayor anterior descarto el anterior y lo reemplazo con el nuevo valor leido. 
                MEJORDATO[1] = DATO[k];
            } //sino todo queda como esta porque el valor leido es menor a los dos de MEJORDATO
        }
            
    }

    cout <<"El mayor valor es : " << MEJORDATO[0] << endl;
    cout <<"El segundo mayor valor es: " << MEJORDATO[1];

    return 0;
}