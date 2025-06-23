#include <iostream>
using namespace std;

int main() {
    int n, numeros[20]; 
	int nma, nme, rma = 0, rme = 0;

    cout << "¿Cuantos numeros deseas introducir?"<<endl;
    cin >> n;
	cout <<"¿Cuales van a ser esos numeros?"<<endl;

    for(int i = 0; i < n; i=i+1) {
        cin >> numeros[i];
    }

    nma = nme = numeros[0]; 

    for(int i = 1; i < n; i=i+1) {
        if(numeros[i] > nma) nma = numeros[i];
        if(numeros[i] < nme) nme = numeros[i];
    }

    for(int i = 0; i < n; i=i+1) {
        if(numeros[i] == nma) rma=rma+1;
        if(numeros[i] == nme) rme=rme+1;
    }
    cout <<endl<<"RESULTADOS:"<<endl;
    cout << "El numero mayor es " << nma << ", se repite " << rma<<" veces."<<endl;
    cout << "El numero menor es " << nme << ", se repite " << rme<<" veces."<<endl;

    return 0;
}

