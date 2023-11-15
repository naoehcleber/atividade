#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

struct adress {
    char rua[50];
    int numero;
    char complemento[50];
    char bairro[50];
    int cep;
    char cidade[50];
    char estado[50];
    char pais[50];

};
struct phone {
    int DDD;
    int numero;
};

struct birthday {
    int dia;
    int mes;
    int ano;
};

struct agenda
{
    char nome[50];
    char email[50];
    struct adress endereco;
    struct phone telefone;
    struct birthday aniversario;
    char observacao [100];
    
};

void ImprimirDados(struct agenda* c, int i){
    
    printf("%s",c[j].nome);


}

void main(){
    int selecao;
    int i =0;
    struct agenda c[100];



    while(1){
        //menu principal
        printf("1 - Inserir contatos\n");
        printf("2 - buscar por nome\n");
        printf("3 - buscar por mes de aniversario\n");
        printf("4 - buscar por dia e mes de aniversario\n");
        printf("5 - inserir nome por ordem alfabetica\n");
        printf("6 - remover pessoa\n");
        printf("7 - imprimir nomes, telefones e emails \n");
        scanf("%d",&selecao);

        switch (selecao)
        {
        case 1:
            //inserir os contatos   
            printf("Insira o nome do contato : ");
            fgets(c[i].nome, 50, stdin);
            while(getchar()!='\n');

            printf("Insira o e-mail do contato : ");
            fgets(c[i].email, 50, stdin);
            while(getchar()!='\n');


            printf("Insira o endereco do contato :\n --------- ");
            printf("Rua: ");
            fgets(c[i].endereco.rua, 50, stdin);
            while(getchar()!='\n');


            printf("Numero: ");
            scanf("%d",&c[i].endereco.numero);
            while(getchar()!='\n');

            printf("Complemento: ");
            fgets(c[i].endereco.complemento, 50, stdin);
            while(getchar()!='\n');


            printf("Bairro: ");
            fgets(c[i].endereco.bairro, 50, stdin);
            while(getchar()!='\n');


            printf("CEP: ");
            scanf("%d",&c[i].endereco.cep);
            while(getchar()!='\n');


            printf("Cidade: ");
            fgets(c[i].endereco.cidade, 50, stdin);
            while(getchar()!='\n');


            printf("Estado: ");
            fgets(c[i].endereco.estado, 50, stdin);
            while(getchar()!='\n');


            printf("Pais: ");
            fgets(c[i].endereco.pais, 50, stdin);
            while(getchar()!='\n');

            printf(" --------- \n");

            printf("Insira o Telefone : "); 
            scanf("%d %d",&c[i].telefone.DDD, &c[i].telefone.numero);
            while(getchar()!='\n');
                    

            printf("Insira o aniversario : ");
            scanf("%d/%d/%d",&c[i].aniversario.dia, &c[i].aniversario.mes.&c[i].aniversario.ano);
            while(getchar()!='\n');


            printf("Observacao : ");          
            fgets(c[i].observacao, 100, stdin);
            while(getchar()!='\n');
            break;
        case 2:
            //buscar por mes de aniversario
            printf("Insira o nome a ser buscado : ");
            char Busca[50] = fgets(Busca,50,stdin);
            for(int j =0; j<i; j++){
                if(strcmp(c[j].nome, Busca) == 0){
                    printf("%s",c[j].nome);
                }
            }
            break;
        case 3:
            //dia e mes de aniversario
            break;
        
        case 4:
            //inserir pessoa
            break;
        case 5:
            //retirar pessoa
            break;
        case 6:
            //imprimir nome + telefone + e-mail
            break;
        case 7:
            //imprimir todos os dados
            break;
        }
        i++;
        

    }

    



    

    

    

    

}
