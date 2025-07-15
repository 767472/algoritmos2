
#include <stdio.h>
#include <string.h>

int main() {
    FILE *orig=fopen("produtos.csv","r");
    FILE *temp=fopen("temp.csv","w");
    char l[256];
    fgets(l,sizeof l,orig);
    fprintf(temp,"%s",l);
    int c; char d[50];
    float p;
    while(fgets(l,sizeof l,orig)){
        sscanf(l,"%d,%49[^,],%f",&c,d,&p);
        p *= 1.15f;
        fprintf(temp,"%d,%s,%.2f\n",c,d,p);
    }
    fclose(orig); fclose(temp);
    remove("produtos.csv");
    rename("temp.csv","produtos.csv");
    return 0;
}
