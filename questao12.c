#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct livros{
    char titulo[30];
    char autor[15];
    int ano;
};
void main(){
    struct livros c[5] = {
        {"A", "AA", 1200},
        {"B", "BB", 1200},
        {"C", "CC", 1200},
        {"D", "DD", 1200},
        {"E", "EE", 1200},

    };
    char procura[50];
    printf("Insira o titulo a ser procurado : ");
    fgets(procura,50,stdin);

    for(int i =0; i <5; i++){
            if(strcmp(c[i].titulo, procura)==0){
                printf("titulo %s\n",c[i].titulo);
                printf("autor %s\n",c[i].autor);
                printf("ano %d\n",c[i].ano);
                break;
            }
        }
}