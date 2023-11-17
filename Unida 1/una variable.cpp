#include <iostream>
using namespace std;
int main(){
	
	const int tamNumero =6;
	int numeros[tamNumero];
	
	for(int i=0; i< tamNumero; i++){
		cout<<"Ingrese el numero"<<i+1<<":";
		cin>>numeros[i];
	}
	
	cout<<"los numeros ingresados son:";
	for(int i=0; i<tamNumero; i++){
		cout<<numeros[i]<<"";
	}
	cout<<endl;
	return 0;
}
