#include <stdio.h>
#include <stdlib.h>

void salvarmatriz(int linha, int coluna, int matriz[linha][coluna]) {
    FILE *arquivo = fopen("matriz.csv","w"); 
    if(!arquivo){
        printf("Erro ao criar arquivo");
        return;
    }
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            fprintf(arquivo,"%d",matriz[i][j]);
            if(j<coluna-1) fprintf(arquivo,",");
        }
        fprintf(arquivo,"\n");
    }
    fclose(arquivo);
    printf("arquivo criado\n");
}
int media(int linha, int coluna, int matriz[linha][coluna]){
    int soma = 0;
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            soma+=matriz[i][j];
        }
    }
    return soma / (linha*coluna);
}
int moda(int linha, int coluna, int matriz[linha][coluna]){
    int freq[256] = {0};
    int maior_freq = 0;
    int soma_moda = 0;
    int qtd_moda = 0;
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            freq[matriz[i][j]]++;
        }
    }
    for(int i=0;i<256;i++){
        if(freq[i]>maior_freq){
            maior_freq = freq[i];
            soma_moda = i;
            qtd_moda = 1;
        }
        else if(freq[i]==maior_freq){
            soma_moda+=i;
            qtd_moda++;
        }
   }
   return soma_moda/qtd_moda;
}
int mediana(int linha, int coluna, int matriz[linha][coluna]){
    int total = linha *coluna;
    int vetor[total];
    int k = 0;

    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){ 
            vetor[k++] = matriz[i][j];
        }
    }
    for(int i=0; i<total -1;i++){
        for(int j=0; j<total - i -1;j++){
            if(vetor[j]>vetor[j+1]){
                int aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }
    if(total % 2 == 0) return (vetor[total/2]+vetor[total/2 -1 ])/2;
    else return vetor[total/2];
}
