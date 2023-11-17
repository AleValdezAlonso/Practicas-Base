using namespace std;
class usuario{
public:
	string nombre;
	string apellido;
	string nusuario;
	string direccion;
	string numero de telefono;
	string correo;
	int edad;
	
	void mostrarPerfil(){
		cout<<"Nombre"<< nombre<< endl;
		cout<<"Apellido"<< apellido<< endl;
		cout<<"Nombre de Usuario"<< nusuario<< endl;
		cout<<"Direccion" << direccion << direccion<< endl;
		cout<<"Numero de telefono" << numero de telefono << endl;
		cout<<"Correo" << correo << endl;
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
		
		cout<<"Ingrese su direccion: ";
		getline(cin, usuario.direccion);
		
		cout<<"Ingrese su numero de telefono: ";
		getline(cin, usuario.numero de telefono);
		
		cout<<"Correo: ";
		getline(cin, usuario.correo);
		
		cout<<"Ingresa tu edad: ";
		cin>> usuario.edad;
		
		cout<<"\nPerfil del usuario:\n";
		usuario.mostrarPerfil();
		
		ofstream archivo("perfil_usuario.txt");
		
		if(archivo.is_open()){
			
			archivo <<"Nombre:" <<usuario.nombre <<endl;
			archivo <<"Apellido:" <<usuario.apellido <<endl;
			archivo <<"NUsuario:" <<usuario.nusuario <<endl;
			archivo <<"Direccion:" <<usuario.direccion <<endl:
			archivo <<"Numero de telefono:" <<usuario.numero de telefono <<endl;
			archivo <<"Correo:" <<usuario.correo <<endl;
			archivo <<"Edad:" <<usuario.edad << " años" <<endl;
			
			archivo.close();
				
				cout<< "\nPerfil del usuario guardado en 'perfil_usuario.txt' .\n";
		}else{
			cout << "Error al abrir el archivo.\n";
		}
		return 0;
		
	}
