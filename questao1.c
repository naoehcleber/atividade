#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct time {
    int horas;
    int minutos;
    int segundos;
};
struct date {
    int dia;
    int mes;
    int ano;
};


struct agendamento{
    struct time horario ;
    struct date data;
    char descricao[100];  
};

void main(){
    int contador=0;
    struct agendamento c[contador];
    while(1){
        contador++;
        printf("Horario (00:00:00) :");
        scanf("%d:%d:%d",&c[contador].horario.horas,&c[contador].horario.minutos, &c[contador].horario.segundos);
        while(getchar()!='\n');
        
        printf("Data (DD/MM/AAAA): ");
        scanf("%d/%d/%d",&c[contador].data.dia,&c[contador].data.mes,&c[contador].data.ano);
        while(getchar()!='\n');

        printf("Descricao: ");
        fgets(c[contador].descricao, 50, stdin);
        //fgets(c[i].curso,50,stdin);
        
        printf("Horario: %d:%d:%d \n",c[contador].horario.horas, c[contador].horario.minutos, c[contador].horario.segundos);       

        char escolha;
        printf("Deseja inserir outro agendamento ? S/N \n");
        scanf("%c",&escolha);
        if (escolha == 'N' ||escolha =='n'){
            break;
        }

    }
}