#include <stdio.h>
#include <stdlib.h>
struct Vetor{
    float x;
    float y;
    float z;
    };
    void main(){
        struct Vetor v[2];
        for(int i = 0; i <2; i++){
            printf("X : ");
            scanf("%f",&v[i].x);
            printf("Y : ");
            scanf("%f",&v[i].y);

            printf("Z : ");
            scanf("%f",&v[i].z);

        }
        printf("Soma entre os 2 vetores : ");
        
        printf("%f, %f, %f \n",v[0].x + v[1].x,v[0].y + v[1].y,v[0].z + v[1].z);
        


        
        
    }