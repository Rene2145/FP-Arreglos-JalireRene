#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n,v[60];
    cout << "ROTACION DE LOS COMPONENTES"<<endl<<endl;
    cout << "¿Cuantos elementos tendra el vector? "<<endl;
    cin >> n;
    cout << "Escribe esos elementos"<<endl;
    for (int i = 0; i < n; i=i+1) {
        cin >> v[i];
    }
    int ultimo = v[n - 1];
    for (int i = n - 1; i > 0; i=i-1) {
        v[i] = v[i - 1];
    }
    v[0] = ultimo;

    cout << "Rotacion del vector hacia la derecha:";
    for (int i = 0; i < n; i=i+1) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
