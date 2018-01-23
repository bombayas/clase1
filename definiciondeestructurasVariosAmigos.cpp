//esto trata sobre estructuras
#include<iostream>
using namespace std;
int main(){
    int salir;
    //declaro un nuevo tipo de dato........ la variable cont definir despues de las estructuras
    struct persona{
           string nombre;
           int edad;
           string carita; 
    };
    //declaro una variable de tipo
    //persona
    int cont;
    persona amigo[3];
    for (cont=0;cont<3;cont++){
        cout<<"DATOS AMIGO"<<cont<<endl;
        cout<<"como se llama tu amigo: ";
        cin>>amigo[cont].nombre;
        cout<<"cuantos años tiene: ";
        cin>>amigo[cont].edad;
        cout<<"¿es guapo?: ";
        cin>>amigo[cont].carita;
        
    }
    cout<<"MIS AMIGOS SON:"<<endl;
    for (cont=0;cont<3;cont++){
    cout<<"mi amigo se llama"<<amigo[cont].nombre<<"tiene"<<amigo[cont].edad<<"años"<<"y es guapo"<<endl;
    
    }
    cout<<"toca algo";
    cin>>salir;
   
}
