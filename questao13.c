#include <stdio.h>
#include <stdlib.h>
struct eletrodomesticos {
    char nome[15];
    float potencia;
    float tempo;

};
void main(){
    struct eletrodomesticos c[5];
    for(int i =0; i<5; i++){
        printf("Insira o nome : ");
        fgets(c[i].nome,15,stdin);
        while(getchar()!='\n');
        printf("Insira a potencia : ");
        scanf("%f",&c[i].potencia);
        while(getchar()!='\n');
        printf("Insira o tempo de uso : ");
        scanf("%f",&c[i].tempo);

    }
    //consumo = potencia * tempo de uso
    float consumo[5];
    float consumoTotal = 0;
    for(int i = 0; i <5; i++){
        consumo[i] = c[i].potencia * c[i].tempo;
        consumoTotal = consumoTotal + consumo[i];
    }
    float ConsumoParcial[5];
    printf("Consumo Total : %.2f\n",consumoTotal);
    for(int i =0; i<5; i++){
        ConsumoParcial[i] = (consumo[i]/consumoTotal)*100;
        printf("Consumo de %s: %.2f %% \n",c[i].nome,ConsumoParcial[i]);

    }
}