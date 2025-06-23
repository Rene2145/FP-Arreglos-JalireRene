#include<iostream>
using namespace std;

int main(){
	int v[60];
	int n;
	
	cout<<"INVERTIENDO UN VECTOR"<<endl<<endl;
	cout<<"¿Cuantos elementos del vector deseas introducir ?"<<endl;
	cin>>n;
	cout<<"Escribe esos elementos"<<endl;
	for(int i=0; i<n; i=i+1){
		cout<<i+1<<": ";
		cin>>v[i];
	}
	cout << "Representacion del vector invertido: "<<endl;
    for(int i = n - 1; i >= 0; i=i-1) {
        cout << v[i] << " ";
    }
    cout << endl;
	return 0;
}
