#include <iostream>
using namespace std;

int main() {
    char caracter[60]; 
    char l;      
    int c = 0; 
    cout << "OCURRENCIA DE UNA LETRA"<<endl<<endl;
    cout << "Escribe una frase: "<<endl;
    cin.getline(caracter, 100); 
    cout << "Escribe la letra que deseas encontrar:"<<endl;
    cin >> l; 
    for(int i = 0; caracter[i] != '\0'; i=i+1) {
        if(caracter[i] == l) { 
            c=c+1; 
        }
    }
    cout << "Pudimos encontrar " << c << " veces "<<"la letra "<<l<<"."<< endl;

    return 0;
}

