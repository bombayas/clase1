#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int salir;
    int cont;
    ofstream fichero1("agenda.txt");    //declaro un nuevo tipo de dato... la variable cont definie despues de las estructuras
    struct persona{
           string nombre;
           int edad;
           string carita; 
           string pelo;
           float altura;
    };
    //declaro una variable de tipo persona
    persona amigo[cont];
    for (int cont=0;cont<5;cont++){
        cout<<"DATOS AMIGO"<<cont<<endl;
        cout<<"como se llama tu amigo: ";
        cin>>amigo[cont].nombre;
        cout<<"cuantos años tiene: ";
        cin>>amigo[cont].edad;
        cout<<"¿es guapo?: ";
        cin>>amigo[cont].carita;
        cout<<"color de pelo: "; 
        cin>>amigo[cont].pelo;
        cout<<"¿cuanto mide?: ";
        cin>>amigo[cont].altura;
        //fichero con los datos introducidos
        string mensaje;
        ofstream fichero("agenda.txt");
        for (int cont=0;cont<5;cont++){
            fichero<<amigo[cont].nombre<<",";
            fichero<<amigo[cont].edad<<",";
            fichero<<amigo[cont].carita<<",";
            fichero<<amigo[cont].pelo<<",";
            fichero<<amigo[cont].altura<<","<<endl;
    }
    fichero.close();
    ifstream fichero1("agenda.txt");
    while(fichero.eof()!=1){
                            getline(fichero1,mensaje);
                            if (fichero1.eof()!=1){
                                                  cout<<mensaje<<endl;
    }
    }
    fichero1.close();
    cout<<"toca una tecla";
    cin>>salir;
    return 0;
}
}

