
#include <stdio.h>
#include <string.h>

int main() {
    FILE *o=fopen("produtos.csv","r");
    FILE *t=fopen("temp.csv","w");
    char l[256];
    fgets(l,sizeof l,o);
    fprintf(t,"%s",l);
    int c; char d[50]; float p;
    while(fgets(l,sizeof l,o)){
        sscanf(l,"%d,%49[^,],%f",&c,d,&p);
        if(p>100) p += 10;
        fprintf(t,"%d,%s,%.2f\n",c,d,p);
    }
    fclose(o); fclose(t);
    remove("produtos.csv");
    rename("temp.csv","produtos.csv");
    return 0;
}
