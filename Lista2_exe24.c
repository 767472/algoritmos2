
#include <stdio.h>

int main() {
    FILE *o=fopen("produtos.csv","r");
    FILE *t=fopen("temp.csv","w");
    char l[256];
    float p; int c; char d[50];
    fgets(l,sizeof l,o);
    fprintf(t,"%s",l);
    while(fgets(l,sizeof l,o)){
        sscanf(l,"%d,%49[^,],%f",&c,d,&p);
        if(p<=200) fprintf(t,"%s",l);
    }
    fclose(o); fclose(t);
    remove("produtos.csv");
    rename("temp.csv","produtos.csv");
    return 0;
}
