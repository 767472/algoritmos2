#define _XOPEN_SOURCE 700
#include <stdio.h>
#include <string.h>
#include <time.h>

int difDias(const char *venc, const char *hoje){
    struct tm tv={0}, th={0};
    strptime(venc,"%d/%m/%Y",&tv);
    strptime(hoje,"%d/%m/%Y",&th);
    time_t t1=mktime(&tv), t2=mktime(&th);
    return (int)difftime(t2,t1)/86400;
}

int main() {
    char inicio[11], fim[11], hoje[11];
    printf("Data hoje (DD/MM/AAAA): "); scanf(" %[^\n]", hoje);
    printf("De (DD/MM/AAAA): ");    scanf(" %[^\n]", inicio);
    printf("Ate (DD/MM/AAAA): ");   scanf(" %[^\n]", fim);

    FILE *rec = fopen("recebimentos.csv","r");
    FILE *cli = fopen("clientes.csv","r");
    char lrec[256], lcli[256];
    fgets(lrec,sizeof lrec,rec);
    fgets(lcli,sizeof lcli,cli);

    while(fgets(lrec,sizeof lrec,rec)){
        int num, cod;
        float val;
        char emi[11], ven[11];
        sscanf(lrec,"%d,%f,%10[^,],%10[^,],%d",
               &num,&val,emi,ven,&cod);
        if (strcmp(ven, inicio)>=0 && strcmp(ven,fim)<=0) {
            rewind(cli); fgets(lcli,sizeof lcli,cli);
            while(fgets(lcli,sizeof lcli,cli)){
                int ctmp; char nome[50];
                sscanf(lcli,"%d,%49[^,],",&ctmp,nome);
                if(ctmp==cod){
                    int atraso = difDias(ven, hoje);
                    if(atraso<0) atraso=0;
                    printf("%d | %s | %.2f | %s | dias atraso: %d\n",
                           num, nome, val, ven, atraso);
                    break;
                }
            }
        }
    }
    fclose(rec); fclose(cli);
    return 0;
}
