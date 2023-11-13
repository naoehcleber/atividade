#include <stdio.h>
#include <stdlib.h>

struct alunos {
    int matricula;
    char nome[50];
    int nota1;
    int nota2;
    int nota3;
    int media;
};
void main(){
    struct alunos c[5];

    for (int i = 0; i <5; i++){
        printf("Aluno %d\n", i+1);
        printf("Matricula : ");
        scanf("%d",&c[i].matricula);
        printf("Nome : ");
        fgets(c[i].nome,50,stdin);
        while(getchar()!= '\n');
        printf("nota da primeira prova : ");
        scanf("%d",&c[i].nota1);
        while(getchar()!= '\n');    

        printf("nota da segunda prova : ");
        scanf("%d",&c[i].nota2);
        while(getchar()!= '\n');

        printf("nota da terceira prova : ");
        scanf("%d",&c[i].nota3);
        while(getchar()!= '\n');
        
    }
    int maiorNota1 = c[0].nota1;
    int IndexMaiorNota1 = 0;
    for (int j =0; j<5; j++){
        if (c[j].nota1 > maiorNota1){
            maiorNota1 = c[j].nota1;
            IndexMaiorNota1 = j;
        }
    }
    printf("A maior nota da primeira prova : %s -> %d \n",c[IndexMaiorNota1].nome, maiorNota1);

    int MaiorMedia = 0;
    int IndexMaiorMedia =0;
    int Media;
    for(int i =0; i<5;i++){
        c[i].media = (c[i].nota1 +c[i].nota2 + c[i].nota3)/3;
        if(c[i].media > MaiorMedia){
            MaiorMedia = c[i].media;
            IndexMaiorMedia = i;
        } 
    }
    printf("A maior media geral : %s -> %d\n",c[IndexMaiorMedia].nome, MaiorMedia);

    int MenorMedia= c[0].media;
    int IndexMenorMedia;
    for(int i =0; i<5; i++){
        
        if(c[i].media < MenorMedia){
            MenorMedia = c[i].media;
            IndexMenorMedia = i;
        }
    }
    printf("A menor media geral : %s -> %d\n",c[IndexMenorMedia].nome, MenorMedia);

    for(int i =0; i<5; i++){
        if(c[i].media < 6){
            printf("Aluno %s reprovado\n",c[i].nome);
        } else if (c[i].media >=6){
            printf("Aluno %s aprovado\n",c[i].nome);
        }
    }







}