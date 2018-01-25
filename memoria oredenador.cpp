//programas sobre el manejo de memoria
#include<stdio.h>
using namespace std;
int main(){
    char palabra1[5];
    char palabra2[5];
    printf("dime algo");
    scanf("%s",palabra1);
    int salir;
    printf("dime algo");
    scanf("%n",palabra2);
    printf("dime algo mas vaaaaa");
    printf("palabra1= %s\n",&palabra1);//numero entero!!! -- %i  --
    printf("palabra2= %s",&palabra2);// cada numero ocupa 4 bits
    scanf("%i",&salir);//% tanto por ciento ,c caracter
}
