
#include <stdio.h>

int main() {
    float lim;
    printf("Valor maximo: "); scanf("%f",&lim);
    FILE *rec=fopen("recebimentos.csv","r");
    char linha[256];
    float v;
    fgets(linha,sizeof linha,rec);
    while(fgets(linha,sizeof linha,rec)){
        sscanf(linha,"%*d,%f",&v);
        if(v<lim) printf("%s",linha);
    }
    fclose(rec);
    return 0;
}
