#include <iostream>
using namespace std;
int dia;
int main(){
	cout<<"Dame el numero del dia";
	cin>>dia;
	switch(dia){

		case 1:
			cout<<"Es el dia lunes";
		break;
		case 2:
			cout<<"Es el dia martes";
		break;
		case 3:
			cout<<"Es el dia miercoles";
		break;
		case 4:
			cout<<"Es el dia jueves";
		break;
		case 5:
			cout<<"Es el dia viernes";
		break;
		case 6:
			cout<<"Es el dia sabado";
		break;
		case 7:
			cout<<"Es el dia domingo";
		break;
		defaut:
			cout<<"No es un dia de la semana";
			return 0;
	
	}
}
