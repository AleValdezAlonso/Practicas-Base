#include <iostream>
using namespace std;
int main(){
string user ="305";
string pass = "Queshow";
string usuario, password;
cout<<"Bienvenido a Star"<<endl;
cout<<"Ingresa tu usuario"<<endl;
getline(cin, usuario);
cout<<"Digita tu pasword o contraseña"<<endl;
getline(cin, password);
if(usuario == user and password == pass){

cout<<"Bienvenido";
}else{

cout<<"Que haces aqui";
}
return 0;
}
