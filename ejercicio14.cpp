#include <iostream>
using namespace std;

void mistrcat(char str1[], char str2[]){
    int i=0;
    while(str1[i]!='\0'){
        i=i+1;
    }
    int j=0;
    while(str2[j] != '\0'){
        str1[i]=str2[j];
        i=i+1;
        j=j+1;
    }
    str1[i]='\0';
}

int main(){
	cout<<"FUNCION MISTRCAT"<<endl<<endl;
    char str1[100], str2[60];
    cout<<"Introduce la 1 cadena"<<endl;
    cin.getline(str1, 100);
    
	cout<<"Introduce la 2 cadena"<<endl;
    cin.getline(str2, 60);
	    
	mistrcat(str1, str2);
	
	cout<<"Reunion de cadenas:"<<str1<<endl;
    return 0;
}
