#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct cadastro {
    char nome[50];
    int idade;
    char endereco [100];

};

void main(){

    struct cadastro c;

    printf("Digite seu nome : ");
    fgets(c.nome, 50, stdin);
    printf("Digite sua idade : ");
    scanf("%d",&c.idade);
    while(getchar()!='\n');
    printf("Digite seu endereco : ");
    fgets(c.endereco, 50, stdin);


}