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
int mediana(int linha, int coluna, int matriz[linha][coluna]){
    int esta_ordenado = 0, aux;
    while(!esta_ordenado){
        esta_ordenado = 1;
        for(int i = 0; i < linha; i++){
            for(int j = 0; j < coluna; j++)
            {
                if(j < coluna-1){
                    if(matriz[i][j] > matriz[i][j+1]){
                        aux = matriz[i][j];
                        matriz[i][j] = matriz[i][j+1];
                        matriz[i][j+1] = aux;
                        esta_ordenado = 0;
                    }
                }
                else if(i < linha-1){
                    if(matriz[i][j] > matriz[i+1][j]){ 
                        aux = matriz[i][j];
                        matriz[i][j] = matriz[i+1][j];
                        matriz[i+1][j] = aux;
                        esta_ordenado = 0;
                    }
                }
            }
        }
    }
    int total_elementos = linha*coluna;
    int meio = total_elementos/2;
    
    int linha_meio = meio / coluna;
    int coluna_meio = meio % coluna;

    if(total_elementos % 2 == 0){
        int linha_meio2 = (meio-1) / coluna;
        int coluna_meio2 = (meio-1) % coluna;
        return (matriz[linha_meio][coluna_meio] + matriz[linha_meio2][coluna_meio2]) / 2;
    }
    else{
        return matriz[linha_meio][coluna_meio];
    }
}