//leer lineasd*/
#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream fichero("mi fichero.txt");
    string mensaje;
    int salir;
    cout<<"el texto dice: ";
    while(fichero.eof()!=1){
            getline(fichero,mensaje);
            if(fichero.eof()!=1){
            cout<<mensaje;
            cout<<endl;
      }
    cin>>salir;
    
    
    }
