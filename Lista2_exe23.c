
#include <stdio.h>

int main() {
    char inic;
    float a,b;
    printf("Letra: "); scanf(" %c",&inic);
    printf("Preco min: "); scanf("%f",&a);
    printf("Preco max: "); scanf("%f",&b);
    FILE*f=fopen("produtos.csv","r");
    char l[256], d[50];
    float p;
    fgets(l,sizeof l,f);
    while(fgets(l,sizeof l,f)){
        sscanf(l,"%*d,%49[^,],%f",d,&p);
        if(d[0]==inic && p>=a && p<=b) printf("%s",l);
    }
    fclose(f);
    return 0;
}
