using namespace std;

#include<iostream>
int main(){
    int vec1[5];
    int vec2[5];
    int suma[5];
    int salir;
//Rellenamos los vectores

    for(int cont=0; cont<5;cont++){
            cout<<"vec1["<<cont<<"]=";
            cin>>vec1[cont];
    }
    for(int cont=0; cont<5;cont++){
            cout<<"vec2["<<cont<<"]=";
            cin>>vec2[cont];
    }
    for(int cont=0; cont<5;cont++){
            suma[cont]=vec1[cont]+vec2[cont];
    }
    //mostramos el vector pantalla
    for(int cont=0;cont<5;cont++){
            if (cont==4){
                        cout<<suma[cont]<<"]";
            }
            if (cont!=0 && cont!=4){
                               cout<< suma[cont]<<",";
        }
}
    cout<<"presiona para salir y luego enter";
    cin>>salir;
    return 0;
}
