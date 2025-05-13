#include <stdio.h>
#include <stdlib.h>

void salvarmatriz(int linha, int coluna, int matriz[linha][coluna]){
    FILE *arquivo= fopen("matriz.csv","w");
    if(arquivo==NULL){
        printf("Não foi possivel criar o arquivo\n");
        return;
    }    
    for(int i=0;i<linha;i++){          // Percorre pela linha (i)
        for(int j=0;j<coluna;j++){     // Percorre pela coluna (j)
            fprintf(arquivo," %d",matriz[i][j]);
            if(j<coluna - 1) fprintf(arquivo,",");
        }
        fprintf(arquivo,"\n");
    }
    fprintf(arquivo, "\n");
    fclose(arquivo);
    printf("Arquivo criado com sucesso\n");
}
int media(int linha, int coluna, int matriz[linha][coluna]){
    int soma=0,cont=0;
    for(int i=0;i<linha;i++){          // Percorre pela linha (i)
        for(int j=0;j<coluna;j++){     // Percorre pela coluna (j)
            soma+=matriz[i][j];
            cont++;
        }
    }
    return soma/cont;
}
int moda(int linha, int coluna, int matriz[linha][coluna]){
    int modas[linha*coluna],maior_cont=0;
    int indice_moda=0;
    int cont=0;
    int soma=0;
    for(int i=0;i<linha;i++){          
        for(int j=0;j<coluna;j++){ 
            for(int k=0;k<linha;k++){          
                for(int l=0;l<coluna;l++){
                    if(matriz[i][j]==matriz[k][l]) cont++;
                }
            }
            if(cont>maior_cont){
                maior_cont = cont;
                modas[0] = matriz[i][j];
                indice_moda=0;
            }
            else if(cont==maior_cont){
                int k;
                for(k=0;k<=indice_moda && matriz[i][j]!=modas[k];k++);
                if(k>indice_moda){
                    indice_moda++;
                    modas[indice_moda] = matriz[i][j];
                }
            }
            cont = 0;
        }
    }
    for(int i=0;i<=indice_moda;i++){  
    soma += modas[i];
    }
    return soma/(indice_moda+1);
}
int mediana(int linha, int coluna, int matriz[linha][coluna]) {
    int total_elementos = linha * coluna;
    int vetor[total_elementos]; // Array unidimensional para armazenar os elementos da matriz
    int k = 0;
    // Copia os elementos da matriz para o array unidimensional
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            vetor[k++] = matriz[i][j];
        }
    }
    // Ordena o array unidimensional (usando Bubble Sort, por exemplo)
    for (int i = 0; i < total_elementos - 1; i++) {
        for (int j = 0; j < total_elementos - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    // Calcula a mediana
    if (total_elementos % 2 == 0) {
        // Se o número de elementos for par, retorna a média dos dois elementos centrais
        return (vetor[total_elementos / 2] + vetor[(total_elementos / 2) - 1]) / 2;
    } else {
        // Se o número de elementos for ímpar, retorna o elemento central
        return vetor[total_elementos / 2];
    }
}