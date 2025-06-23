#include<iostream>
using namespace std;

int main(){
	cout<<"INVERTIENDO UN VECTOR"<<endl<<endl;
	cout<<"¿Cuantos numeros deseas introducir?"<<endl;
	int n;
	cin>>n;
	int Num[n];
	cout<<"Escribe los numeros del vector"<<endl;
	for(int i=0; i<n; i=i+1){
		cout<<i+1;
		cin>>Num[i];

	}
	return 0;
}
