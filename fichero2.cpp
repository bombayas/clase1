//FICHEROS
#include<iostream>
#include<fstream> //para leer ficheros

using namespace std;
int main(){
    int salir;
    //abrimos el fichero
    string mensaje;
    ifstream fichero ("mi fichero.txt");
    fichero>>mensaje;
    cout<<mensaje<<endl;
    fichero.close();//no es obligatorio*/
    cin>>salir;
    return 0;
}
    
    
