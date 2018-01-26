//Programas sobre manejo de memoria
#include<stdio.h>  //la s es sacar direccion de palabra y la c es direccion de la letra______ palabra 1 es=la direccion de la palabra,,,, si dices *palbra 1 te dira lo que hay en esa direccion
int main(){
    char palabra1[5];
    char palabra2[5];
    int salir;
    printf("Dime algo: ");
    scanf("%s",palabra1);
    printf("\nDime algo mas: ");
    scanf("%s",palabra2);
    printf("direccion palabra1 = %x",palabra1);
    printf("palabra1 = %c\n",*(palabra1+3));
    printf("direccion palabra2 = %s",palabra2);
    printf("palabra2 = %c  ",*(palabra2+4));
    scanf("%i",&salir);
}
