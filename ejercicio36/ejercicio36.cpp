#include <iostream>

using namespace std;

//menor factor comun de dos números naturales
int mfc(int a, int b){
    int menor = 0;
    
    if (a < b) {
        menor = a;
    } else {
        menor = b;
    } 

    for(int i = 2; i <= menor; i++){
        if(a % i == 0 && b % i == 0){
            return i;
        }
    }
    return 1;
}

int main(){
    int p, q;
    cout << "Ingrese el numerador (P): ";
    cin >> p;
    cout << "Ingrese el denominador (Q): ";
    cin >> q;

    int factor = mfc(p, q);
    int simp = 0;

    cout << p << "/" << q;

    while(factor != 1){
        simp++;
        p = p/factor;
        q = q/factor;
        factor = mfc(p, q);
        cout << " = " << p << "/" << q;
    }

    cout <<endl;
    cout << "La fraccion tiene " << simp << " simplificaciones." << endl;
    
    return 0;
}
