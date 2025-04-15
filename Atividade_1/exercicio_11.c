#include <stdio.h>

char nota(float nota)
{
  if (nota>=0&&nota<5) return 'D';
  else if (nota>=5&&nota<7) return 'C';
  else if (nota>=7&&nota<9) return 'B';
  else if (nota>=9&&nota<=10) return 'A';
  else return 'N';
}

int main()
{
  float valor;
  scanf("%f",&valor);
  printf("Conceito %c\n",nota(valor));
  return 0;
}
