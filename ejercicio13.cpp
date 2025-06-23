#include <iostream>
using namespace std;

void mistrcpy(char str1[], char str2[]){
	int i=0;
	while (str2[i]!='\0'){
		str1[i]=str2[i];
		i=i+1;
	}
	str1[i]='\0';
}
int main (){
	cout<<"FUNCION MISTRCPY"<<endl<<endl;
	char c1[60], c2[60];
	cout<<"Introduce una cadena, por favor:"<<endl;
	cin >> c2;
	mistrcpy(c1, c2);
	cout<<"La cadena fue copiada en la cadena 1: "<<c1<<endl;
	return 0;
}
