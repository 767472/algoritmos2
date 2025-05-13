#include "test_prova2.h"

int main(){
    int x=0,y=0;
    scanf("%d %d",&x,&y);
    int matriz[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
        matriz[i][j] = rand() % 255;
        printf("%d",matriz[i][j]);    
        }
        printf("\n");
    }  

    salvarmatriz(x,y,matriz);

    printf(" media %d\n",media(x,y,matriz));
    printf(" moda %d\n",moda(x,y,matriz));
    printf(" mediana %d\n",mediana(x,y,matriz));
    
}