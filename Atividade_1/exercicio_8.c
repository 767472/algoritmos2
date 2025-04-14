#include <stdio.h>
#include <string.h>

void nadador(int idade, char *categoria) 
{
  if (idade >= 5 && idade <= 7)  strcpy(categoria, "Infantil A");
  else if (idade >= 8 && idade <= 10) strcpy(categoria, "Infantil B"); 
  else if (idade >= 11 && idade <= 13) strcpy(categoria, "Juvenil A");
  else if (idade >= 14 && idade <= 17) strcpy(categoria, "Juvenil B");
  else if (idade >= 18) strcpy(categoria, "Adulto");
  else strcpy(categoria, "Sem categoria");
}

int main() {
    int idade;
    char categoria[20];
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    nadador(idade, categoria);
    printf("Categoria: %s\n", categoria);
    return 0;
}
