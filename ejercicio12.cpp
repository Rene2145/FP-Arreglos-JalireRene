#include <iostream>
using namespace std;
	bool orden(int vec[], int n) {
	    for(int i = 0; i < n - 1; i=i+1) {
	        if(vec[i] > vec[i + 1]) {
	            return false; 
	        }
	    }
	    return true;
	}
int main() {
	cout << "FUNCION VECTOR, LONGITUD Y ORDEN"<<endl<<endl;
    int n, v[60];
    cout << "¿Cuantos elementos deseas introducir? "<<endl;
    cin >> n;

    cout << "Escribe esos elementos"<<endl;
    for(int i = 0; i < n; i=i+1) {
        cout<<"- ";
		cin >> v[i];
    }


    if(orden(v, n))
        cout << endl<<"True"<<endl<<"El vector esta ordenado forma creciente." << endl;
    else
        cout << endl<<"False"<<endl<<"El vector no esta ordenado de forma creciente." << endl;

    return 0;
}

