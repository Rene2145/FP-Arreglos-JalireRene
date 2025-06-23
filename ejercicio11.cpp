#include<iostream>
using namespace std;
int main(){
	int n, sp=0, sn=0;
	cout<<"¿Cuantos numeros deseas introducir al arreglo?"<<endl;
	cin>>n;
	int a[n];
	cout<<"¿Cuales van a ser esos numeros?"<<endl;
	for(int i=0; i<n; i=i+1){
		cout<<i+1<<" -> ";
		cin>>a[i];
		if(a[i]>=0){
			sp=sp+a[i];
		}else{
			sn=sn+a[i];
		}
	}
	cout<<"RESULTADOS"<<sp<<endl;
	cout<<"Suma de positivos es: "<<sp<<endl;
	cout<<"Suma de negativos es: "<<sn<<endl;
	return 0;
}
