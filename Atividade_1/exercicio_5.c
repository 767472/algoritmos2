#include <stdio.h>

void tempo(float s)
{
 float h;
 float m;
 float seg;
 int temp;
 h=s/3600;
 if((int)h==1) printf(" %d hora",(int)h);  
 else if((int)h>=2) printf(" %d horas",(int)h);
 temp=h;
 m=(h-temp)*60;
 if((int)m>0)printf(" %d minutos ",(int)m);
 temp=m;
 seg=(m-temp)*60; 
 if(seg>0)printf("e %d segundos\n",(int)seg); 
}
int main()
{
tempo(9999999);
}
