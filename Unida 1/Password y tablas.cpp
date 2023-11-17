#include "iostream"
#include "stdio.h"
using namespace std;
int main(){
	
	string user,pass, usuario = "Sistemas", password = "Admin01";
	char seguir, opc;
	int multiplicacion, numero, i;
	cout<<"bienvenido(a) por favor ingresa al sistema:\n";
	cout<<"ingresa tu usuario: ";
	cin>>user;
	cout<<"ingresa tu password: ";
	cin>>pass;
	if(user == usuario && pass == password){
		do{
			cout<<"Por favor ingresa el numero de la tabla a imprimir: ";
			cin>>numero;
			for(int i= 1;i<=10;i++){
				multiplicacion = i*numero;
				cout<<numero<<" x "<<i<<" = "<<multiplicacion<<endl;
			}
			cout<<"¿Quieres generar otra tabla de multiplicar(s/n)? ";
			fflush(stdin);
			cin>>seguir;
		}
		while(seguir!='n');
		
	}
	else{
		cout<<"Usuario no valido por favor contrata a soporte";
	}
	cin.get();
	return 0;
}
