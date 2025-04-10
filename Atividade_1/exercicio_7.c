#include <stdio.h>
int perfeito(int num)
{
  int resul=0;
  for(int i=1;i<num;i++)
  {
   if(num%i==0) resul+=i;
  }
  if(resul==num) return 1;
  else return 0;
}

int main()
{
  printf("%d",perfeito(5));
}