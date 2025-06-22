#include <iostream>
using namespace std;

int main (){
	
	cout <<"CONVIRTIENDO PALABRAS A MAYUSCULAS INICIALES"<<endl<<endl;
	cout <<"- caceres patrimonio de la humanidad"<<endl;
    char caracter[] = "caceres patrimonio de la humanidad";
    
    for (int i = 0; caracter[i] != '\0'; i=i+1){
        if ((i == 0 or caracter[i - 1] == ' ') and caracter[i] >= 'a' and caracter[i] <= 'z'){
            caracter[i] = caracter[i] - 32;
        }
    }

    cout <<"- "<<caracter << endl;
    return 0;
}
