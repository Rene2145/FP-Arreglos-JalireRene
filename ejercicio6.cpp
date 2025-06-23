#include <iostream>
using namespace std;

int main() {
    int n, vector[60]; 
    int sP = 0, sI = 0;
    cout << " SUMA DE COMPONENTES EN UN VECTOR"<<endl<<endl;
    cout << "¿Cuantos numeros deseas introducir?"<<endl;
    cin >> n;
    cout << "Escribe esos numeros en cada indice"<<endl;
    for(int i = 0; i < n; i=i+1) {
        cout << "Indice #" << i << ":"<<endl;
        cin >> vector[i];
    }

    for(int i = 0; i < n; i=i+1) {
        if(i % 2 == 0) { 
            sP = vector[i] + sP;
        } else {        
            sI = vector[i] + sI;
        }
    }
    cout << endl<<"La suma de componentes en:"<< endl;
    cout << "Indices pares   = " << sP << endl;
    cout << "Indices impares = " << sI << endl;

    return 0;
}

