#include <stdio.h>

void tempo(double s)
{
 double h;
 double m;
 double seg;
 h=s/3600;
 m=(h-(int)h)*60;
 seg=(m-(int)m)*60;

 if((int)h==1) printf(" %d hora ",(int)h);  
 else if((int)h>=2) printf(" %d horas ",(int)h);
 if((int)m>0)printf("%d minutos ",(int)m);
 if(seg>0)printf("e %d segundos\n",(int)seg); 
}
int main()
{
tempo(4000);
}
