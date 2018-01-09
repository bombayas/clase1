using namespace std;
//lectura hasta el final
#include<iostream>
#include<fstream>
int main(){
    string linea;
    int salir;
    ifstream fichero("mi fichero.txt");
    while(fichero.eof()==0){
     getline(fichero,linea); // ifstream fichero("");pregunta teoria ::: lee del disco duro y lee del fichero  ::: fichero.eof te dice si es el final. si es que no es el final, te pone un 0 si sí es, te pone un 1
     cout<<linea<<endl;
     
    }
    fichero.close();
    cin>>salir;
    return 0;
    
}
