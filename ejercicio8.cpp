#include <iostream>
using namespace std;

int main() {
	cout << "NUMERO CAPICUA"<<endl<<endl;
    int n[10]; 
    int b,a;
    cout << "Introduzca un numero de 10 cifras, por favor:"<<endl;
    cin >> b;
    a=b;

    for(int i = 9; i >= 0; i=i-1) {
        n[i] = b % 10; 
        b = b/10;           
    }


    bool esCapicua = true;
    for(int i = 0; i < 5; i=i+1) {
        if(n[i] != n[9 - i]) {
            esCapicua = false;
            break;
        }
    }

    cout << endl<<"Resultado "<<endl<<"El numero "<<a;
    if(esCapicua)
        cout << " es capicua." << endl;
    else
        cout << " no es capicua." << endl;

    return 0;
}

