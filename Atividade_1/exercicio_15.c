#include <stdio.h>

int potencia(int x, int z)
{
  int resul=1;
  for(int i=0;z>i;i++) resul = x*resul;
  return resul;
}

int main()
{
 int a,b;
 scanf("%d %d",&a,&b);
 int resul = potencia(a,b);
 printf("%d",resul);
 return 0;
}