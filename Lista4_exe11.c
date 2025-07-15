#include <stdio.h>
#include <time.h>

typedef struct {
    int dia, mes, ano;
} Data;

int main() {
    Data d1, d2;
    scanf("%d/%d/%d %d/%d/%d",
          &d1.dia,&d1.mes,&d1.ano,
          &d2.dia,&d2.mes,&d2.ano);
    struct tm t1 = {0}, t2 = {0};
    t1.tm_mday = d1.dia; t1.tm_mon = d1.mes-1; t1.tm_year = d1.ano-1900;
    t2.tm_mday = d2.dia; t2.tm_mon = d2.mes-1; t2.tm_year = d2.ano-1900;
    time_t x1 = mktime(&t1), x2 = mktime(&t2);
    int dif = (int)(difftime(x2, x1)/(24*3600));
    if(dif < 0) dif = -dif;
    printf("Dias: %d\n", dif);
    return 0;
}
