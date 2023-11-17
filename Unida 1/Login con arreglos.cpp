#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <stdio.h>
using namespace std;
const int MAX_USERS = 10; // Número máximo de usuarios
const string USERS[] = {"luis", "ricardo", "raul"}; // arreglo para usuarios
const string PASSWORDS[] = {"12345", "hola2", "ingresar"}; // areglo para password
// validacion de usuarios utilizando un dato tipo bolleano 
bool isValidUser(const string & username, const string & password) {
    for (int i = 0; i < MAX_USERS; i++) {
        if (USERS[i] == username && PASSWORDS[i] == password) {
            return true;
        }
    }
    return false;
}
int main() {
    string username, password;
    cout <<"BIENVENIDO AL SISTEMA"<<endl;
    cout << "Ingrese su nombre de usuario: ";
    cin >> username;
    cout << "Ingrese su contraseña: ";
    cin >> password;
    if (isValidUser(username, password)) {
        cout << "Inicio de sesión exitoso. ¡Bienvenido, " << username << "!" << endl;
        
        
        int a;
		cout<<"Bienvenido a este sistema de  codigos los cuales podras elegir"<<endl;
		cout<<"1 Hola mundo"<<endl;
		cout<<"2 1 a 100"<<endl;
		cout<<"3 cronometro"<<endl;
		cout<<"4 portada"<<endl;
		cout<<"5 numeros pares"<<endl;
		cout<<"6 vocal"<<endl;
		cout<<"7 promedio"<<endl;
		cout<<"8 tablas"<<endl;
		cout<<"9 login y tablas"<<endl;
		cout<<"10 100 a 0"<<endl;
		cout<<"11 dias de semana"<<endl;
		cout<<"12 menu"<<endl;
		cout<<"13 arreglos"<<endl;
		cout<<"14 en una variable"<<endl;
		cout<<"15 asistencias"<<endl;
		cin>>a;
		switch(a)
		{
			case 1:{
				cout<<"hola mundo programadores"<<endl;
				return 0;
				break;
			}
			case 2:{
				int a;
	for(a=0;a<=100;a++){
		cout<<a<<endl;
		
		return 0;
				break;
			}
		}
		case 3:{
			int h = 0,m = 0, s =0;
	while(1){
		
		if(s>=60){
			s = 0;
			m++;
			
			if(m>=60){
				m=0;
				h++;
			}
		}
        system("cls");
cout<<h<<":"<<m<<":"<<s;
Sleep(1000);
s++;

return 0;
			break;
		}
		
		
		}
		case 4:{
			cout<<("Portada")<<endl;
	
    cout<<("Nombre:Alejandra Valdez Alonso")<<endl;
	
	cout<<("Edad:16")<<endl;
	
	cout<<("Correo:alevaldezalonso@gmail.com")<<endl;
	
	cout<<("Modulo:Programacion Basica")<<endl;
	
	cout<<("Carrera:Tecnico Bachiller en Informatica")<<endl;
	return 0;
			break;
		}
		case 5:{
				int a;
		for(a=0;a<=1000;a+=2){
		
			cout<<a<<endl;
			return 0;
			
			break;
		}
		
}
        case 6:{
        	char letra;
	cout<<"digita una letra ";
	cin>>letra;
	if(letra == 'a' or letra == 'e' or letra == 'i' or letra == 'o'  or letra == 'u')
    cout<<"es vocal";
    else
    cout<<"no es vocal";
    return 0;
			break;
		}
		case 7:{
			float nota1,nota2,nota3,nota4,nota5,promedio;
cout<<"digita la primera nota";
cin>>nota1;
cout<<"digita la segunda nota";
cin>>nota2;
cout<<"digita la tercera nota";
cin>>nota3;
cout<<"digita la cuarta nota";
cin>>nota4;
cout<<"digita la quinta nota";
cin>>nota5;
promedio=(nota1,nota2,nota3,nota4,nota5)/5;
if (promedio>7){
	cout<<"estas aprobado";
}
else
cout<<"estas reprobado";
return 0;
			break;
		}
		case 8:{
			int numero;
	
	cout<<"Porfavor agregue el numero de multiplicacion de la tabla:"<<endl;
	cin>>numero;
	 
	 for(int i=1;i<=10;i++){
	 	int multiplicacion = i * numero;
	 	cout<<numero <<" x "<< i <<"="<< multiplicacion <<endl;
			break;
		}
}
      case 9:{
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
		return 0;
	}
		break;
	  }
	  case 10:{
	  	int a;
	for(a=100;a>=0;a--){
		cout<<a<<endl;
		return 0;
	
	}
		break;
	  }
	  
	  case 11:{
	  	int dia;
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
		break;
	  }
	  case 12:{
	  	int num1,num2;
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
		break;
	  }
	  case 13:{
	  	int miNumero[6];
	string pronombres[4];
	
	// Inicializar el primer numero
	miNumero[0]=10;
	miNumero[1]=20;
	miNumero[2]=30;
	miNumero[3]=40;
	miNumero[4]=50;
	miNumero[5]=60;
	
	// Ponombres
	pronombres[0] = "el";
	pronombres [1] = "ella";
	pronombres [2] = "ellos";
	pronombres[3] = " nosotros";
	
	for (int i=0 ;i<=6; i++){
		cout<<"conteos:" <<i<<":"<< miNumero[i]<<endl;
	}
 for( int a=0; a<=4; a++){
 	cout<<"los pronombres son:"<<pronombres[a]<<endl;
 }
 return 0;
		break;
	  }
	  case 14:{
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
		break;
	  }
	  case 15:{
	  	// en const  falto el int 
	const int numAlumnos = 5;
	int asistencia [numAlumnos];
	for (int i=0; i<numAlumnos; i++){
		asistencia [i]=0;
	}
	cout<<"Bienvenido  al sistema de asistencias:"<<endl;
	cout<<"Registra la asistencia de los alumnos:"<<endl;
	cout<<"Registra el nombre de los alumnos e indica si asistio"<<endl;
	
	for(int i=0; i< numAlumnos; i++){
		string nombre;
		char asistio;
		cout<<"Alumno: "<<i +1<<" : ";
		cin>>nombre;
		cout<<"¿Si asistio? (S/N)";
		cin>>asistio;
		
		if(asistio == 's' or asistio == 'S'){
			asistencia[i] = 1;
		}
	}
	int faltas =0;
	for(int i=0; i<numAlumnos; i++){
		if(asistencia[i] == 0){
			faltas++;
		}
	}
	cout<<"Numero de faltas"<<faltas<<endl;
	return 0;
		break;
	  } else {
        cout << "Credenciales incorrectas. Inicio de sesión fallido." << endl;
    }
}
}
return 0;
}

    
    
    
  
  

