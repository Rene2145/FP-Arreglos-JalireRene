#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int d[30], suma = 0;
    srand(time(0));
    cout << "MEDIA, MEDIANA Y MODA"<<endl<<endl;
    for (int i = 0; i < 30; i=i+1) {
        d[i] = rand() % 901 + 100;
        suma =suma + d[i];
    }

    for (int i = 0; i < 29; i=i+1)
        for (int j = 0; j < 29 - i; j=j+1)
            if (d[j] > d[j + 1])
                swap(d[j], d[j + 1]);

    double media = suma / 30.0;

    double mediana = (d[14] + d[15]) / 2.0;

    int moda = d[0], maxr = 1;
    for (int i = 0; i < 30; i=i+1) {
        int rep = 1;
        for (int j = i + 1; j < 30; j=j+1)
            if (d[i] == d[j]) rep=rep+1;
        if (rep > maxr) {
            maxr = rep;
            moda = d[i];
        }
    }
    cout << "RESULTADOS"<< endl;
    cout << "La media es: " << media<<"." << endl;
    cout << "La mediana es: " << mediana<<"." << endl;
    if (maxr == 1)
        cout << "No cuenta con moda(ningun valor repetido).";
    else
        cout << "Su moda es: " << moda<<".";

    return 0;
}

