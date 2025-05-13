#include "test_prova.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int matriz[x][y];
    for (int i = 0; i < y; i++){
        for (int j = 0; j < x; j++){
            matriz[i][j] = rand() % 255;
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

    printf("media %d\n",media(x,y,matriz));
    printf("mediana%d\n",mediana(x,y,matriz));
    printf("moda %d\n",moda(x,y,matriz));
}
