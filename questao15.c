#include <stdio.h>
#include <stdlib.h>
struct ingredientes {
    char nome[20];
    int quantidade;
};
struct receitas {
    char nome[25];
    int quantidadeIngredientes;
    struct ingredientes ingredientes;
    };
void main(){
    struct receitas c[5];
    for(int i = 0; i<5; i++){
        printf("Nome da receita : ");
        fgets(c[i].nome,25,stdin);
        printf("Quantidade de ingredientes : ");
        scanf("%d",&c[i].quantidadeIngredientes);
        struct ingredientes r[c[i].quantidadeIngredientes];

        for(int j =0; j <c[i].quantidadeIngredientes; j++){
            
        }

    }


}