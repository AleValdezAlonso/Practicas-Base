//incluir la libreria
#include <iostream>
/* utilizar todos los caracteres y funciones
de la libreria
*/
using namespace std;
//funcion principal
int main(){
//declarar variable
int a,b,c,d,e, suma,promedio;
cout<<"Bienvendio a esta rutina de la cual calculara tu promedio"<<endl;
cout<<"Porfavor digita la primera evaluacion"<<endl;
cin>>a;
cout<<"Porfavor digita la segunda evaluacion"<<endl;
cin>>b;
cout<<"Porfavor digita la tercera evaluacion"<<endl;
cin>>c;
cout<<"Porfavot digita la cuarta evaluacion"<<endl;
cin>>d;
cout<<"Porfavor digita la quinta evaluacion"<<endl;
cin>>e;
promedio=(a+b+c+d+e)/5;
cout<<"tu promeio general es de:"<<promedio<<endl;
if(promedio >=7){
	cout<<"tu calificacion es aprobatoria"<<endl;
}
else{
    cout<<"lo siento tu calificacion no es aprobatoria";
}
cout<<"gracias por usar esta aplicacion";
return 0;
}
