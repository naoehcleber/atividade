#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cadastro{
    char nome[50];
    int idade;
    char rua[50];
    int numero;
};

void main(){

    struct Cadastro c;
    strcpy(c.nome, "Carlos");// atribui um nome Carlos a o c.nome
    c.idade = 18;
    strcpy(c.rua, "Avenida Brasil");
    c.numero = 1082;

}