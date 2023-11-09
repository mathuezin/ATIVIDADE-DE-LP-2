#include <stdint.h>
#include <stdio.h>

int main()
{
    int idioma;
    
   
printf("|1| Inglês\n");
printf("|2| Espanhol\n");
printf("|3| Francês\n");


printf("Digite o idioma:\n");
scanf("%d",&idioma);

system("cls || clear");

switch (idioma)
{
case 1:
    printf("welcome!\n");
    break;
case 2:
    printf("Bienvenido!\n");
    break;
case 3:
    printf("accueillir\n");
    break;
default:
printf ("codigo digitado invalido:");
break;
}


return 0;
}