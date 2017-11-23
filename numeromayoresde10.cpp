#include <iostream>
//leer el mayor de 10 numeros*/
int main (){
    
    int cont;
    int numero;
    int mayor;
    int salir;
    
    //bucle de tipo for cont=cont+1 es lo mismo que cont++
    //for (cont=10;cont>=0;con--{
    std::cout<<"dime un numero entero; ";
    std::cin>>numero;
    mayor=numero;
    for(cont=1;cont<=10;cont++ ){
          std::cout<<"dime un numero entero";
          std::cin>>numero;
          if(numero>mayor){
            mayor=numero;
            }
    }
    std::cout<<  "el mayor es: "<<mayor;
    std::cout<<"toca cualquier tecla";
    std::cin>>salir;
    return 0;
    
}

