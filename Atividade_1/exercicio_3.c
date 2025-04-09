#include <stdio.h>
#include <math.h>
void baskara(float a,float b,float c)
{
  float delta = sqrt((b*b)-(4*a*c));
  if(delta>0)
  {
    float baskarax1 = ((-b)+delta)/(2*a); 
    float baskarax2 = ((-b)-delta)/(2*a);
    printf("x1 = %f\n",baskarax1);
    printf("x2 = %f\n",baskarax2);
    return;
  }
  printf("o Delta é negativo");
}

int main()
{
  float a, b, c;
  scanf("%f %f %f",&a,&b,&c);
  baskara(a,b,c);
}