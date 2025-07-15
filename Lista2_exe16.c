
#include <stdio.h>
#include <string.h>

int main() {
    int cod, achou=0;
    char desc[50];
    float preco;
    printf("Codigo: "); scanf("%d",&cod);
    printf("Descricao: "); scanf(" %[^\n]",desc);
    printf("Preco: "); scanf("%f",&preco);

    FILE*f=fopen("produtos.csv","r+");
    char l[256];
    fgets(l,sizeof l,f);
    while(fgets(l,sizeof l,f)){
        int c; sscanf(l,"%d,",&c);
        if(c==cod){ achou=1; break; }
    }
    if(!achou) fprintf(f,"%d,%s,%.2f\n",cod,desc,preco);
    else printf("Codigo ja existe\n");
    fclose(f);
    return 0;
}
