#include <stdint.h>
#include <stdio.h>

int main()
{

   int idade;

printf("Digite sua idade:");
scanf("%d", &idade);

system("cls || clear");


if (idade >= 18)
{
   printf("Acesso permitido! :) ");
}
else
{
    printf("Acesso negado :( ");
}





    return 0;
}