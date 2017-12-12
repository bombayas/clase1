//FICHEROS
#include<iostream>
#include<fstream> //para leer ficheros

using namespace std;
int main(){
    //abrimos el fichero
    ofstream fichero ("mi fichero.txt");
    
    fichero<<"en un lugar de la ..."<<endl;//sa;to de linea
    fichero<<"de cuyo lugar...";
    fichero.close();
    cout<<"ya esta.Fichero cerrado";
    
    return 0;
}
    
    
