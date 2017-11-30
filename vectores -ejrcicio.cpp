using namespace std;

#include<iostream>
int main(){
    int vec1[5];
    int vec2[5];
    int vec_t[5];
    int salir;
//Rellenamos los vectores


    for(int cont=0; cont<5;cont++){
        cout<<"vec["<<cont<<"]=";
        cin>>vec1[cont];
        }
    for(int cont=0; cont<5;cont++){
        cout<<"vec["<<cont<<"]=";
        cin>>vec2[cont];
        }
    for(int cont=0; cont<5;cont++){
        cout<<"vec["<<cont<<"]=";
        cin>>vec1+vec2[cont];
        }
    
    cout<<"presiona para salir y luego enter";
    cin>>salir;
    return 0;
}
