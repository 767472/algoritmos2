
#include <stdio.h>
#include <string.h>

int main() {
    int cod, x;
    char l[256];
    printf("Codigo: "); scanf("%d",&cod);
    FILE *o=fopen("produtos.csv","r");
    FILE *t=fopen("temp.csv","w");
    fgets(l,sizeof l,o);
    fprintf(t,"%s",l);
    while(fgets(l,sizeof l,o)){
        sscanf(l,"%d,",&x);
        if(x!=cod) fprintf(t,"%s",l);
    }
    fclose(o); fclose(t);
    remove("produtos.csv");
    rename("temp.csv","produtos.csv");
    return 0;
}
