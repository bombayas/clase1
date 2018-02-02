//manejo de punteros
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int medida (char aux[]){
    int l;
    while(aux[l]!='\0'){
                        l++;
    }
    return l;
}
int main(){
    char *lista[5];
    int salir;
    char aux[15];  // aux==vector de 15 letras donde guardas el nombre de tu amigo
    int l;
    int cont;
    for(cont=0;cont<5;cont++){
                              printf("\nNombre amigo %1; ",cont);
                              scanf("%s",aux);
                              l=medida(aux);
                              printf("%i\n",l);
                              lista[cont]=(char *)malloc(l*sizeof(char));
                              strcpy(lista[cont],aux);
    }
    for(cont=0;cont<5;cont++){
                              printf("\n%s",lista[cont]);
    }
    
    printf("\ntoca cualquier tecla:");  
    scanf("%i",&salir);
}
