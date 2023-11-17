#include <iostream>
using namespace std;
int num1,num2;
int main(){
	char x;
	int a,b,suma,resta,multi;
	cout<<"Bienvenido a este programa que relarizara tus operaciones"<<endl;
	cout<<"a) suma"<<endl;
	cout<<"b) resta"<<endl;
	cout<<"c) multi"<<endl;
	cin>>x;
	switch(x){
		case 'a':
			cout<<"numero 1";
			cin>>a;
			cout<<"numero 2";
			cin>>b;
			suma = a+b;
			cout<<"suma es: "<<suma;
			break;
		case 'b':
			cout<<"numero 1";
			cin>>a;
			cout<<"numero 2";
			cin>>b;
			resta = a-b;
			cout<<"resta es: "<<resta;
			break;
			case 'c':
			cout<<"numero 1";
			cin>>a;
			cout<<"numero 2";
			cin>>b;
			multi = a*b;
			cout<<"multi es: "<<multi;
			break;
			default:
			cout<<"No es una opcion valida"	;
			return 0;
	}
}
