#include <stdio.h>
#include <math.h>

typedef struct {
    double x, y;
} Ponto;

int main() {
    Ponto p;
    scanf("%lf %lf", &p.x, &p.y);
    printf("Distancia: %.2f\n", sqrt(p.x*p.x + p.y*p.y));
    return 0;
}
