#include <stdint.h>
#include <stdio.h>

int main()
{

  int codigodoproduto;
    
   
printf("|1| Camiseta\n");
printf("|2| Calca\n");
printf("|3| Sapato\n");


printf("Digite o Codigo do produto:\n");
scanf("%d",&codigodoproduto);

system("cls || clear");

switch (codigodoproduto)
{
case 1:
    printf("Produto selecionado: Camiseta\n");
    printf("35$");
    break;
case 2:
    printf("Produto selecionado: Calca\n");
    printf("60$");
    break;
case 3:
    printf("Produto selecionado: Sapato\n");
    printf("90$");
    break;
default:
printf ("codigo digitado invalido:");
break;
}

   
    return 0;
}