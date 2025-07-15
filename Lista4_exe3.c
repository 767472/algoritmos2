#include <stdio.h>
#include <math.h>

typedef struct {
    double x, y;
} Ponto;

int main() {
    Ponto a, b;
    scanf("%lf %lf %lf %lf", &a.x, &a.y, &b.x, &b.y);
    double dx = b.x - a.x, dy = b.y - a.y;
    printf("Distancia: %.2f\n", sqrt(dx*dx + dy*dy));
    return 0;
}
