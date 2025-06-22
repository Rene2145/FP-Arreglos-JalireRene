#include <iostream>
using namespace std;

int main() {
	
    char caracter[60]; 
    cout<<"ECO DE LA ENTRADA"<<endl<<endl;
    cout << "Comencemos"<<endl;
    cout << "1) Escribe cualquier frase que desees: "<<endl;
    cin.getline(caracter, 60); 
    cout <<endl<<"2) Cada palabra de la frase, escrita en una linea diferente:" << endl;
    for(int i = 0; caracter[i] !='\0'; i=i+1) {
        if(caracter[i] == ' ') { 
            cout << endl;
        } else {
            cout << caracter[i]; 
        }
    }
    return 0;
}

