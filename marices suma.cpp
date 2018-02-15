using namespace std;

#include<iostream>
int main(){
    int pepito[5];
    int cont;
    int salir;
    for (cont=0;cont<5;cont++){
        cout<<"dime un nº";
        cin>>pepito[cont];
        }
        cout<<"mira mi vector relleno";
        for(cont=0;cont<5;cont++){
                             cout<<"pepito["<<cont<<"]="<<pepito;
             }
             cout<<"toca c.tecla";
             cin>>salir;
             return 0;
             
}
