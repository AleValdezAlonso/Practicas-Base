#include <iostream>
//Se utilizara una nueva libreria esta libreria se llama fstream
#include <fstream>
using namespace std;
class usuario{
public:
	string nombre;
	string apellido;
	string nusuario;
	int edad;
	void mostrarPerfil(){
		cout<<"Nombre"<< nombre<< endl;
		cout<<"Apellido"<< apellido<< endl;
		cout<<"Nombre de Usuario"<< nusuario<< endl;
		cout<<"Edad"<< edad<< "años" << endl;
	}
};
	int main(){
		usuario usuario;
		cout<<"Ingrese el nombre: ";
		getline(cin, usuario.nombre);
		
		cout<<"Ingrese el apellido: ";
		getline(cin,usuario.apellido);
		
		cout<<"Ingrese el nombre del usuario: ";
		getline(cin, usuario.nusuario);
		
		cout<<"Ingresa tu edad: ";
		cin>> usuario.edad;
		
		cout<<"\nPerfil del usuario:\n";
		usuario.mostrarPerfil();
		
		ofstream archivo("perfil_usuario.txt");
		
		if(archivo.is_open()){
			
			archivo <<"Nombre:" <<usuario.nombre <<endl;
			archivo <<"Apellido:" <<usuario.apellido <<endl;
			archivo <<"NUsuario:" <<usuario.nusuario <<endl;
			archivo <<"Edad:" <<usuario.edad << " años" <<endl;
			
			archivo.close();
				
				cout<< "\nPerfil del usuario guardado en 'perfil_usuario.txt' .\n";
		}else{
			cout << "Error al abrir el archivo.\n";
		}
		return 0;
		
	}
