//esto trata sobre estructuras
#include<iostream>
using namespace std;
int main(){
    //declaro uyn nuevo tipo de dato
    struct persona{
           string nombre;
           int edad;
           int carita; 
    };
    //declaro una variable de tipo
    //persona
    persona amigo1,amigo2,amigo3;
    cout<<"como se llama tu amigo: ";
    cin>>amigo1.nombre;
    cout<<"cuantos años tiene: ";
    cin>>amigo1.edad;
    cout<<"¿es guapo?: ";
    cin>>amigo1.carita;
    
}
