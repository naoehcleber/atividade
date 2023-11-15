#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct cadastro{
    char nome[50];
    char endereco[50];
    int telefone;
};
void main(){
    struct cadastro c[5];
    for(int i=0; i<5; i++){
        printf("Nome : ");
        fgets(c[i].nome, 50, stdin);

        printf("endereco : ");
        fgets(c[i].endereco, 50, stdin);

        printf("telefone : ");
        scanf("%d",&c[i].telefone);
        while(getchar()!='\n');

    }
    //ordenando os nomes
    char organizacao[5];
    int j;
    for(int i =0; i<5; i++){
        if(strcmp(c[i].nome, c[i+1].nome)>0){
            c[i] = c[i+1];
            c[i+1] = c[i];
        }
    }
    for (int i = 0; i < 5; i++) {
        printf("%s", c[i].nome);
        }
    

}