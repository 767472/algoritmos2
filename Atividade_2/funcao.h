#include <stdio.h>
#include <math.h>

void printar1()// Exercicio 1 
{
  printf ("Oi");
} 
void printar2(char texto[])// Exercicio 2
{
  printf ("%s",texto);
}  
char printarc(char texto[])// Exercicio 3
{
  printf ("%s",texto);
  return (printf("\nOK"));
}  
void baskara(float a,float b,float c)// Exercicio 4
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
void tempo(double s) // Exercicio 5
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
int idade(int ano,int mes, int dia) // Exercicio 6
{
  return (ano*365)+(mes*30)+(dia);
} 
int perfeito(int num)// Exercicio 7
{
  int resul=0;
  for(int i=1;i<num;i++)
  {
   if(num%i==0) resul+=i;
  }
  if(resul==num) return 1;
  else return 0;
}
const char* nadador(int idade) // Exercicio 8 
{
  if (idade >= 5 && idade <= 7) return "Infantil A";
  else if (idade >= 8 && idade <= 10) return "Infantil B";
  else if (idade >= 11 && idade <= 13) return "Juvenil A";
  else if (idade >= 14 && idade <= 17) return "Juvenil B";
  else if (idade >= 18) return "Adulto";
  else return "Sem categoria";
}
int sinal(int num)// Exercicio 9
{
  if(num<0) return 0;
  else return 1;
}
int poui(int num)// Exercicio 10
{
  if(num%2==0) return 1;
  else return 0;
}
char nota(float nota)//Exercicio 11
{
  if (nota>=0&&nota<5) return 'D';
  else if (nota>=5&&nota<7) return 'C';
  else if (nota>=7&&nota<9) return 'B';
  else if (nota>=9&&nota<=10) return 'A';
  else return 'N';
}
void ordem(int a, int b, int c)//Exercicio 12
{
  int temp;
  if (a > b) 
  { 
    temp = a; 
    a = b;
    b = temp; 
  }
  if (a > c) 
  { 
    temp = a;
     a = c; 
     c = temp; 
  }
  if (b > c) 
  { 
    temp = b; 
    b = c; 
    c = temp; 
  }
  printf("A ordem creceste dos numeros são %d %d %d",a,b,c);
}
const char* triangulo(int x, int y, int z)//Exercicio 13
{
 if(x<y+z&&y<x+z&&z<y+x)
 {
  if(x!=y&&x!=z&&y!=z) 
    return "Triangulo Escaleno";
  else if(x==y&&x==z) 
    return "Triangulo Equilatero";  
  else if((x==y&&x!=z)||(z==y&&z!=x))
    return "Triângulo Isosceles";  
 }
 else return "Não é um triangulo";
}
int media()//Exercicio 14
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
int potencia(int x, int z)//Exercicio 15
{
  int resul=1;
  for(int i=0;z>i;i++) resul = x*resul;
  return resul;
}
