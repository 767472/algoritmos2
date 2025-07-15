#include <stdio.h>

typedef struct {
    double x, y;
} Ponto;

typedef struct {
    Ponto supEsq;
    Ponto infDir;
} Retangulo;

int main() {
    Retangulo r;
    Ponto p;
    scanf("%lf %lf %lf %lf",
          &r.supEsq.x, &r.supEsq.y,
          &r.infDir.x, &r.infDir.y);
    scanf("%lf %lf", &p.x, &p.y);
    int dentro = p.x >= r.supEsq.x &&
                 p.x <= r.infDir.x &&
                 p.y <= r.supEsq.y &&
                 p.y >= r.infDir.y;
    printf(dentro ? "Dentro\n" : "Fora\n");
    return 0;
}
