#include <stdio.h>

int main(){
    float matriz[8][8]={0};
    float soma = 0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            matriz[i][j] = soma;
            soma += 4;            
        }
    }
        for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            
            printf("%.2f ",matriz[i][j]/255.0);         
        }
    }
}