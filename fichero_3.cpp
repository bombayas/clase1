//leer lineasd*/
#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream fichero("mi fichero.txt");
    string mensaje;
    int salir;
    cout<<"el texto dice: ";
    for(int nlinea=1;nlinea<=4;nlinea++){
            getline(fichero,mensaje);
            cout<<mensaje;
            cout<<endl;
      }
    cin>>salir;
    
    
    }
