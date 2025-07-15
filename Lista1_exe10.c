#include <stdio.h>

int poum(int num)
{
  if(num%2==0) return 1;
  else return 0;
}

int main()
{
  int numero;
  scanf("%d",&numero);
  int valor = poum(numero);
  printf("%d",valor);
}