
#include <stdio.h>
#include <string.h>

int main() {
    float perc, a, b;
    printf("Percentual: "); scanf("%f",&perc);
    printf("Preco min: "); scanf("%f",&a);
    printf("Preco max: "); scanf("%f",&b);

    FILE *o=fopen("produtos.csv","r");
    FILE *t=fopen("temp.csv","w");
    char l[256];
    fgets(l,sizeof l,o);
    fprintf(t,"%s",l);
    int c; char d[50]; float p;
    while(fgets(l,sizeof l,o)){
        sscanf(l,"%d,%49[^,],%f",&c,d,&p);
        if(p>=a && p<=b) p *= (1 - perc/100.0f);
        fprintf(t,"%d,%s,%.2f\n",c,d,p);
    }
    fclose(o); fclose(t);
    remove("produtos.csv");
    rename("temp.csv","produtos.csv");
    return 0;
}
