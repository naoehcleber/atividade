#include <stdio.h>
#include <stdlib.h>
struct birthday{int dia; int mes; int ano;};
struct funcionarios{char nome[50]; int idade; char sexo; struct birthday Nascimento; int setor; char cargo[30]; int salario;};

void main(){
    struct funcionarios f;
    printf("Nome : ");
    fgets(f.nome,50, stdin);

    printf("Idade : ");
    scanf("%d",&f.idade);

    printf("Sexo : ");
    scanf("%c",&f.sexo);
    
    printf("Data de nascimento : ");
    scanf("%d/%d/%d",&f.Nascimento.dia,&f.Nascimento.mes,&f.Nascimento.ano);

    printf("Codigo do setor : ");
    scanf("%d",&f.setor);

    printf("Cargo que ocupa : ");
    fgets(f.cargo,50, stdin);

    printf("Salario : ");
    scanf("%d",&f.salario);
    
    //exibir na tela
    printf("Nome : %s\n", f.nome);
    printf("Idade : %d\n",f.idade);
    printf("Sexo : %c\n",f.sexo);
    printf("Data de nascimento : %d/%d/%d\n",f.Nascimento.dia,f.Nascimento.mes,f.Nascimento.ano);
    printf("Codigo do setor : %d\n",f.setor);
    
    printf("Cargo que ocupa : %s\n",f.cargo);
    printf("Salario : %d\n",f.salario);

}