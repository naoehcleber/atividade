#include <stdio.h>
#include <stdlib.h>
struct estoque
{
    int codigo;
    char nome[15];
    int preco;
    int quantidade;

};
void main(){
    struct estoque c[5];

    for(int i =0; i <5; i++){
        printf("Produto %d\n", i+1);

        printf("Nome: ");
        fgets(c[i].nome,15,stdin);

        printf("Codigo: ");
        scanf("%d",&c[i].codigo);
        while(getchar()!='\n');

        printf("Preco: ");
        scanf("%d",&c[i].preco);
        while(getchar()!='\n');

        printf("Quantidade: ");
        scanf("%d",&c[i].quantidade);
        while(getchar()!='\n');


    }
    //ler pedido
    int Pedido_codigo, quantidade = 0;
    int IndexBusca;
    while(1){
        printf("Digite o codigo do pedido : ");
        scanf("%d",&Pedido_codigo);
        
        if(Pedido_codigo == 0){
            break;
        }
        //localizar o codigo no vetor
        for(int i =0; i<5; i++){
            if(Pedido_codigo == c[i].codigo){
                IndexBusca = i;
            }
        }


        printf("Digite a quantidade : ");
        scanf("%d",&quantidade);

        if(quantidade > c[IndexBusca].quantidade){
            printf("Nao temos estoque suficiente para o pedido\n");
        } else{
            c[IndexBusca].quantidade = c[IndexBusca].quantidade - quantidade;
        }
        

    }



}
