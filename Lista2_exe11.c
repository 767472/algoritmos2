
#include <stdio.h>

int main() {
    float a,b;
    printf("Valor minimo: "); scanf("%f",&a);
    printf("Valor maximo: "); scanf("%f",&b);
    FILE *rec=fopen("recebimentos.csv","r");
    char l[256]; float v;
    fgets(l,sizeof l,rec);
    while(fgets(l,sizeof l,rec)){
        sscanf(l,"%*d,%f",&v);
        if(v>=a && v<=b) printf("%s",l);
    }
    fclose(rec);
    return 0;
}
