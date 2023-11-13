#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro{
    char nome[50];
    int idade;
    char rua[50];
    int numero;
};

void main(){
    struct cadastro c;

    fgets(c.nome,50,stdin);
    scanf("%d",&c.idade);
    fgets(c.rua,50,stdin);
    scanf("%d",&c.numero);
}