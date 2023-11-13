#include <stdio.h>
#include <stdlib.h>
struct aluno{
    char nome[50];
    int numeroMatricula;
    char curso[50];

};
void main(){
    struct aluno c[5];
    
    for (int i =0; i <5; i++){
        printf("Aluno %d\n",i);
        printf("Insira o nome : ");
        fgets(c[i].nome,50,stdin);
        printf("Insira o numero de matricula : ");
        scanf("%d",&c[i].numeroMatricula);
        while(getchar()!='\n');
        printf("Insira o curso : ");
        fgets(c[i].curso,50,stdin);

    }
    for (int j=0; j<5; j++){
        printf("%s \n",c[j].nome);
        printf("%d \n",c[j].numeroMatricula);
        printf("%s \n",c[j].curso);
    }

}