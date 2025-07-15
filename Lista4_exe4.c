#include <stdio.h>
#include <math.h>

typedef struct {
    double x, y;
} Ponto;

typedef struct {
    Ponto supEsq;
    Ponto infDir;
} Retangulo;

int main() {
    Retangulo r;
    scanf("%lf %lf %lf %lf",
          &r.supEsq.x, &r.supEsq.y,
          &r.infDir.x, &r.infDir.y);
    double largura  = r.infDir.x - r.supEsq.x;
    double altura   = r.supEsq.y - r.infDir.y;
    double area     = largura * altura;
    double diag     = sqrt(largura*largura + altura*altura);
    double peri     = 2*(largura + altura);
    printf("Area: %.2f\nDiagonal: %.2f\nPerimetro: %.2f\n",
           area, diag, peri);
    return 0;
}
