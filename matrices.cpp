//matrices 
using namespace std;
#include<iostream>
int main(){
    int matriz[3][3];
    int fila,col;
    int salir;
    for (fila=0;fila<3;fila++){
        for(col=0;col<3;col++){
          cout<<"matriz["<<fila<<"]["<<col<<"]";
          cin>>matriz[fila][col];
          }
    }
    
    for (fila=0;fila<3;fila++){
        for(col=0;col<3;col++){
          cout<<matriz[fila][col]<<" ";
          }
          cout<<endl;
    }
    cout<<endl<<"Hemos acabado";
    cin>>salir;
    return 0;
}
