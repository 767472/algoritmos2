#include <stdio.h>

typedef struct {
    int h, m, s;
} Hora;

int main() {
    Hora t, maior = {0,0,0};
    for(int i = 0; i < 5; i++){
        scanf("%d %d %d", &t.h, &t.m, &t.s);
        if(t.h > maior.h ||
          (t.h == maior.h && (t.m > maior.m ||
          (t.m == maior.m && t.s > maior.s)))){
            maior = t;
        }
    }
    printf("%02d:%02d:%02d\n",
           maior.h, maior.m, maior.s);
    return 0;
}
