
#include <stdio.h>

int main() {
    int cod;
    printf("Cod_Cli: "); scanf("%d", &cod);
    FILE *rec = fopen("recebimentos.csv","r");
    char linha[256];
    fgets(linha,sizeof linha,rec);
    while(fgets(linha,sizeof linha,rec)){
        int c; 
        sscanf(linha,"%*d,%*f,%*[^,],%*[^,],%d",&c);
        if(c==cod) printf("%s",linha);
    }
    fclose(rec);
    return 0;
}
