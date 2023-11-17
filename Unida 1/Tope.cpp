#define tope 2023
#define meses 12
#define dias 24
#define horas 60
#define minutos 60
#define segundos 60
#include <iostream>
using namespace std;
int an, mes,dia,hora,minuto,a,segundo;
int multiplica(int a,int b){
	return a*b;
}
int resta(int a,int b){
	return a-b;
}
int main(){
	cout<<"Digita el año de nacimiento"<<endl;
	cin>>an;
	a=resta(tope,an);
	mes=multiplica(a,meses);
	dia=multiplica(mes,dias);
	hora=multiplica(dia,horas);
	minuto=multiplica(hora,minutos);
	segundo=multiplica(minuto,segundos);
	cout<<"Tienes"<<endl;
	cout<<a<<"años"<<endl;
	cout<<mes<<"meses"<<endl;
	cout<<dia<<"dias"<<endl;
	cout<<hora<<"horas"<<endl;
	cout<<minuto<<"minutos"<<endl;
	cout<<segundo<<"segundos"<<endl;
	
	return 0;
}
