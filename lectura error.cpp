//lectura hasta el final
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string linea;
    string nombre;
    int salir;
    int repetir=0;
    cout<<"dime la ruta del fichero:";
    getline(cin,nombre);
    ifstream fichero(nombre.c_str());
    do{
         
         if(fichero.fail()==1){
                          cout<<"Error.No existe la ruta";
                          getline(cin,nombre);
                          ifstream fichero(nombre.c_str());
                          cin>> salir;
                          repetir=1;
         }else{
               repetir=0;
    }while(repetir==1);
    while(fichero.eof()==0){
     getline(fichero,linea); // ifstream fichero("");pregunta teoria ::: lee del disco duro y lee del fichero  ::: fichero.eof te dice si es el final. si es que no es el final, te pone un 0 si sí es, te pone un 1
     cout<<linea<<endl;
     
    }
    fichero.close();
    cin>>salir;
    return 0;

