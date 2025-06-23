#include <iostream>
#include <string>
using namespace std;

int main() {
	cout<<"SECUENCIA DE NOMBRES ALFABETICAMENTE "<<endl<<endl;
    const int n = 6;         
    string p[n];        
    int c;

    cout << "¿Cuantos nombres desea introducir?"<<endl;
    cin >> c;
    cin.ignore(); 
    
    cout << endl<<"Escriba los nombres, por favor:"<<endl;
    for(int i = 0; i < c; i=i+1) {
        getline(cin, p[i]);
    }

    for(int i = 0; i < c - 1; i=i+1) {
        for(int j = 0; j < c - i - 1; j=j+1) {
            if(p[j] > p[j + 1]) {
                string aux = p[j];
                p[j] = p[j + 1];
                p[j + 1] = aux;
            }
        }
    }

    cout <<endl<<"Su ordenamiento alfabetico seria el siguiente:" << endl;
    for(int i = 0; i < c; i=i+1) {
        cout <<i+1<<") "<< p[i] << endl;
    }

    return 0;
}

