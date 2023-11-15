#include <stdio.h>
#include <stdlib.h>
struct carros {
    char marca[15];
    int ano;
    int preco;
};
void main(){
    struct carros c[5] = {
        {"A", 2016, 1200},
        {"B",2017, 1300},
        {"C",2011, 1400},
        {"D",2008, 800},
        {"E",2020, 1900},
    };
    int p;
    while(1){
        printf("Insira um valor p: ");
        scanf("%d",&p);
        if(p==0){
            break;
        }
        for(int i =0; i <5; i++){
            if(c[i].preco <= p ){
                printf("Modelo %s\n",c[i].marca);
                printf("ano %d\n",c[i].ano);
                printf("Preco %d\n",c[i].preco);

            }
        }

    }
}