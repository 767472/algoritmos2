#include <stdio.h>

int media()
{
  int soma=0;
  int cont=0;
  int num=1;
 while(num!=0)
 {
  scanf("%d",&num);
  soma+=num;
  cont++;
 }
 return soma/(cont-1) ;
}

int main()
{
  int resultado = media();
  printf("%d",resultado);
  return 0;
}