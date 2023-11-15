#include <stdio.h>
#include <stdlib.h>
struct alunos {
    int matricula;
    char nome[50];
    int codigoDisciplina;
    int nota1;
    int nota2;
};
void main(){
    struct alunos c[10];
    int media;

    for(int i =0; i<10; i++){
        printf("Matricula : ");
        scanf("%d", &c[i].matricula);

        printf("Nome : ");
        fgets(c[i].nome,50,stdin);

        printf("Codigo da disciplina : ");
        scanf("%d",&c[i].codigoDisciplina);

        printf("Nota 1 : ");
        scanf("%d",&c[i].nota1);

        printf("Nota 2 : ");
        scanf("%d",&c[i].nota2);

    }
    
    for(int i =0; i<10; i++){
        media = (c[i].nota1 *1 + c[i].nota2 *2)/3;
        printf("%s media : %d",c[i].nome,media);
    }

}