#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct alunos{
    char nome[50];
    int matricula;
    float mediaFinal;
    
    };

void main(){
    struct alunos c[10];
    int i=0,j=0,k=0; 
    char aprovados[10][50];
    char reprovados[10][50];
    for(i=0; i<5; i++){
        printf("Nome : ");
        fgets(c[i].nome, 50, stdin);

        printf("matricula : ");
        scanf("%d",&c[i].matricula);
        while(getchar()!='\n');

        printf("media final : ");
        scanf("%f",&c[i].mediaFinal);
        while(getchar()!='\n');

        if(c[i].mediaFinal >= 5){
            strcpy(aprovados[j],c[i].nome);
           j++;
        }else if(c[i].mediaFinal < 5){
            strcpy(reprovados[k],c[i].nome);
            k++;
        }
    }
    for(i =0; i<10; i++){
        
        
    
    }
    //print aprovados
    printf("Aprovados : ");
    for(int w = 0; w<j; w++){
        printf("%s",aprovados[w]);
    }
    printf("Reprovados : ");
    for(int w = 0; w<k; w++){
        printf("%s",reprovados[w]);
    }

}